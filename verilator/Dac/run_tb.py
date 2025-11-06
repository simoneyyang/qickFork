#!/usr/bin/env python3
import os, shutil, subprocess, sys, csv

# config
TOP          = "dac_top_tb_file"  # The new file-driven TB
SRCS         = ["dac_top_tb_file.sv", "dac_top.sv", "dac.sv"]
BUILD_DIR    = "build_tb_file"    
CSV_NAME     = "top_dac_file.csv" # Output from the new TB
STIM_SCRIPT  = "stim.py"
STIM_FILE    = "stimulus.csv"
VERILATOR    = shutil.which("verilator") or "/opt/homebrew/bin/verilator"

def run(cmd, **kw):
    print("$", " ".join(cmd))
    subprocess.run(cmd, check=True, **kw)

def main():
    # 0) Generate the stimulus file
    print("--- 1. Generating Stimulus ---")
    if not os.path.exists(STIM_SCRIPT):
        print(f"error: stimulus script not found at {STIM_SCRIPT}", file=sys.stderr)
        sys.exit(1)
    run([sys.executable, STIM_SCRIPT])
    if not os.path.exists(STIM_FILE):
        print(f"error: stimulus file not found at {STIM_FILE}", file=sys.stderr)
        sys.exit(1)
    print("--- Stimulus generation complete ---")

    # 1) build (verilate + compile) with the TB as top
    print("\n--- 2. Building Verilog Simulation ---")
    cmd = [
        VERILATOR,
        "--binary", "-sv", "-Wall", "--trace-fst",
        "-Mdir", BUILD_DIR,
        "--top-module", TOP,
        *SRCS
    ]
    run(cmd)
    print("--- Build complete ---")

    # 2) run the produced binary
    print("\n--- 3. Running Simulation ---")
    binary = os.path.join(BUILD_DIR, f"V{TOP}")
    if not os.path.exists(binary):
        print(f"error: binary not found at {binary}", file=sys.stderr)
        sys.exit(1)
    run([binary])
    print("--- Simulation complete ---")

    # 3) fetch the CSV (written in the current working directory by your TB)
    csv_path = os.path.join(os.getcwd(), CSV_NAME)
    if not os.path.exists(csv_path):
        print(f"error: expected CSV not found at {csv_path}", file=sys.stderr)
        sys.exit(2)

    # show a quick preview
    print(f"\nOK: found {csv_path}\nPreview:")
    with open(csv_path, newline="") as f:
        r = csv.reader(f)
        for i, row in enumerate(r):
            print(",".join(row))
            if i >= 10:  # first ~10 lines
                break

if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as e:
        print(f"\nCommand failed (exit {e.returncode}): {' '.join(e.cmd)}", file=sys.stderr)
        sys.exit(e.returncode)