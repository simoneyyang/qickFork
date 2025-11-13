// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdac_top_tb_mem.h for the primary calling header

#include "Vdac_top_tb_mem__pch.h"
#include "Vdac_top_tb_mem___024root.h"

VL_ATTR_COLD void Vdac_top_tb_mem___024root___eval_static(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_static\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__dac_top_tb_mem__DOT__clk__0 
        = vlSelfRef.dac_top_tb_mem__DOT__clk;
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root___eval_final(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_final\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_mem___024root___dump_triggers__stl(Vdac_top_tb_mem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdac_top_tb_mem___024root___eval_phase__stl(Vdac_top_tb_mem___024root* vlSelf);

VL_ATTR_COLD void Vdac_top_tb_mem___024root___eval_settle(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_settle\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdac_top_tb_mem___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dac_top_tb_mem.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdac_top_tb_mem___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_mem___024root___dump_triggers__stl(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___dump_triggers__stl\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdac_top_tb_mem___024root___stl_sequent__TOP__0(Vdac_top_tb_mem___024root* vlSelf);

VL_ATTR_COLD void Vdac_top_tb_mem___024root___eval_stl(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_stl\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdac_top_tb_mem___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root___stl_sequent__TOP__0(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___stl_sequent__TOP__0\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vdac_top_tb_mem___024root___eval_triggers__stl(Vdac_top_tb_mem___024root* vlSelf);

VL_ATTR_COLD bool Vdac_top_tb_mem___024root___eval_phase__stl(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_phase__stl\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdac_top_tb_mem___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdac_top_tb_mem___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_mem___024root___dump_triggers__act(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___dump_triggers__act\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge dac_top_tb_mem.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge dac_top_tb_mem.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_mem___024root___dump_triggers__nba(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___dump_triggers__nba\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge dac_top_tb_mem.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge dac_top_tb_mem.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdac_top_tb_mem___024root___ctor_var_reset(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___ctor_var_reset\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->dac_top_tb_mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1062691276475784600ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->dac_top_tb_mem__DOT__s_axis_tdata, __VscopeHash, 17347319329442808713ull);
    vlSelf->dac_top_tb_mem__DOT__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2018382082349328493ull);
    vlSelf->dac_top_tb_mem__DOT__vref = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dac_top_tb_mem__DOT__dac_out[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1600; ++__Vi0) {
        vlSelf->dac_top_tb_mem__DOT__stim_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13869439524725150116ull);
    }
    vlSelf->dac_top_tb_mem__DOT__f_log_out = 0;
    vlSelf->dac_top_tb_mem__DOT__active_channel_for_logger = 0;
    vlSelf->dac_top_tb_mem__DOT__data_16bit_for_logger = 0;
    vlSelf->dac_top_tb_mem__DOT__expected_out_for_logger = 0;
    vlSelf->dac_top_tb_mem__DOT__log_enable = 0;
    vlSelf->dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_stim = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15656425204942817240ull);
    vlSelf->dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__channel_from_mem = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4769160837190498872ull);
    vlSelf->dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__data_from_mem = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13232699837926801491ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dac_top_tb_mem__DOT__dut__DOT__internal_aout[__Vi0] = 0;
    }
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg = 0;
    vlSelf->__Vtrigprevexpr___TOP__dac_top_tb_mem__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4124372352439054015ull);
}
