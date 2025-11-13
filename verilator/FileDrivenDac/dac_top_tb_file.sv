`timescale 1ps/1ps

module dac_top_tb_file();

    // Parameters
    parameter int bits = 256;
    parameter int N_DAC = 16;
    /* verilator lint_off UNUSEDPARAM */
    parameter int DAC_BITS = 16;
    /* verilator lint_on UNUSEDPARAM */

    // Signals
    logic              clk;
    logic [bits-1:0]   s_axis_tdata;
    logic              s_axis_tvalid;
    /* verilator lint_off UNUSEDSIGNAL */
    real               vref;
    /* verilator lint_on UNUSEDSIGNAL */
    real               dac_out [N_DAC];
    
    // File I/O 
    string STIM_FILE = "stimulus.csv";
    string LOG_FILE  = "top_dac_file.csv";
    integer f_stim_in, f_log_out;
    string  line;
    int     scanned;

    // --- Data read from file ---
    /* verilator lint_off UNUSEDSIGNAL */
    int     time_ps_in; // Use int for time
    /* verilator lint_on UNUSEDSIGNAL */
    int     channel_j;
    /* verilator lint_off UNUSEDSIGNAL */
    int     data_as_int;      //Read as a standard 32-bit int
    /* verilator lint_on UNUSEDSIGNAL */
    shortint   data_16bit;    //We will cast into this
    real    expected_out_in;
    
    //=- Data for logger
    int unsigned active_channel_for_logger;
    real         expected_out_for_logger;
    bit          log_enable; // Signal to control when to log

    // DUT (dac_top) instantiation
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

    // Log the output of the DAC to the CSV file
    always @(posedge clk) begin
        // Only write to file if enabled by the main loop
        if (s_axis_tvalid && log_enable) begin
            $fwrite(f_log_out, "%0t,%0d,%f,%f\n", 
                    $time, 
                    active_channel_for_logger, 
                    dac_out[active_channel_for_logger], 
                    expected_out_for_logger);
        end
    end

    initial begin
        $dumpfile("waves.vcd");
        $dumpvars(0, dac_top_tb_file);  

        // Initialization
        s_axis_tdata = 0;
        s_axis_tvalid = 0;
        log_enable = 0;
        vref = 1.0;

        // Open stimulus file
        f_stim_in = $fopen(STIM_FILE, "r");
        if (f_stim_in == 0) begin
            $fatal(1, "Failed to open stimulus file: %s", STIM_FILE);
        end

        // Open log file
        f_log_out = $fopen(LOG_FILE, "w");
        if (f_log_out == 0) begin
            $fatal(1, "Failed to open log file: %s", LOG_FILE);
        end
        $fwrite(f_log_out, "time_ps,active_channel,aout_active,expected_out\n");

        #20000;
        s_axis_tvalid = 1;

        // Read and discard header line from stimulus file
        void'($fgets(line, f_stim_in));

        // Loop and read every line from the stimulus file
        /* verilator lint_off WIDTHTRUNC */
        while ($fgets(line, f_stim_in)) begin
        /* verilator lint_on WIDTHTRUNC */

            // This prevents an infinite loop if $sscanf fails
            @(negedge clk);
            log_enable = 0; // Default to not logging

            //  Strip newline/carriage return 
            while (line.len() > 0 && (line[line.len()-1] == "\n" || line[line.len()-1] == "\r")) begin
                line = line.substr(0, line.len()-2);
            end

            //  Use %d for the 16-bit data, %f for the real 
            scanned = $sscanf(line, "%d,%d,%d,%f", 
                             time_ps_in, channel_j, data_as_int, expected_out_in);
            
            if (scanned != 4) begin
                $display("Warning: Skipping malformed line (scanned != 4): %s", line);
                s_axis_tdata = '0; // Drive 0 on bad line
            end else begin
                //  Apply Stimulus 
                data_16bit = shortint'(data_as_int); //Cast from int to shortint

                s_axis_tdata = '0; // Clear all data
                s_axis_tdata[channel_j*16 +: 16] = data_16bit; // Set active channel's data

                // Store info for the posedge logger
                active_channel_for_logger = channel_j;
                expected_out_for_logger = expected_out_in;
                log_enable = 1; // Enable logging for this cycle
            end
        end

        // End of Simulation 
        s_axis_tvalid = 0;
        log_enable = 0;
        #5000;
        
        $display("Test completed. Data logged to %s", LOG_FILE);
        $fclose(f_stim_in);
        $fclose(f_log_out);
        
        `ifdef VERILATOR
            $finish;
        `else
            $stop;
        `endif
    end

endmodule
