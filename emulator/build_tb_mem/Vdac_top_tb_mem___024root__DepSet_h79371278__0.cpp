// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdac_top_tb_mem.h for the primary calling header

#include "Vdac_top_tb_mem__pch.h"
#include "Vdac_top_tb_mem__Syms.h"
#include "Vdac_top_tb_mem___024root.h"

extern const VlWide<8>/*255:0*/ Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT VlCoroutine Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__0(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ dac_top_tb_mem__DOT__unnamedblk1__DOT__i;
    dac_top_tb_mem__DOT__unnamedblk1__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x61766573U;
    __Vtemp_1[2U] = 0x77U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    VL_PRINTF_MT("-Info: dac_top_tb_mem.sv:63: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U] 
        = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid = 0U;
    vlSelfRef.dac_top_tb_mem__DOT__log_enable = 0U;
    vlSelfRef.dac_top_tb_mem__DOT__vref = 1.0;
    VL_READMEM_N(true, 20, 1600, 0, std::string{"stimulus.mem"}
                 ,  &(vlSelfRef.dac_top_tb_mem__DOT__stim_memory)
                 , 0, ~0ULL);
    vlSelfRef.dac_top_tb_mem__DOT__f_log_out = VL_FOPEN_NN(
                                                           std::string{"top_dac_mem.csv"}
                                                           , 
                                                           std::string{"w"});
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.dac_top_tb_mem__DOT__f_log_out)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: dac_top_tb_mem.sv:77: Assertion failed in %Ndac_top_tb_mem: Failed to open log file: top_dac_mem.csv\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("dac_top_tb_mem.sv", 77, "", false);
    }
    VL_FWRITEF_NX(vlSelfRef.dac_top_tb_mem__DOT__f_log_out,"time_ps,active_channel,aout_active,expected_out\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "dac_top_tb_mem.sv", 
                                         81);
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid = 1U;
    dac_top_tb_mem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x640U, dac_top_tb_mem__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h7c5cba06__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge dac_top_tb_mem.clk)", 
                                                             "dac_top_tb_mem.sv", 
                                                             91);
        vlSelfRef.dac_top_tb_mem__DOT__log_enable = 1U;
        vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_stim 
            = ((0x63fU >= (0x7ffU & dac_top_tb_mem__DOT__unnamedblk1__DOT__i))
                ? vlSelfRef.dac_top_tb_mem__DOT__stim_memory
               [(0x7ffU & dac_top_tb_mem__DOT__unnamedblk1__DOT__i)]
                : 0U);
        vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__channel_from_mem 
            = (0xfU & (vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_stim 
                       >> 0x10U));
        vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__data_from_mem 
            = (0xffffU & vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_stim);
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U] 
            = Vdac_top_tb_mem__ConstPool__CONST_h9e67c271_0[7U];
        VL_ASSIGNSEL_WI(256,16,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__channel_from_mem), 4U)), vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata, vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__data_from_mem);
        vlSelfRef.dac_top_tb_mem__DOT__active_channel_for_logger 
            = vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__channel_from_mem;
        vlSelfRef.dac_top_tb_mem__DOT__data_16bit_for_logger 
            = vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__data_from_mem;
        dac_top_tb_mem__DOT__unnamedblk1__DOT__i = 
            ((IData)(1U) + dac_top_tb_mem__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid = 0U;
    vlSelfRef.dac_top_tb_mem__DOT__log_enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "dac_top_tb_mem.sv", 
                                         111);
    VL_WRITEF_NX("Test completed. Data logged to top_dac_mem.csv\n",0);
    VL_FCLOSE_I(vlSelfRef.dac_top_tb_mem__DOT__f_log_out); VL_FINISH_MT("dac_top_tb_mem.sv", 117, "");
}

VL_INLINE_OPT VlCoroutine Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__1(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.dac_top_tb_mem__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x48bULL, 
                                             nullptr, 
                                             "dac_top_tb_mem.sv", 
                                             43);
        vlSelfRef.dac_top_tb_mem__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x48bULL, 
                                             nullptr, 
                                             "dac_top_tb_mem.sv", 
                                             44);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_mem___024root___dump_triggers__act(Vdac_top_tb_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vdac_top_tb_mem___024root___eval_triggers__act(Vdac_top_tb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root___eval_triggers__act\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.dac_top_tb_mem__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dac_top_tb_mem__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.dac_top_tb_mem__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dac_top_tb_mem__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__dac_top_tb_mem__DOT__clk__0 
        = vlSelfRef.dac_top_tb_mem__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdac_top_tb_mem___024root___dump_triggers__act(vlSelf);
    }
#endif
}
