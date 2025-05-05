// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h8d84f3e1__0;
    VlWide<4>/*127:0*/ __Vtemp_hdaa352b1__0;
    VlWide<4>/*127:0*/ __Vtemp_hdaa352b1__1;
    // Body
    __Vtemp_h8d84f3e1__0[0U] = 0x2e73696dU;
    __Vtemp_h8d84f3e1__0[1U] = 0x64617461U;
    __Vtemp_h8d84f3e1__0[2U] = 0x6d656d2eU;
    __Vtemp_h8d84f3e1__0[3U] = 0x696e7374U;
    __Vtemp_h8d84f3e1__0[4U] = 0x6d656d2fU;
    __Vtemp_h8d84f3e1__0[5U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h8d84f3e1__0)
                 ,  &(vlSelf->top__DOT__pipelined__DOT__IMEM__DOT__imem)
                 , 0, ~0ULL);
    __Vtemp_hdaa352b1__0[0U] = 0x2e747874U;
    __Vtemp_hdaa352b1__0[1U] = 0x2f6c7375U;
    __Vtemp_hdaa352b1__0[2U] = 0x2f737263U;
    __Vtemp_hdaa352b1__0[3U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hdaa352b1__0)
                 ,  &(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem)
                 , 0, ~0ULL);
    __Vtemp_hdaa352b1__1[0U] = 0x2e747874U;
    __Vtemp_hdaa352b1__1[1U] = 0x2f6c7375U;
    __Vtemp_hdaa352b1__1[2U] = 0x2f737263U;
    __Vtemp_hdaa352b1__1[3U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hdaa352b1__1)
                 ,  &(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h804fd108__0;
    CData/*0:0*/ top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_hf1dedacf__0;
    CData/*0:0*/ top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h65f11edf__0;
    // Body
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
    vlSelf->pc_debug_o = vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst;
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
    vlSelf->__VdfgTmp_hc026f660__0 = ((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                >> 7U)) 
                                      == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                   >> 0xfU)));
    vlSelf->__VdfgTmp_hc014ee13__0 = ((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                >> 7U)) 
                                      == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                   >> 0x14U)));
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
    vlSelf->top__DOT__pipelined__DOT__rd_wren = (1U 
                                                 & (~ 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                          >> 2U))) 
                                                     | (8U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                            >> 2U))))));
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
    vlSelf->top__DOT__pipelined__DOT__HZD__DOT__mem_wren 
        = (1U & (~ ((0x18U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                        >> 2U))) | 
                    (8U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                     >> 2U))))));
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
    vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0 
        = ((IData)(vlSelf->top__DOT__pipelined__DOT__rd_wren) 
           & (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                              >> 7U))));
    vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0 
        = ((IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__mem_wren) 
           & (0U != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                              >> 7U))));
    vlSelf->top__DOT__pipelined__DOT__wb_data = (((0U 
                                                   == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                   ? vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                    ? 
                                                   ((((0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                           >> 0xaU)))
                                                       ? 
                                                      (((((3U 
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
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                            >> 8U)))
                                                        ? 
                                                       ((((4U 
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
                                                        : 
                                                       ((5U 
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
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc)
                                                     : 0U))) 
                                                 & ((0U 
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
                                                       : 0U))));
    vlSelf->top__DOT__pipelined__DOT__rs1_ex = (((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hc026f660__0) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                           >> 2U)))))
                                                 ? vlSelf->top__DOT__pipelined__DOT__wb_data
                                                 : 
                                                (((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0) 
                                                  & ((0x1fU 
                                                      & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                         >> 7U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                         >> 0xfU))))
                                                  ? vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data
                                                  : vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1));
    vlSelf->top__DOT__pipelined__DOT__rs2_ex = (((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0) 
                                                 & ((IData)(vlSelf->__VdfgTmp_hc014ee13__0) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                           >> 2U)))))
                                                 ? vlSelf->top__DOT__pipelined__DOT__wb_data
                                                 : 
                                                (((IData)(vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0) 
                                                  & ((0x1fU 
                                                      & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                         >> 7U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                         >> 0x14U))))
                                                  ? vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data
                                                  : vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2));
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i 
        = ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__op_a_sel))
            ? vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc
            : ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__op_a_sel))
                ? vlSelf->top__DOT__pipelined__DOT__rs1_ex
                : 0U));
    if (vlSelf->top__DOT__pipelined__DOT__br_unsigned) {
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1 
            = (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__rs1_ex));
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2 
            = (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__rs2_ex));
    } else {
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1 
            = (((QData)((IData)((vlSelf->top__DOT__pipelined__DOT__rs1_ex 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__rs1_ex)));
        vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2 
            = (((QData)((IData)((vlSelf->top__DOT__pipelined__DOT__rs2_ex 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->top__DOT__pipelined__DOT__rs2_ex)));
    }
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i 
        = ((0xcU != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                              >> 2U))) ? vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__imm
            : vlSelf->top__DOT__pipelined__DOT__rs2_ex);
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
    vlSelf->top__DOT__pipelined__DOT__br_equal = (vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1 
                                                  == vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2);
    vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
        = (0x1ffffffffULL & (1ULL + ((~ vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2) 
                                     + vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1)));
    top__DOT__pipelined__DOT__ID_EX__DOT____VdfgTmp_h804fd108__0 
        = (1U & ((~ (IData)((vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
                             >> 0x20U))) | (IData)(vlSelf->top__DOT__pipelined__DOT__br_equal)));
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
    vlSelf->top__DOT__pipelined__DOT__stall = (((IData)(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__mem_wren) 
                                                & ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                        >> 7U))) 
                                                   & (((0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                           >> 2U)) 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                           >> 2U))) 
                                                      & (IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x7cU 
                                                                   & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)) 
                                                                 & ((IData)(vlSelf->__VdfgTmp_hc026f660__0) 
                                                                    | (IData)(vlSelf->__VdfgTmp_hc014ee13__0)))))))
                                                ? 1U
                                                : (
                                                   ((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel) 
                                                    & ((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                            >> 2U))) 
                                                       | ((0x19U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                               >> 2U))) 
                                                          | (0x1bU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                                 >> 2U))))))
                                                    ? 2U
                                                    : 0U));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->pc_debug_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__br_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__op_a_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__stall = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__rs1_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__rs2_ex = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipelined__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0 = 0;
    vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__IMEM__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipelined__DOT__HZD__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd11b429d__0 = 0;
    vlSelf->top__DOT__pipelined__DOT__FOWARD_UNIT__DOT____VdfgTmp_hd336487d__0 = 0;
    vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_hc026f660__0 = 0;
    vlSelf->__VdfgTmp_hc014ee13__0 = 0;
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
