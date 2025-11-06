// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdac_top_tb_file__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vdac_top_tb_file::Vdac_top_tb_file(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdac_top_tb_file__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdac_top_tb_file::Vdac_top_tb_file(const char* _vcname__)
    : Vdac_top_tb_file(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdac_top_tb_file::~Vdac_top_tb_file() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdac_top_tb_file___024root___eval_debug_assertions(Vdac_top_tb_file___024root* vlSelf);
#endif  // VL_DEBUG
void Vdac_top_tb_file___024root___eval_static(Vdac_top_tb_file___024root* vlSelf);
void Vdac_top_tb_file___024root___eval_initial(Vdac_top_tb_file___024root* vlSelf);
void Vdac_top_tb_file___024root___eval_settle(Vdac_top_tb_file___024root* vlSelf);
void Vdac_top_tb_file___024root___eval(Vdac_top_tb_file___024root* vlSelf);

void Vdac_top_tb_file::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdac_top_tb_file::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdac_top_tb_file___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdac_top_tb_file___024root___eval_static(&(vlSymsp->TOP));
        Vdac_top_tb_file___024root___eval_initial(&(vlSymsp->TOP));
        Vdac_top_tb_file___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdac_top_tb_file___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdac_top_tb_file::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vdac_top_tb_file::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vdac_top_tb_file::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdac_top_tb_file::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdac_top_tb_file::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdac_top_tb_file___024root___eval_final(Vdac_top_tb_file___024root* vlSelf);

VL_ATTR_COLD void Vdac_top_tb_file::final() {
    Vdac_top_tb_file___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdac_top_tb_file::hierName() const { return vlSymsp->name(); }
const char* Vdac_top_tb_file::modelName() const { return "Vdac_top_tb_file"; }
unsigned Vdac_top_tb_file::threads() const { return 1; }
void Vdac_top_tb_file::prepareClone() const { contextp()->prepareClone(); }
void Vdac_top_tb_file::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdac_top_tb_file::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdac_top_tb_file___024root__trace_decl_types(VerilatedFst* tracep);

void Vdac_top_tb_file___024root__trace_init_top(Vdac_top_tb_file___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdac_top_tb_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdac_top_tb_file___024root*>(voidSelf);
    Vdac_top_tb_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdac_top_tb_file___024root__trace_decl_types(tracep);
    Vdac_top_tb_file___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdac_top_tb_file___024root__trace_register(Vdac_top_tb_file___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vdac_top_tb_file::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdac_top_tb_file::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdac_top_tb_file___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
