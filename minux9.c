
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include "minux.h"

void exit(int status) {
  // perform SYS_exit
  register long _a0 asm("a0") = (long)status;
  register long _a7 asm("a7") = SYS_exit;
  asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
  while (1) { }
}

void putchar(char c)
{
    write(1, &c, 1);
}

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}


