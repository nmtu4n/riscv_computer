module if_id 
	#(parameter DATA_WIDTH = 32)
(
  // inputs  
  input logic        	   clk_i,
  input logic        	   rst_ni,

  input logic            en_i,

  input [DATA_WIDTH-1:0] pc_i,
  input [DATA_WIDTH-1:0] inst_i,

  // outputs
  output [DATA_WIDTH-1:0] pc_o,
  output [DATA_WIDTH-1:0] inst_o
);

  reg [DATA_WIDTH-1:0] pc;
  reg [DATA_WIDTH-1:0] inst;

	always_ff @(posedge clk_i) begin
    if (!rst_ni) begin
      pc   <= 32'd0;
      inst <= 32'd0;
    end
    else if (en_i) begin 
      pc   <= pc_i;
      inst <= inst_i;
    end
	end

  assign pc_o = pc;
  assign inst_o = inst;

endmodule : if_id

