#ifndef RV64EMU_JIT_H
#define RV64EMU_JIT_H

#include <stdint.h>
#include <stdbool.h>

#include "rv64emu.h"

#ifdef __cplusplus
extern "C" {
#endif

bool jit_backend_available(void);
bool jit_backend_init(void);
void jit_backend_shutdown(void);
uint64_t jit_backend_step(cpu_t *cpu, mem_t *mem, devices_t *dev, const run_opts_t *opt);
void jit_backend_invalidate(uint64_t addr, uint64_t size);

#ifdef __cplusplus
}
#endif

#endif // RV64EMU_JIT_H
