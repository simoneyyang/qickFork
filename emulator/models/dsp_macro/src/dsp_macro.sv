// dsp_macro_0 ARITH_DSP (
//   .CLK  ( clk_i        ),  // input wire CLK
//   .SEL  ( ALU_OP       ),  // input wire [3 : 0] SEL
//   .A    ( A_dt[26:0]   ),  // input wire [26 : 0] A
//   .B    ( B_dt[17:0]   ),  // input wire [17 : 0] B
//   .C    ( C_dt[31:0]   ),  // input wire [31 : 0] C
//   .D    ( D_dt[26:0]   ),  // input wire [26 : 0] D
//   .P    ( arith_result )   // output wire [45 : 0] P
// );


module dsp_macro (
    input   logic                    CLK,
    input   logic        [3:0]       SEL,
    input   logic signed [26:0]      A,
    input   logic signed [17:0]      B,
    input   logic signed [31:0]      C,
    input   logic signed [26:0]      D,
    output  logic signed [45:0]      P
);


// tier 3 logic
logic signed [26:0] areg_3;
logic signed [17:0] breg_3;
logic signed [31:0] creg_3;
logic signed [26:0] dreg_3;
logic        [3:0]  opreg_3;

// tier 4 logic
logic signed [26:0] areg_4;
logic signed [17:0] breg_4;
logic signed [31:0] creg_4;
logic        [3:0]  opreg_4;

// tier 5 logic
logic signed [44:0] mreg_5; // for A*B multiplication, extend to 45bit
logic signed [31:0] creg_4;
logic        [3:0]  opreg_4;

// tier 6 logic
logic signed [45:0] mreg_6;
logic signed [45:0] creg_6;
logic signed [45:0] preg;

// op config
// 4'b0000: A*B      
// 4'b0001: A*B+C   
// 4'b0010: A*B-C    
// 4'b0011: (A+D)*B    
// 4'b0100: (A+D)*B+C 
// 4'b0101: (A+D)*B-C  
// 4'b0110: (D-A)*B   
// 4'b0111: (D-A)*B+C  
// 4'b1001: (D-A)*B-C
// 4'b1010: (D-A)*B-C
// 4'b1011: (D-A)*B-C
// 4'b1100: (D-A)*B-C
// 4'b1101: (D-A)*B-C
// 4'b1110: (D-A)*B-C
// 4'b1111: (D-A)*B-C


// tier 3: capture all the input
always_ff(posedge CLK) begin
    areg_3      <= A;
    breg_3      <= B;
    creg_3      <= C;
    dreg_3      <= D;
    opreg_3     <= SEL;
end

// tier 4:
always_ff(posedge CLK) begin
    breg_4      <= breg_3;
    creg_4      <= creg_3;
    opreg_4     <= opreg_3; 

    case(opreg_3)
        4'b0011, 4'b0100, 4'b0101: areg_4 <= areg_3 + dreg_3; // A+D
        4'b0110, 4'b0111, 4'b1xxx: areg_4 <= breg_3 - areg_3; // D-A
        default:                   areg_4 <= areg_3;          // A
    endcase   
end
// tier 5:
always_ff(posedge CLK) begin
    mreg_5      <= areg_4 * breg_4;
    creg_5      <= creg_4;
    opreg_5     <= opreg_4;
end
// tier 6:
always_ff(posedge CLK) begin
    // extend signed mreg_5 and creg_5 to 46 bit
    mreg_6 = {mreg[44], mreg_5};
    creg_6 = {{14{creg_5[31]}}, creg_5}; 

    unique case(opreg_5)
        4'b0001, 4'b0100, 4'b0111: preg <= mreg_6 + creg_6;
        4'b0010, 4'b0101, 4'b1xxx: preg <= mreg_6 - creg_6;
        default:                   preg <= mreg_6;
    endcase

    P <= preg;
end


endmodule