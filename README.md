# minux9

version 1.2.5

unix like operating system on riscv.

VI, SHELL, CC, AS, CPP AND LD WORK.

The kernel and userland are implemented in pure C, with RISC-V assembly for
low-level boot and context-switching code. Building MINUX9 does not require
Neo-C, ncc, or sources from a parent repository.

Requirements: a RISC-V GCC/binutils toolchain, a host C compiler, make, and xxd.
The Makefile detects `riscv64-unknown-elf-` or `riscv64-linux-gnu-`; other
toolchain prefixes can be selected with `CCPREFIX=...`.

```
make -j4
make run
```

This repository includes its own RISC-V emulator. `make run` builds and boots
that emulator with the kernel and filesystem image. The guest includes its
own C compiler, assembler, and linker. `build/sh.h` is generated from the C
shell during the build; no transpilation step is involved.

Regression tests:

```
make test
make test-fork-heap
```

Tests cover shell EOF, basic commands, text processing, pipelines, and fork
inheritance and isolation of mutable data and heap memory. `timeout` is needed
to run the tests. Historical Neo-C compiler experiments are not build inputs.

sh fast_build.sh 

1.2.5 changes:

- Ported the kernel and userland to pure C, retaining RISC-V assembly for
  low-level boot and context switching.
- Removed the Neo-C/ncc build dependency, transpilation rules, and obsolete
  Neo-C kernel and command sources.
- Replaced Neo-C collections with C implementations for process, file, pipe,
  memory-page, and saved kernel-state management.
- Updated the C shell to preserve the latest command parsing and pipeline
  behavior, and wait for direct children when running a single command.
- Fixed fork to copy mutable data and heap memory and preserve the child's
  stack pointer.
- Simplified the build rules and generate the embedded shell from C at build
  time. Removed obsolete emulator diagnostics tied to fixed code addresses.
- Verified a clean build with transpilers disabled and passing regression
  tests for EOF, basic commands, text processing, multi-stage pipelines,
  and fork heap inheritance and isolation.

1.2.4 worked on almost all linux distribution. and mac os.
1.2.3 cpp works.
1.2.2 system
1.2.1 more stable cc
1.2.0 more stable cc
1.1.0 more stable cc and as
