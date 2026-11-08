# minux9

version 1.2.6

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
make test-toolchain
```

Tests cover shell EOF, basic commands, text processing, pipelines, and fork
inheritance and isolation of mutable data and heap memory. `test-toolchain`
uses the guest cc, as, and ld to build and run assembly and C Hello World
programs, then checks calls to separate C and assembly modules with both input
object orders. It checks program output and every guest command's exit status.
The tests require `timeout` and Python 3. Historical Neo-C compiler experiments
are not build inputs.

sh fast_build.sh 

1.2.6 changes:

- Fixed assembler symbol references becoming invalid when names collide in
  the symbol hash table.
- Corrected ELF symbol ordering and the first-global-symbol index, and emit
  unresolved symbols as globals so other object files can define them.
- Added assembler support for `.section .rodata` using the data section.
- Fixed linker handling of local symbols, defined global symbol values,
  and absolute symbols. Local names now remain scoped to their object file.
- Corrected the output ELF section-name string table size and initialized
  the ELF header padding.
- Added `make test-toolchain` to the full regression suite. It builds and
  executes assembly and C Hello World programs entirely inside MINUX9 using
  the guest cc, as, and ld.
- Verified calls to separate C and assembly modules with both object input
  orders, checking output and the exit status of all 16 guest commands.
- All existing EOF, basic-command, text-processing, pipeline, and fork heap
  regression tests also pass.

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
