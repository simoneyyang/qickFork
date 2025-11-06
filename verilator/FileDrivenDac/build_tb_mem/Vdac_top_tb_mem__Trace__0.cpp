// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vdac_top_tb_mem__Syms.h"


void Vdac_top_tb_mem___024root__trace_chg_0_sub_0(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vdac_top_tb_mem___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_chg_0\n"); );
    // Init
    Vdac_top_tb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_mem___024root*>(voidSelf);
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdac_top_tb_mem___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdac_top_tb_mem___024root__trace_chg_0_sub_0(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_chg_0_sub_0\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgWData(oldp+0,(vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata),256);
        bufp->chgBit(oldp+8,(vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid));
        bufp->chgDouble(oldp+9,(vlSelfRef.dac_top_tb_mem__DOT__vref));
        bufp->chgIData(oldp+11,(vlSelfRef.dac_top_tb_mem__DOT__f_log_out),32);
        bufp->chgIData(oldp+12,(vlSelfRef.dac_top_tb_mem__DOT__active_channel_for_logger),32);
        bufp->chgSData(oldp+13,(vlSelfRef.dac_top_tb_mem__DOT__data_16bit_for_logger),16);
        bufp->chgBit(oldp+14,(vlSelfRef.dac_top_tb_mem__DOT__log_enable));
        bufp->chgSData(oldp+15,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U])),16);
        bufp->chgSData(oldp+16,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U])),16);
        bufp->chgSData(oldp+17,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+18,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U])),16);
        bufp->chgSData(oldp+19,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+20,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U])),16);
        bufp->chgSData(oldp+21,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+22,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+23,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U])),16);
        bufp->chgSData(oldp+24,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+25,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U])),16);
        bufp->chgSData(oldp+26,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+27,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U])),16);
        bufp->chgSData(oldp+28,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+29,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U])),16);
        bufp->chgSData(oldp+30,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U] 
                                 >> 0x10U)),16);
        bufp->chgIData(oldp+31,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+32,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_stim),20);
        bufp->chgCData(oldp+33,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__channel_from_mem),4);
        bufp->chgSData(oldp+34,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__data_from_mem),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgDouble(oldp+35,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[0]));
        bufp->chgDouble(oldp+37,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[1]));
        bufp->chgDouble(oldp+39,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[2]));
        bufp->chgDouble(oldp+41,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[3]));
        bufp->chgDouble(oldp+43,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[4]));
        bufp->chgDouble(oldp+45,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[5]));
        bufp->chgDouble(oldp+47,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[6]));
        bufp->chgDouble(oldp+49,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[7]));
        bufp->chgDouble(oldp+51,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[8]));
        bufp->chgDouble(oldp+53,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[9]));
        bufp->chgDouble(oldp+55,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[10]));
        bufp->chgDouble(oldp+57,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[11]));
        bufp->chgDouble(oldp+59,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[12]));
        bufp->chgDouble(oldp+61,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[13]));
        bufp->chgDouble(oldp+63,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[14]));
        bufp->chgDouble(oldp+65,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[15]));
        bufp->chgDouble(oldp+67,(vlSelfRef.dac_top_tb_mem__DOT__expected_out_for_logger));
        bufp->chgDouble(oldp+69,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0]));
        bufp->chgDouble(oldp+71,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[1]));
        bufp->chgDouble(oldp+73,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[2]));
        bufp->chgDouble(oldp+75,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[3]));
        bufp->chgDouble(oldp+77,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[4]));
        bufp->chgDouble(oldp+79,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[5]));
        bufp->chgDouble(oldp+81,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[6]));
        bufp->chgDouble(oldp+83,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[7]));
        bufp->chgDouble(oldp+85,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[8]));
        bufp->chgDouble(oldp+87,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[9]));
        bufp->chgDouble(oldp+89,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[10]));
        bufp->chgDouble(oldp+91,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[11]));
        bufp->chgDouble(oldp+93,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[12]));
        bufp->chgDouble(oldp+95,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[13]));
        bufp->chgDouble(oldp+97,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[14]));
        bufp->chgDouble(oldp+99,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[15]));
        bufp->chgDouble(oldp+101,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+103,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+105,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+107,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+109,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+111,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+113,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+115,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+117,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+119,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+121,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+123,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+125,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+127,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+129,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+131,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgIData(oldp+133,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__unnamedblk1__DOT__j),32);
    }
    bufp->chgBit(oldp+134,(vlSelfRef.dac_top_tb_mem__DOT__clk));
}

void Vdac_top_tb_mem___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_cleanup\n"); );
    // Init
    Vdac_top_tb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_mem___024root*>(voidSelf);
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
