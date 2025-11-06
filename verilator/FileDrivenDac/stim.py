#!/usr/bin/env python3
import math

# --- Configuration (matches dac_top_tb.sv) ---
N_DAC = 16
DAC_BITS = 16
NUM_SAMPLES = 100
VREF = 1.0
PI = 3.141592653589793
AMPLITUDE = (2**(DAC_BITS - 1)) - 1
CLK_PERIOD_PS = 2325
INIT_WAIT_PS = 20000
OUTPUT_FILE = "stimulus.csv"
# --- End Configuration ---

def main():
    print(f"Generating stimulus file: {OUTPUT_FILE}...")
    
    # We need to simulate the 16-bit signed integer conversion
    def to_s16(val):
        if not -32768 <= val <= 32767:
            val = max(-32768, min(val, 32767))
        return int(val) & 0xFFFF # Get 16-bit representation
        
    def s16_to_signed(val_u16):
        # Convert 16-bit unsigned (from hex/int) to signed
        if val_u16 & 0x8000:
            return val_u16 - 0x10000
        return val_u16

    with open(OUTPUT_FILE, 'w') as f:
        # Header for the stimulus file
        f.write("time_ps,channel_j,data_16bit_dec,expected_out\n")
        
        time_ps = INIT_WAIT_PS
        
        for j in range(N_DAC):
            for i in range(NUM_SAMPLES):
                radians = (2.0 * PI * i) / NUM_SAMPLES
                analog_input = AMPLITUDE * math.sin(radians)
                
                # Replicate SV logic: real -> int -> 16'()
                data_16bit_val = int(analog_input)
                
                # Get the signed 16-bit decimal value
                data_16bit_s16_dec = s16_to_signed(to_s16(data_16bit_val))

                # Calculate expected output
                expected_out = (VREF * data_16bit_s16_dec) / (2.0**(DAC_BITS - 1))

                # Write the stimulus line
                # We use the decimal value for easier C++ parsing
                f.write(f"{time_ps},{j},{data_16bit_s16_dec},{expected_out}\n")
                
                # Advance time by one clock period
                time_ps += CLK_PERIOD_PS

    print(f"Successfully generated {NUM_SAMPLES * N_DAC} stimulus vectors.")

if __name__ == "__main__":
    main()