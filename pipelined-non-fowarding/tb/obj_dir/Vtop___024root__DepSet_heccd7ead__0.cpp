// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_ha0db1570_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h804fd108__0;
    CData/*0:0*/ top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_hf1dedacf__0;
    CData/*0:0*/ top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h65f11edf__0;
    CData/*0:0*/ __VdfgTmp_h4ba44cb8__0;
    CData/*5:0*/ __Vtableidx1;
    IData/*31:0*/ __Vdly__top__DOT__pipelined__DOT__PC__DOT__pc;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3;
    // Body
    __Vdly__top__DOT__pipelined__DOT__PC__DOT__pc = vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc;
    __Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v1 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2 = 0U;
    __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__i = 0x20U;
    }
    __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem__v0 
        = vlSelf->io_sw_i;
    if ((IData)(((0U == (0x700U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu)) 
                 & (0x20U == (0x7cU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))))) {
        if ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0 = 0U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 8U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1 = 8U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 0x10U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3 
                = (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                   >> 0x18U);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
    }
    if ((IData)(((0x100U == (0x700U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu)) 
                 & (0x20U == (0x7cU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))))) {
        if ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0 = 0U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 8U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1 = 8U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 0x10U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3 
                = (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                   >> 0x18U);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
    }
    if ((IData)(((0x200U == (0x700U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu)) 
                 & (0x20U == (0x7cU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))))) {
        if ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0 = 0U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 8U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1 = 8U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 0x10U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3 
                = (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                   >> 0x18U);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
    }
    if ((IData)(((0x300U == (0x700U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu)) 
                 & (0x20U == (0x7cU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))))) {
        if ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0 = 0U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 8U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1 = 8U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 0x10U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3 
                = (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                   >> 0x18U);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
    }
    if ((IData)(((0x400U == (0x700U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu)) 
                 & (0x20U == (0x7cU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))))) {
        if ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0 = 0U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 8U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1 = 8U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2 
                = (0xffU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                            >> 0x10U));
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
        if ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb))) {
            __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3 
                = (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
                   >> 0x18U);
            __Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3 = 1U;
            __Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3 
                = (0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                            >> 2U));
        }
    }
    vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_q 
        = vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d;
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem[0U] 
        = __Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem__v0;
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v0))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v1))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v2))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem__v3))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v0))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v1))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v2))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem__v3))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v0))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v1))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v2))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem__v3))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v0))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v1))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v2))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem__v3))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v0))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v1))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v2))));
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem[__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3))) 
                & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                [__Vdlyvdim0__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem__v3))));
    }
    if (vlSelf->rst_ni) {
        if (((~ ((0x18U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                     >> 2U))) | (8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                     >> 2U))))) 
             & (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                >> 7U))))) {
            __Vdlyvval__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0 
                = vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data;
            __Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0 = 1U;
            __Vdlyvdim0__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0 
                = (0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                            >> 7U));
        }
    } else {
        __Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v1 = 1U;
    }
    vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data 
        = (((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
             ? vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu
             : ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                 ? ((((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                    >> 0xaU))) ? ((
                                                   (((3U 
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
                       : ((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                        >> 8U))) ? 
                          ((((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                           >> 8U)))
                              ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg
                              : 0U) & ((4U == (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                >> 8U)))
                                        ? 0xffffffffU
                                        : 0U)) & ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                       >> 8U)))
                                                   ? 0xffffffffU
                                                   : 0U))
                           : ((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                            >> 8U)))
                               ? ((((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                  >> 8U)))
                                     ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg
                                     : 0U) & ((5U == 
                                               (7U 
                                                & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                               ? 0xffffffffU
                                               : 0U)) 
                                  & ((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                      ? 0xffffffffU
                                      : 0U)) : 0U))) 
                     & vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0) 
                    & vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0)
                 : ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                     ? ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc)
                     : 0U))) & ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                 ? 0xffffffffU : ((1U 
                                                   == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                   ? vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                    ? 0xffffffffU
                                                    : 0U))));
    vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
        = vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst;
    vlSelf->io_lcd_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0x28U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0x24U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0x20U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [4U];
    vlSelf->io_hex2_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [8U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0xcU];
    vlSelf->io_hex4_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0x10U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0x14U];
    vlSelf->io_hex6_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0x18U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
        [0x1cU];
    if ((3U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))) {
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 
            = vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2;
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
            = vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data;
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc 
            = vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc;
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
            = vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst;
    } else {
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 = 0U;
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu = 0U;
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc = 0U;
        vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst = 0U;
    }
    if (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ID_EX__rst_ni) {
        if ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall))) {
            vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__imm 
                = vlSelf->top__DOT__pipelined__DOT__imm;
            vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1 
                = vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                           >> 0xfU))];
            vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2 
                = vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                           >> 0x14U))];
            vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc 
                = vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__pc;
            vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                = vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst;
        }
    } else {
        vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__imm = 0U;
        vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1 = 0U;
        vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2 = 0U;
        vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc = 0U;
        vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst = 0U;
    }
    vlSelf->pc_debug_o = vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst;
    if (__Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0) {
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[__Vdlyvdim0__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0] 
            = __Vdlyvval__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v0;
    }
    if (__Vdlyvset__top__DOT__pipelined__DOT__REGFILE__DOT__regfile__v1) {
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[1U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[2U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[3U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[4U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[5U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[6U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[7U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[8U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[9U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0xaU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0xbU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0xcU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0xdU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0xeU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0xfU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x10U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x11U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x12U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x13U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x14U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x15U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x16U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x17U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x18U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x19U] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x1aU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x1bU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x1cU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x1dU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x1eU] = 0U;
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0x1fU] = 0U;
    }
    vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0 
        = ((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                         >> 0xaU))) ? (((3U == (7U 
                                                & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                         ? 0xffffffffU
                                         : 0U) | ((
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                        >> 8U)))
                                                    ? 0xffffffffU
                                                    : 0U) 
                                                  | (((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                           >> 8U)))
                                                       ? 0xffffffffU
                                                       : 0U) 
                                                     | ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                             >> 8U)))
                                                         ? 0xffffffffU
                                                         : 0U))))
            : ((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 8U))) ? ((4U == (7U 
                                                 & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                    >> 8U)))
                                          ? 0xffffffffU
                                          : 0U) : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                        >> 8U)))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                         >> 8U)))
                                                     ? 0xffffffffU
                                                     : 0U)
                                                    : 0U)));
    vlSelf->top__DOT__pipelined__DOT__wb_sel = (((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                      >> 2U))) 
                                                 | ((0xdU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                         >> 2U))) 
                                                    | ((IData)(
                                                               (0x10U 
                                                                == 
                                                                (0x707cU 
                                                                 & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))) 
                                                       | ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                               >> 2U))) 
                                                          | (5U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                                 >> 2U)))))))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                      >> 2U)))
                                                  ? 1U
                                                  : 
                                                 (((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                        >> 2U))) 
                                                   | (0x19U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                          >> 2U))))
                                                   ? 2U
                                                   : 3U)));
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb 
        = ((0U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                         >> 0xcU))) ? 1U : ((1U == 
                                             (7U & 
                                              (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                               >> 0xcU)))
                                             ? 3U : 
                                            ((2U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                >> 0xcU)))
                                              ? 0xfU
                                              : 0U)));
    if ((0x4000U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) {
        if ((0x2000U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) {
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg = 0U;
        } else if ((0x1000U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) {
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg 
                = (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg 
                = (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg 
                = (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg 
                = (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg 
                = (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg 
                = (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
        } else {
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg 
                = (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                   [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                              >> 2U))]);
        }
    } else if ((0x2000U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) {
        if ((0x1000U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) {
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg = 0U;
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg = 0U;
        } else {
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg 
                = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem
                [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                           >> 2U))];
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg 
                = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                           >> 2U))];
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg 
                = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                           >> 2U))];
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg 
                = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                           >> 2U))];
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg 
                = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                           >> 2U))];
            vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg 
                = vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                           >> 2U))];
        }
    } else if ((0x1000U & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
    } else {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg 
            = (((- (IData)((1U & (vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                             >> 2U))] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem
                  [(0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                             >> 2U))]));
    }
    if ((2U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))) {
        if (vlSelf->top__DOT__pipelined__DOT____Vcellinp__IF_ID__en_i) {
            vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__pc 
                = vlSelf->top__DOT__pipelined__DOT__pc;
        }
    } else {
        vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__pc = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall)) 
             | (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall)))) {
            vlSelf->top__DOT__pipelined__DOT__pc = vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc;
        } else if (vlSelf->top__DOT__pipelined__DOT__br_sel) {
            __Vdly__top__DOT__pipelined__DOT__PC__DOT__pc 
                = vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data;
            vlSelf->top__DOT__pipelined__DOT__pc = vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data;
        } else {
            __Vdly__top__DOT__pipelined__DOT__PC__DOT__pc 
                = ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc);
            vlSelf->top__DOT__pipelined__DOT__pc = 
                ((IData)(4U) + vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc);
        }
    } else {
        __Vdly__top__DOT__pipelined__DOT__PC__DOT__pc = 0U;
        vlSelf->top__DOT__pipelined__DOT__pc = 0U;
    }
    if ((2U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))) {
        if (vlSelf->top__DOT__pipelined__DOT____Vcellinp__IF_ID__en_i) {
            vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                = vlSelf->top__DOT__pipelined__DOT__instr;
        }
    } else {
        vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst = 0U;
    }
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i 
        = ((0xcU != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                              >> 2U))) ? vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__imm
            : vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2);
    vlSelf->top__DOT__pipelined__DOT__op_a_sel = ((
                                                   (0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                        >> 2U))) 
                                                   | ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                           >> 2U))) 
                                                      | (0x1bU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                             >> 2U)))))
                                                   ? 1U
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U));
    top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_hf1dedacf__0 
        = (IData)((0x30U == (0x707cU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)));
    top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h65f11edf__0 
        = (IData)(((0x5000U == (0x7000U & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                   & ((0xcU == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                         >> 2U))) | 
                      (4U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                       >> 2U))))));
    vlSelf->top__DOT__pipelined__DOT__br_unsigned = (IData)(
                                                            ((0x60U 
                                                              == 
                                                              (0x7cU 
                                                               & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                             & ((6U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                     >> 0xcU))) 
                                                                | (7U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                       >> 0xcU))))));
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
        = ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__op_a_sel))
            ? vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc
            : ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__op_a_sel))
                ? vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1
                : 0U));
    vlSelf->top__DOT__pipelined__DOT__alu_op = ((((~ 
                                                   (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                    >> 0x1eU)) 
                                                  & (IData)(top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_hf1dedacf__0)) 
                                                 | (IData)(
                                                           (0x10U 
                                                            == 
                                                            (0x707cU 
                                                             & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))))
                                                 ? 0U
                                                 : 
                                                (((IData)(top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_hf1dedacf__0) 
                                                  & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                     >> 0x1eU))
                                                  ? 1U
                                                  : 
                                                 ((IData)(
                                                          ((0x1000U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                           & ((0xcU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                   >> 2U))) 
                                                              | (4U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                     >> 2U))))))
                                                   ? 2U
                                                   : 
                                                  (((IData)(
                                                            (0x2030U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                                    | (IData)(
                                                              ((0x10U 
                                                                == 
                                                                (0x7cU 
                                                                 & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                               & ((2U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                       >> 0xcU))) 
                                                                  | (3U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                         >> 0xcU)))))))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0x3030U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             ((0x4000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                              & ((0xcU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                      >> 2U))) 
                                                                 | (4U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                        >> 2U))))))
                                                      ? 5U
                                                      : 
                                                     (((~ 
                                                        (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                         >> 0x1eU)) 
                                                       & (IData)(top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h65f11edf__0))
                                                       ? 6U
                                                       : 
                                                      (((IData)(top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h65f11edf__0) 
                                                        & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                           >> 0x1eU))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                ((0x6000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                                 & ((0xcU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                         >> 2U))) 
                                                                    | (4U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                           >> 2U))))))
                                                         ? 8U
                                                         : 
                                                        ((IData)(
                                                                 ((0x7000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                                  & ((0xcU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                          >> 2U))) 
                                                                     | (4U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                            >> 2U))))))
                                                          ? 9U
                                                          : 0U))))))))));
    if (vlSelf->top__DOT__pipelined__DOT__br_unsigned) {
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1 
            = (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1));
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2 
            = (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2));
    } else {
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1 
            = (((QData)((IData)((vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1)));
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2 
            = (((QData)((IData)((vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2)));
    }
    vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i 
        = (((4U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                             >> 2U))) | ((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                    >> 2U))) 
                                         | (0x19U == 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                >> 2U)))))
            ? 0U : ((8U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                     >> 2U))) ? 1U : 
                    ((0x18U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                         >> 2U))) ? 2U
                      : ((0x1bU == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                             >> 2U)))
                          ? 3U : (((0xdU == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                >> 2U))) 
                                   | (5U == (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                >> 2U))))
                                   ? 4U : 5U)))));
    vlSelf->top__DOT__pipelined__DOT__br_equal = (vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1 
                                                  == vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2);
    vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
        = (0x1ffffffffULL & (1ULL + ((~ vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2) 
                                     + vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1)));
    vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc = __Vdly__top__DOT__pipelined__DOT__PC__DOT__pc;
    vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data 
        = ((8U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                ? (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                   + vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)
                : ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                    ? (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                       + vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)
                    : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                        ? (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                           & vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)
                        : (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                           | vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i))))
            : ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i, 
                                         (0x1fU & vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i))
                        : (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                           >> (0x1fU & vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)))
                    : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                        ? (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                           ^ vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)
                        : (IData)((1ULL & ((1ULL + 
                                            ((QData)((IData)(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i)) 
                                             + (~ (QData)((IData)(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i))))) 
                                           >> 0x20U)))))
                : ((2U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                        ? (((IData)(1U) + (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                                           + (~ vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i))) 
                           >> 0x1fU) : (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                                        << (0x1fU & vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)))
                    : ((1U & (IData)(vlSelf->top__DOT__pipelined__DOT__alu_op))
                        ? ((IData)(1U) + (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                                          + (~ vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)))
                        : (vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
                           + vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i)))));
    vlSelf->top__DOT__pipelined__DOT__imm = ((4U & (IData)(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i))
                                              ? ((2U 
                                                  & (IData)(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                     >> 0x14U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                      >> 0x14U))
                                                   : 
                                                  (0xfffff000U 
                                                   & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst)))
                                              : ((2U 
                                                  & (IData)(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                               >> 0x14U)))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                               >> 7U))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                            >> 7U))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                      >> 0x14U)))));
    top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h804fd108__0 
        = (1U & ((~ (IData)((vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
                             >> 0x20U))) | (IData)(vlSelf->top__DOT__pipelined__DOT__br_equal)));
    vlSelf->top__DOT__pipelined__DOT__instr = vlSelf->top__DOT__pipelined__DOT__IMEM__DOT__imem
        [(0x7ffU & (vlSelf->top__DOT__pipelined__DOT__pc 
                    >> 2U))];
    vlSelf->top__DOT__pipelined__DOT__br_sel = ((IData)(
                                                        ((0x60U 
                                                          == 
                                                          (0x7cU 
                                                           & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                                     & (IData)(vlSelf->top__DOT__pipelined__DOT__br_equal))) 
                                                            | (((~ (IData)(vlSelf->top__DOT__pipelined__DOT__br_equal)) 
                                                                & (0x1000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                                               | ((IData)(
                                                                          ((0x4000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                                           & (vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
                                                                              >> 0x20U))) 
                                                                  | ((IData)(
                                                                             ((0x5000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                                              & (IData)(top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h804fd108__0))) 
                                                                     | ((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                                                & (vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
                                                                                >> 0x20U))) 
                                                                        | (IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                                                & (IData)(top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h804fd108__0)))))))))) 
                                                | ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                        >> 2U))) 
                                                   | (0x19U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                          >> 2U)))));
    __Vtableidx1 = (((((((((0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                            >> 7U))) 
                           & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                         >> 7U)) == 
                               (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                         >> 0xfU))) 
                              | (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                            >> 7U)) 
                                  == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                               >> 0x14U))) 
                                 & (0x13U != (0x7fU 
                                              & vlSelf->top__DOT__pipelined__DOT__instr))))) 
                          & (0x63U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))) 
                         & (0x23U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))) 
                        & (0x37U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))) 
                       & (0x17U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))) 
                      & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr))) 
                     << 5U) | ((((((((((0U != (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U))) 
                                       & (((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                  >> 0xfU))) 
                                          | (((0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                     >> 0x14U))) 
                                             & (0x13U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                    & (0x37U != (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                                   & (0x17U != (0x7fU 
                                                & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                                  & (0x77U != (0x7fU 
                                               & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                                 | (((((((0U != (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                    >> 7U))) 
                                         & (((0x1fU 
                                              & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                    >> 0xfU))) 
                                            | (((0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                    >> 0x14U))) 
                                               & (0x13U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__instr))))) 
                                        & (0x63U != 
                                           (0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                       & (0x23U != 
                                          (0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                      & (0x37U != (0x7fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__instr))) 
                                     & (0x17U != (0x7fU 
                                                  & vlSelf->top__DOT__pipelined__DOT__instr))) 
                                    & (0x77U != (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__instr)))) 
                                << 4U) | ((((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel) 
                                            & (((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                                | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)))) 
                                           << 3U) | (IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_q))));
    vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d 
        = Vtop__ConstPool__TABLE_ha0db1570_0[__Vtableidx1];
    __VdfgTmp_h4ba44cb8__0 = ((4U == (IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d)) 
                              | (5U == (IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d)));
    vlSelf->top__DOT__pipelined__DOT__stall = ((0U 
                                                == (IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d))
                                                ? 0U
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d))
                                                    ? 2U
                                                    : 
                                                   ((IData)(__VdfgTmp_h4ba44cb8__0)
                                                     ? 3U
                                                     : 1U)));
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__IF_ID__en_i 
        = ((1U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall)) 
           & (3U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall)));
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__ID_EX__rst_ni 
        = ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall)) 
           | (3U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
