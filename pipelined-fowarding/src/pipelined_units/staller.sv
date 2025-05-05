module staller
	#(parameter DATA_WIDTH = 32)
(   

    input logic            br_sel_i,

    input  [DATA_WIDTH -1:0] ex_inst_i,
    input  [DATA_WIDTH -1:0] mem_inst_i,
    input  [DATA_WIDTH -1:0] wb_inst_i,


    output [1:0]  stall_o
);
    wire [4:0] mem_inst_op  = mem_inst_i[6:2];
    wire [4:0] mem_inst_rd  = mem_inst_i[11:7];

    wire [4:0] wb_inst_op  = wb_inst_i[6:2];


    wire [4:0] ex_inst_op  = ex_inst_i[6:2];
    wire [4:0] ex_inst_rs1 = ex_inst_i[19:15];
    wire [4:0] ex_inst_rs2 = ex_inst_i[24:20];

    wire mem_wren  =  !(mem_inst_op == 5'b11000 || mem_inst_op == 5'b01000);

    // data hazard detection
    wire logic stall_d = mem_wren && 
            mem_inst_rd != 5'd0 && 
            (mem_inst_op == 5'b00000) &&
            ((mem_inst_rd == ex_inst_rs1) || (mem_inst_rd == ex_inst_rs2));

    // control hazard detection
    wire logic stall_c = br_sel_i && (ex_inst_op == 5'b11000 || ex_inst_op == 5'b11001 || ex_inst_op == 5'b11011);

    // 01: data_hazard, 10: control_hazard
    assign stall_o =  stall_d    ? 2'b01    :
                      stall_c   ? 2'b10     :  2'b00;

    wire _unused_ok = &{ mem_inst_i[31:12], mem_inst_i[1:0], ex_inst_i[31:25], ex_inst_i[14:7], ex_inst_i[1:0], wb_inst_i[1:0], wb_inst_i[31:7]};

endmodule
