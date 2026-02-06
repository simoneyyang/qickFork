module fifo_behav_ai #(
    parameter int B = 16, // data width
    parameter int N = 4   // depth (power of 2 assumed, same as XPM)
)(
    input  wire               rstn,
    input  wire               clk,

    // Write interface
    input  wire               wr_en,
    input  wire [B-1:0]       din,

    // Read interface
    input  wire               rd_en,
    output logic [B-1:0]       dout,

    // Flags
    output logic               full,
    output logic               empty
);

    // ------------------------------------------------------------
    // Internal storage
    // ------------------------------------------------------------
    logic [B-1:0] mem [0:N-1];

    logic [$clog2(N)-1:0] wr_ptr;
    logic [$clog2(N)-1:0] rd_ptr;
    logic [$clog2(N+1)-1:0] count;

    // FWFT internal output
    logic [B-1:0] dout_int;
    logic [B-1:0] dout_r;

    // 2-cycle write pipeline (to match XPM latency)
    logic wr_en_d, wr_en_dd;
    logic [B-1:0] din_d, din_dd;

    // ------------------------------------------------------------
    // Flags
    // ------------------------------------------------------------
    assign empty = (count == 0);
    assign full  = (count == N);

    // ------------------------------------------------------------
    // External dout behavior (matches your wrapper)
    // ------------------------------------------------------------
    assign dout = (rd_en && !empty) ? dout_int : dout_r;

    always_ff @(posedge clk) begin
        if (!rstn) begin
            dout_r <= '0;
        end else if (rd_en && !empty) begin
            dout_r <= dout_int;
        end
    end

    // ------------------------------------
    // Write pipeline (2-cycle latency)
    // ------------------------------------
    always_ff @(posedge clk) begin
        if (!rstn) begin
            wr_en_d  <= 1'b0;
            wr_en_dd <= 1'b0;
            din_d    <= '0;
            din_dd   <= '0;
        end else begin
            wr_en_d  <= wr_en;
            wr_en_dd <= wr_en_d;
            din_d    <= din;
            din_dd   <= din_d;
        end
    end

    // ------------------------------------------------------------
    // FIFO control
    // ------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (!rstn) begin
            wr_ptr   <= '0;
            rd_ptr   <= '0;
            count    <= '0;
            dout_int <= '0;
        end else begin
            // ----------------------------------------
            // Determine legal operations
            // (use delayed write signals for 2-cycle latency)
            // ----------------------------------------
            logic do_write;
            logic do_read;

            // Accept write based on delayed enable and pre-acceptance count
            do_write = wr_en_dd && (count != N);
            do_read  = rd_en && !empty;

            // ----------------------------------------
            // Write path (uses delayed data from pipeline)
            // ----------------------------------------
            if (do_write) begin
                mem[wr_ptr] <= din_dd;
                wr_ptr <= wr_ptr + 1'b1;
            end

            // ----------------------------------------
            // Read pointer advance
            // ----------------------------------------
            if (do_read) begin
                rd_ptr <= rd_ptr + 1'b1;
            end

            // ----------------------------------------
            // Occupancy
            // ----------------------------------------
            case ({do_write, do_read})
                2'b10: count <= count + 1'b1;
                2'b01: count <= count - 1'b1;
                default: count <= count;
            endcase

            // ----------------------------------------
            // FWFT output logic (uses delayed data)
            // ----------------------------------------
            case ({do_write, do_read})
                // Write into empty FIFO → FWFT update
                2'b10: begin
                    if (count == 0)
                        dout_int <= din_dd;
                end

                // Normal read → next word becomes visible
                2'b01: begin
                    if (count > 1)
                        dout_int <= mem[rd_ptr + 1'b1];
                end

                // Simultaneous read + write
                2'b11: begin
                    // If FIFO had exactly 1 entry,
                    // the write replaces the read → FWFT shows din_dd
                    if (count == 1)
                        dout_int <= din_dd;
                    else
                        dout_int <= mem[rd_ptr + 1'b1];
                end
            endcase
        end
    end

endmodule


// Verilog behavioral implementation of the modified XPM based FIFO in qick/firmware/hdl/fifo_xpm.sv

module fifo_behav 

    #(
        // Data width.
        parameter int B = 16,
        
        // Fifo depth.
        parameter int N = 4
    )

    (
        input  logic           rstn,
        input  logic           clk, 

        // write I/F.
        input  logic           wr_en,
        input  logic [B-1 : 0] din,

        // read I/F.
        input  logic           rd_en,
        output logic [B-1 : 0] dout,

        // Flags.
        output logic full,
        output logic empty
    );

    // Pointers.
    logic [$clog2(N)-1 : 0] wptr;
    logic [$clog2(N)-1 : 0] rptr;

    // Memory signals.
    logic                mem_wea;
    logic [B-1 : 0]      mem_dob;

    // Flags.
    logic                full_i;
    logic                empty_i;

    bram_simple_dp_behav #(
        .N     ( $clog2(N) ),
        .B     ( B         )
    ) bram (
        .clk   ( clk       ),
        .ena   ( 1'b1      ),
        .enb   ( rd_en     ),
        .wea   ( mem_wea   ),
        .addra ( wptr      ),
        .addrb ( rptr      ),
        .dia   ( din       ),
        .dob   ( mem_dob   )
    );

    // Memory connections.
    assign mem_wea = (full_i == 1'b0) ? wr_en : 1'b0;

    // Full/empty signals.
    assign full_i  = (wptr == rptr-4'b1) ? 1'b1 : 1'b0;
    assign empty_i = (wptr == rptr  ) ? 1'b1 : 1'b0;

    always_ff @(posedge clk) begin
        if ( rstn == 1'b0 ) begin
            wptr <= 0;
            rptr <= 0;
        end else begin
            // Write.
            if ( wr_en == 1'b1 && full_i == 1'b0 ) begin
                // write data.

                // write pointer.
                wptr <= wptr + 1;
            end

            // Read.
            if ( rd_en == 1'b1 && empty_i == 1'b0 ) begin
                // Read data.
                
                // Increment pointer.
                rptr <= rptr + 1;
            end
        end
    end

    // Assign outputs.
    assign dout  = mem_dob;
    assign full  = full_i;
    assign empty = empty_i;


endmodule
