`timescale 1ps/1ps

module dac_tb();

    // Parameters
    parameter int bits = 16;

    // Signals
    logic              clk;
    logic [bits-1:0]   s_axis_data;
    real               vref;
    real               aout;
    logic [31:0]       errors;
    real               expected_out;
    int i;
    int num_samples = 100;
    real pi = 3.141592653589793;
    real radians;
    real amplitude;
    real offset;
    real analog_input;

    // DUT instantiation (make sure this matches your actual DAC module)
    dac dut(
        .clk(clk),
        .s_axis_tdata(s_axis_data),
        .aout(aout)
    );

    // Clock generation: 430.08 MHz (period ~2.325 ns)
    always begin
        clk = 1; #1162.5;  // half period in picoseconds
        clk = 0; #1162.5;
    end

    // CSV File Handle
    integer f;

    // Log values to CSV every clock rising edge
    always @(posedge clk) begin
        $fwrite(f, "%0t,%0d,%f,%f\n", $time, s_axis_data, aout, expected_out);
    end

    // Test process
    initial begin
        // Initialization
        s_axis_data = 16'd0;
        errors = 0;
        vref = 5.0;

        // Open CSV file
        f = $fopen("output.csv", "w");
        if (f == 0) begin
            $fatal("Failed to open output.csv");
        end
        $fwrite(f, "time_ps,s_axis_data,aout,expected_out\n");

        // Wait for DUT to initialize
        #20000;  // 20,000 ps = 20 ns

        // Sine wave generation parameters
        

        amplitude = (2.0**bits - 1) / 2.0;  // Half range (e.g., 32767.5 for 16-bit)
        offset   = amplitude;

        for (i = 0; i < num_samples; i++) begin
            radians = (2.0 * pi * i) / num_samples;
            analog_input = offset + amplitude * $sin(radians);  // Sine wave 0 to max

            // Clip and cast to int for digital value
            if (analog_input < 0) analog_input = 0;
            else if (analog_input > (2.0**bits - 1)) analog_input = (2.0**bits - 1);

            s_axis_data = int'(analog_input);

            // Expected analog output from ideal DAC
            expected_out = (vref * real'(s_axis_data)) / (2.0**bits);

            #2325;  // Wait one full clock period (2.325 ns = 2325 ps)
        end

        // Wrap up
        if (errors == 0)
            $display("All tests passed.");
        else
            $display("%0d tests failed.", errors);

        $display("Test completed.");
        $fclose(f);
        $stop;
    end

endmodule
