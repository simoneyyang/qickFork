// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdac_top_tb_mem__pch.h"
#include "Vdac_top_tb_mem.h"
#include "Vdac_top_tb_mem___024root.h"

// FUNCTIONS
Vdac_top_tb_mem__Syms::~Vdac_top_tb_mem__Syms()
{
}

Vdac_top_tb_mem__Syms::Vdac_top_tb_mem__Syms(VerilatedContext* contextp, const char* namep, Vdac_top_tb_mem* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(292);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
