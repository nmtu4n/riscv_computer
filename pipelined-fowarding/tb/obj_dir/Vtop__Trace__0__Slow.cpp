// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+123,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+123,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("pipelined ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"instr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"if_id_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"if_id_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"id_ex_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"id_ex_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"id_ex_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"id_ex_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"id_ex_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+16,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+17,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+19,"foward_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+20,"foward_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+21,"rs1_ex",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"rs2_ex",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"br_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"ex_mem_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"ex_mem_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"ex_mem_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"ex_mem_alu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+30,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+32,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"mem_wb_wb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+35,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+135,"mem_wb_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+36,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+25,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"signed_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BRCOMP ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+21,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+38,"ext_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+40,"ext_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+42,"compr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"alu_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"alu_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"rs2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+30,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+26,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"alu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+46,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FOWARD_UNIT ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+9,"ex_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"mem_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"wb_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"foward_a_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+20,"foward_b_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+47,"wb_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+48,"wb_inst_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+45,"mem_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+49,"mem_inst_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+50,"ex_inst_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+51,"ex_inst_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+52,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"wb_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"mem_ex_fd_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"wb_ex_fd_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"mem_ex_fd_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"wb_ex_fd_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HZD ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+14,"br_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"ex_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"mem_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"wb_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"stall_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+45,"mem_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+49,"mem_inst_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+47,"wb_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+57,"ex_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+50,"ex_inst_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+51,"ex_inst_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+52,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"stall_d",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"stall_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"rs1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"br_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"br_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"rs1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"rs2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+16,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+17,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"rs1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+62,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+63,"inst_30",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMEM ");
    tracep->declBus(c+139,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+64,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+2,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMMGEN ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"imm_sel_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBus(c+138,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"func_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+30,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"sw_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"true_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+69,"bank_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+70,"ld_data_ip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"ld_data_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"ld_data_d",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("lsu_2d_0 ");
    tracep->declBus(c+140,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+68,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+73,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+72,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+75,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_1 ");
    tracep->declBus(c+140,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+68,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+76,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+72,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+77,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_2 ");
    tracep->declBus(c+140,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+68,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+78,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+72,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_3 ");
    tracep->declBus(c+140,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+68,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+80,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+72,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_4 ");
    tracep->declBus(c+140,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+68,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+82,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+71,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+83,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_5 ");
    tracep->declBus(c+140,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+68,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+84,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+70,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+85,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"wb_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"wb_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+35,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+86,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"imm_pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"stall_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REGFILE ");
    tracep->declBus(c+138,"ADDR_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+138,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+136,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+89,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+35,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+34,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+5,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+90+i*1,"regfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+122,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__IMEM__DOT__imem
                            [(0x7ffU & (vlSelf->top__DOT__pipelined__DOT__pc 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__pc),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst),32);
    bufp->fullIData(oldp+5,(((((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                         >> 7U)) == 
                               (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                         >> 0xfU))) 
                              & (IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0))
                              ? vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data
                              : vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                             [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                        >> 0xfU))])),32);
    bufp->fullIData(oldp+6,(((((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                         >> 7U)) == 
                               (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                         >> 0x14U))) 
                              & (IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0))
                              ? vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data
                              : vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                             [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                        >> 0x14U))])),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__pipelined__DOT__imm),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__imm),32);
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__pipelined__DOT__br_unsigned));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__pipelined__DOT__br_sel));
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__pipelined__DOT__alu_op),4);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__pipelined__DOT__op_a_sel),2);
    bufp->fullBit(oldp+17,((0xcU != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                              >> 2U)))));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__pipelined__DOT__stall),2);
    bufp->fullCData(oldp+19,(((((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0) 
                                & ((IData)(vlSelf->__VdfgTmp_hc026f660__0) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                >> 2U))))) 
                               << 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                >> 7U)) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                   >> 0xfU)))))),2);
    bufp->fullCData(oldp+20,(((((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0) 
                                & ((IData)(vlSelf->__VdfgTmp_hc014ee13__0) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                >> 2U))))) 
                               << 1U) | ((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                >> 7U)) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                   >> 0x14U)))))),2);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__rs1_ex),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__rs2_ex),32);
    bufp->fullBit(oldp+23,((1U & (IData)((vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__pipelined__DOT__br_equal));
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu),32);
    bufp->fullBit(oldp+30,((8U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                            >> 2U)))));
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__pipelined__DOT__wb_sel),2);
    bufp->fullIData(oldp+32,(((((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                              >> 0xaU)))
                                 ? (((((3U == (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                >> 8U)))
                                        ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg
                                        : 0U) & ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                     & ((3U == (7U 
                                                & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                         ? 0xffffffffU
                                         : 0U)) | (
                                                   ((((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                           >> 8U)))
                                                       ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg
                                                       : 0U) 
                                                     & ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                             >> 8U)))
                                                         ? 0xffffffffU
                                                         : 0U)) 
                                                    & ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                            >> 8U)))
                                                        ? 0xffffffffU
                                                        : 0U)) 
                                                   | (((((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                              >> 8U)))
                                                          ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg
                                                          : 0U) 
                                                        & ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                                >> 8U)))
                                                            ? 0xffffffffU
                                                            : 0U)) 
                                                       & ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                               >> 8U)))
                                                           ? 0xffffffffU
                                                           : 0U)) 
                                                      | ((((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                                >> 8U)))
                                                            ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg
                                                            : 0U) 
                                                          & ((0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                                  >> 8U)))
                                                              ? 0xffffffffU
                                                              : 0U)) 
                                                         & ((0U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                                 >> 8U)))
                                                             ? 0xffffffffU
                                                             : 0U)))))
                                 : ((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                  >> 8U)))
                                     ? ((((4U == (7U 
                                                  & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                     >> 8U)))
                                           ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg
                                           : 0U) & 
                                         ((4U == (7U 
                                                  & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                     >> 8U)))
                                           ? 0xffffffffU
                                           : 0U)) & 
                                        ((4U == (7U 
                                                 & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                    >> 8U)))
                                          ? 0xffffffffU
                                          : 0U)) : 
                                    ((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                      ? ((((5U == (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                            ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg
                                            : 0U) & 
                                          ((5U == (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                            ? 0xffffffffU
                                            : 0U)) 
                                         & ((5U == 
                                             (7U & 
                                              (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                               >> 8U)))
                                             ? 0xffffffffU
                                             : 0U))
                                      : 0U))) & vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0) 
                              & vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0)),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__pipelined__DOT__wb_data),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data),32);
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__pipelined__DOT__rd_wren));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i),32);
    bufp->fullQData(oldp+38,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1),33);
    bufp->fullQData(oldp+40,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2),33);
    bufp->fullQData(oldp+42,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2),33);
    bufp->fullBit(oldp+44,((1U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                       >> 2U))),5);
    bufp->fullCData(oldp+46,((7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                       >> 2U))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__mem_wren));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0) 
                            & ((IData)(vlSelf->__VdfgTmp_hc026f660__0) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0) 
                            & ((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                         >> 7U)) == 
                               (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                         >> 0xfU))))));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0) 
                            & ((IData)(vlSelf->__VdfgTmp_hc014ee13__0) 
                               & (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0) 
                            & ((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                         >> 7U)) == 
                               (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                         >> 0x14U))))));
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                       >> 2U))),5);
    bufp->fullBit(oldp+58,(((IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__mem_wren) 
                            & ((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                >> 7U))) 
                               & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                             >> 2U)) 
                                   != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                >> 2U))) 
                                  & (IData)(((0U == 
                                              (0x7cU 
                                               & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) 
                                             & ((IData)(vlSelf->__VdfgTmp_hc026f660__0) 
                                                | (IData)(vlSelf->__VdfgTmp_hc014ee13__0)))))))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel) 
                            & ((0x18U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                   >> 2U))) 
                               | ((0x19U == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                >> 2U))) 
                                  | (0x1bU == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 2U))))))));
    bufp->fullBit(oldp+60,((2U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
    bufp->fullBit(oldp+61,((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
    bufp->fullCData(oldp+62,((7U & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+63,((1U & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                  >> 0x1eU))));
    bufp->fullSData(oldp+64,((0x1fffU & vlSelf->top__DOT__pipelined__DOT__pc)),13);
    bufp->fullBit(oldp+65,((0U != (3U & vlSelf->top__DOT__pipelined__DOT__pc))));
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 2U))),5);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i),3);
    bufp->fullCData(oldp+68,((0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                       >> 2U))),6);
    bufp->fullCData(oldp+69,((7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                    >> 8U))),3);
    bufp->fullIData(oldp+70,(((((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                              >> 8U)))
                                 ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg
                                 : 0U) & ((5U == (7U 
                                                  & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                     >> 8U)))
                                           ? 0xffffffffU
                                           : 0U)) & 
                              ((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 8U)))
                                ? 0xffffffffU : 0U))),32);
    bufp->fullIData(oldp+71,(((((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                              >> 8U)))
                                 ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg
                                 : 0U) & ((4U == (7U 
                                                  & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                     >> 8U)))
                                           ? 0xffffffffU
                                           : 0U)) & 
                              ((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 8U)))
                                ? 0xffffffffU : 0U))),32);
    bufp->fullIData(oldp+72,((((((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                               >> 8U)))
                                  ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg
                                  : 0U) & ((3U == (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                            ? 0xffffffffU
                                            : 0U)) 
                               & ((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                >> 8U)))
                                   ? 0xffffffffU : 0U)) 
                              | (((((2U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                  >> 8U)))
                                     ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg
                                     : 0U) & ((2U == 
                                               (7U 
                                                & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                               ? 0xffffffffU
                                               : 0U)) 
                                  & ((2U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                        >> 8U)))
                                                    ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg
                                                    : 0U) 
                                                  & ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                          >> 8U)))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                         >> 8U)))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                | ((((0U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                          >> 8U)))
                                                      ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg
                                                      : 0U) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                            >> 8U)))
                                                        ? 0xffffffffU
                                                        : 0U)) 
                                                   & ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                           >> 8U)))
                                                       ? 0xffffffffU
                                                       : 0U)))))),32);
    bufp->fullBit(oldp+73,((0U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb),4);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg),32);
    bufp->fullBit(oldp+76,((1U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg),32);
    bufp->fullBit(oldp+78,((2U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg),32);
    bufp->fullBit(oldp+80,((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg),32);
    bufp->fullBit(oldp+82,((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg),32);
    bufp->fullBit(oldp+84,((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc),32);
    bufp->fullCData(oldp+88,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+89,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[3]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[4]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[5]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[6]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[7]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[8]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[9]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[10]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[11]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[12]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[13]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[14]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[15]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[16]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[17]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[18]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[19]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[20]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[21]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[22]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[23]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[24]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[25]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[26]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[27]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[28]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[29]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[30]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[31]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__i),32);
    bufp->fullIData(oldp+123,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+124,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+125,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+126,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+127,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+128,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+129,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+130,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+131,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+132,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+133,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+134,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+135,(vlSelf->pc_debug_o),32);
    bufp->fullBit(oldp+136,(vlSelf->clk_i));
    bufp->fullBit(oldp+137,(vlSelf->rst_ni));
    bufp->fullIData(oldp+138,(0x20U),32);
    bufp->fullIData(oldp+139,(0xdU),32);
    bufp->fullIData(oldp+140,(8U),32);
    bufp->fullIData(oldp+141,(6U),32);
}
