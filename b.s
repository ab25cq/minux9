 .file 1 "b.c"
 #  寄存器传递变量a偏移量-4
 #  寄存器传递变量__alloca_size__偏移量-16

  # static全局变量.L..1
  .local .L..1
  # 对齐全局变量

  # 数据段标签
  .data
  .type .L..1, @object
  .size .L..1, 5
  .align 0
.L..1:
  .byte 109     # 字符：m
  .byte 97      # 字符：a
  .byte 105     # 字符：i
  .byte 110     # 字符：n
  .byte 0

  # static全局变量.L..0
  .local .L..0
  # 对齐全局变量

  # 数据段标签
  .data
  .type .L..0, @object
  .size .L..0, 5
  .align 0
.L..0:
  .byte 109     # 字符：m
  .byte 97      # 字符：a
  .byte 105     # 字符：i
  .byte 110     # 字符：n
  .byte 0

  # 定义全局main函数
  .globl main
  # 代码段标签
  .text
# =====main段开始===============
# main段标签
  .type main, @function
main:
  # VaArea的区域，大小为64
  addi sp, sp, -64
  # 将ra寄存器压栈,保存ra的值
  addi sp, sp, -16
  sd ra, 8(sp)
  # 将fp压栈，fp属于“被调用者保存”的寄存器，需要恢复原值
  sd fp, 0(sp)
  # 将sp的值写入fp
  mv fp, sp
  # 保存所有的fs0~fs11寄存器
  fsgnj.d ft0, fs0, fs0
  fsgnj.d ft1, fs1, fs1
  fsgnj.d ft2, fs2, fs2
  fsgnj.d ft3, fs3, fs3
  fsgnj.d ft4, fs4, fs4
  fsgnj.d ft5, fs5, fs5
  fsgnj.d ft6, fs6, fs6
  fsgnj.d ft7, fs7, fs7
  fsgnj.d ft8, fs8, fs8
  fsgnj.d ft9, fs9, fs9
  fsgnj.d ft10, fs10, fs10
  fsgnj.d ft11, fs11, fs11
  # sp腾出StackSize大小的栈空间
  li t0, -16
  add sp, sp, t0
  # 将当前的sp值，存入到Alloca区域的底部
  li t0, -16
  add t0, t0, fp
  sd sp, 0(t0)
  # 可变参数VaArea的偏移量为16
  # 可变参数，相对__va_area__的偏移量为0
  # 将a0寄存器的值存入16(fp)的栈地址
  li t0, 16
  add t0, fp, t0
  sd a0, 0(t0)
  # 可变参数，相对__va_area__的偏移量为8
  # 将a1寄存器的值存入24(fp)的栈地址
  li t0, 24
  add t0, fp, t0
  sd a1, 0(t0)
  # 可变参数，相对__va_area__的偏移量为16
  # 将a2寄存器的值存入32(fp)的栈地址
  li t0, 32
  add t0, fp, t0
  sd a2, 0(t0)
  # 可变参数，相对__va_area__的偏移量为24
  # 将a3寄存器的值存入40(fp)的栈地址
  li t0, 40
  add t0, fp, t0
  sd a3, 0(t0)
  # 可变参数，相对__va_area__的偏移量为32
  # 将a4寄存器的值存入48(fp)的栈地址
  li t0, 48
  add t0, fp, t0
  sd a4, 0(t0)
  # 可变参数，相对__va_area__的偏移量为40
  # 将a5寄存器的值存入56(fp)的栈地址
  li t0, 56
  add t0, fp, t0
  sd a5, 0(t0)
  # 可变参数，相对__va_area__的偏移量为48
  # 将a6寄存器的值存入64(fp)的栈地址
  li t0, 64
  add t0, fp, t0
  sd a6, 0(t0)
  # 可变参数，相对__va_area__的偏移量为56
  # 将a7寄存器的值存入72(fp)的栈地址
  li t0, 72
  add t0, fp, t0
  sd a7, 0(t0)
# =====main段主体===============
  .loc 1 2
  .loc 1 2
  .loc 1 2
  .loc 1 2
  .loc 1 2
  .loc 1 2
  .loc 1 2
  # 对a的内存-4(fp)清零4位
  li t0, -4
  add t0, fp, t0
  sb zero, 0(t0)
  li t0, -3
  add t0, fp, t0
  sb zero, 0(t0)
  li t0, -2
  add t0, fp, t0
  sb zero, 0(t0)
  li t0, -1
  add t0, fp, t0
  sb zero, 0(t0)
  .loc 1 2
  # 获取局部变量a的栈内地址为-4(fp)
  li t0, -4
  add a0, fp, t0
  # 压栈，将a0的值存入栈顶
  addi sp, sp, -8
  sd a0, 0(sp)
  .loc 1 2
  .loc 1 2
  .loc 1 2
  .loc 1 2
  # 将1加载到a0中
  li a0, 1
  # 压栈，将a0的值存入栈顶
  addi sp, sp, -8
  sd a0, 0(sp)
  .loc 1 2
  .loc 1 2
  # 将1加载到a0中
  li a0, 1
  # 弹栈，将栈顶的值存入a1
  ld a1, 0(sp)
  addi sp, sp, 8
  # a0+a1，结果写入a0
  addw a0, a0, a1
  # 弹栈，将栈顶的值存入a1
  ld a1, 0(sp)
  addi sp, sp, 8
  # 将a0的值，写入到a1中存放的地址
  sw a0, 0(a1)
  .loc 1 2
# 返回语句
  .loc 1 2
  .loc 1 2
  # 获取局部变量a的栈内地址为-4(fp)
  li t0, -4
  add a0, fp, t0
  # 读取a0中存放的地址，得到的值存入a0
  lw a0, 0(a0)
  # 跳转到.L.return.main段
  j .L.return.main
  li a0, 0
# =====main段结束===============
# return段标签
.L.return.main:
  # 恢复所有的fs0~fs11寄存器
  fsgnj.d fs0, ft0, ft0
  fsgnj.d fs1, ft1, ft1
  fsgnj.d fs2, ft2, ft2
  fsgnj.d fs3, ft3, ft3
  fsgnj.d fs4, ft4, ft4
  fsgnj.d fs5, ft5, ft5
  fsgnj.d fs6, ft6, ft6
  fsgnj.d fs7, ft7, ft7
  fsgnj.d fs8, ft8, ft8
  fsgnj.d fs9, ft9, ft9
  fsgnj.d fs10, ft10, ft10
  fsgnj.d fs11, ft11, ft11
  # 将fp的值写回sp
  mv sp, fp
  # 将最早fp保存的值弹栈，恢复fp和sp
  ld fp, 0(sp)
  # 将ra寄存器弹栈,恢复ra的值
  ld ra, 8(sp)
  addi sp, sp, 16
  # 归还VaArea的区域，大小为64
  addi sp, sp, 64
  # 返回a0值给系统调用
  ret

