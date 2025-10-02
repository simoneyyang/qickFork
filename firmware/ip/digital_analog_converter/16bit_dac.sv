// HMC HRL Clinic 25-26

// system verilog modeling for a 16 bit DAC
// based on a verilog-ams dac model

module dac(
    input  logic              clk,
    input  logic [bits-1:0]   s_axis_tdata,
    output real               aout
);
    parameter real vref = 5.0;
    parameter int bits = 16;    // DAC resolution - 16 bits

    real aout_reg;

    always_ff @(posedge clk) begin
        // Convert digital input to real and scale
        aout_reg = vref * (real'(s_axis_tdata)) / (2.0**bits);
    end

    assign aout = aout_reg;

endmodule
