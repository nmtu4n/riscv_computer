module id_ex 
	#(parameter DATA_WIDTH = 32)
(
    // inputs  
    input logic            clk_i,
    input logic            rst_ni,
    input logic            en_i,

    input [DATA_WIDTH-1:0] pc_i,
    input [DATA_WIDTH-1:0] inst_i,
    input [DATA_WIDTH-1:0] rs1_i,
    input [DATA_WIDTH-1:0] rs2_i,
    input [DATA_WIDTH-1:0] imm_i,

    input                   br_less_i,
    input                   br_equal_i,
 
    // outputs
    output [DATA_WIDTH-1:0] pc_o,
    output [DATA_WIDTH-1:0] inst_o,
    output [DATA_WIDTH-1:0] rs1_o,
    output [DATA_WIDTH-1:0] rs2_o,
    output [DATA_WIDTH-1:0] imm_o,

    output                  br_sel_o,
    output                  br_unsigned_o,
    output [3:0]            alu_op_o,
    output [1:0]            op_a_sel_o,
    output                  op_b_sel_o
);
    reg [DATA_WIDTH-1:0] pc;
    reg [DATA_WIDTH-1:0] inst;
    reg [DATA_WIDTH-1:0] rs1;
    reg [DATA_WIDTH-1:0] rs2;
    reg [DATA_WIDTH-1:0] imm;

    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            pc   <= 32'd0;
            inst <= 32'd0;
            rs1  <= 32'd0;
            rs2  <= 32'd0;
            imm  <= 32'd0;
        end
        else if (en_i) begin
            pc   <= pc_i;
            inst <= inst_i;
            rs1  <= rs1_i;
            rs2  <= rs2_i;
            imm  <= imm_i;
        end
	end

    wire [4:0] opcode   = inst[6:2];
	wire [2:0] funct3   = inst[14:12];
	wire	   inst_30  = inst[30];
	
    // unsign: 1, signed: 0
    assign br_unsigned_o =  (opcode == 5'b11000 && (funct3 == 3'b110 ||funct3 == 3'b111 ) );
	
	// add: 0000  , sub: 0001 , sll: 0010 ,  slt: 0011 , sltu: 0100 , xor: 0101 
	// srl: 0110  , sra: 0111 , or : 1000 ,  and: 1001 
	assign alu_op_o = 
			(opcode == 5'b01100 && funct3 == 3'h0 && !inst_30) || 
				(opcode == 5'b00100 && funct3 == 3'h0)  						? 4'h0 :
			(opcode == 5'b01100 && funct3 == 3'h0 &&  inst_30) 					? 4'h1 :
			(opcode == 5'b01100 && funct3 == 3'h1) ||
				(opcode == 5'b00100 && funct3 == 3'h1)							? 4'h2 :
			(opcode == 5'b01100 && funct3 == 3'h2) || 
				(opcode == 5'b00100 && (funct3 == 3'h2 || funct3 == 3'h3))	    ? 4'h3 :
			(opcode == 5'b01100 && funct3 == 3'h3)	     						? 4'h4 :
			(opcode == 5'b01100 && funct3 == 3'h4) || 
				(opcode == 5'b00100 && (funct3 == 3'h4))	     				? 4'h5 :
			((opcode == 5'b01100 || opcode == 5'b00100) 
				&& funct3 == 3'h5 && !inst_30)										? 4'h6 :
			((opcode == 5'b01100 || opcode == 5'b00100 ) 
				&& funct3 == 3'h5 &&  inst_30) 									? 4'h7 :
			(opcode == 5'b01100 && funct3 == 3'h6) ||
				(opcode == 5'b00100 && (funct3 == 3'h6))	     				? 4'h8 :
			(opcode == 5'b01100 && funct3 == 3'h7)	||
			   	(opcode == 5'b00100 && (funct3 == 3'h7))						? 4'h9 : 4'h0 ;

    // pc sel: 1, reg sel: 0
	assign op_a_sel_o  = (opcode == 5'b11000) || 
		              	 (opcode == 5'b00101) || 
			      		 (opcode == 5'b11011) ? 2'b01 :
						 (opcode == 5'b01101) ? 2'b10 : 2'b00;
								 
	// imm gen sel: 1, reg sel: 0
	assign op_b_sel_o = !(opcode == 5'b01100);

    // alu: 1, pc + 4: 0
    assign br_sel_o = (opcode == 5'b11000 && 
            ( 
                (funct3 == 3'b000 && br_equal_i) 	||
                (funct3 == 3'b001 && !br_equal_i) ||
                (funct3 == 3'b100 && br_less_i)   ||
                (funct3 == 3'b101 && (!br_less_i || br_equal_i))  ||
                (funct3 == 3'b110 && br_less_i)   ||
                (funct3 == 3'b111 && (!br_less_i  || br_equal_i))
            )
    ) || opcode == 5'b11011 || opcode == 5'b11001;

    assign pc_o = pc;
    assign inst_o = inst;
    assign rs1_o = rs1;
    assign rs2_o = rs2;
    assign imm_o = imm;

endmodule : id_ex



