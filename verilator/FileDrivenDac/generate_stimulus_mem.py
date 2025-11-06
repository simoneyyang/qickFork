#!/usr/bin/env python3
import math
import sys
import os

# Parameters
N_DAC = 16
NUM_SAMPLES = 100
DAC_BITS = 16
MEM_FILE = "stimulus.mem"

def main():
    print(f"Generating stimulus memfile: {MEM_FILE}...")
    
    amplitude = (2**(DAC_BITS - 1)) - 1
    count = 0

    try:
        with open(MEM_FILE, 'w') as f:
            # Iterate through each DAC channel
            for j in range(N_DAC):
                # Iterate through 100 samples for the sine wave
                for i in range(NUM_SAMPLES):
                    
                    # 1. Calculate the 16-bit signed data
                    radians = (2.0 * math.pi * i) / NUM_SAMPLES
                    analog_input = amplitude * math.sin(radians)
                    data_16bit_signed = int(round(analog_input))
                    
                    # 2. Convert to 16-bit unsigned (two's complement)
                    if data_16bit_signed < 0:
                        data_16bit_unsigned = data_16bit_signed + (1 << DAC_BITS)
                    else:
                        data_16bit_unsigned = data_16bit_signed
                        
                    # 3. Pack the 4-bit channel and 16-bit data into a 20-bit vector
                    #    Format: { channel[3:0], data[15:0] }
                    channel_4bit = j
                    packed_vector = (channel_4bit << DAC_BITS) | data_16bit_unsigned
                    
                    # 4. Write as a 5-digit hex value (20 bits = 5 hex digits)
                    f.write(f"{packed_vector:05X}\n")
                    count += 1
        
        print(f"Successfully generated {count} stimulus vectors.")

    except IOError as e:
        print(f"Error writing to file {MEM_FILE}: {e}", file=sys.stderr)
        sys.exit(1)

if __name__ == "__main__":
    main()