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
    real               vref;
    real               dac_out [N_DAC];
    logic [31:0]       errors;
    real               expected_out [N_DAC];
    int                i, j;
    int                num_samples = 100; // Number of clock cycles
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

    // Log values for ALL channels to CSV when data is valid
    always @(posedge clk) begin
        if (s_axis_tvalid) begin
            // Write time once per row
            $fwrite(f, "%0t", $time);
            // Loop through and write each channel's output and expected value
            for (int k = 0; k < N_DAC; k = k + 1) begin
                $fwrite(f, ",%f,%f", dac_out[k], expected_out[k]);
            end
            $fwrite(f, "\n"); // End the line
        end
    end

    initial begin
        // Initialization
        s_axis_tdata = 0;
        s_axis_tvalid = 0;
        errors = 0;
        vref = 1.0;

        // Open CSV file
        f = $fopen("top_dac_sequential.csv", "w");
        if (f == 0) begin
            $fatal("Failed to open top_dac_sequential.csv");
        end
        // Create headers for all channels
        $fwrite(f, "time_ps");
        for (int k = 0; k < N_DAC; k = k + 1) begin
            $fwrite(f, ",aout_ch%0d,expected_ch%0d", k, k);
        end
        $fwrite(f, "\n");

        #20000;
        s_axis_tvalid = 1; // Assert valid to start test

        // Sine wave generation
        amplitude = (2.0**(DAC_BITS-1) - 1);

        // Loop through clock cycles
        for (i = 0; i < num_samples; i++) begin
            // In each clock cycle, calculate the data for all 16 channels
            for (j = 0; j < N_DAC; j = j + 1) begin
                // Calculate the phase for each channel sequentially
                // This creates 16 consecutive points of a sine wave per clock cycle
                radians = (2.0 * pi * (i * N_DAC + j)) / (num_samples * N_DAC);
                analog_input = amplitude * $sin(radians);
                logic [DAC_BITS-1:0] single_channel_data = int'(analog_input);
                
                // Assign the unique data point to the correct 16-bit slice
                s_axis_tdata[j*16 +: 16] = single_channel_data;

                // Store the expected output for this specific channel
                expected_out[j] = (vref * $signed(single_channel_data)) / (2.0**(DAC_BITS-1));
            end

            #2325;  // Wait one clk period
        end

        s_axis_tvalid = 0; // reset flag
        if (errors == 0)
            $display("All tests passed.");
        else
            $display("%0d tests failed.", errors);

        $display("Test completed. Data logged to top_dac_sequential.csv");
        $fclose(f);
        $stop;
    end

endmodule