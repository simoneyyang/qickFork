// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDAC_TOP_TB_MEM__SYMS_H_
#define VERILATED_VDAC_TOP_TB_MEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdac_top_tb_mem.h"

// INCLUDE MODULE CLASSES
#include "Vdac_top_tb_mem___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdac_top_tb_mem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdac_top_tb_mem* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdac_top_tb_mem___024root      TOP;

    // CONSTRUCTORS
    Vdac_top_tb_mem__Syms(VerilatedContext* contextp, const char* namep, Vdac_top_tb_mem* modelp);
    ~Vdac_top_tb_mem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
