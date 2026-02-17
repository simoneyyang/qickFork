# Options: tb_verilator, tb_siggen_dynamic_direct, tb_siggen_dynamic_routed
TOP_MODULE ?= tb_siggen_dynamic_routed

# Paths
PROJ_ROOT     = ../
FIRMWARE_DIR  = $(PROJ_ROOT)firmware
IP_SRC_DIR    = $(FIRMWARE_DIR)/ip/axis_signal_gen_v6/src
AXI_DIR       = $(FIRMWARE_DIR)/pulp_platform/axi
COM_VERIF_DIR = $(FIRMWARE_DIR)/pulp_platform/common_verification
# NEW: Define Common Cells Path
COMMON_CELLS_DIR = $(FIRMWARE_DIR)/pulp_platform/common_cells

# -------------------------------------------------------------------------
# Source File Groups
# -------------------------------------------------------------------------

# 1. Core Hardware
SIGGEN_SOURCES = \
    $(wildcard $(IP_SRC_DIR)/*.v) \
    $(wildcard $(IP_SRC_DIR)/*.sv) \
    $(wildcard $(FIRMWARE_DIR)/openhdl/*.sv) \
    $(wildcard $(FIRMWARE_DIR)/ip/sig_gen_dds/src/*.sv)

# 2. AXI & Verification Infrastructure
# NEW: Added $(wildcard $(COMMON_CELLS_DIR)/src/*.sv) to catch addr_decode and others
AXI_LIB_SOURCES = \
    $(COM_VERIF_DIR)/src/rand_id_queue.sv \
    $(wildcard $(AXI_DIR)/src/*.sv) \
    $(wildcard $(COMMON_CELLS_DIR)/src/*.sv)

# 3. Interconnect Hardware
AXI_XBAR_SOURCES = \
    ./verif/axi_lite_interconnect_wrapper.sv

# -------------------------------------------------------------------------
# Dynamic Source Selection
# -------------------------------------------------------------------------

ifeq ($(TOP_MODULE),tb_siggen_dynamic_routed)
    VERILOG_SOURCES = $(SIGGEN_SOURCES) $(AXI_VIP_SOURCES) $(AXI_XBAR_SOURCES) $(AXI_LIB_SOURCES) ./verif/$(TOP_MODULE).sv
else
    VERILOG_SOURCES = $(SIGGEN_SOURCES) $(AXI_LIB_SOURCES) ./verif/$(TOP_MODULE).sv
endif

# -------------------------------------------------------------------------
# Build & Run Configuration
# -------------------------------------------------------------------------

# Flags
# Added -I$(COMMON_CELLS_DIR)/include so `include "common_cells/..." works
VERILATOR_FLAGS = --binary --exe --build -j 0 -Wall --trace-vcd --Wno-fatal \
                  -Wno-DECLFILENAME -Wno-PINCONNECTEMPTY -Wno-VARHIDDEN \
                  -Wno-TIMESCALEMOD -Wno-EOFNEWLINE -Wno-WIDTH \
                  -Wno-PINMISSING -Wno-BADVLTPRAGMA -Wno-CONSTRAINTIGN \
                  -I$(AXI_DIR)/include \
                  -I$(COM_VERIF_DIR)/include \
                  -I$(COMMON_CELLS_DIR)/include \
                  -I$(IP_SRC_DIR)

OBJ_DIR = obj_dir

verilate:
	verilator $(VERILATOR_FLAGS) --top-module $(TOP_MODULE) $(VERILOG_SOURCES)

sim: 
	cp -f $(FIRMWARE_DIR)/ip/sig_gen_dds/LUT_generator/*.hex .
	./$(OBJ_DIR)/V$(TOP_MODULE) +AXI_REPLAY=./axi_replay.dat

wave:
	gtkwave $(OBJ_DIR)/waveform_$(if $(filter tb_siggen_dynamic_routed,$(TOP_MODULE)),dynamic_routed,dynamic).vcd

clean:
	rm -rf $(OBJ_DIR)
	rm -f *.o *.vcd *.csv *.hex