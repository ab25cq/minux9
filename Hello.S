    .section .text
    .globl  _start
_start:
    la      t0, msg             # t0 = &msg
1:  lb      t1, 0(t0)           # t1 = *t0
    beqz    t1, done            # if (t1 == 0) goto done
    li      t2, 0x10000000      # UART0 base addr
    sb      t1, 0(t2)           # UART0->THR = t1
    addi    t0, t0, 1           # t0++
    j       1b                  # loop
done:
    j       done                # 止める

    .section .rodata
    .align  2
msg:
    .asciz  "Hello, world\n"

