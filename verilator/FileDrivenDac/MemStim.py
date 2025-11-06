#!/usr/bin/env python3
import os, shutil, subprocess, sys, csv

# --- Config ---
STIM_SCRIPT  = "generate_stimulus_mem.py"
TOP          = "dac_top_tb_mem"  #  The new memory-file-driven TB
SRCS         = ["dac_top_tb_mem.sv", "dac_top.sv", "dac.sv"] # 
BUILD_DIR    = "build_tb_mem"    # Build directory
CSV_NAME     = "top_dac_mem.csv" # Output from the new TB
VERILATOR    = shutil.which("verilator") or "/opt/homebrew/bin/verilator"
PYTHON       = shutil.which("python3") or "python3"
# --- End Config ---

def run(cmd, **kw):
    print("$", " ".join(cmd))
    subprocess.run(cmd, check=True, **kw)

def main():
    # --- 1. Generate Stimulus ---
    print("--- 1. Generating Stimulus ---")
    run([PYTHON, STIM_SCRIPT])
    print("--- Stimulus generation complete ---\n")
    
    # --- 2. Build ---
    print("--- 2. Building Verilog Simulation ---")
    # Ensure build directory exists
    os.makedirs(BUILD_DIR, exist_ok=True)
    
    cmd = [
        VERILATOR,
        "--binary", "-sv", "-Wall", "--trace-fst",
        "-Mdir", BUILD_DIR,
        "--top-module", TOP,
        *SRCS
    ]
    run(cmd)
    print("--- Build complete ---\n")

    # --- 3. Run ---
    print("--- 3. Running Simulation ---")
    binary = os.path.join(BUILD_DIR, f"V{TOP}")
    if not os.path.exists(binary):
        print(f"Error: binary not found at {binary}", file=sys.stderr)
        sys.exit(1)
    run([binary])
    print("--- Simulation complete ---\n")

    # --- 4. Check Output ---
    csv_path = os.path.join(os.getcwd(), CSV_NAME)
    if not os.path.exists(csv_path):
        print(f"Error: expected CSV not found at {csv_path}", file=sys.stderr)
        sys.exit(2)

    # Show a quick preview
    print(f"OK: found {csv_path}\nPreview:")
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
    except FileNotFoundError as e:
        print(f"\nError: Command not found ({e.filename})", file=sys.stderr)
        print("Please ensure 'verilator' and 'python3' are in your system's PATH.")
        sys.exit(1)