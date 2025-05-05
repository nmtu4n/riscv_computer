module brcomp 
	#(parameter DATA_WIDTH = 32)
(
  // inputs
  input logic [DATA_WIDTH-1:0]  rs1_data_i,
  input logic [DATA_WIDTH-1:0]  rs2_data_i,
  input     				 	    br_unsigned_i,
  
  // outputs
  output  		 			 br_less_o,
  output 					 br_equal_o

);
  wire logic [DATA_WIDTH : 0]  ext_rs1 = br_unsigned_i ? { 1'b0, rs1_data_i[31:0] } : { rs1_data_i[31], rs1_data_i[31:0] };
  wire logic [DATA_WIDTH : 0]  ext_rs2 = br_unsigned_i ?  { 1'b0, rs2_data_i[31:0] } : { rs2_data_i[31], rs2_data_i[31:0] };
  wire logic [DATA_WIDTH : 0]  compr2 = (ext_rs1 + ~ext_rs2 + 1'b1);

	assign br_less_o  = 1'(compr2 >> 32);
	assign br_equal_o = ext_rs1 == ext_rs2;

endmodule : brcomp

