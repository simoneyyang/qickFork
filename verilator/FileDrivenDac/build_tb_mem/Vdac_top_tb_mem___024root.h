// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdac_top_tb_mem.h for the primary calling header

#ifndef VERILATED_VDAC_TOP_TB_MEM___024ROOT_H_
#define VERILATED_VDAC_TOP_TB_MEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdac_top_tb_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdac_top_tb_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ dac_top_tb_mem__DOT__clk;
    CData/*0:0*/ dac_top_tb_mem__DOT__s_axis_tvalid;
    CData/*0:0*/ dac_top_tb_mem__DOT__log_enable;
    CData/*3:0*/ dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__channel_from_mem;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dac_top_tb_mem__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ dac_top_tb_mem__DOT__data_16bit_for_logger;
    SData/*15:0*/ dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__data_from_mem;
    VlWide<8>/*255:0*/ dac_top_tb_mem__DOT__s_axis_tdata;
    IData/*31:0*/ dac_top_tb_mem__DOT__f_log_out;
    IData/*31:0*/ dac_top_tb_mem__DOT__active_channel_for_logger;
    IData/*31:0*/ dac_top_tb_mem__DOT__unnamedblk1__DOT__i;
    IData/*19:0*/ dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_stim;
    IData/*31:0*/ dac_top_tb_mem__DOT__dut__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*19:0*/, 1600> dac_top_tb_mem__DOT__stim_memory;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    double dac_top_tb_mem__DOT__vref;
    double dac_top_tb_mem__DOT__expected_out_for_logger;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg;
    double dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7c5cba06__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;
    VlUnpacked<double, 16> dac_top_tb_mem__DOT__dac_out;
    VlUnpacked<double, 16> dac_top_tb_mem__DOT__dut__DOT__internal_aout;

    // INTERNAL VARIABLES
    Vdac_top_tb_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdac_top_tb_mem___024root(Vdac_top_tb_mem__Syms* symsp, const char* v__name);
    ~Vdac_top_tb_mem___024root();
    VL_UNCOPYABLE(Vdac_top_tb_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
