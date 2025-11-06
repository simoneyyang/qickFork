// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdac_top_tb_mem.h for the primary calling header

#include "Vdac_top_tb_mem__pch.h"
#include "Vdac_top_tb_mem___024root.h"

VlCoroutine Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__0(Vdac_top_tb_mem___024root* vlSelf);
VlCoroutine Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__1(Vdac_top_tb_mem___024root* vlSelf);

void Vdac_top_tb_mem___024root___eval_initial(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_initial\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vdac_top_tb_mem___024root___eval_act(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_act\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdac_top_tb_mem___024root___nba_sequent__TOP__0(Vdac_top_tb_mem___024root* vlSelf);

void Vdac_top_tb_mem___024root___eval_nba(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_nba\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdac_top_tb_mem___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vdac_top_tb_mem___024root___nba_sequent__TOP__0(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___nba_sequent__TOP__0\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v0;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v0 = 0;
    CData/*0:0*/ __VdlySet__dac_top_tb_mem__DOT__dac_out__v0;
    __VdlySet__dac_top_tb_mem__DOT__dac_out__v0 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v1;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v1 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v2;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v2 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v3;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v3 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v4;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v4 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v5;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v5 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v6;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v6 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v7;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v7 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v8;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v8 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v9;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v9 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v10;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v10 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v11;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v11 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v12;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v12 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v13;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v13 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v14;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v14 = 0;
    double __VdlyVal__dac_top_tb_mem__DOT__dac_out__v15;
    __VdlyVal__dac_top_tb_mem__DOT__dac_out__v15 = 0;
    // Body
    __VdlySet__dac_top_tb_mem__DOT__dac_out__v0 = 0U;
    if (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid) {
        vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__unnamedblk1__DOT__j = 0x10U;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid) 
                      & (IData)(vlSelfRef.dac_top_tb_mem__DOT__log_enable))))) {
        VL_FWRITEF_NX(vlSelfRef.dac_top_tb_mem__DOT__f_log_out,"%0t,%0#,%f,%f\n",0,
                      64,VL_TIME_UNITED_Q(1),-12,32,
                      vlSelfRef.dac_top_tb_mem__DOT__active_channel_for_logger,
                      64,vlSelfRef.dac_top_tb_mem__DOT__dac_out
                      [(0xfU & vlSelfRef.dac_top_tb_mem__DOT__active_channel_for_logger)],
                      64,vlSelfRef.dac_top_tb_mem__DOT__expected_out_for_logger);
        vlSelfRef.dac_top_tb_mem__DOT__expected_out_for_logger 
            = ((vlSelfRef.dac_top_tb_mem__DOT__vref 
                * VL_ISTOR_D_I(16, (IData)(vlSelfRef.dac_top_tb_mem__DOT__data_16bit_for_logger))) 
               / 3.27680000000000000e+04);
    }
    if (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid) {
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v0 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [0U];
        __VdlySet__dac_top_tb_mem__DOT__dac_out__v0 = 1U;
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v1 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [1U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v2 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [2U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v3 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [3U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v4 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [4U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v5 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [5U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v6 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [6U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v7 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [7U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v8 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [8U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v9 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [9U];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v10 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [0xaU];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v11 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [0xbU];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v12 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [0xcU];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v13 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [0xdU];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v14 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [0xeU];
        __VdlyVal__dac_top_tb_mem__DOT__dac_out__v15 
            = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout
            [0xfU];
    }
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U]))) 
           / 3.27680000000000000e+04);
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg 
        = ((1.0 * VL_ISTOR_D_I(16, (vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U] 
                                    >> 0x10U))) / 3.27680000000000000e+04);
    if (__VdlySet__dac_top_tb_mem__DOT__dac_out__v0) {
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[0U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v0;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[1U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v1;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[2U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v2;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[3U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v3;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[4U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v4;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[5U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v5;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[6U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v6;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[7U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v7;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[8U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v8;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[9U] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v9;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[0xaU] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v10;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[0xbU] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v11;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[0xcU] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v12;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[0xdU] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v13;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[0xeU] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v14;
        vlSelfRef.dac_top_tb_mem__DOT__dac_out[0xfU] 
            = __VdlyVal__dac_top_tb_mem__DOT__dac_out__v15;
    }
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[1U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[2U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[3U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[4U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[5U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[6U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[7U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[8U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[9U] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0xaU] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0xbU] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0xcU] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0xdU] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0xeU] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg;
    vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0xfU] 
        = vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg;
}

void Vdac_top_tb_mem___024root___timing_commit(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___timing_commit\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7c5cba06__0.commit(
                                                   "@(negedge dac_top_tb_mem.clk)");
    }
}

void Vdac_top_tb_mem___024root___timing_resume(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___timing_resume\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7c5cba06__0.resume(
                                                   "@(negedge dac_top_tb_mem.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdac_top_tb_mem___024root___eval_triggers__act(Vdac_top_tb_mem___024root* vlSelf);

bool Vdac_top_tb_mem___024root___eval_phase__act(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_phase__act\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdac_top_tb_mem___024root___eval_triggers__act(vlSelf);
    Vdac_top_tb_mem___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdac_top_tb_mem___024root___timing_resume(vlSelf);
        Vdac_top_tb_mem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdac_top_tb_mem___024root___eval_phase__nba(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_phase__nba\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdac_top_tb_mem___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_mem___024root___dump_triggers__nba(Vdac_top_tb_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_mem___024root___dump_triggers__act(Vdac_top_tb_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vdac_top_tb_mem___024root___eval(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdac_top_tb_mem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dac_top_tb_mem.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdac_top_tb_mem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dac_top_tb_mem.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdac_top_tb_mem___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdac_top_tb_mem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdac_top_tb_mem___024root___eval_debug_assertions(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_debug_assertions\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
