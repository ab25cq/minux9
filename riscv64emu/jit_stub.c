#include "jit.h"

#ifndef ENABLE_LLVM_JIT

bool jit_backend_available(void) {
    return false;
}

bool jit_backend_init(void) {
    return false;
}

void jit_backend_shutdown(void) {
    (void)0;
}

uint64_t jit_backend_step(cpu_t *cpu, mem_t *mem, devices_t *dev, const run_opts_t *opt) {
    (void)cpu;
    (void)mem;
    (void)dev;
    (void)opt;
    return 0;
}

void jit_backend_invalidate(uint64_t addr, uint64_t size) {
    (void)addr;
    (void)size;
}

#endif // ENABLE_LLVM_JIT
