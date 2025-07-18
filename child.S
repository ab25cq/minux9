	.file	"child.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9" "child.c"
	.align	1
	.type	exit, @function
exit:
.LFB3:
	.file 1 "minux.h"
	.loc 1 153 38
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	a0,8(sp)
	.loc 1 154 5
	ld	a5,8(sp)
 #APP
# 154 "minux.h" 1
	mv   a0, a5   
li   a7, 70   
ecall         

# 0 "" 2
 #NO_APP
.L2:
	.loc 1 163 10
	j	.L2
	.cfi_endproc
.LFE3:
	.size	exit, .-exit
	.align	1
	.type	wait, @function
wait:
.LFB4:
	.loc 1 167 39
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	a0,8(sp)
	.loc 1 169 5
	ld	a5,8(sp)
 #APP
# 169 "minux.h" 1
	mv   a0, a5    
li   a7, 71    
ecall          
mv   a5, a0    

# 0 "" 2
 #NO_APP
	sw	a5,28(sp)
	.loc 1 179 12
	lw	a5,28(sp)
	.loc 1 180 1
	mv	a0,a5
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	wait, .-wait
	.align	1
	.type	pipe, @function
pipe:
.LFB6:
	.loc 1 219 34
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	a0,8(sp)
	.loc 1 221 5
	ld	a5,8(sp)
 #APP
# 221 "minux.h" 1
	mv   a0, a5    
li   a7, 73    
ecall          
mv   a5, a0    

# 0 "" 2
 #NO_APP
	sw	a5,28(sp)
	.loc 1 231 12
	lw	a5,28(sp)
	.loc 1 232 1
	mv	a0,a5
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	pipe, .-pipe
	.align	1
	.globl	putchar
	.type	putchar, @function
putchar:
.LFB7:
	.file 2 "child.c"
	.loc 2 6 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	mv	a5,a0
	sb	a5,15(sp)
	.loc 2 8 12
	lbu	a5,15(sp)
	sb	a5,16(sp)
	.loc 2 9 12
	sb	zero,17(sp)
.LBB2:
	.loc 2 10 5
	li	a0,1
	addi	a5,sp,16
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 10 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,24(sp)
.LBE2:
	.loc 2 11 1
	nop
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	putchar, .-putchar
	.align	1
	.globl	printint
	.type	printint, @function
printint:
.LFB8:
	.loc 2 13 45
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	mv	a5,a0
	mv	a3,a1
	mv	a4,a2
	sw	a5,-84(s0)
	mv	a5,a3
	sw	a5,-88(s0)
	mv	a5,a4
	sw	a5,-92(s0)
	.loc 2 15 9
	sw	zero,-20(s0)
	.loc 2 16 9
	sw	zero,-24(s0)
	.loc 2 19 8
	lw	a5,-92(s0)
	sext.w	a5,a5
	beq	a5,zero,.L9
	.loc 2 19 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L9
	.loc 2 20 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 21 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 2 21 14
	sw	a5,-28(s0)
	j	.L10
.L9:
	.loc 2 23 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L10:
	.loc 2 26 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L13
	.loc 2 27 9
	li	a0,48
	call	putchar
	j	.L8
.L16:
.LBB3:
	.loc 2 32 26
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 32 13
	sw	a5,-32(s0)
	.loc 2 33 18
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L14
	.loc 2 33 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 33 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L15
.L14:
	.loc 2 33 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 33 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L15:
	.loc 2 33 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 2 33 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-56(a4)
	.loc 2 34 14
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	divuw	a5,a4,a5
	sw	a5,-28(s0)
.L13:
.LBE3:
	.loc 2 31 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L16
	.loc 2 37 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L18
	.loc 2 38 9
	li	a0,45
	call	putchar
	.loc 2 41 11
	j	.L18
.L19:
	.loc 2 42 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L18:
	.loc 2 41 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L19
.L8:
	.loc 2 44 1
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	printint, .-printint
	.align	1
	.globl	printlong
	.type	printlong, @function
printlong:
.LFB9:
	.loc 2 46 57
	.cfi_startproc
	addi	sp,sp,-112
	.cfi_def_cfa_offset 112
	sd	ra,104(sp)
	sd	s0,96(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,112
	.cfi_def_cfa 8, 0
	sd	a0,-104(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-108(s0)
	mv	a5,a4
	sw	a5,-112(s0)
	.loc 2 48 9
	sw	zero,-20(s0)
	.loc 2 49 9
	sw	zero,-24(s0)
	.loc 2 51 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L21
	.loc 2 51 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 51 14 discriminator 1
	bge	a5,zero,.L21
	.loc 2 52 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 53 17
	ld	a5,-104(s0)
	.loc 2 53 16
	neg	a5,a5
	.loc 2 53 14
	sd	a5,-104(s0)
.L21:
	.loc 2 56 8
	ld	a5,-104(s0)
	bne	a5,zero,.L24
	.loc 2 57 9
	li	a0,48
	call	putchar
	j	.L20
.L27:
.LBB4:
	.loc 2 62 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 2 62 13
	sw	a5,-28(s0)
	.loc 2 63 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L25
	.loc 2 63 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 63 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L26
.L25:
	.loc 2 63 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 63 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L26:
	.loc 2 63 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 2 63 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 2 64 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L24:
.LBE4:
	.loc 2 61 17
	ld	a5,-104(s0)
	bne	a5,zero,.L27
	.loc 2 67 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L29
	.loc 2 68 9
	li	a0,45
	call	putchar
	.loc 2 71 11
	j	.L29
.L30:
	.loc 2 72 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L29:
	.loc 2 71 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L30
.L20:
	.loc 2 74 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE9:
	.size	printlong, .-printlong
	.align	1
	.globl	printlonglong
	.type	printlonglong, @function
printlonglong:
.LFB10:
	.loc 2 76 66
	.cfi_startproc
	addi	sp,sp,-112
	.cfi_def_cfa_offset 112
	sd	ra,104(sp)
	sd	s0,96(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,112
	.cfi_def_cfa 8, 0
	sd	a0,-104(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-108(s0)
	mv	a5,a4
	sw	a5,-112(s0)
	.loc 2 78 9
	sw	zero,-20(s0)
	.loc 2 79 9
	sw	zero,-24(s0)
	.loc 2 81 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L32
	.loc 2 81 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 81 14 discriminator 1
	bge	a5,zero,.L32
	.loc 2 82 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 83 17
	ld	a5,-104(s0)
	.loc 2 83 16
	neg	a5,a5
	.loc 2 83 14
	sd	a5,-104(s0)
.L32:
	.loc 2 86 8
	ld	a5,-104(s0)
	bne	a5,zero,.L35
	.loc 2 87 9
	li	a0,48
	call	putchar
	j	.L31
.L38:
.LBB5:
	.loc 2 92 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 2 92 13
	sw	a5,-28(s0)
	.loc 2 93 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L36
	.loc 2 93 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 93 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L37
.L36:
	.loc 2 93 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 93 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L37:
	.loc 2 93 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 2 93 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 2 94 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L35:
.LBE5:
	.loc 2 91 17
	ld	a5,-104(s0)
	bne	a5,zero,.L38
	.loc 2 97 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L40
	.loc 2 98 9
	li	a0,45
	call	putchar
	.loc 2 101 11
	j	.L40
.L41:
	.loc 2 102 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L40:
	.loc 2 101 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L41
.L31:
	.loc 2 104 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE10:
	.size	printlonglong, .-printlonglong
	.section	.rodata
	.align	3
.LC0:
	.string	"(null)"
	.text
	.align	1
	.globl	printf
	.type	printf, @function
printf:
.LFB11:
	.loc 2 106 34
	.cfi_startproc
	addi	sp,sp,-192
	.cfi_def_cfa_offset 192
	sd	ra,120(sp)
	sd	s0,112(sp)
	.cfi_offset 1, -72
	.cfi_offset 8, -80
	addi	s0,sp,128
	.cfi_def_cfa 8, 64
	sd	a0,-120(s0)
	sd	a1,8(s0)
	sd	a2,16(s0)
	sd	a3,24(s0)
	sd	a4,32(s0)
	sd	a5,40(s0)
	sd	a6,48(s0)
	sd	a7,56(s0)
	.loc 2 108 5
	addi	a5,s0,64
	sd	a5,-128(s0)
	ld	a5,-128(s0)
	addi	a5,a5,-56
	sd	a5,-104(s0)
	.loc 2 111 12
	ld	a5,-120(s0)
	sd	a5,-24(s0)
	.loc 2 111 5
	j	.L43
.L68:
	.loc 2 112 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 2 112 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L44
	.loc 2 113 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 114 13
	j	.L45
.L44:
	.loc 2 117 10
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 2 119 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 2 119 12
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L46
.LBB6:
	.loc 2 120 17
	li	a5,1
	sw	a5,-28(s0)
	.loc 2 121 20
	ld	a5,-24(s0)
	addi	a5,a5,1
	.loc 2 121 17
	lbu	a5,0(a5)
	.loc 2 121 16
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L47
	.loc 2 122 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 2 123 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L47:
	.loc 2 125 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 2 127 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 2 127 13
	li	a4,100
	beq	a5,a4,.L48
	li	a4,120
	bne	a5,a4,.L49
	.loc 2 129 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L50
.LBB7:
	.loc 2 130 39
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 2 131 25
	li	a2,0
	li	a1,16
	ld	a0,-80(s0)
	call	printlong
.LBE7:
	.loc 2 136 21
	j	.L45
.L50:
.LBB8:
	.loc 2 133 44
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-72(s0)
	.loc 2 134 25
	li	a2,0
	li	a1,16
	ld	a0,-72(s0)
	call	printlonglong
.LBE8:
	.loc 2 136 21
	j	.L45
.L48:
	.loc 2 139 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L53
.LBB9:
	.loc 2 140 30
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-96(s0)
	.loc 2 141 25
	ld	a5,-96(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlong
.LBE9:
	.loc 2 146 21
	j	.L45
.L53:
.LBB10:
	.loc 2 143 35
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-88(s0)
	.loc 2 144 25
	ld	a5,-88(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlonglong
.LBE10:
	.loc 2 146 21
	j	.L45
.L49:
	.loc 2 149 21
	li	a0,37
	call	putchar
.LBB11:
	.loc 2 150 30
	sw	zero,-32(s0)
	.loc 2 150 21
	j	.L55
.L56:
	.loc 2 150 50 discriminator 3
	li	a0,108
	call	putchar
	.loc 2 150 46 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L55:
	.loc 2 150 36 discriminator 2
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L56
.LBE11:
	.loc 2 151 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 152 21
	j	.L45
.L46:
.LBE6:
	.loc 2 156 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 2 156 13
	li	a4,37
	beq	a5,a4,.L57
	li	a4,37
	blt	a5,a4,.L58
	li	a4,120
	bgt	a5,a4,.L58
	li	a4,99
	blt	a5,a4,.L58
	addiw	a5,a5,-99
	mv	a3,a5
	sext.w	a4,a3
	li	a5,21
	bgtu	a4,a5,.L58
	slli	a5,a3,32
	srli	a5,a5,32
	slli	a4,a5,2
	lla	a5,.L60
	add	a5,a4,a5
	lw	a5,0(a5)
	sext.w	a4,a5
	lla	a5,.L60
	add	a5,a4,a5
	jr	a5
	.section	.rodata
	.align	2
	.align	2
.L60:
	.word	.L64-.L60
	.word	.L63-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L62-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L61-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L58-.L60
	.word	.L59-.L60
	.text
.L63:
.LBB12:
	.loc 2 158 25
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-60(s0)
	.loc 2 159 21
	lw	a5,-60(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printint
	.loc 2 160 21
	j	.L45
.L59:
.LBE12:
.LBB13:
	.loc 2 163 34
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 2 164 21
	lw	a5,-44(s0)
	li	a2,0
	li	a1,16
	mv	a0,a5
	call	printint
	.loc 2 165 21
	j	.L45
.L62:
.LBE13:
.LBB14:
	.loc 2 168 57
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	.loc 2 168 35 discriminator 1
	sd	a5,-56(s0)
	.loc 2 169 21
	li	a0,48
	call	putchar
	.loc 2 169 35 discriminator 1
	li	a0,120
	call	putchar
	.loc 2 170 21
	li	a2,0
	li	a1,16
	ld	a0,-56(s0)
	call	printlong
	.loc 2 171 21
	j	.L45
.L61:
.LBE14:
.LBB15:
	.loc 2 174 33
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 2 175 24
	ld	a5,-40(s0)
	bne	a5,zero,.L66
	.loc 2 175 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 2 176 27
	j	.L66
.L67:
	.loc 2 176 42 discriminator 2
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 2 176 32 discriminator 2
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L66:
	.loc 2 176 28 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L67
	.loc 2 177 21
	j	.L45
.L64:
.LBE15:
.LBB16:
	.loc 2 180 36
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	.loc 2 180 26 discriminator 1
	sb	a5,-61(s0)
	.loc 2 181 21
	lbu	a5,-61(s0)
	mv	a0,a5
	call	putchar
	.loc 2 182 21
	j	.L45
.L57:
.LBE16:
	.loc 2 185 21
	li	a0,37
	call	putchar
	.loc 2 186 21
	j	.L45
.L58:
	.loc 2 189 21
	li	a0,37
	call	putchar
	.loc 2 190 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 191 21
	nop
.L45:
	.loc 2 111 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L43:
	.loc 2 111 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L68
	.loc 2 198 12
	li	a5,0
	.loc 2 199 1
	mv	a0,a5
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 192
	addi	sp,sp,192
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE11:
	.size	printf, .-printf
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB12:
	.loc 2 203 26
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sd	a0,-24(s0)
	.loc 2 204 11
	j	.L71
.L72:
	.loc 2 205 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 2 205 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L71:
	.loc 2 204 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L72
	.loc 2 207 1
	nop
	nop
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE12:
	.size	puts, .-puts
	.section	.rodata
	.align	3
.LC1:
	.string	"ABC"
	.align	3
.LC2:
	.string	"AAA"
	.align	3
.LC3:
	.string	"END"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB13:
	.loc 2 263 16
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	.loc 2 269 5
	addi	a5,s0,-56
	mv	a0,a5
	call	pipe
.LBB17:
	.loc 2 270 5
	lw	a5,-52(s0)
	mv	a0,a5
	lla	a5,.LC1
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 270 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-24(s0)
.LBE17:
	.loc 2 271 1
	lla	a0,.LC2
	call	puts
.LBB18:
	.loc 2 273 12
	li	a7,68
 #APP
# 273 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE18:
	.loc 2 273 10
	sw	a5,-28(s0)
	.loc 2 274 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L74
	.loc 2 280 9
	li	a0,6
	call	exit
.L74:
	.loc 2 282 12
	sw	zero,-68(s0)
	.loc 2 283 5
	addi	a5,s0,-68
	mv	a0,a5
	call	wait
.LBB19:
	.loc 2 285 12
	li	a7,68
 #APP
# 285 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE19:
	.loc 2 285 10
	sw	a5,-32(s0)
	.loc 2 286 8
	lw	a5,-32(s0)
	sext.w	a5,a5
	bne	a5,zero,.L75
.LBB20:
	.loc 2 305 5
	lw	a5,-56(s0)
	mv	a0,a5
	addi	a5,s0,-64
	mv	a1,a5
	li	a2,3
	li	a7,65
 #APP
# 305 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-40(s0)
.LBE20:
.LBB21:
	.loc 2 324 5
	li	a0,1
	addi	a5,s0,-64
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 324 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-48(s0)
.LBE21:
	.loc 2 330 9
	li	a0,6
	call	exit
.L75:
	.loc 2 333 12
	sw	zero,-68(s0)
	.loc 2 334 5
	addi	a5,s0,-68
	mv	a0,a5
	call	wait
	.loc 2 339 1
	lla	a0,.LC3
	call	puts
.L76:
	.loc 2 340 10
	j	.L76
	.cfi_endproc
.LFE13:
	.size	main, .-main
.Letext0:
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x801
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x10
	.4byte	.LASF36
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x6
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x6
	.byte	0x1
	.byte	0x8
	.4byte	.LASF3
	.uleb128 0x6
	.byte	0x2
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x6
	.byte	0x2
	.byte	0x7
	.4byte	.LASF5
	.uleb128 0x11
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x6
	.byte	0x4
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x6
	.byte	0x8
	.byte	0x5
	.4byte	.LASF7
	.uleb128 0x6
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0xd
	.4byte	.LASF9
	.byte	0x3
	.byte	0x28
	.byte	0x1b
	.4byte	0x72
	.uleb128 0x12
	.byte	0x8
	.4byte	.LASF37
	.uleb128 0xd
	.4byte	.LASF10
	.byte	0x3
	.byte	0x67
	.byte	0x18
	.4byte	0x66
	.uleb128 0xd
	.4byte	.LASF11
	.byte	0x1
	.byte	0x4
	.byte	0xd
	.4byte	0x4a
	.uleb128 0x13
	.4byte	.LASF18
	.byte	0x2
	.2byte	0x107
	.byte	0x5
	.4byte	0x4a
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x276
	.uleb128 0x3
	.string	"fd"
	.2byte	0x108
	.byte	0x9
	.4byte	0x276
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.4byte	.LASF12
	.2byte	0x109
	.byte	0xb
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x7
	.4byte	.LASF13
	.2byte	0x109
	.byte	0x11
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.string	"buf"
	.2byte	0x10a
	.byte	0xa
	.4byte	0x286
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x7
	.4byte	.LASF14
	.2byte	0x10b
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x15b
	.uleb128 0x7
	.4byte	.LASF15
	.2byte	0x10e
	.byte	0x5
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x10e
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a1"
	.2byte	0x10e
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x3
	.string	"_a2"
	.2byte	0x10e
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x10e
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x18d
	.uleb128 0x7
	.4byte	.LASF16
	.2byte	0x111
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x7
	.4byte	.LASF15
	.2byte	0x111
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x4
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x1bf
	.uleb128 0x7
	.4byte	.LASF16
	.2byte	0x11d
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x7
	.4byte	.LASF15
	.2byte	0x11d
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x4
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x21c
	.uleb128 0x7
	.4byte	.LASF15
	.2byte	0x131
	.byte	0x5
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x131
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a1"
	.2byte	0x131
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x3
	.string	"_a2"
	.2byte	0x131
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x131
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x8
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.uleb128 0x7
	.4byte	.LASF15
	.2byte	0x144
	.byte	0x5
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x144
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a1"
	.2byte	0x144
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x3
	.string	"_a2"
	.2byte	0x144
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x144
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x4a
	.4byte	0x286
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x1
	.byte	0
	.uleb128 0x9
	.4byte	0x296
	.4byte	0x296
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x3
	.byte	0
	.uleb128 0x6
	.byte	0x1
	.byte	0x8
	.4byte	.LASF17
	.uleb128 0x14
	.4byte	0x296
	.uleb128 0xb
	.4byte	.LASF24
	.byte	0xcb
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2cc
	.uleb128 0xc
	.string	"s"
	.byte	0x2
	.byte	0xcb
	.byte	0x17
	.4byte	0x2cc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xe
	.4byte	0x29d
	.uleb128 0x15
	.4byte	.LASF19
	.byte	0x2
	.byte	0x6a
	.byte	0x5
	.4byte	0x4a
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4ae
	.uleb128 0xc
	.string	"fmt"
	.byte	0x2
	.byte	0x6a
	.byte	0x18
	.4byte	0x2cc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x16
	.uleb128 0x1
	.string	"ap"
	.byte	0x2
	.byte	0x6b
	.byte	0xd
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x1
	.string	"p"
	.byte	0x2
	.byte	0x6e
	.byte	0x11
	.4byte	0x2cc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x3fa
	.uleb128 0x2
	.4byte	.LASF20
	.byte	0x78
	.byte	0x11
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x4
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x36a
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x82
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0x4
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x38f
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x85
	.byte	0x2c
	.4byte	0x4ae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.byte	0
	.uleb128 0x4
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x3b4
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x8c
	.byte	0x1e
	.4byte	0x58
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.uleb128 0x4
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x3d9
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x8f
	.byte	0x23
	.4byte	0x4b5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.byte	0
	.uleb128 0x8
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x1
	.string	"i"
	.byte	0x2
	.byte	0x96
	.byte	0x1e
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0x41f
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x9e
	.byte	0x19
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.uleb128 0x4
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x444
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0xa3
	.byte	0x22
	.4byte	0x51
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x4
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0x469
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0xa8
	.byte	0x23
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.byte	0
	.uleb128 0x4
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0x48d
	.uleb128 0x1
	.string	"s"
	.byte	0x2
	.byte	0xae
	.byte	0x21
	.4byte	0x2cc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x8
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.string	"c"
	.byte	0x2
	.byte	0xb4
	.byte	0x1a
	.4byte	0x296
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.byte	0x7
	.4byte	.LASF22
	.uleb128 0x6
	.byte	0x8
	.byte	0x5
	.4byte	.LASF23
	.uleb128 0xb
	.4byte	.LASF25
	.byte	0x4c
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x554
	.uleb128 0x5
	.4byte	.LASF21
	.byte	0x2
	.byte	0x4c
	.byte	0x27
	.4byte	0x4ae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x5
	.4byte	.LASF26
	.byte	0x2
	.byte	0x4c
	.byte	0x31
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x2
	.byte	0x4c
	.byte	0x3b
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"buf"
	.byte	0x2
	.byte	0x4d
	.byte	0xa
	.4byte	0x554
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"i"
	.byte	0x2
	.byte	0x4e
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF28
	.byte	0x4f
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x8
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x2
	.4byte	.LASF29
	.byte	0x5c
	.byte	0xd
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x296
	.4byte	0x564
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x40
	.byte	0
	.uleb128 0xb
	.4byte	.LASF30
	.byte	0x2e
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x5fc
	.uleb128 0x5
	.4byte	.LASF21
	.byte	0x2
	.byte	0x2e
	.byte	0x1e
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x5
	.4byte	.LASF26
	.byte	0x2
	.byte	0x2e
	.byte	0x28
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x2
	.byte	0x2e
	.byte	0x32
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"buf"
	.byte	0x2
	.byte	0x2f
	.byte	0xa
	.4byte	0x554
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"i"
	.byte	0x2
	.byte	0x30
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF28
	.byte	0x31
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x8
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x2
	.4byte	.LASF29
	.byte	0x3e
	.byte	0xd
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	.LASF31
	.byte	0xd
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6a2
	.uleb128 0x5
	.4byte	.LASF21
	.byte	0x2
	.byte	0xd
	.byte	0x13
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x5
	.4byte	.LASF26
	.byte	0x2
	.byte	0xd
	.byte	0x1d
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x2
	.byte	0xd
	.byte	0x27
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x1
	.string	"buf"
	.byte	0x2
	.byte	0xe
	.byte	0xa
	.4byte	0x6a2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.string	"i"
	.byte	0x2
	.byte	0xf
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF28
	.byte	0x10
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF32
	.byte	0x11
	.byte	0x12
	.4byte	0x51
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x8
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x2
	.4byte	.LASF29
	.byte	0x20
	.byte	0xd
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x296
	.4byte	0x6b2
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x20
	.byte	0
	.uleb128 0x17
	.4byte	.LASF33
	.byte	0x2
	.byte	0x5
	.byte	0x6
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x745
	.uleb128 0xc
	.string	"c"
	.byte	0x2
	.byte	0x5
	.byte	0x13
	.4byte	0x296
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.uleb128 0x1
	.string	"buf"
	.byte	0x2
	.byte	0x7
	.byte	0xa
	.4byte	0x745
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x8
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x2
	.4byte	.LASF15
	.byte	0xa
	.byte	0x5
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.uleb128 0x1
	.string	"_a0"
	.byte	0x2
	.byte	0xa
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x2
	.byte	0xa
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x2
	.byte	0xa
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x2
	.byte	0xa
	.byte	0x5
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x296
	.4byte	0x755
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x1
	.byte	0
	.uleb128 0xf
	.4byte	.LASF34
	.byte	0xdb
	.byte	0x13
	.4byte	0x4a
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x795
	.uleb128 0xc
	.string	"pip"
	.byte	0x1
	.byte	0xdb
	.byte	0x1d
	.4byte	0x795
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ret"
	.byte	0x1
	.byte	0xdc
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0xe
	.4byte	0x4a
	.uleb128 0xf
	.4byte	.LASF35
	.byte	0xa7
	.byte	0x15
	.4byte	0x84
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x7da
	.uleb128 0x5
	.4byte	.LASF14
	.byte	0x1
	.byte	0xa7
	.byte	0x1f
	.4byte	0x795
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ret"
	.byte	0x1
	.byte	0xa8
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0x18
	.4byte	.LASF38
	.byte	0x1
	.byte	0x99
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x5
	.4byte	.LASF14
	.byte	0x1
	.byte	0x99
	.byte	0x1e
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x2c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x8
	.byte	0
	.2byte	0
	.2byte	0
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.8byte	0
	.8byte	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF15:
	.string	"_ret"
.LASF4:
	.string	"short int"
.LASF33:
	.string	"putchar"
.LASF18:
	.string	"main"
.LASF32:
	.string	"uval"
.LASF10:
	.string	"va_list"
.LASF16:
	.string	"_num"
.LASF25:
	.string	"printlonglong"
.LASF36:
	.string	"GNU C17 14.2.0 -mcmodel=medany -momit-leaf-frame-pointer -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr -g -O0 -fno-omit-frame-pointer"
.LASF35:
	.string	"wait"
.LASF23:
	.string	"long long int"
.LASF31:
	.string	"printint"
.LASF7:
	.string	"long int"
.LASF19:
	.string	"printf"
.LASF28:
	.string	"negative"
.LASF12:
	.string	"pid1"
.LASF13:
	.string	"pid2"
.LASF38:
	.string	"exit"
.LASF3:
	.string	"unsigned char"
.LASF2:
	.string	"signed char"
.LASF22:
	.string	"long long unsigned int"
.LASF6:
	.string	"unsigned int"
.LASF24:
	.string	"puts"
.LASF5:
	.string	"short unsigned int"
.LASF14:
	.string	"status"
.LASF30:
	.string	"printlong"
.LASF17:
	.string	"char"
.LASF21:
	.string	"val_"
.LASF8:
	.string	"long unsigned int"
.LASF37:
	.string	"__builtin_va_list"
.LASF27:
	.string	"sign"
.LASF11:
	.string	"pid_t"
.LASF34:
	.string	"pipe"
.LASF20:
	.string	"lcount"
.LASF9:
	.string	"__gnuc_va_list"
.LASF29:
	.string	"digit"
.LASF26:
	.string	"base"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"child.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
