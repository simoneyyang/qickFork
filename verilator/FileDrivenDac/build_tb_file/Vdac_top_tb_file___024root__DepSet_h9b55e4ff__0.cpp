// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdac_top_tb_file.h for the primary calling header

#include "Vdac_top_tb_file__pch.h"
#include "Vdac_top_tb_file__Syms.h"
#include "Vdac_top_tb_file___024root.h"

extern const VlWide<8>/*255:0*/ Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT VlCoroutine Vdac_top_tb_file___024root___eval_initial__TOP__Vtiming__0(Vdac_top_tb_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x61766573U;
    __Vtemp_1[2U] = 0x77U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[0U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[1U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[2U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[3U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[4U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[5U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[6U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[7U] 
        = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tvalid = 0U;
    vlSelfRef.dac_top_tb_file__DOT__log_enable = 0U;
    vlSelfRef.dac_top_tb_file__DOT__vref = 1.0;
    vlSelfRef.dac_top_tb_file__DOT__f_stim_in = VL_FOPEN_NN(
                                                            std::string{"stimulus.csv"}
                                                            , 
                                                            std::string{"r"});
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.dac_top_tb_file__DOT__f_stim_in)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: dac_top_tb_file.sv:84: Assertion failed in %Ndac_top_tb_file: Failed to open stimulus file: stimulus.csv\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("dac_top_tb_file.sv", 84, "", false);
    }
    vlSelfRef.dac_top_tb_file__DOT__f_log_out = VL_FOPEN_NN(
                                                            std::string{"top_dac_file.csv"}
                                                            , 
                                                            std::string{"w"});
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.dac_top_tb_file__DOT__f_log_out)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: dac_top_tb_file.sv:90: Assertion failed in %Ndac_top_tb_file: Failed to open log file: top_dac_file.csv\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("dac_top_tb_file.sv", 90, "", false);
    }
    VL_FWRITEF_NX(vlSelfRef.dac_top_tb_file__DOT__f_log_out,"time_ps,active_channel,aout_active,expected_out\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "dac_top_tb_file.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tvalid = 1U;
    (void)VL_FGETS_NI(vlSelfRef.dac_top_tb_file__DOT__line, vlSelfRef.dac_top_tb_file__DOT__f_stim_in);
    while ((0U != VL_FGETS_NI(vlSelfRef.dac_top_tb_file__DOT__line, vlSelfRef.dac_top_tb_file__DOT__f_stim_in))) {
        co_await vlSelfRef.__VtrigSched_he962f0c8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge dac_top_tb_file.clk)", 
                                                             "dac_top_tb_file.sv", 
                                                             107);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.dac_top_tb_file__DOT__log_enable = 0U;
        while ((VL_LTS_III(32, 0U, VL_LEN_IN(vlSelfRef.dac_top_tb_file__DOT__line)) 
                & ((0xaU == VL_GETC_N(vlSelfRef.dac_top_tb_file__DOT__line,
                                      (VL_LEN_IN(vlSelfRef.dac_top_tb_file__DOT__line) 
                                       - (IData)(1U)))) 
                   | (0xdU == VL_GETC_N(vlSelfRef.dac_top_tb_file__DOT__line,
                                        (VL_LEN_IN(vlSelfRef.dac_top_tb_file__DOT__line) 
                                         - (IData)(1U))))))) {
            vlSelfRef.dac_top_tb_file__DOT__line = 
                VL_SUBSTR_N(vlSelfRef.dac_top_tb_file__DOT__line,0U,
                            (VL_LEN_IN(vlSelfRef.dac_top_tb_file__DOT__line) 
                             - (IData)(2U)));
        }
        vlSelfRef.dac_top_tb_file__DOT__scanned = VL_SSCANF_INNX(64,vlSelfRef.dac_top_tb_file__DOT__line,"%#,%#,%#,%f",0,
                                                                 32,
                                                                 &(vlSelfRef.dac_top_tb_file__DOT__time_ps_in),
                                                                 32,
                                                                 &(vlSelfRef.dac_top_tb_file__DOT__channel_j),
                                                                 32,
                                                                 &(vlSelfRef.dac_top_tb_file__DOT__data_as_int),
                                                                 64,
                                                                 &(vlSelfRef.dac_top_tb_file__DOT__expected_out_in)) ;
        if (VL_UNLIKELY(((4U != vlSelfRef.dac_top_tb_file__DOT__scanned)))) {
            VL_WRITEF_NX("Warning: Skipping malformed line (scanned != 4): %@\n",0,
                         -1,&(vlSelfRef.dac_top_tb_file__DOT__line));
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[0U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[1U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[2U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[3U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[4U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[5U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[6U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[7U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[7U];
        } else {
            vlSelfRef.dac_top_tb_file__DOT__data_16bit 
                = (0xffffU & vlSelfRef.dac_top_tb_file__DOT__data_as_int);
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[0U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[1U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[2U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[3U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[4U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[5U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[6U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[7U] 
                = Vdac_top_tb_file__ConstPool__CONST_h9e67c271_0[7U];
            VL_ASSIGNSEL_WI(256,16,(0xffU & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.dac_top_tb_file__DOT__channel_j)), vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata, vlSelfRef.dac_top_tb_file__DOT__data_16bit);
            vlSelfRef.dac_top_tb_file__DOT__active_channel_for_logger 
                = vlSelfRef.dac_top_tb_file__DOT__channel_j;
            vlSelfRef.dac_top_tb_file__DOT__expected_out_for_logger 
                = vlSelfRef.dac_top_tb_file__DOT__expected_out_in;
            vlSelfRef.dac_top_tb_file__DOT__log_enable = 1U;
        }
    }
    vlSelfRef.dac_top_tb_file__DOT__s_axis_tvalid = 0U;
    vlSelfRef.dac_top_tb_file__DOT__log_enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "dac_top_tb_file.sv", 
                                         139);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test completed. Data logged to top_dac_file.csv\n",0);
    VL_FCLOSE_I(vlSelfRef.dac_top_tb_file__DOT__f_stim_in); VL_FCLOSE_I(vlSelfRef.dac_top_tb_file__DOT__f_log_out); VL_FINISH_MT("dac_top_tb_file.sv", 146, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vdac_top_tb_file___024root___eval_initial__TOP__Vtiming__1(Vdac_top_tb_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.dac_top_tb_file__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x48bULL, 
                                             nullptr, 
                                             "dac_top_tb_file.sv", 
                                             55);
        vlSelfRef.dac_top_tb_file__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x48bULL, 
                                             nullptr, 
                                             "dac_top_tb_file.sv", 
                                             56);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdac_top_tb_file___024root___dump_triggers__act(Vdac_top_tb_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vdac_top_tb_file___024root___eval_triggers__act(Vdac_top_tb_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root___eval_triggers__act\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.dac_top_tb_file__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dac_top_tb_file__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.dac_top_tb_file__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dac_top_tb_file__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__dac_top_tb_file__DOT__clk__0 
        = vlSelfRef.dac_top_tb_file__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdac_top_tb_file___024root___dump_triggers__act(vlSelf);
    }
#endif
}
