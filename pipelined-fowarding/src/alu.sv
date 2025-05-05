module alu 
	#( parameter DATA_WIDTH = 32
	)
(
  // inputs
  input   [DATA_WIDTH-1:0]     operand_a_i,
  input   [DATA_WIDTH-1:0]     operand_b_i,
  input   [3:0]     		   alu_op_i,
  
  // outputs
  output [DATA_WIDTH-1:0] alu_data_o
);

  reg [DATA_WIDTH-1:0] alu_data;
  wire signed [DATA_WIDTH-1:0] signed_a = operand_a_i;

  // add: 0  , sub: 1 , sll: 2 ,  slt: 3, sltu: 4 , xor: 5 
  // srl: 6  , sra: 7 , or : 8 ,  and: 9 
  always_comb begin : extends_by_imm_sel
    case (alu_op_i)
        4'h0:  alu_data = operand_a_i + operand_b_i;
		4'h1:  alu_data = operand_a_i + ~operand_b_i + 1'b1;
		4'h2:  alu_data = operand_a_i << operand_b_i[4:0];
		4'h3:  alu_data = (operand_a_i + ~operand_b_i + 1'b1) >> 31;
		4'h4:  alu_data = 32'(({ 1'b0, operand_a_i[31:0] } + ~{ 1'b0, operand_b_i[31:0] } + 1'b1) >> 32);
		4'h5:  alu_data = operand_a_i ^ operand_b_i;
		4'h6:  alu_data = operand_a_i >> operand_b_i[4:0];
		4'h7:  alu_data = signed_a >>> operand_b_i[4:0];
		4'h8:  alu_data = operand_a_i | operand_b_i;
		4'h9:  alu_data = operand_a_i & operand_b_i;
		default:  alu_data = operand_a_i + operand_b_i;
	 endcase
	end

	assign alu_data_o = alu_data;

	// assign alu_data_o = (alu_op_i ===  4'h0) ?  operand_a_i + operand_b_i :
	// 					(alu_op_i ===  4'h1) ?  operand_a_i + ~operand_b_i + 1'b1 	:	
	// 					(alu_op_i ===  4'h2) ?  operand_a_i << operand_b_i[4:0] 	:
	// 					(alu_op_i ===  4'h3) ?  (operand_a_i + ~operand_b_i + 1'b1) >> 31 :
	// 					(alu_op_i ===  4'h4) ?  32'(({ 1'b0, operand_a_i[31:0] } + ~{ 1'b0, operand_b_i[31:0] } + 1'b1) >> 32) :
	// 					(alu_op_i ===  4'h5) ?  operand_a_i ^ operand_b_i :
	// 					(alu_op_i ===  4'h6) ?  operand_a_i >> operand_b_i[4:0] :
	// 					(alu_op_i ===  4'h7) ?  signed_a >>> operand_b_i[4:0]   :
	// 					(alu_op_i ===  4'h8) ?  operand_a_i | operand_b_i  	 :
	// 					(alu_op_i ===  4'h9) ?  operand_a_i & operand_b_i  	 : 
	// 					operand_a_i + operand_b_i;



endmodule : alu
