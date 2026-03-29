#!/usr/bin/env python3
"""
Generate a DDS LUT init file where each 32-bit word is packed as:

    [31:16] = sine   (signed Q1.15)
    [15:0]  = cosine (signed Q1.15)

One 32-bit hex word per line.
"""

import argparse
import math
from pathlib import Path


def q15_from_float(x: float) -> int:
    """
    Convert float in [-1.0, 1.0) to signed Q1.15 integer.
    """
    x = max(min(x, 0.999969482421875), -1.0)
    return int(round(x * 32767))


def to_hex32(val: int) -> str:
    """
    Format integer as 8-digit uppercase hex.
    """
    return f"{(val & 0xFFFFFFFF):08X}"


def pack_sin_cos_q15(sin_val: float, cos_val: float) -> int:
    """
    Pack sine into upper 16 bits and cosine into lower 16 bits.
    """
    s = q15_from_float(sin_val) & 0xFFFF
    c = q15_from_float(cos_val) & 0xFFFF
    return (s << 16) | c


def gen_full_table(lut_size: int):
    """
    Generate full-wave DDS table.

    Angle:
        theta_k = 2*pi*k/lut_size

    Output word:
        [31:16] = sin(theta_k)
        [15:0]  = cos(theta_k)
    """
    for k in range(lut_size):
        theta = 2.0 * math.pi * k / lut_size
        s = math.sin(theta)
        c = math.cos(theta)
        yield to_hex32(pack_sin_cos_q15(s, c))


def main():
    ap = argparse.ArgumentParser(description="DDS sin/cos ROM generation")
    ap.add_argument("--lut-size", type=int, default=256, help="Number of LUT entries")
    ap.add_argument(
        "--outfile",
        type=Path,
        default=Path("sine_full32.hex"),
        help="Output hex file"
    )
    args = ap.parse_args()

    lines = list(gen_full_table(args.lut_size))

    with args.outfile.open("w", encoding="utf-8") as f:
        for line in lines:
            f.write(line + "\n")

    print(f"Wrote {len(lines)} lines to {args.outfile}")


if __name__ == "__main__":
    main()