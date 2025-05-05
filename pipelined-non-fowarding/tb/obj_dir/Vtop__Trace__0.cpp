// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__pipelined__DOT__pc),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__pipelined__DOT__instr),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__pc),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                               [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                          >> 0xfU))]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile
                               [(0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                          >> 0x14U))]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__pipelined__DOT__imm),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__pc),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs1),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__rs2),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__imm),32);
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__pipelined__DOT__br_unsigned));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__pipelined__DOT__br_sel));
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__pipelined__DOT__alu_op),4);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__pipelined__DOT__op_a_sel),2);
        bufp->chgBit(oldp+16,((0xcU != (0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                 >> 2U)))));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__pipelined__DOT__stall),2);
        bufp->chgBit(oldp+18,((1U & (IData)((vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__pipelined__DOT__br_equal));
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__pipelined__DOT__ALU__DOT__alu_data),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__rs2),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu),32);
        bufp->chgBit(oldp+25,((8U == (0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                               >> 2U)))));
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__pipelined__DOT__wb_sel),2);
        bufp->chgIData(oldp+27,(((((0U == (3U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                 >> 0xaU)))
                                    ? (((((3U == (7U 
                                                  & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                     >> 8U)))
                                           ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg
                                           : 0U) & 
                                         ((3U == (7U 
                                                  & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                     >> 8U)))
                                           ? 0xffffffffU
                                           : 0U)) & 
                                        ((3U == (7U 
                                                 & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                    >> 8U)))
                                          ? 0xffffffffU
                                          : 0U)) | 
                                       (((((2U == (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                            ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg
                                            : 0U) & 
                                          ((2U == (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                            ? 0xffffffffU
                                            : 0U)) 
                                         & ((2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                               >> 8U)))
                                             ? 0xffffffffU
                                             : 0U)) 
                                        | (((((1U == 
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
                                    : ((4U == (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                >> 8U)))
                                        ? ((((4U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
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
                                           & ((4U == 
                                               (7U 
                                                & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                               ? 0xffffffffU
                                               : 0U))
                                        : ((5U == (7U 
                                                   & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                      >> 8U)))
                                            ? ((((5U 
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
                                 & vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0)),32);
        bufp->chgIData(oldp+28,((((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                   ? vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu
                                   : ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                       ? ((((0U == 
                                             (3U & 
                                              (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                               >> 0xaU)))
                                             ? ((((
                                                   (3U 
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
                                             : ((4U 
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
                                       : ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                           ? ((IData)(4U) 
                                              + vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__pc)
                                           : 0U))) 
                                 & ((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                     ? 0xffffffffU : 
                                    ((1U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                      ? vlSelf->top__DOT__pipelined__DOT__ld_data_o__en0
                                      : ((2U == (IData)(vlSelf->top__DOT__pipelined__DOT__wb_sel))
                                          ? 0xffffffffU
                                          : 0U))))),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__wb_data),32);
        bufp->chgBit(oldp+30,((1U & (~ ((0x18U == (0x1fU 
                                                   & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                      >> 2U))) 
                                        | (8U == (0x1fU 
                                                  & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                                     >> 2U))))))));
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_a_i),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ALU__operand_b_i),32);
        bufp->chgQData(oldp+33,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs1),33);
        bufp->chgQData(oldp+35,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__ext_rs2),33);
        bufp->chgQData(oldp+37,(vlSelf->top__DOT__pipelined__DOT__BRCOMP__DOT__compr2),33);
        bufp->chgBit(oldp+39,((3U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                          >> 2U))),5);
        bufp->chgCData(oldp+41,((7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_d),3);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__pipelined__DOT__HZD__DOT__state_q),3);
        bufp->chgCData(oldp+44,((0x7fU & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst)),7);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)),7);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+48,((0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst)),7);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+51,((0x7fU & vlSelf->top__DOT__pipelined__DOT__instr)),7);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+54,((((((((0U != (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                             >> 7U))) 
                                    & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                             >> 0xfU))) 
                                       | (((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                                  >> 0x14U))) 
                                          & (0x13U 
                                             != (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                 & (0x37U != (0x7fU 
                                              & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                                & (0x17U != (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst))) 
                               & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst)))));
        bufp->chgBit(oldp+55,((((((((0U != (0x1fU & 
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
                               & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr)))));
        bufp->chgBit(oldp+56,(((((((((0U != (0x1fU 
                                             & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                >> 7U))) 
                                     & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
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
                                              != (0x7fU 
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
                                       & (((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                  >> 0xfU))) 
                                          | (((0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                     >> 0x14U))) 
                                             & (0x13U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__instr))))) 
                                      & (0x63U != (0x7fU 
                                                   & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                     & (0x23U != (0x7fU 
                                                  & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                    & (0x37U != (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__instr))) 
                                   & (0x17U != (0x7fU 
                                                & vlSelf->top__DOT__pipelined__DOT__instr))) 
                                  & (0x77U != (0x7fU 
                                               & vlSelf->top__DOT__pipelined__DOT__instr))))));
        bufp->chgBit(oldp+57,((((((((0U != (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                             >> 7U))) 
                                    & (((0x1fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                                  >> 7U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__instr 
                                             >> 0xfU))) 
                                       | (((0x1fU & 
                                            (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__pipelined__DOT__instr 
                                                  >> 0x14U))) 
                                          & (0x13U 
                                             != (0x7fU 
                                                 & vlSelf->top__DOT__pipelined__DOT__instr))))) 
                                   & (0x63U != (0x7fU 
                                                & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))) 
                                  & (0x23U != (0x7fU 
                                               & vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__inst))) 
                                 & (0x37U != (0x7fU 
                                              & vlSelf->top__DOT__pipelined__DOT__instr))) 
                                & (0x17U != (0x7fU 
                                             & vlSelf->top__DOT__pipelined__DOT__instr))) 
                               & (0x77U != (0x7fU & vlSelf->top__DOT__pipelined__DOT__instr)))));
        bufp->chgBit(oldp+58,(((IData)(vlSelf->top__DOT__pipelined__DOT__br_sel) 
                               & (((0x63U == (0x7fU 
                                              & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst))))));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__ID_EX__rst_ni));
        bufp->chgBit(oldp+60,((0U == (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
        bufp->chgCData(oldp+61,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                          >> 2U))),5);
        bufp->chgCData(oldp+62,((7U & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+63,((1U & (vlSelf->top__DOT__pipelined__DOT__ID_EX__DOT__inst 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+64,((2U != (IData)(vlSelf->top__DOT__pipelined__DOT__stall))));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__pipelined__DOT____Vcellinp__IF_ID__en_i));
        bufp->chgSData(oldp+66,((0x1fffU & vlSelf->top__DOT__pipelined__DOT__pc)),13);
        bufp->chgBit(oldp+67,((0U != (3U & vlSelf->top__DOT__pipelined__DOT__pc))));
        bufp->chgCData(oldp+68,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__IF_ID__DOT__inst 
                                          >> 2U))),5);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__pipelined__DOT__IMMGEN__DOT__imm_sel_i),3);
        bufp->chgCData(oldp+70,((0x3fU & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                          >> 2U))),6);
        bufp->chgCData(oldp+71,((7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                       >> 8U))),3);
        bufp->chgIData(oldp+72,(((((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                 >> 8U)))
                                    ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg
                                    : 0U) & ((5U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                >> 8U)))
                                              ? 0xffffffffU
                                              : 0U)) 
                                 & ((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                  >> 8U)))
                                     ? 0xffffffffU : 0U))),32);
        bufp->chgIData(oldp+73,(((((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                 >> 8U)))
                                    ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg
                                    : 0U) & ((4U == 
                                              (7U & 
                                               (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                >> 8U)))
                                              ? 0xffffffffU
                                              : 0U)) 
                                 & ((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                  >> 8U)))
                                     ? 0xffffffffU : 0U))),32);
        bufp->chgIData(oldp+74,((((((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                  >> 8U)))
                                     ? vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg
                                     : 0U) & ((3U == 
                                               (7U 
                                                & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                               ? 0xffffffffU
                                               : 0U)) 
                                  & ((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                                   >> 8U)))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (2U 
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
                                                          : 0U)))))),32);
        bufp->chgBit(oldp+75,((0U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                            >> 8U)))));
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__pstrb),4);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_0__DOT__rd_reg),32);
        bufp->chgBit(oldp+78,((1U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                            >> 8U)))));
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_1__DOT__rd_reg),32);
        bufp->chgBit(oldp+80,((2U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                            >> 8U)))));
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_2__DOT__rd_reg),32);
        bufp->chgBit(oldp+82,((3U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                            >> 8U)))));
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_3__DOT__rd_reg),32);
        bufp->chgBit(oldp+84,((4U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                            >> 8U)))));
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_4__DOT__rd_reg),32);
        bufp->chgBit(oldp+86,((5U == (7U & (vlSelf->top__DOT__pipelined__DOT__EX_MEM__DOT__alu 
                                            >> 8U)))));
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__pipelined__DOT__LSU__DOT__lsu_2d_5__DOT__rd_reg),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst),32);
        bufp->chgCData(oldp+89,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                          >> 2U))),5);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__pipelined__DOT__PC__DOT__pc),32);
        bufp->chgCData(oldp+91,((0x1fU & (vlSelf->top__DOT__pipelined__DOT__MEM_WB__DOT__inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[0]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[1]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[2]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[3]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[4]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[5]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[6]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[7]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[8]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[9]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[10]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[11]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[12]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[13]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[14]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[15]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[16]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[17]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[18]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[19]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[20]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[21]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[22]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[23]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[24]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[25]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[26]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[27]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[28]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[29]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[30]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__regfile[31]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__pipelined__DOT__REGFILE__DOT__i),32);
    }
    bufp->chgIData(oldp+125,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+126,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+127,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+128,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+129,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+130,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+131,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+132,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+133,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+134,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+135,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+136,(vlSelf->io_hex7_o),32);
    bufp->chgIData(oldp+137,(vlSelf->pc_debug_o),32);
    bufp->chgBit(oldp+138,(vlSelf->clk_i));
    bufp->chgBit(oldp+139,(vlSelf->rst_ni));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
