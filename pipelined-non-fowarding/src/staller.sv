module staller
	#(parameter DATA_WIDTH = 32)
(   
    input        clk_i,
    input        rst_ni,

    input logic            br_sel_i,

    input  [DATA_WIDTH -1:0] if_inst_i,
	input  [DATA_WIDTH -1:0] id_inst_i,
    input  [DATA_WIDTH -1:0] ex_inst_i,
    input  [DATA_WIDTH -1:0] mem_inst_i,


    output [1:0]  stall_o
);
    typedef enum logic [2:0] {
        IDLE,

        STALL_EX,
        STALL_MEM,
        STALL_WB,
        
        STALL_MEM_1,
        STALL_WB_1,

        STALL_BR
    } state_e;

    state_e state_d;
    state_e state_q;

    wire [6:0] mem_inst_op  = mem_inst_i[6:0];
    wire [4:0] mem_inst_rd  = mem_inst_i[11:7];

    wire [6:0] ex_inst_op  = ex_inst_i[6:0];
    wire [4:0] ex_inst_rd  = ex_inst_i[11:7];

    wire [6:0] id_inst_op  = id_inst_i[6:0];
    wire [4:0] id_inst_rs1 = id_inst_i[19:15];
    wire [4:0] id_inst_rs2 = id_inst_i[24:20];

    wire [6:0] if_inst_op  = if_inst_i[6:0];
    wire [4:0] if_inst_rs1 = if_inst_i[19:15];
    wire [4:0] if_inst_rs2 = if_inst_i[24:20];

    // data hazard detection
    logic stall_d_ex_id = (ex_inst_rd != 5'd0) && 
                    ((ex_inst_rd == id_inst_rs1) || (ex_inst_rd == id_inst_rs2 && id_inst_op != 7'b0010011 )) &&
                    ex_inst_op != 7'b1100011    &&
                    ex_inst_op != 7'b0100011    && 
                    id_inst_op != 7'b0110111    &&
                    id_inst_op != 7'b0010111    &&
                    id_inst_op != 7'b1110111;
    
    logic stall_d_ex_if =(ex_inst_rd != 5'd0) && 
        ((ex_inst_rd == if_inst_rs1) || (ex_inst_rd == if_inst_rs2 && if_inst_op != 7'b0010011 )) &&
        ex_inst_op != 7'b1100011    &&
        ex_inst_op != 7'b0100011    && 
        if_inst_op != 7'b0110111    &&
        if_inst_op != 7'b0010111    &&
        if_inst_op != 7'b1110111;
    
    logic stall_d = stall_d_ex_id || stall_d_ex_if;

    logic stall_d_mem_if =  (mem_inst_rd != 5'd0) && 
                ((mem_inst_rd == if_inst_rs1) || (mem_inst_rd == if_inst_rs2 && if_inst_op != 7'b0010011)) &&
                mem_inst_op != 7'b1100011 &&
                mem_inst_op != 7'b0100011 && 
                if_inst_op != 7'b0110111 &&
                if_inst_op != 7'b0010111 &&
                if_inst_op != 7'b1110111;

    // control hazard detection
    logic stall_c = br_sel_i && (ex_inst_op == 7'b1100011 || ex_inst_op == 7'b1100111 || ex_inst_op == 7'b1101111);

    always_comb begin : proc_next_state
        case (state_q)
            IDLE:   state_d =   stall_c     ?   STALL_BR    : 
                                stall_d     ?   STALL_EX    :
                                stall_d_mem_if   ?   STALL_MEM_1 : IDLE;

            STALL_EX:   state_d = STALL_MEM;
            STALL_MEM:  state_d = STALL_WB;
            STALL_WB:   state_d = IDLE;

            STALL_MEM_1: state_d = STALL_WB_1;
            STALL_WB_1:  state_d = IDLE;

            STALL_BR:   state_d = IDLE;
            default: state_d = IDLE;
        endcase
    end

	always_ff @(posedge clk_i) begin
        state_q <= state_d;
	end

    // 01: data_hazard, 10: control_hazard, 11: control hazard mem_if
    assign stall_o =  (state_d == IDLE )     ? 2'b00     :
                      (state_d == STALL_BR)  ? 2'b10     : 
                      (state_d == STALL_MEM_1 || state_d == STALL_WB_1) ? 2'b11  : 2'b01;

    wire _unused_ok = &{ mem_inst_i[31:12], ex_inst_i[31:12], id_inst_i[31:25], id_inst_i[14:0], if_inst_i[31:25], if_inst_i[14:0], rst_ni };

endmodule
