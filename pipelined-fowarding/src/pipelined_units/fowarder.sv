module fowarder
	#(parameter DATA_WIDTH = 32)
(   
    input  [DATA_WIDTH -1:0] ex_inst_i,
    input  [DATA_WIDTH -1:0] mem_inst_i,
    input  [DATA_WIDTH -1:0] wb_inst_i,

    output [1:0]             foward_a_o,
    output [1:0]             foward_b_o
);
    wire [4:0] wb_inst_op  = wb_inst_i[6:2];
    wire [4:0] wb_inst_rd  = wb_inst_i[11:7];

    wire [4:0] mem_inst_op  = mem_inst_i[6:2];
    wire [4:0] mem_inst_rd  = mem_inst_i[11:7];

    wire [4:0] ex_inst_rs1 = ex_inst_i[19:15];
    wire [4:0] ex_inst_rs2 = ex_inst_i[24:20];

    wire mem_wren   =  !(mem_inst_op == 5'b11000 || mem_inst_op == 5'b01000);
    wire wb_wren    =  !(wb_inst_op == 5'b11000  || wb_inst_op == 5'b01000);

    wire mem_ex_fd_rs1 = (mem_wren && mem_inst_rd != 5'd0 && (mem_inst_rd == ex_inst_rs1)) && (mem_inst_op != 5'b00000);
    wire wb_ex_fd_rs1 =  (wb_wren  && wb_inst_rd != 5'd0  && (wb_inst_rd == ex_inst_rs1));

    wire mem_ex_fd_rs2 = (mem_wren && mem_inst_rd != 5'd0 && (mem_inst_rd == ex_inst_rs2)) && (mem_inst_op != 5'b00000);
    wire wb_ex_fd_rs2 =  (wb_wren  && wb_inst_rd != 5'd0  && (wb_inst_rd == ex_inst_rs2));

    assign foward_a_o = {mem_ex_fd_rs1, wb_ex_fd_rs1};

    assign foward_b_o = {mem_ex_fd_rs2, wb_ex_fd_rs2};


    wire _unused_ok = &{ 
        wb_inst_i[31:12], 
        wb_inst_i[1:0], 
        mem_inst_i[31:12], 
        mem_inst_i[1:0],
        ex_inst_i[31:25],
        ex_inst_i[14:0]
    };

endmodule
