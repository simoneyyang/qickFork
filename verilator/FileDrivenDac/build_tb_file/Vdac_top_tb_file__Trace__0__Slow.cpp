// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vdac_top_tb_file__Syms.h"


VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_init_sub__TOP__0(Vdac_top_tb_file___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_init_sub__TOP__0\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("dac_top_tb_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+140,0,"N_DAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+140,0,"DAC_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+9,0,"s_axis_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+10,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("dac_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declDouble(c+41+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+12,0,"f_stim_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"f_log_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+14,0,"scanned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"time_ps_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+16,0,"channel_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17,0,"data_as_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+18,0,"data_16bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::SHORTINT, false,-1, 15,0);
    tracep->declDouble(c+19,0,"expected_out_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+21,0,"active_channel_for_logger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+22,0,"expected_out_for_logger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+24,0,"log_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+140,0,"N_DAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+9,0,"s_axis_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dac_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declDouble(c+41+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("internal_aout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declDouble(c+73+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+105,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+105,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+107,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+107,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+109,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+109,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+111,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+111,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+113,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+113,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+115,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+115,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+117,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+117,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+119,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+119,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+121,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+121,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+123,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+123,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+125,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+125,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+127,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+127,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+129,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+129,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+131,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+131,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+133,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+133,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+135,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+141,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+140,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+135,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_init_top(Vdac_top_tb_file___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_init_top\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdac_top_tb_file___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vdac_top_tb_file___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vdac_top_tb_file___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_register(Vdac_top_tb_file___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_register\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdac_top_tb_file___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdac_top_tb_file___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdac_top_tb_file___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdac_top_tb_file___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_const_0_sub_0(Vdac_top_tb_file___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_const_0\n"); );
    // Init
    Vdac_top_tb_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_file___024root*>(voidSelf);
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdac_top_tb_file___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_const_0_sub_0(Vdac_top_tb_file___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_const_0_sub_0\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+139,(0x100U),32);
    bufp->fullIData(oldp+140,(0x10U),32);
    bufp->fullDouble(oldp+141,(1.0));
}

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_full_0_sub_0(Vdac_top_tb_file___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_full_0\n"); );
    // Init
    Vdac_top_tb_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_file___024root*>(voidSelf);
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdac_top_tb_file___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_full_0_sub_0(Vdac_top_tb_file___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_file___024root__trace_full_0_sub_0\n"); );
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata),256);
    bufp->fullBit(oldp+9,(vlSelfRef.dac_top_tb_file__DOT__s_axis_tvalid));
    bufp->fullDouble(oldp+10,(vlSelfRef.dac_top_tb_file__DOT__vref));
    bufp->fullIData(oldp+12,(vlSelfRef.dac_top_tb_file__DOT__f_stim_in),32);
    bufp->fullIData(oldp+13,(vlSelfRef.dac_top_tb_file__DOT__f_log_out),32);
    bufp->fullIData(oldp+14,(vlSelfRef.dac_top_tb_file__DOT__scanned),32);
    bufp->fullIData(oldp+15,(vlSelfRef.dac_top_tb_file__DOT__time_ps_in),32);
    bufp->fullIData(oldp+16,(vlSelfRef.dac_top_tb_file__DOT__channel_j),32);
    bufp->fullIData(oldp+17,(vlSelfRef.dac_top_tb_file__DOT__data_as_int),32);
    bufp->fullSData(oldp+18,(vlSelfRef.dac_top_tb_file__DOT__data_16bit),16);
    bufp->fullDouble(oldp+19,(vlSelfRef.dac_top_tb_file__DOT__expected_out_in));
    bufp->fullIData(oldp+21,(vlSelfRef.dac_top_tb_file__DOT__active_channel_for_logger),32);
    bufp->fullDouble(oldp+22,(vlSelfRef.dac_top_tb_file__DOT__expected_out_for_logger));
    bufp->fullBit(oldp+24,(vlSelfRef.dac_top_tb_file__DOT__log_enable));
    bufp->fullSData(oldp+25,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[0U])),16);
    bufp->fullSData(oldp+26,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[5U])),16);
    bufp->fullSData(oldp+27,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[5U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+28,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[6U])),16);
    bufp->fullSData(oldp+29,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[6U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+30,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[7U])),16);
    bufp->fullSData(oldp+31,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[7U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+32,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[0U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+33,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[1U])),16);
    bufp->fullSData(oldp+34,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[1U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+35,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[2U])),16);
    bufp->fullSData(oldp+36,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[2U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+37,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[3U])),16);
    bufp->fullSData(oldp+38,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[3U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+39,((0xffffU & vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[4U])),16);
    bufp->fullSData(oldp+40,((vlSelfRef.dac_top_tb_file__DOT__s_axis_tdata[4U] 
                              >> 0x10U)),16);
    bufp->fullDouble(oldp+41,(vlSelfRef.dac_top_tb_file__DOT__dac_out[0]));
    bufp->fullDouble(oldp+43,(vlSelfRef.dac_top_tb_file__DOT__dac_out[1]));
    bufp->fullDouble(oldp+45,(vlSelfRef.dac_top_tb_file__DOT__dac_out[2]));
    bufp->fullDouble(oldp+47,(vlSelfRef.dac_top_tb_file__DOT__dac_out[3]));
    bufp->fullDouble(oldp+49,(vlSelfRef.dac_top_tb_file__DOT__dac_out[4]));
    bufp->fullDouble(oldp+51,(vlSelfRef.dac_top_tb_file__DOT__dac_out[5]));
    bufp->fullDouble(oldp+53,(vlSelfRef.dac_top_tb_file__DOT__dac_out[6]));
    bufp->fullDouble(oldp+55,(vlSelfRef.dac_top_tb_file__DOT__dac_out[7]));
    bufp->fullDouble(oldp+57,(vlSelfRef.dac_top_tb_file__DOT__dac_out[8]));
    bufp->fullDouble(oldp+59,(vlSelfRef.dac_top_tb_file__DOT__dac_out[9]));
    bufp->fullDouble(oldp+61,(vlSelfRef.dac_top_tb_file__DOT__dac_out[10]));
    bufp->fullDouble(oldp+63,(vlSelfRef.dac_top_tb_file__DOT__dac_out[11]));
    bufp->fullDouble(oldp+65,(vlSelfRef.dac_top_tb_file__DOT__dac_out[12]));
    bufp->fullDouble(oldp+67,(vlSelfRef.dac_top_tb_file__DOT__dac_out[13]));
    bufp->fullDouble(oldp+69,(vlSelfRef.dac_top_tb_file__DOT__dac_out[14]));
    bufp->fullDouble(oldp+71,(vlSelfRef.dac_top_tb_file__DOT__dac_out[15]));
    bufp->fullDouble(oldp+73,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[0]));
    bufp->fullDouble(oldp+75,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[1]));
    bufp->fullDouble(oldp+77,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[2]));
    bufp->fullDouble(oldp+79,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[3]));
    bufp->fullDouble(oldp+81,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[4]));
    bufp->fullDouble(oldp+83,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[5]));
    bufp->fullDouble(oldp+85,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[6]));
    bufp->fullDouble(oldp+87,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[7]));
    bufp->fullDouble(oldp+89,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[8]));
    bufp->fullDouble(oldp+91,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[9]));
    bufp->fullDouble(oldp+93,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[10]));
    bufp->fullDouble(oldp+95,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[11]));
    bufp->fullDouble(oldp+97,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[12]));
    bufp->fullDouble(oldp+99,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[13]));
    bufp->fullDouble(oldp+101,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[14]));
    bufp->fullDouble(oldp+103,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__internal_aout[15]));
    bufp->fullDouble(oldp+105,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+107,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+109,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+111,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+113,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+115,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+117,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+119,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+121,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+123,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+125,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+127,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+129,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+131,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+133,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+135,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullIData(oldp+137,(vlSelfRef.dac_top_tb_file__DOT__dut__DOT__unnamedblk1__DOT__j),32);
    bufp->fullBit(oldp+138,(vlSelfRef.dac_top_tb_file__DOT__clk));
}
