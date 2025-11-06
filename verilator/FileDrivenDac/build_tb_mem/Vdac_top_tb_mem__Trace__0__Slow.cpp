// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vdac_top_tb_mem__Syms.h"


VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_init_sub__TOP__0(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_init_sub__TOP__0\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("dac_top_tb_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"N_DAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"DAC_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+138,0,"STIM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+139,0,"STIM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+9,0,"s_axis_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+10,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("dac_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declDouble(c+36+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+12,0,"f_log_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"active_channel_for_logger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+14,0,"data_16bit_for_logger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::SHORTINT, false,-1, 15,0);
    tracep->declDouble(c+68,0,"expected_out_for_logger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+15,0,"log_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+136,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+137,0,"N_DAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+9,0,"s_axis_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dac_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declDouble(c+36+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("internal_aout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declDouble(c+70+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+102,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+102,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+104,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+104,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+106,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+106,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+108,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+108,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+110,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+110,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+112,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+112,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+114,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+114,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+116,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+116,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+118,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+118,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+120,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+120,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+122,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+122,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+124,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+124,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+126,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+126,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+128,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+128,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+130,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+130,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dac_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"s_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declDouble(c+132,0,"aout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+140,0,"vref",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+137,0,"bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+132,0,"aout_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"current_stim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+34,0,"channel_from_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"data_from_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_init_top(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_init_top\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdac_top_tb_mem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vdac_top_tb_mem___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vdac_top_tb_mem___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_register(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_register\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdac_top_tb_mem___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdac_top_tb_mem___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdac_top_tb_mem___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdac_top_tb_mem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_const_0_sub_0(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_const_0\n"); );
    // Init
    Vdac_top_tb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_mem___024root*>(voidSelf);
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdac_top_tb_mem___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_const_0_sub_0(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_const_0_sub_0\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+136,(0x100U),32);
    bufp->fullIData(oldp+137,(0x10U),32);
    bufp->fullIData(oldp+138,(0x640U),32);
    bufp->fullIData(oldp+139,(0x14U),32);
    bufp->fullDouble(oldp+140,(1.0));
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_full_0_sub_0(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_full_0\n"); );
    // Init
    Vdac_top_tb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_mem___024root*>(voidSelf);
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdac_top_tb_mem___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdac_top_tb_mem___024root__trace_full_0_sub_0(Vdac_top_tb_mem___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdac_top_tb_mem___024root__trace_full_0_sub_0\n"); );
    Vdac_top_tb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata),256);
    bufp->fullBit(oldp+9,(vlSelfRef.dac_top_tb_mem__DOT__s_axis_tvalid));
    bufp->fullDouble(oldp+10,(vlSelfRef.dac_top_tb_mem__DOT__vref));
    bufp->fullIData(oldp+12,(vlSelfRef.dac_top_tb_mem__DOT__f_log_out),32);
    bufp->fullIData(oldp+13,(vlSelfRef.dac_top_tb_mem__DOT__active_channel_for_logger),32);
    bufp->fullSData(oldp+14,(vlSelfRef.dac_top_tb_mem__DOT__data_16bit_for_logger),16);
    bufp->fullBit(oldp+15,(vlSelfRef.dac_top_tb_mem__DOT__log_enable));
    bufp->fullSData(oldp+16,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U])),16);
    bufp->fullSData(oldp+17,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U])),16);
    bufp->fullSData(oldp+18,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[5U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+19,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U])),16);
    bufp->fullSData(oldp+20,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[6U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+21,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U])),16);
    bufp->fullSData(oldp+22,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[7U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+23,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[0U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+24,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U])),16);
    bufp->fullSData(oldp+25,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[1U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+26,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U])),16);
    bufp->fullSData(oldp+27,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[2U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+28,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U])),16);
    bufp->fullSData(oldp+29,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[3U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+30,((0xffffU & vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U])),16);
    bufp->fullSData(oldp+31,((vlSelfRef.dac_top_tb_mem__DOT__s_axis_tdata[4U] 
                              >> 0x10U)),16);
    bufp->fullIData(oldp+32,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+33,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_stim),20);
    bufp->fullCData(oldp+34,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__channel_from_mem),4);
    bufp->fullSData(oldp+35,(vlSelfRef.dac_top_tb_mem__DOT__unnamedblk1__DOT__unnamedblk2__DOT__data_from_mem),16);
    bufp->fullDouble(oldp+36,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[0]));
    bufp->fullDouble(oldp+38,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[1]));
    bufp->fullDouble(oldp+40,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[2]));
    bufp->fullDouble(oldp+42,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[3]));
    bufp->fullDouble(oldp+44,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[4]));
    bufp->fullDouble(oldp+46,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[5]));
    bufp->fullDouble(oldp+48,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[6]));
    bufp->fullDouble(oldp+50,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[7]));
    bufp->fullDouble(oldp+52,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[8]));
    bufp->fullDouble(oldp+54,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[9]));
    bufp->fullDouble(oldp+56,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[10]));
    bufp->fullDouble(oldp+58,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[11]));
    bufp->fullDouble(oldp+60,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[12]));
    bufp->fullDouble(oldp+62,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[13]));
    bufp->fullDouble(oldp+64,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[14]));
    bufp->fullDouble(oldp+66,(vlSelfRef.dac_top_tb_mem__DOT__dac_out[15]));
    bufp->fullDouble(oldp+68,(vlSelfRef.dac_top_tb_mem__DOT__expected_out_for_logger));
    bufp->fullDouble(oldp+70,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[0]));
    bufp->fullDouble(oldp+72,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[1]));
    bufp->fullDouble(oldp+74,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[2]));
    bufp->fullDouble(oldp+76,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[3]));
    bufp->fullDouble(oldp+78,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[4]));
    bufp->fullDouble(oldp+80,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[5]));
    bufp->fullDouble(oldp+82,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[6]));
    bufp->fullDouble(oldp+84,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[7]));
    bufp->fullDouble(oldp+86,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[8]));
    bufp->fullDouble(oldp+88,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[9]));
    bufp->fullDouble(oldp+90,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[10]));
    bufp->fullDouble(oldp+92,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[11]));
    bufp->fullDouble(oldp+94,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[12]));
    bufp->fullDouble(oldp+96,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[13]));
    bufp->fullDouble(oldp+98,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[14]));
    bufp->fullDouble(oldp+100,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__internal_aout[15]));
    bufp->fullDouble(oldp+102,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__0__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+104,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__10__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+106,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__11__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+108,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__12__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+110,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__13__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+112,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__14__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+114,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__15__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+116,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__1__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+118,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__2__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+120,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__3__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+122,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__4__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+124,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__5__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+126,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__6__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+128,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__7__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+130,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__8__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullDouble(oldp+132,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__dac_gen__BRA__9__KET____DOT__dac_inst__DOT__aout_reg));
    bufp->fullIData(oldp+134,(vlSelfRef.dac_top_tb_mem__DOT__dut__DOT__unnamedblk1__DOT__j),32);
    bufp->fullBit(oldp+135,(vlSelfRef.dac_top_tb_mem__DOT__clk));
}
