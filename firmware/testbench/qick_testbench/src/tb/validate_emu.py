import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# ── File paths (adjust to your location) ──
DAC_CSV = "dac_out.csv"
DEC_CSV = "dec_out.csv"
AVG_CSV = "avg_out.csv"

# ── Clock parameters (must match tb_qick_emu.sv) ──
T_SG_CLK = 0.833    # SG clock half-period (ns)
N_DDS    = 16        # parallel DAC samples per SG clock
F_FABRIC = 307.2     # readout fabric clock (MHz)

# ══════════════════════════════════════════
# Plot 1: DAC Output
# ══════════════════════════════════════════
dac = pd.read_csv(DAC_CSV)
dac['time_ns'] = dac['time_ps'].str.replace(' ns', '').astype(float)

sample_cols = [f's{i}' for i in range(N_DDS)]
dac_samples = dac[sample_cols].values.flatten()
t0 = dac['time_ns'].iloc[0]
dt = (2 * T_SG_CLK) / N_DDS  # ns per DAC sample
t_dac = (np.arange(len(dac_samples)) * dt) / 1000.0  # relative µs

fig, axes = plt.subplots(2, 1, figsize=(10, 7))

ax = axes[0]
ax.plot(t_dac, dac_samples, linewidth=0.5)
ax.set_title('DAC Output — Signal Generator Waveform')
ax.set_ylabel('DAC amplitude (int16)')
ax.set_xlabel('µs')
ax.grid(True, alpha=0.3)

# ══════════════════════════════════════════
# Plot 2: Decimated Readout (acquire_decimated style)
# ══════════════════════════════════════════
dec = pd.read_csv(DEC_CSV)

# Build time axis from sample index (not drain timestamps)
t_dec = np.arange(len(dec)) / F_FABRIC  # µs

I = dec['I'].values.astype(float)
Q = dec['Q'].values.astype(float)
mag = np.abs(I + 1j * Q)

ax = axes[1]
ax.plot(t_dec, I, label='I value')
ax.plot(t_dec, Q, label='Q value')
ax.plot(t_dec, mag, label='magnitude')
ax.legend()
ax.set_title('Decimated Readout — IQ vs Time')
ax.set_ylabel('a.u.')
ax.set_xlabel('µs')
ax.grid(True, alpha=0.3)

plt.tight_layout()
plt.show()

# ══════════════════════════════════════════
# Print averaged readout
# ══════════════════════════════════════════
avg = pd.read_csv(AVG_CSV)
for _, row in avg.iterrows():
    I_a, Q_a = float(row['I']), float(row['Q'])
    print(f"Averaged: I={I_a:.0f}, Q={Q_a:.0f}, |IQ|={abs(I_a + 1j*Q_a):.0f}")