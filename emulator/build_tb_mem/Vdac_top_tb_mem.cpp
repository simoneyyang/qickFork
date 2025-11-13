// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdac_top_tb_mem__pch.h"

//============================================================
// Constructors

Vdac_top_tb_mem::Vdac_top_tb_mem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdac_top_tb_mem__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdac_top_tb_mem::Vdac_top_tb_mem(const char* _vcname__)
    : Vdac_top_tb_mem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdac_top_tb_mem::~Vdac_top_tb_mem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdac_top_tb_mem___024root___eval_debug_assertions(Vdac_top_tb_mem___024root* vlSelf);
#endif  // VL_DEBUG
void Vdac_top_tb_mem___024root___eval_static(Vdac_top_tb_mem___024root* vlSelf);
void Vdac_top_tb_mem___024root___eval_initial(Vdac_top_tb_mem___024root* vlSelf);
void Vdac_top_tb_mem___024root___eval_settle(Vdac_top_tb_mem___024root* vlSelf);
void Vdac_top_tb_mem___024root___eval(Vdac_top_tb_mem___024root* vlSelf);

void Vdac_top_tb_mem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdac_top_tb_mem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdac_top_tb_mem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdac_top_tb_mem___024root___eval_static(&(vlSymsp->TOP));
        Vdac_top_tb_mem___024root___eval_initial(&(vlSymsp->TOP));
        Vdac_top_tb_mem___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdac_top_tb_mem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdac_top_tb_mem::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdac_top_tb_mem::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdac_top_tb_mem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdac_top_tb_mem___024root___eval_final(Vdac_top_tb_mem___024root* vlSelf);

VL_ATTR_COLD void Vdac_top_tb_mem::final() {
    Vdac_top_tb_mem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdac_top_tb_mem::hierName() const { return vlSymsp->name(); }
const char* Vdac_top_tb_mem::modelName() const { return "Vdac_top_tb_mem"; }
unsigned Vdac_top_tb_mem::threads() const { return 1; }
void Vdac_top_tb_mem::prepareClone() const { contextp()->prepareClone(); }
void Vdac_top_tb_mem::atClone() const {
    contextp()->threadPoolpOnClone();
}
