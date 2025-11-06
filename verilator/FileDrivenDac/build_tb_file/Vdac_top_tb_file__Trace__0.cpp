// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vdac_top_tb_file__Syms.h"


void Vdac_top_tb_file___024root__trace_chg_0_sub_0(Vdac_top_tb_file___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vdac_top_tb_file___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_chg_0\n"); );
    // Init
    Vdac_top_tb_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_file___024root*>(voidSelf);
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdac_top_tb_file___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdac_top_tb_file___024root__trace_chg_0_sub_0(Vdac_top_tb_file___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_chg_0_sub_0\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgWData(oldp+0,(vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata),256);
        bufp->chgBit(oldp+8,(vlSelfRef.dac_top_tb_file__DOT__s_axis_tvalid));
        bufp->chgDouble(oldp+9,(vlSelfRef.dac_top_tb_file__DOT__vref));
        bufp->chgIData(oldp+11,(vlSelfRef.dac_top_tb_file__DOT__f_stim_in),32);
        bufp->chgIData(oldp+12,(vlSelfRef.dac_top_tb_file__DOT__f_log_out),32);
        bufp->chgIData(oldp+13,(vlSelfRef.dac_top_tb_file__DOT__scanned),32);
        bufp->chgIData(oldp+14,(vlSelfRef.dac_top_tb_file__DOT__time_ps_in),32);
        bufp->chgIData(oldp+15,(vlSelfRef.dac_top_tb_file__DOT__channel_j),32);
        bufp->chgIData(oldp+16,(vlSelfRef.dac_top_tb_file__DOT__data_as_int),32);
        bufp->chgSData(oldp+17,(vlSelfRef.dac_top_tb_file__DOT__data_16bit),16);
        bufp->chgDouble(oldp+18,(vlSelfRef.dac_top_tb_file__DOT__expected_out_in));
        bufp->chgIData(oldp+20,(vlSelfRef.dac_top_tb_file__DOT__active_channel_for_logger),32);
        bufp->chgDouble(oldp+21,(vlSelfRef.dac_top_tb_file__DOT__expected_out_for_logger));
        bufp->chgBit(oldp+23,(vlSelfRef.dac_top_tb_file__DOT__log_enable));
        bufp->chgSData(oldp+24,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[0U])),16);
        bufp->chgSData(oldp+25,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[5U])),16);
        bufp->chgSData(oldp+26,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[5U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+27,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[6U])),16);
        bufp->chgSData(oldp+28,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[6U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+29,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[7U])),16);
        bufp->chgSData(oldp+30,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[7U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+31,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[0U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+32,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[1U])),16);
        bufp->chgSData(oldp+33,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+34,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[2U])),16);
        bufp->chgSData(oldp+35,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[2U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+36,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[3U])),16);
        bufp->chgSData(oldp+37,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[3U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+38,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[4U])),16);
        bufp->chgSData(oldp+39,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[4U] 
                                 >> 0x10U)),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgDouble(oldp+40,(vlSelfRef.dac_top_tb_file__DOT__dac_out[0]));
        bufp->chgDouble(oldp+42,(vlSelfRef.dac_top_tb_file__DOT__dac_out[1]));
        bufp->chgDouble(oldp+44,(vlSelfRef.dac_top_tb_file__DOT__dac_out[2]));
        bufp->chgDouble(oldp+46,(vlSelfRef.dac_top_tb_file__DOT__dac_out[3]));
        bufp->chgDouble(oldp+48,(vlSelfRef.dac_top_tb_file__DOT__dac_out[4]));
        bufp->chgDouble(oldp+50,(vlSelfRef.dac_top_tb_file__DOT__dac_out[5]));
        bufp->chgDouble(oldp+52,(vlSelfRef.dac_top_tb_file__DOT__dac_out[6]));
        bufp->chgDouble(oldp+54,(vlSelfRef.dac_top_tb_file__DOT__dac_out[7]));
        bufp->chgDouble(oldp+56,(vlSelfRef.dac_top_tb_file__DOT__dac_out[8]));
        bufp->chgDouble(oldp+58,(vlSelfRef.dac_top_tb_file__DOT__dac_out[9]));
        bufp->chgDouble(oldp+60,(vlSelfRef.dac_top_tb_file__DOT__dac_out[10]));
        bufp->chgDouble(oldp+62,(vlSelfRef.dac_top_tb_file__DOT__dac_out[11]));
        bufp->chgDouble(oldp+64,(vlSelfRef.dac_top_tb_file__DOT__dac_out[12]));
        bufp->chgDouble(oldp+66,(vlSelfRef.dac_top_tb_file__DOT__dac_out[13]));
        bufp->chgDouble(oldp+68,(vlSelfRef.dac_top_tb_file__DOT__dac_out[14]));
        bufp->chgDouble(oldp+70,(vlSelfRef.dac_top_tb_file__DOT__dac_out[15]));
        bufp->chgDouble(oldp+72,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[0]));
        bufp->chgDouble(oldp+74,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[1]));
        bufp->chgDouble(oldp+76,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[2]));
        bufp->chgDouble(oldp+78,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[3]));
        bufp->chgDouble(oldp+80,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[4]));
        bufp->chgDouble(oldp+82,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[5]));
        bufp->chgDouble(oldp+84,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[6]));
        bufp->chgDouble(oldp+86,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[7]));
        bufp->chgDouble(oldp+88,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[8]));
        bufp->chgDouble(oldp+90,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[9]));
        bufp->chgDouble(oldp+92,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[10]));
        bufp->chgDouble(oldp+94,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[11]));
        bufp->chgDouble(oldp+96,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[12]));
        bufp->chgDouble(oldp+98,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[13]));
        bufp->chgDouble(oldp+100,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[14]));
        bufp->chgDouble(oldp+102,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[15]));
        bufp->chgDouble(oldp+104,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+106,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+108,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+110,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+112,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+114,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+116,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+118,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+120,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+122,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+124,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+126,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+128,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+130,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+132,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgDouble(oldp+134,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg));
        bufp->chgIData(oldp+136,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__unnamedblk1__DOT__j),32);
    }
    bufp->chgBit(oldp+137,(vlSelfRef.dac_top_tb_file__DOT__clk));
}

void Vdac_top_tb_file___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_cleanup\n"); );
    // Init
    Vdac_top_tb_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_file___024root*>(voidSelf);
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
