how to use emulator
-----
from python 
(in progress)

-----
directly from terminal

Prereqs:
- `oss-cad-suite` installed and sourced in terminal
- git repo pull submodules recursively (make sure emulator/submodules/pulp_platform subfolders are not empty)
`git submodule update --init --recursive`
- navigate to emulator folder

in terminal:
```
make verilate
make sim
make wave
```
