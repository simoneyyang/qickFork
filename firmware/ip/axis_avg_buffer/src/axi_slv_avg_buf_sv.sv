module axi_slv_avg_buf_sv #(
    parameter int DATA_WIDTH = 32,
    parameter int ADDR_WIDTH = 6
)(
    input  logic                         aclk,
    input  logic                         aresetn,

    // Write Address Channel
    input  logic [ADDR_WIDTH-1:0]        awaddr,
    input  logic [2:0]                   awprot,
    input  logic                         awvalid,
    output logic                         awready,

    // Write Data Channel
    input  logic [DATA_WIDTH-1:0]        wdata,
    input  logic [(DATA_WIDTH/8)-1:0]    wstrb,
    input  logic                         wvalid,
    output logic                         wready,

    // Write Response Channel
    output logic [1:0]                   bresp,
    output logic                         bvalid,
    input  logic                         bready,

    // Read Address Channel
    input  logic [ADDR_WIDTH-1:0]        araddr,
    input  logic [2:0]                   arprot,
    input  logic                         arvalid,
    output logic                         arready,

    // Read Data Channel
    output logic [DATA_WIDTH-1:0]        rdata,
    output logic [1:0]                   rresp,
    output logic                         rvalid,
    input  logic                         rready,

    // User Registers
    output logic                         AVG_START_REG,
    output logic [31:0]                  AVG_ADDR_REG,
    output logic [31:0]                  AVG_LEN_REG,
    output logic                         AVG_PHOTON_MODE_REG,
    output logic [31:0]                  AVG_H_THRSH_REG,
    output logic [31:0]                  AVG_L_THRSH_REG,
    output logic                         AVG_DR_START_REG,
    output logic [31:0]                  AVG_DR_ADDR_REG,
    output logic [31:0]                  AVG_DR_LEN_REG,
    output logic                         BUF_START_REG,
    output logic [31:0]                  BUF_ADDR_REG,
    output logic [31:0]                  BUF_LEN_REG,
    output logic                         BUF_DR_START_REG,
    output logic [31:0]                  BUF_DR_ADDR_REG,
    output logic [31:0]                  BUF_DR_LEN_REG
);

    // ------------------------------------------------------------
    // Local parameters
    // ------------------------------------------------------------
    localparam int ADDR_LSB = (DATA_WIDTH/32) + 1;   // =2 for 32-bit
    localparam int OPT_MEM_ADDR_BITS = 3;             // 16 regs

    // ------------------------------------------------------------
    // Internal AXI signals
    // ------------------------------------------------------------
    logic [ADDR_WIDTH-1:0] axi_awaddr;
    logic                  axi_awready;
    logic                  axi_wready;
    logic [1:0]            axi_bresp;
    logic                  axi_bvalid;
    logic [ADDR_WIDTH-1:0] axi_araddr;
    logic                  axi_arready;
    logic [DATA_WIDTH-1:0] axi_rdata;
    logic [1:0]            axi_rresp;
    logic                  axi_rvalid;

    logic                  aw_en;

    assign awready = axi_awready;
    assign wready  = axi_wready;
    assign bresp   = axi_bresp;
    assign bvalid  = axi_bvalid;
    assign arready = axi_arready;
    assign rdata   = axi_rdata;
    assign rresp   = axi_rresp;
    assign rvalid  = axi_rvalid;

    // ------------------------------------------------------------
    // Slave registers (16 x DATA_WIDTH)
    // ------------------------------------------------------------
    logic [DATA_WIDTH-1:0] slv_reg [0:15];
    logic                  slv_reg_wren;
    logic                  slv_reg_rden;
    logic [DATA_WIDTH-1:0] reg_data_out;

    // ------------------------------------------------------------
    // Write Address Ready
    // ------------------------------------------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            axi_awready <= 1'b0;
            aw_en       <= 1'b1;
        end else begin
            if (!axi_awready && awvalid && wvalid && aw_en) begin
                axi_awready <= 1'b1;
                aw_en       <= 1'b0;
            end else if (bready && axi_bvalid) begin
                aw_en       <= 1'b1;
                axi_awready <= 1'b0;
            end else begin
                axi_awready <= 1'b0;
            end
        end
    end

    // Latch write address
    always_ff @(posedge aclk) begin
        if (!aresetn)
            axi_awaddr <= '0;
        else if (!axi_awready && awvalid && wvalid && aw_en)
            axi_awaddr <= awaddr;
    end

    // Write Data Ready
    always_ff @(posedge aclk) begin
        if (!aresetn)
            axi_wready <= 1'b0;
        else if (!axi_wready && wvalid && awvalid && aw_en)
            axi_wready <= 1'b1;
        else
            axi_wready <= 1'b0;
    end

    assign slv_reg_wren = axi_wready && wvalid && axi_awready && awvalid;

    // ------------------------------------------------------------
    // Register Write Logic
    // ------------------------------------------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            for (int i = 0; i < 16; i++)
                slv_reg[i] <= '0;
        end 
        else if (slv_reg_wren) begin
            logic [3:0] loc_addr;   // ✅ local to this block
            loc_addr = axi_awaddr[ADDR_LSB + OPT_MEM_ADDR_BITS : ADDR_LSB];

            for (int byte_index = 0; byte_index < DATA_WIDTH/8; byte_index++) begin
                if (wstrb[byte_index]) begin
                    slv_reg[loc_addr][byte_index*8 +: 8]
                        <= wdata[byte_index*8 +: 8];
                end
            end
        end
    end


    // ------------------------------------------------------------
    // Write Response
    // ------------------------------------------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            axi_bvalid <= 1'b0;
            axi_bresp  <= 2'b00;
        end else begin
            if (axi_awready && awvalid && axi_wready && wvalid && !axi_bvalid) begin
                axi_bvalid <= 1'b1;
                axi_bresp  <= 2'b00; // OKAY
            end else if (bready && axi_bvalid) begin
                axi_bvalid <= 1'b0;
            end
        end
    end

    // ------------------------------------------------------------
    // Read Address Channel
    // ------------------------------------------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            axi_arready <= 1'b0;
            axi_araddr  <= '0;
        end else if (!axi_arready && arvalid) begin
            axi_arready <= 1'b1;
            axi_araddr  <= araddr;
        end else begin
            axi_arready <= 1'b0;
        end
    end

    // Read valid generation
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            axi_rvalid <= 1'b0;
            axi_rresp  <= 2'b00;
        end else begin
            if (axi_arready && arvalid && !axi_rvalid) begin
                axi_rvalid <= 1'b1;
                axi_rresp  <= 2'b00;
            end else if (axi_rvalid && rready) begin
                axi_rvalid <= 1'b0;
            end
        end
    end

    assign slv_reg_rden = axi_arready && arvalid && !axi_rvalid;

    // Read mux
    always_comb begin
        logic [3:0] loc_addr;   // ✅ local to this block
        loc_addr = axi_araddr[ADDR_LSB + OPT_MEM_ADDR_BITS : ADDR_LSB];

        if (loc_addr < 16)
            reg_data_out = slv_reg[loc_addr];
        else
            reg_data_out = '0;
    end


    // Output read data
    always_ff @(posedge aclk) begin
        if (!aresetn)
            axi_rdata <= '0;
        else if (slv_reg_rden)
            axi_rdata <= reg_data_out;
    end

    // ------------------------------------------------------------
    // Register Map Assignments
    // ------------------------------------------------------------
    assign AVG_START_REG        = slv_reg[0][0];
    assign AVG_ADDR_REG         = slv_reg[1];
    assign AVG_LEN_REG          = slv_reg[2];
    assign AVG_DR_START_REG     = slv_reg[3][0];
    assign AVG_DR_ADDR_REG      = slv_reg[4];
    assign AVG_DR_LEN_REG       = slv_reg[5];
    assign BUF_START_REG        = slv_reg[6][0];
    assign BUF_ADDR_REG         = slv_reg[7];
    assign BUF_LEN_REG          = slv_reg[8];
    assign BUF_DR_START_REG     = slv_reg[9][0];
    assign BUF_DR_ADDR_REG      = slv_reg[10];
    assign BUF_DR_LEN_REG       = slv_reg[11];
    assign AVG_PHOTON_MODE_REG  = slv_reg[12][0];
    assign AVG_H_THRSH_REG      = slv_reg[13];
    assign AVG_L_THRSH_REG      = slv_reg[14];

endmodule