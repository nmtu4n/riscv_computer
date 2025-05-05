module immgen 
	#(parameter DATA_WIDTH = 32)
(
  // inputs
  input logic  [DATA_WIDTH-1: 0] instr_i,
  
  // outputs
  output logic [DATA_WIDTH-1:0] imm_o
);
   wire [4:0] opcode = instr_i[6:2];
	// I: 000, S: 001, B: 010, J: 011, U: 100, R: 101
   wire [2:0] imm_sel_i  = (opcode == 5'b00100 || opcode == 5'b00000 || opcode == 5'b11001) ? 3'b000 :
									(opcode == 5'b01000) ? 3'b001 :
									(opcode == 5'b11000) ? 3'b010 :
									(opcode == 5'b11011) ? 3'b011 :
									(opcode == 5'b01101 || opcode == 5'b00101) ? 3'b100:
									(opcode == 5'b01100) ? 3'b101 : 3'b101;
	

  always_comb begin : extends_by_imm_sel
    case (imm_sel_i)
      3'b000:   imm_o = {{20{instr_i[31]}}, instr_i[31:20]};
      3'b001:   imm_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11: 7]};
      3'b010:   imm_o = {{20{instr_i[31]}}, instr_i[7],     instr_i[30:25], instr_i[11:8], 1'b0};
      3'b011:	  imm_o = {{12{instr_i[31]}}, instr_i[19:12], instr_i[20],    instr_i[30:21], 1'b0};
      3'b100:	  imm_o = {instr_i[31:12], {12{1'b0}} };
      default:  imm_o = {{20{instr_i[31]}}, instr_i[31:20]};
    endcase
end
  
  wire _unused_ok = &{ instr_i[1:0]};


endmodule : immgen
