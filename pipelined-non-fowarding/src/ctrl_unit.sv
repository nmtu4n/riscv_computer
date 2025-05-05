module ctrl_unit (
  	// inputs
   input   [31:0]     	instr_i,
   input	 			bl_less_i,
   input	 			bl_equal_i,

  	// outputs
    output       bl_sel_o,
	output		 bl_unsigned_o,
	output		 rd_wren_o,
	output [1:0] op_a_sel_o,
	output		 op_b_sel_o,
	output [3:0] alu_op_o,
	output		 mem_wren_o,
	output [1:0] wb_sel_o
);
	wire [4:0] opcode = instr_i[6:2];
	wire [2:0] funct3 = instr_i[14:12];
	wire	  inst_30  = instr_i[30];
	
	// alu: 1, pc + 4: 0
	assign bl_sel_o = (
		opcode == 5'b11000 && 
			( 
			  (funct3 == 3'b000 && bl_equal_i) 	||
			  (funct3 == 3'b001 && !bl_equal_i) ||
			  (funct3 == 3'b100 && bl_less_i)   ||
			  (funct3 == 3'b101 && (!bl_less_i || bl_equal_i))  ||
			  (funct3 == 3'b110 && bl_less_i)   ||
			  (funct3 == 3'b111 && (!bl_less_i  || bl_equal_i))

			)
	) || opcode == 5'b11011 || opcode == 5'b11001;

	// unsign: 1, signed: 0
	assign bl_unsigned_o = (opcode == 5'b11000 && (funct3 == 3'b110 ||funct3 == 3'b111 ) );	

	// write to reg: 1, read reg: 0
	assign rd_wren_o = !(opcode == 5'b11000 || opcode == 5'b01000);
	
	// pc sel: 1, reg sel: 0
	assign op_a_sel_o = (opcode == 5'b11000) || 
		              	(opcode == 5'b00101) || 
			      		(opcode == 5'b11011) ? 2'b01 :
						(opcode == 5'b01101) ? 2'b10 : 2'b00;
								 
	// imm gen sel: 1, reg sel: 0
	assign op_b_sel_o = !(opcode == 5'b01100);
	
	// add: 0000, sub: 0001, sll: 0010,  slt: 0011, sltu: 0100, xor: 0101 
	// srl: 0110, sra: 0111, or: 1000,  and: 1001 
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
	

	wire _unused_ok = &{1'b0,
                    instr_i[31],
                    instr_i[29:15],
					instr_i[11:7],
					instr_i[1:0], // To be fixed
                	1'b0};

endmodule : ctrl_unit
