module pc 
	#(parameter DATA_WIDTH = 32)
(
  // inputs
  input logic        	 clk_i,
  input logic        	 rst_ni,
  
  input [DATA_WIDTH-1:0] imm_pc_i,
  input					 sel_i,
  input [1:0]			 stall_i,

  // outputs
  output [DATA_WIDTH-1:0] pc_o
);
	reg [DATA_WIDTH-1:0] pc;

	always_ff @(posedge clk_i) begin
		if (!rst_ni) begin
			pc	 <= 32'd0;
			pc_o <= 32'd0;
		end
		else if (stall_i == 2'b01) begin
			pc_o <= pc;
		end 
		else if (sel_i)  begin 
			pc <= imm_pc_i;
			pc_o <= imm_pc_i;
		end
		else begin
			pc <= pc + 32'd4;
			pc_o <= pc + 32'd4;
		end
	end

endmodule : pc
