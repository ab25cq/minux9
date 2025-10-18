SHELL := /bin/bash

# Host compiler settings for the emulator
CC      ?= cc
CFLAGS  ?= -std=c11 -O2
CXX     ?= c++
CXXFLAGS ?= -std=c++17 -O2
CPPFLAGS ?=
LDFLAGS ?=
LDLIBS  ?=

LLVM_CONFIG_CANDIDATE := $(firstword $(wildcard /opt/homebrew/opt/llvm/bin/llvm-config) $(wildcard /opt/homebrew/opt/llvm@*/bin/llvm-config) llvm-config)
LLVM_CONFIG ?= $(LLVM_CONFIG_CANDIDATE)
LLVM_AVAILABLE := $(shell command -v $(LLVM_CONFIG) >/dev/null 2>&1 && echo 1 || echo 0)
ifeq ($(LLVM_AVAILABLE),1)
  DEFAULT_ENABLE_LLVM := 1
else
  DEFAULT_ENABLE_LLVM := 0
endif
ENABLE_LLVM_JIT ?= $(DEFAULT_ENABLE_LLVM)

OBJS := rv64emu.o jit_stub.o

ifeq ($(ENABLE_LLVM_JIT),1)
  ifneq ($(LLVM_AVAILABLE),1)
    $(error ENABLE_LLVM_JIT=1 but $(LLVM_CONFIG) not found. Set LLVM_CONFIG or disable with ENABLE_LLVM_JIT=0)
  endif
  LLVM_CXXFLAGS := $(shell $(LLVM_CONFIG) --cxxflags)
  LLVM_LDFLAGS  := $(shell $(LLVM_CONFIG) --ldflags)
  LLVM_LIBS     := $(shell $(LLVM_CONFIG) --libs --system-libs orcjit native)
  CXXFLAGS += $(LLVM_CXXFLAGS)
  LDFLAGS  += $(LLVM_LDFLAGS)
  LDLIBS   += $(LLVM_LIBS)
  CPPFLAGS += -DENABLE_LLVM_JIT=1
  OBJS     += jit_llvm.o
endif

# RISC-V cross toolchain for building the sample ELF
# Override as needed, e.g. `make RV_CC=clang run`
RV_CC   ?= riscv64-unknown-elf-gcc

# Detect clang usage to adjust flags
RV_CC_BASENAME := $(notdir $(RV_CC))
ifeq ($(findstring clang,$(RV_CC_BASENAME)),clang)
  RV_TARGET_FLAGS := --target=riscv64
  # Ensure the first PT_LOAD segment starts at 0x80000000
  RV_LDFLAGS      := -nostartfiles -nostdlib -static -Wl,-Ttext-segment=0x80000000
  RV_CFLAGS       := -march=rv64i_zicsr -mabi=lp64 -O2
else
  RV_TARGET_FLAGS :=
  # Ensure the first PT_LOAD segment starts at 0x80000000
  RV_LDFLAGS      := -nostartfiles -nostdlib -static -Wl,-Ttext-segment=0x80000000 -Wl,--no-relax
  RV_CFLAGS       := -march=rv64i_zicsr -mabi=lp64 -O2
endif

# Optional: limit steps when tracing (0 = unlimited)
STEPS ?= 0

.PHONY: all clean run run-smoke

all: rv64emu x1_set.elf mmu_smoke.elf

# Build the emulator (native)
rv64emu: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $@

# Build minimal ELF that writes x1 and exits via ecall
x1_set.elf: x1_set.S
	@command -v $(RV_CC) >/dev/null || { \
	  echo "Error: $(RV_CC) not found. Install riscv64-unknown-elf-gcc or set RV_CC=clang (with lld)."; \
	  exit 1; \
	}
	$(RV_CC) $(RV_TARGET_FLAGS) $(RV_CFLAGS) $(RV_LDFLAGS) $< -o $@

# Build MMU smoke ELF: sets up Sv39 and tests a mapped load/store
mmu_smoke.elf: mmu_smoke.S
	@command -v $(RV_CC) >/dev/null || { \
	  echo "Error: $(RV_CC) not found. Install riscv64-unknown-elf-gcc or set RV_CC=clang (with lld)."; \
	  exit 1; \
	}
	$(RV_CC) $(RV_TARGET_FLAGS) $(RV_CFLAGS) $(RV_LDFLAGS) $< -o $@

# Run MINUX9 with MMU enabled
run: all
	./rv64emu -i ../kernel.elf --disk ../fs.img --mem 128 --mmu sv39 --llvm-jit
#	./rv64emu -i ../kernel.elf --disk ../fs.img --mem 128 --mmu sv39
#	./rv64emu -i ../kernel.elf --disk ../fs.img --mmu sv39 --mem 512

# Run with trace so registers print each step
run-smoke: all
	./rv64emu -i mmu_smoke.elf --trace $(if $(filter-out 0,$(STEPS)),--steps $(STEPS),)

clean:
	rm -f rv64emu x1_set.elf mmu_smoke.elf *.o
