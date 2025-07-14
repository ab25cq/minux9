#.text
#.globl fork
#fork:
#    li   a7, 68          # システムコール番号をセット
#    ecall                # トラップ
#    ret                  # a0 に返ってきた戻り値で帰る
                    
   .section .text
   .align  2
   .global dump_s0
dump_s0:
    # —— プロローグ —— 
    addi    sp, sp, -16
    sd      ra, 8(sp)

    # —— s0 を a0 にセット & printlong 呼び出し —— 
    mv      a0, s0        # 第一引数: val_
    li      a1, 16        # 第二引数: base = 16
    li      a2, 0         # 第三引数: sign = 0 (unsigned)
    call    printlong     # lib の printlong(val_, base, sign)

    # —— 改行 —— 
    li      a0, '\n'
    call    putchar

    # —— エピローグ —— 
    ld      ra, 8(sp)
    addi    sp, sp, 16
    ret

    .section .text
    .align  2
    .global dump_s0_minus40
dump_s0_minus40:
    # プロローグ
    addi    sp, sp, -16
    sd      ra, 8(sp)

    # メモリ読み出し: t0 = *(uint64_t*)(s0 - 40)
    ld      t0, -40(s0)

    # 表示: printlong(t0, 16, 0)
    mv      a0, t0        # 第一引数 = 読み出した値
    li      a1, 16        # 第二引数 = base 16
    li      a2, 0         # 第三引数 = unsigned
    call    printlong

    # 改行
    li      a0, '\n'
    call    putchar

    # エピローグ
    ld      ra, 8(sp)
    addi    sp, sp, 16
    ret

