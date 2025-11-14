TOP_MODULE = tb_verilator

TOP_MODULE_PARAMS = 
# -param EXAMPLE1=32 -param EXAMPLE2=16 

FIRMWARE_DIR = ../../../../

AXI_DIR = $(FIRMWARE_DIR)/pulp_platform/axi/
COM_VERIF_DIR = $(FIRMWARE_DIR)/pulp_platform/common_verification/

VERILOG_SOURCES = $(wildcard ../*.v) $(wildcard ../*.sv) $(wildcard $(FIRMWARE_DIR)/openhdl/*.sv) $(wildcard $(FIRMWARE_DIR)/ip/sig_gen_dds/src/*.sv) $(COM_VERIF_DIR)/src/rand_id_queue.sv $(AXI_DIR)/src/axi_intf.sv $(AXI_DIR)/src/axi_pkg.sv $(AXI_DIR)/src/axi_test.sv ./tb_verilator.sv

#$(wildcard ../../../hdl/*.sv)

VERILATOR_FLAGS = --binary --exe --build -j 0 -Wall --trace-vcd --Wno-fatal -I$(AXI_DIR)/include/

OBJ_DIR = obj_dir

wave:
	gtkwave $(OBJ_DIR)/waveform.vcd

sim: 
	cp -f $(FIRMWARE_DIR)/ip/sig_gen_dds/LUT_generator/*.hex .
	./$(OBJ_DIR)/V$(TOP_MODULE)

verilate: 
	verilator $(VERILATOR_FLAGS) --top-module $(TOP_MODULE) $(VERILOG_SOURCES)

clean:
	rm -rf $(OBJ_DIR)
	rm -f trace.vcd
	rm -f *.o