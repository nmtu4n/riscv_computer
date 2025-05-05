// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ top__DOT__pipelined__DOT____Vcellinp__IF_ID__en_i;
        CData/*0:0*/ top__DOT__pipelined__DOT__br_unsigned;
        CData/*0:0*/ top__DOT__pipelined__DOT__br_sel;
        CData/*3:0*/ top__DOT__pipelined__DOT__alu_op;
        CData/*1:0*/ top__DOT__pipelined__DOT__op_a_sel;
        CData/*1:0*/ top__DOT__pipelined__DOT__stall;
        CData/*0:0*/ top__DOT__pipelined__DOT____Vcellinp__ID_EX__rst_ni;
        CData/*0:0*/ top__DOT__pipelined__DOT__br_equal;
        CData/*1:0*/ top__DOT__pipelined__DOT__wb_sel;
        CData/*2:0*/ top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i;
        CData/*2:0*/ top__DOT__pipelined__DOT__HZD__DOT__state_d;
        CData/*2:0*/ top__DOT__pipelined__DOT__HZD__DOT__state_q;
        CData/*3:0*/ top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb;
        CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
        CData/*0:0*/ __VactContinue;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        VL_OUT(pc_debug_o,31,0);
        IData/*31:0*/ top__DOT__pipelined__DOT__pc;
        IData/*31:0*/ top__DOT__pipelined__DOT__instr;
        IData/*31:0*/ top__DOT__pipelined__DOT__imm;
        IData/*31:0*/ top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i;
        IData/*31:0*/ top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i;
        IData/*31:0*/ top__DOT__pipelined__DOT__ld_data_o__en0;
        IData/*31:0*/ top__DOT__pipelined__DOT__PC__DOT__pc;
        IData/*31:0*/ top__DOT__pipelined__DOT__IF_ID__DOT__pc;
        IData/*31:0*/ top__DOT__pipelined__DOT__IF_ID__DOT__inst;
        IData/*31:0*/ top__DOT__pipelined__DOT__REGFILE__DOT__i;
        IData/*31:0*/ top__DOT__pipelined__DOT__ID_EX__DOT__pc;
        IData/*31:0*/ top__DOT__pipelined__DOT__ID_EX__DOT__inst;
        IData/*31:0*/ top__DOT__pipelined__DOT__ID_EX__DOT__rs1;
        IData/*31:0*/ top__DOT__pipelined__DOT__ID_EX__DOT__rs2;
        IData/*31:0*/ top__DOT__pipelined__DOT__ID_EX__DOT__imm;
        IData/*31:0*/ top__DOT__pipelined__DOT__ALU__DOT__alu_data;
        IData/*31:0*/ top__DOT__pipelined__DOT__EX_MEM__DOT__pc;
        IData/*31:0*/ top__DOT__pipelined__DOT__EX_MEM__DOT__inst;
        IData/*31:0*/ top__DOT__pipelined__DOT__EX_MEM__DOT__alu;
        IData/*31:0*/ top__DOT__pipelined__DOT__EX_MEM__DOT__rs2;
        IData/*31:0*/ top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg;
        IData/*31:0*/ top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg;
        IData/*31:0*/ top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg;
        IData/*31:0*/ top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg;
        IData/*31:0*/ top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg;
        IData/*31:0*/ top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg;
        IData/*31:0*/ top__DOT__pipelined__DOT__MEM_WB__DOT__inst;
        IData/*31:0*/ top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1;
        QData/*32:0*/ top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2;
        QData/*32:0*/ top__DOT__pipelined__DOT__BRCOMP__DOT__compr2;
        VlUnpacked<IData/*31:0*/, 2048> top__DOT__pipelined__DOT__IMEM__DOT__imem;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> top__DOT__pipelined__DOT__REGFILE__DOT__regfile;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
