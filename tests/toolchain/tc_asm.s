.section .text
.globl _start
_start:
    li a0, 1
    la a1, message
    li a2, 18
    li a7, 64
    ecall
    li a0, 0
    li a7, 70
    ecall
.section .rodata
message:
    .asciz "Hello World (ASM)\n"
