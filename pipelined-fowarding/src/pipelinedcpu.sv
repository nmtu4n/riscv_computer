module pipelinedcpu
	#(parameter DATA_WIDTH = 32)
(
  // inputs
  input logic        	  clk_i,
  input logic        	  rst_ni,
  input logic [DATA_WIDTH-1: 0]	 io_sw_i,

  // outputs
  output [DATA_WIDTH-1:0] pc_debug_o,
  output [DATA_WIDTH-1:0] io_lcd_o,
  output [DATA_WIDTH-1:0] io_ledg_o,
  output [DATA_WIDTH-1:0] io_ledr_o,

  output [DATA_WIDTH-1:0] io_hex0_o,
  output [DATA_WIDTH-1:0] io_hex1_o,
  output [DATA_WIDTH-1:0] io_hex2_o,
  output [DATA_WIDTH-1:0] io_hex3_o,
  output [DATA_WIDTH-1:0] io_hex4_o,
  output [DATA_WIDTH-1:0] io_hex5_o,
  output [DATA_WIDTH-1:0] io_hex6_o,
  output [DATA_WIDTH-1:0] io_hex7_o
);
	// IF
	wire [DATA_WIDTH-1:0] 	 pc;
	wire [DATA_WIDTH-1:0] 	 instr;

	pc PC(
		.clk_i     (clk_i),
		.rst_ni    (rst_ni),
		.stall_i	(stall),

		.imm_pc_i  (alu_data),
		.sel_i	   (br_sel),
		.pc_o	   (pc)
	);

	inst_memory IMEM(
		.clk_i     (clk_i),
		.rst_ni    (rst_ni),
		
		.paddr_i    (pc[12:0]),
		.prdata_o	(instr)
	);

	wire [DATA_WIDTH-1:0] 	 if_id_pc;
	wire [DATA_WIDTH-1:0] 	 if_id_inst;

	if_id IF_ID(
		.clk_i     	(clk_i),
		.pc_i	   	(pc),
		.inst_i	   	(instr),

		.en_i		(stall != 2'b01),
		.rst_ni		(stall != 2'b10),

		.pc_o		(if_id_pc),
		.inst_o		(if_id_inst)
	);

	// ID
	wire [31:0] rs1_data;
	wire [31:0] rs2_data;
	
	register_file  REGFILE(
		.clk_i 		(clk_i),
		.rst_ni		(rst_ni),	
		
		.rd_wren_i	(rd_wren),
		.rd_data_i	(mem_wb_wb_data),
		.rd_addr_i	(mem_wb_inst[11:7]),

		.rs1_addr	(if_id_inst[19:15]),
		.rs2_addr	(if_id_inst[24:20]),
		.rs1_data	(rs1_data),
		.rs2_data	(rs2_data)
	);
	
	wire [31:0] imm;

	immgen IMMGEN(
		.instr_i	(if_id_inst),
		.imm_o		(imm)
	);

	wire [DATA_WIDTH-1:0] 	 id_ex_pc;
	wire [DATA_WIDTH-1:0] 	 id_ex_inst;
	wire [DATA_WIDTH-1:0] 	 id_ex_rs1;
	wire [DATA_WIDTH-1:0] 	 id_ex_rs2;
	wire [DATA_WIDTH-1:0] 	 id_ex_imm;

	wire br_unsigned;
	wire br_sel;

	wire [3:0] alu_op;
	wire [1:0] op_a_sel;
	wire op_b_sel;

	wire [1:0] stall;

	staller HZD(
		.br_sel_i	(br_sel),

		.ex_inst_i	(id_ex_inst),
		.mem_inst_i (ex_mem_inst),
		.wb_inst_i  (mem_wb_inst),

		.stall_o	(stall)
	);

	id_ex ID_EX(
		.clk_i     	(clk_i),
		.pc_i	   	(if_id_pc),
		.inst_i	   	(if_id_inst),
		.rs1_i     	(rs1_data),
		.rs2_i	   	(rs2_data),
		.imm_i	   	(imm),

		.en_i		(stall == 2'b00),
		.rst_ni		(stall != 2'b10),

		.br_less_i	(br_less),
		.br_equal_i (br_equal),

		.pc_o		(id_ex_pc),
		.inst_o		(id_ex_inst),
		.rs1_o		(id_ex_rs1),
		.rs2_o		(id_ex_rs2),
		.imm_o		(id_ex_imm),

		.br_sel_o	   (br_sel),
		.br_unsigned_o (br_unsigned),
		.alu_op_o	   (alu_op),
		.op_a_sel_o	   (op_a_sel),
		.op_b_sel_o	   (op_b_sel)
	);

	// EX
	wire [1:0]	foward_a;
	wire [1:0]	foward_b;
	
	fowarder FOWARD_UNIT (
		.ex_inst_i	(id_ex_inst),
		.mem_inst_i	(ex_mem_inst),
		.wb_inst_i	(mem_wb_inst),

		.foward_a_o	(foward_a),
		.foward_b_o	(foward_b)
	);

	wire [31:0] rs1_ex = 	(foward_a[1])  ? wb_data 	:
							(foward_a[0])  ? mem_wb_wb_data : id_ex_rs1;
	
	wire [31:0] rs2_ex = 	(foward_b[1])   ? wb_data 	 :
							(foward_b[0]) 	? mem_wb_wb_data : id_ex_rs2;
	

	wire br_less;
	wire br_equal;

	brcomp BRCOMP(
		.rs1_data_i 	(rs1_ex),
		.rs2_data_i		(rs2_ex),
		.br_unsigned_i	(br_unsigned),

		.br_less_o		(br_less),
		.br_equal_o		(br_equal)
	);

	wire [31:0] alu_data;

	alu ALU(
		.operand_a_i	( 
			(op_a_sel == 2'b01) ? id_ex_pc :
			(op_a_sel == 2'b00) ? rs1_ex :
			32'd0
		),
		.operand_b_i	(op_b_sel ? id_ex_imm  : rs2_ex),
		.alu_op_i		(alu_op),

		.alu_data_o		(alu_data)
	);

	wire [DATA_WIDTH-1:0] 	ex_mem_pc;
	wire [DATA_WIDTH-1:0] 	ex_mem_inst;
	wire [DATA_WIDTH-1:0] 	ex_mem_rs2;
	wire [DATA_WIDTH-1:0] 	ex_mem_alu;

	wire					mem_wren;
	wire [1:0]				wb_sel;

	ex_mem EX_MEM(
		.clk_i     	(clk_i),
		.rst_ni		(stall != 2'b01),

		.pc_i	   	(id_ex_pc),
		.inst_i	   	(id_ex_inst),
		.alu_i     	(alu_data),
		.rs2_i	   	(rs2_ex),

		.pc_o		(ex_mem_pc),
		.inst_o		(ex_mem_inst),
		.alu_o		(ex_mem_alu),
		.rs2_o		(ex_mem_rs2),

		.mem_wren_o	(mem_wren),
		.wb_sel_o	(wb_sel)
	);

	// MEM
	wire [31:0] ld_data;

	lsu_main LSU(
		.clk_i 		(clk_i),
		.rst_ni		(rst_ni),
		
		.st_en_i	(mem_wren),
		.st_data_i	(ex_mem_rs2),
		.addr_i		(ex_mem_alu),
		.sw_data_i	(io_sw_i),
		.func_i		(ex_mem_inst[14:12]),
		
		.ld_data_o	(ld_data),
		.io_lcd_o	(io_lcd_o),
		.io_ledg_o	(io_ledg_o),
		.io_ledr_o	(io_ledr_o),

		.io_hex0_o	(io_hex0_o),
		.io_hex1_o	(io_hex1_o),
		.io_hex2_o	(io_hex2_o),
		.io_hex3_o	(io_hex3_o),
		.io_hex4_o	(io_hex4_o),
		.io_hex5_o	(io_hex5_o),
		.io_hex6_o	(io_hex6_o),
		.io_hex7_o	(io_hex7_o)
	);

	wire [31:0] wb_data = (wb_sel === 2'b00) 	? ex_mem_alu 		 :
						  (wb_sel === 2'b01)	? ld_data	 		 :
						  (wb_sel === 2'b10) 	? ex_mem_pc + 32'd4  : 'z;

	wire [DATA_WIDTH-1:0] 	 mem_wb_wb_data;
	wire					 rd_wren;
	wire [DATA_WIDTH-1:0]	 mem_wb_inst;

	mem_wb MEM_WB(
		.clk_i     	(clk_i),
		.inst_i	   	(ex_mem_inst),
		.wb_data_i  (wb_data),

		.wb_data_o	(mem_wb_wb_data),
		.rd_wren_o	(rd_wren),
		.inst_o 	(mem_wb_inst)
	);

	// WB
	assign pc_debug_o = mem_wb_inst;

	wire _unused_ok = &{ stall };


endmodule : pipelinedcpu

