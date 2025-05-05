module mem_wb 
	#(parameter DATA_WIDTH = 32)
(
    // inputs  
    input logic            clk_i,
    input [DATA_WIDTH-1:0] wb_data_i,
    input [DATA_WIDTH-1:0] inst_i,

    // outputs
    output [DATA_WIDTH-1:0] wb_data_o,
    output [DATA_WIDTH-1:0] inst_o,

    output                  rd_wren_o
);
    reg [DATA_WIDTH-1:0] inst;
    reg [DATA_WIDTH-1:0] wb_data;

    wire [4:0] opcode = inst[6:2];

    always_ff @(posedge clk_i) begin
        inst   <= inst_i;
        wb_data <= wb_data_i;
	end

    // write to reg: 1, read reg: 0
	assign rd_wren_o = !(opcode == 5'b11000 || opcode == 5'b01000);
	
    assign inst_o = inst;
    assign wb_data_o = wb_data;
    wire _unused_ok = &{ inst[31:7], inst[1:0]};

endmodule : mem_wb



