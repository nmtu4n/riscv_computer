module ex_mem 
	#(parameter DATA_WIDTH = 32)
(
    // inputs  
    input logic            clk_i,
    input logic            rst_ni,

    input [DATA_WIDTH-1:0] pc_i,
    input [DATA_WIDTH-1:0] inst_i,
    input [DATA_WIDTH-1:0] alu_i,
    input [DATA_WIDTH-1:0] rs2_i,

    // outputs
    output [DATA_WIDTH-1:0] pc_o,
    output [DATA_WIDTH-1:0] inst_o,
    output [DATA_WIDTH-1:0] alu_o,
    output [DATA_WIDTH-1:0] rs2_o,

    output                  mem_wren_o,
    output [1:0]            wb_sel_o
);

    reg [DATA_WIDTH-1:0] pc;
    reg [DATA_WIDTH-1:0] inst;
    reg [DATA_WIDTH-1:0] alu;
    reg [DATA_WIDTH-1:0] rs2;

    wire [4:0] opcode = inst[6:2];
	wire [2:0] funct3 = inst[14:12];

    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            pc   <= 32'd0;
            inst <= 32'd0;
            alu  <= 32'd0;
            rs2  <= 32'd0;
        end
        else begin
            pc   <= pc_i;
            inst <= inst_i;
            alu  <= alu_i;
            rs2  <= rs2_i;
        end
	end

	// write to mem: 1, read mem: 0
	assign mem_wren_o = (opcode == 5'b01000);

	// alu: 00, mem: 01, pc+4: 10
	assign wb_sel_o = 
			(opcode == 5'b01100) || 
			(opcode == 5'b01101) ||
			(opcode == 5'b00100 && funct3 == 3'b000) || 
			(opcode == 5'b00100) ||	
			(opcode == 5'b00101)						? 2'b00 : 
			(opcode == 5'b00000) 						? 2'b01 :
			(opcode == 5'b11011 || opcode == 5'b11001)  ? 2'b10 : 2'b11;

    assign pc_o = pc;
    assign inst_o = inst;
    assign alu_o = alu;
    assign rs2_o = rs2;

endmodule : ex_mem






