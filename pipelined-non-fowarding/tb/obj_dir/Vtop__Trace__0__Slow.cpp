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
    tracep->declBus(c+126,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+126,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("pipelined ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
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
    tracep->declBit(c+19,"br_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"ex_mem_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"ex_mem_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"ex_mem_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"ex_mem_alu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+28,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"mem_wb_wb_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+31,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+138,"mem_wb_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+32,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+21,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"signed_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BRCOMP ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+10,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+34,"ext_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+36,"ext_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+38,"compr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"alu_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"alu_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"rs2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+22,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,"alu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,"rs2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HZD ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"br_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"if_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"id_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"ex_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"mem_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"stall_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    {
        const char* __VenumItemNames[]
        = {"IDLE", "STALL_EX", "STALL_MEM", "STALL_WB", 
                                "STALL_MEM_1", "STALL_WB_1", 
                                "STALL_BR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(1, "staller.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+43,"state_d",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,"state_q",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,"mem_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+46,"mem_inst_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+47,"ex_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+48,"ex_inst_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+49,"id_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+50,"id_inst_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+51,"id_inst_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+52,"if_inst_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+53,"if_inst_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+54,"if_inst_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+55,"stall_d_ex_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"stall_d_ex_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"stall_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"stall_d_mem_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"stall_c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"rs1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"imm_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"br_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"br_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
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
    tracep->declBus(c+62,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+63,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+64,"inst_30",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMEM ");
    tracep->declBus(c+142,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+67,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+2,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMMGEN ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+70,"imm_sel_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBus(c+141,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"func_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+26,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"sw_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"true_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+72,"bank_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+73,"ld_data_ip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"ld_data_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"ld_data_d",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("lsu_2d_0 ");
    tracep->declBus(c+143,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+71,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+76,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+75,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+78,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_1 ");
    tracep->declBus(c+143,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+71,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+79,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+75,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+80,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_2 ");
    tracep->declBus(c+143,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+71,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+81,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+75,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+82,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_3 ");
    tracep->declBus(c+143,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+71,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+83,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+75,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+84,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_4 ");
    tracep->declBus(c+143,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+71,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+85,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"pwrite_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+74,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+137,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+86,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_2d_5 ");
    tracep->declBus(c+143,"DMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+144,"DMEM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+71,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+87,"penable_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"pwdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"pfunct_code_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+73,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"rd_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"wb_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"wb_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+138,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+31,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+89,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"imm_pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"stall_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REGFILE ");
    tracep->declBus(c+141,"ADDR_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+141,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+139,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+51,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+31,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+5,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,"regfile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+125,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
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
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__instr),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__pc),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                            [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 0xfU))]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                            [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 0x14U))]),32);
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
    bufp->fullBit(oldp+19,((1U & (IData)((vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__pipelined__DOT__br_equal));
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu),32);
    bufp->fullBit(oldp+26,((8U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                            >> 2U)))));
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__pipelined__DOT__wb_sel),2);
    bufp->fullIData(oldp+28,(((((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
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
    bufp->fullIData(oldp+29,((((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                ? vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu
                                : ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                    ? ((((0U == (3U 
                                                 & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                    >> 0xaU)))
                                          ? (((((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                     >> 8U)))
                                                 ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg
                                                 : 0U) 
                                               & ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                       >> 8U)))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                              & ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                             | (((((2U 
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
                                          : ((4U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                >> 8U)))
                                              ? (((
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                        >> 8U)))
                                                    ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg
                                                    : 0U) 
                                                  & ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                          >> 8U)))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                         >> 8U)))
                                                     ? 0xffffffffU
                                                     : 0U))
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                                  ? 
                                                 ((((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                         >> 8U)))
                                                     ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg
                                                     : 0U) 
                                                   & ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                           >> 8U)))
                                                       ? 0xffffffffU
                                                       : 0U)) 
                                                  & ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                          >> 8U)))
                                                      ? 0xffffffffU
                                                      : 0U))
                                                  : 0U))) 
                                        & vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0) 
                                       & vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0)
                                    : ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                        ? ((IData)(4U) 
                                           + vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc)
                                        : 0U))) & (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                    ? 0xffffffffU
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                     ? vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                      ? 0xffffffffU
                                                      : 0U))))),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data),32);
    bufp->fullBit(oldp+31,((1U & (~ ((0x18U == (0x1fU 
                                                & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                   >> 2U))) 
                                     | (8U == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                  >> 2U))))))));
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i),32);
    bufp->fullQData(oldp+34,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1),33);
    bufp->fullQData(oldp+36,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2),33);
    bufp->fullQData(oldp+38,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2),33);
    bufp->fullBit(oldp+40,((3U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                       >> 2U))),5);
    bufp->fullCData(oldp+42,((7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d),3);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_q),3);
    bufp->fullCData(oldp+45,((0x7fU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)),7);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+47,((0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)),7);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+49,((0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst)),7);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+52,((0x7fU & vlSelf->top__DOT__pipelined__DOT__instr)),7);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+55,((((((((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U))) 
                                 & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                  >> 0xfU))) 
                                    | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                             >> 0x14U))) 
                                       & (0x13U != 
                                          (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))))) 
                                & (0x63U != (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                               & (0x23U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                              & (0x37U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                             & (0x17U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                            & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst)))));
    bufp->fullBit(oldp+56,((((((((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U))) 
                                 & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                  >> 0xfU))) 
                                    | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr 
                                             >> 0x14U))) 
                                       & (0x13U != 
                                          (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))))) 
                                & (0x63U != (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                               & (0x23U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                              & (0x37U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))) 
                             & (0x17U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))) 
                            & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr)))));
    bufp->fullBit(oldp+57,(((((((((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                   >> 7U))) 
                                  & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                >> 7U)) 
                                      == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                   >> 0xfU))) 
                                     | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                   >> 7U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                >> 0x14U))) 
                                        & (0x13U != 
                                           (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))))) 
                                 & (0x63U != (0x7fU 
                                              & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                & (0x23U != (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                               & (0x37U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                              & (0x17U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                             & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                            | (((((((0U != (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                             >> 7U))) 
                                    & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr 
                                             >> 0xfU))) 
                                       | (((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                  >> 0x14U))) 
                                          & (0x13U 
                                             != (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__instr))))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                 & (0x37U != (0x7fU 
                                              & vlSelf->top__DOT__pipelined__DOT__instr))) 
                                & (0x17U != (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__instr))) 
                               & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))))));
    bufp->fullBit(oldp+58,((((((((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                  >> 7U))) 
                                 & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                               >> 7U)) 
                                     == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                  >> 0xfU))) 
                                    | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr 
                                             >> 0x14U))) 
                                       & (0x13U != 
                                          (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))))) 
                                & (0x63U != (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))) 
                               & (0x23U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))) 
                              & (0x37U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))) 
                             & (0x17U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))) 
                            & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr)))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel) 
                            & (((0x63U == (0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                               | (0x6fU == (0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))))));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ID_EX__rst_ni));
    bufp->fullBit(oldp+61,((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
    bufp->fullCData(oldp+62,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                       >> 2U))),5);
    bufp->fullCData(oldp+63,((7U & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+64,((1U & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+65,((2U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__IF_ID__en_i));
    bufp->fullSData(oldp+67,((0x1fffU & vlSelf->top__DOT__pipelined__DOT__pc)),13);
    bufp->fullBit(oldp+68,((0U != (3U & vlSelf->top__DOT__pipelined__DOT__pc))));
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                       >> 2U))),5);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i),3);
    bufp->fullCData(oldp+71,((0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                       >> 2U))),6);
    bufp->fullCData(oldp+72,((7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                    >> 8U))),3);
    bufp->fullIData(oldp+73,(((((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
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
    bufp->fullIData(oldp+74,(((((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
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
    bufp->fullIData(oldp+75,((((((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
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
    bufp->fullBit(oldp+76,((0U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb),4);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg),32);
    bufp->fullBit(oldp+79,((1U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg),32);
    bufp->fullBit(oldp+81,((2U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg),32);
    bufp->fullBit(oldp+83,((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg),32);
    bufp->fullBit(oldp+85,((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg),32);
    bufp->fullBit(oldp+87,((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                         >> 8U)))));
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst),32);
    bufp->fullCData(oldp+90,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                       >> 2U))),5);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc),32);
    bufp->fullCData(oldp+92,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[1]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[2]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[3]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[4]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[5]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[6]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[7]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[8]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[9]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[10]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[11]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[12]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[13]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[14]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[15]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[16]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[17]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[18]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[19]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[20]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[21]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[22]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[23]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[24]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[25]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[26]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[27]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[28]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[29]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[30]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[31]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__i),32);
    bufp->fullIData(oldp+126,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+127,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+128,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+129,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+130,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+131,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+132,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+133,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+134,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+135,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+136,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+137,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+138,(vlSelf->pc_debug_o),32);
    bufp->fullBit(oldp+139,(vlSelf->clk_i));
    bufp->fullBit(oldp+140,(vlSelf->rst_ni));
    bufp->fullIData(oldp+141,(0x20U),32);
    bufp->fullIData(oldp+142,(0xdU),32);
    bufp->fullIData(oldp+143,(8U),32);
    bufp->fullIData(oldp+144,(6U),32);
}
