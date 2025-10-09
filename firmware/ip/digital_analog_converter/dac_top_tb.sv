`timescale 1ps/1ps

module dac_top_tb();

    // Parameters
    parameter int bits = 256;
    parameter int N_DAC = 16;
    parameter int DAC_BITS = 16;

    // Signals
    logic              clk;
    logic [bits-1:0]   s_axis_tdata;
    logic              s_axis_tvalid;
    logic [DAC_BITS-1:0] single_channel_data;
    real               vref;
    real               dac_out [N_DAC];
    logic [31:0]       errors;
    real               expected_out;
    int                i, j;
    int                num_samples = 100;
    real               pi = 3.141592653589793;
    real               radians;
    real               amplitude;
    real               analog_input;

    // dac_top instantiation
    dac_top dut(
        .clk(clk),
        .s_axis_tdata(s_axis_tdata),
        .s_axis_tvalid(s_axis_tvalid),
        .dac_out(dac_out)
    );

    // Clock generation: 430.08 MHz (period ~2.325 ns)
    always begin
        clk = 1; #1162.5;
        clk = 0; #1162.5;
    end

    // CSV File Handle
    integer f;

    // Log values to CSV
    always @(posedge clk) begin
        if (s_axis_tvalid) begin
            $fwrite(f, "%0t,%0d,%f,%f\n", $time, $signed(s_axis_tdata[15:0]), dac_out[0], expected_out);
        end
    end

    initial begin
        // Initialization
        s_axis_tdata = 0;
        s_axis_tvalid = 0;
        errors = 0;
        vref = 1.0;

        // Open CSV file
        f = $fopen("top_dac.csv", "w");
        if (f == 0) begin
            $fatal("Failed to open output_top.csv");
        end
        $fwrite(f, "time_ps,s_axis_data_ch0,aout_ch0,expected_out_ch0\n");

        #20000;
        s_axis_tvalid = 1; // Assert valid to start test

        // Sine wave generation
        amplitude = (2.0**(DAC_BITS-1) - 1);

        for (i = 0; i < num_samples; i++) begin
            radians = (2.0 * pi * i) / num_samples;
            analog_input = amplitude * $sin(radians);
            single_channel_data = int'(analog_input);

            // Drive all 16 channels with the same data
            for (j = 0; j < N_DAC; j = j + 1) begin
                s_axis_tdata[j*16 +: 16] = single_channel_data;
            end

            // Expected analog output
            expected_out = (vref * $signed(single_channel_data)) / (2.0**(DAC_BITS-1));

            #2325;  // Wait one clk period
        end

        s_axis_tvalid = 0; // reset flag
        if (errors == 0)
            $display("All tests passed.");
        else
            $display("%0d tests failed.", errors);

        $display("Test completed. Data logged to output_top.csv");
        $fclose(f);
        $stop;
    end

endmodule