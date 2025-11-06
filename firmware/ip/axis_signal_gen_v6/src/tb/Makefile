TOP_MODULE = tb_verilator

TOP_MODULE_PARAMS = 
# -param EXAMPLE1=32 -param EXAMPLE2=16 

FIRMWARE_DIR = ../../../../

AXI_DIR = # TODO

VERILOG_SOURCES = ./tb_verilator.sv $(wildcard ../*.v) $(wildcard ../*.sv) \
                                    $(wildcard $(FIRMWARE_DIR)/openhdl/*.sv) \
									$(wildcard $(FIRMWARE_DIR)/ip/sig_gen_dds/src/*.sv) \ 
									$(wildcard $(AXI_DIR)/src/*.sv) \

#$(wildcard ../../../hdl/*.sv)

VERILATOR_FLAGS = --binary --exe --build -j 0 -Wall --trace-vcd --Wno-fatal

OBJ_DIR = obj_dir

wave:
	gtkwave trace.vcd

sim: 
	./obj_dir/V$(TOP_MODULE)

verilate: 
	verilator $(VERILATOR_FLAGS) --top-module $(TOP_MODULE) $(VERILOG_SOURCES)

clean:
	rm -rf $(OBJ_DIR)
	rm -f trace.vcd
	rm -f *.o