module register_file 
	#(parameter ADDR_DEPTH = 32,
	  parameter DATA_WIDTH = 32)
(
  // inputs
  input logic        	 clk_i,
  input logic        	 rst_ni,
  
  input [4:0]				 rs1_addr,
  input [4:0]				 rs2_addr,
  
  
  input logic				 rd_wren_i,
  input [DATA_WIDTH-1:0] rd_data_i,
  input [4:0]				 rd_addr_i,

  // outputs
  output [DATA_WIDTH-1:0] rs1_data,
  output [DATA_WIDTH-1:0] rs2_data
);
	reg [31:0] 	regfile[ADDR_DEPTH-1:0];
	integer i;
	
	initial begin
		$readmemh("../src/reg_file.txt", regfile);
	end
	
	always_ff @(posedge clk_i) begin
		if (!rst_ni) begin
			for(i=0; i<32; i=i+1) regfile[i] <= 0;
		end
		else if (rd_wren_i && rd_addr_i != 5'd0) begin
			regfile[rd_addr_i] <= rd_data_i;
		end
	end
	
	assign rs1_data = regfile[rs1_addr];
	assign rs2_data = regfile[rs2_addr];


endmodule : register_file
