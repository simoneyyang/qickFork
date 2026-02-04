module synchronizer_n_sva (
    input logic clk,
    input logic rstn,
    input logic data_in,
    input logic data_out_sv
);
    logic data_out_vhd;

    // Instantiate VHDL reference
    synchronizer_n #(
        .N(2)
    ) reference_vhd (
        .clk(clk),
        .rstn(rstn),
        .data_in(data_in),
        .data_out(data_out_vhd)
    );

    // Simplified Assertion (No 'property' keyword)
    always @(posedge clk) begin
        if (rstn) begin
            assert(data_out_sv === data_out_vhd);
        end
    end

endmodule

bind synchronizer_n_sv synchronizer_n_sva formal_check (
    .clk(clk),
    .rstn(rstn),
    .data_in(data_in),
    .data_out_sv(data_out)
);