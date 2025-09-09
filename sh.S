	.file	"sh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9" "sh.c"
	.align	1
	.globl	strncpy
	.type	strncpy, @function
strncpy:
.LFB0:
	.file 1 "sh.c"
	.loc 1 5 46
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	sd	a1,-48(s0)
	mv	a5,a2
	sw	a5,-52(s0)
	.loc 1 8 6
	ld	a5,-40(s0)
	sd	a5,-24(s0)
	.loc 1 9 8
	nop
.L3:
	.loc 1 9 10 discriminator 2
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 9 17 discriminator 2
	ble	a5,zero,.L4
	.loc 1 9 30 discriminator 1
	ld	a4,-48(s0)
	addi	a5,a4,1
	sd	a5,-48(s0)
	.loc 1 9 23 discriminator 1
	ld	a5,-40(s0)
	addi	a3,a5,1
	sd	a3,-40(s0)
	.loc 1 9 28 discriminator 1
	lbu	a4,0(a4)
	.loc 1 9 26 discriminator 1
	sb	a4,0(a5)
	.loc 1 9 21 discriminator 1
	lbu	a5,0(a5)
	.loc 1 9 17 discriminator 1
	bne	a5,zero,.L3
	.loc 1 11 8
	j	.L4
.L5:
	.loc 1 12 7
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 12 10
	sb	zero,0(a5)
.L4:
	.loc 1 11 10
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 11 13
	bgt	a5,zero,.L5
	.loc 1 13 10
	ld	a5,-24(s0)
	.loc 1 14 1
	mv	a0,a5
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	strncpy, .-strncpy
	.align	1
	.globl	putchar
	.type	putchar, @function
putchar:
.LFB1:
	.loc 1 17 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-33(s0)
	.loc 1 19 12
	lbu	a5,-33(s0)
	sb	a5,-32(s0)
	.loc 1 20 12
	sb	zero,-31(s0)
.LBB2:
	.loc 1 21 5
	li	a0,1
	addi	a5,s0,-32
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 21 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-24(s0)
.LBE2:
	.loc 1 22 1
	nop
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	putchar, .-putchar
	.align	1
	.globl	printint
	.type	printint, @function
printint:
.LFB2:
	.loc 1 24 45
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
	.loc 1 26 9
	sw	zero,-20(s0)
	.loc 1 27 9
	sw	zero,-24(s0)
	.loc 1 30 8
	lw	a5,-92(s0)
	sext.w	a5,a5
	beq	a5,zero,.L9
	.loc 1 30 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L9
	.loc 1 31 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 32 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 1 32 14
	sw	a5,-28(s0)
	j	.L10
.L9:
	.loc 1 34 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L10:
	.loc 1 37 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L13
	.loc 1 38 9
	li	a0,48
	call	putchar
	j	.L8
.L16:
.LBB3:
	.loc 1 43 26
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 43 13
	sw	a5,-32(s0)
	.loc 1 44 18
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L14
	.loc 1 44 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 44 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L15
.L14:
	.loc 1 44 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 44 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L15:
	.loc 1 44 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 44 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-56(a4)
	.loc 1 45 14
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	divuw	a5,a4,a5
	sw	a5,-28(s0)
.L13:
.LBE3:
	.loc 1 42 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L16
	.loc 1 48 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L18
	.loc 1 49 9
	li	a0,45
	call	putchar
	.loc 1 52 11
	j	.L18
.L19:
	.loc 1 53 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L18:
	.loc 1 52 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L19
.L8:
	.loc 1 55 1
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	printint, .-printint
	.align	1
	.globl	printlong
	.type	printlong, @function
printlong:
.LFB3:
	.loc 1 57 57
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
	.loc 1 59 9
	sw	zero,-20(s0)
	.loc 1 60 9
	sw	zero,-24(s0)
	.loc 1 62 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L21
	.loc 1 62 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 62 14 discriminator 1
	bge	a5,zero,.L21
	.loc 1 63 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 64 17
	ld	a5,-104(s0)
	.loc 1 64 16
	neg	a5,a5
	.loc 1 64 14
	sd	a5,-104(s0)
.L21:
	.loc 1 67 8
	ld	a5,-104(s0)
	bne	a5,zero,.L24
	.loc 1 68 9
	li	a0,48
	call	putchar
	j	.L20
.L27:
.LBB4:
	.loc 1 73 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 73 13
	sw	a5,-28(s0)
	.loc 1 74 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L25
	.loc 1 74 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 74 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L26
.L25:
	.loc 1 74 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 74 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L26:
	.loc 1 74 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 74 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 75 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L24:
.LBE4:
	.loc 1 72 17
	ld	a5,-104(s0)
	bne	a5,zero,.L27
	.loc 1 78 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L29
	.loc 1 79 9
	li	a0,45
	call	putchar
	.loc 1 82 11
	j	.L29
.L30:
	.loc 1 83 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L29:
	.loc 1 82 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L30
.L20:
	.loc 1 85 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	printlong, .-printlong
	.align	1
	.globl	printlonglong
	.type	printlonglong, @function
printlonglong:
.LFB4:
	.loc 1 87 66
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
	.loc 1 89 9
	sw	zero,-20(s0)
	.loc 1 90 9
	sw	zero,-24(s0)
	.loc 1 92 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L32
	.loc 1 92 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 92 14 discriminator 1
	bge	a5,zero,.L32
	.loc 1 93 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 94 17
	ld	a5,-104(s0)
	.loc 1 94 16
	neg	a5,a5
	.loc 1 94 14
	sd	a5,-104(s0)
.L32:
	.loc 1 97 8
	ld	a5,-104(s0)
	bne	a5,zero,.L35
	.loc 1 98 9
	li	a0,48
	call	putchar
	j	.L31
.L38:
.LBB5:
	.loc 1 103 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 103 13
	sw	a5,-28(s0)
	.loc 1 104 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L36
	.loc 1 104 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 104 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L37
.L36:
	.loc 1 104 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 104 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L37:
	.loc 1 104 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 104 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 105 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L35:
.LBE5:
	.loc 1 102 17
	ld	a5,-104(s0)
	bne	a5,zero,.L38
	.loc 1 108 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L40
	.loc 1 109 9
	li	a0,45
	call	putchar
	.loc 1 112 11
	j	.L40
.L41:
	.loc 1 113 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L40:
	.loc 1 112 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L41
.L31:
	.loc 1 115 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
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
.LFB5:
	.loc 1 117 34
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
	.loc 1 119 5
	addi	a5,s0,64
	sd	a5,-128(s0)
	ld	a5,-128(s0)
	addi	a5,a5,-56
	sd	a5,-104(s0)
	.loc 1 122 12
	ld	a5,-120(s0)
	sd	a5,-24(s0)
	.loc 1 122 5
	j	.L43
.L68:
	.loc 1 123 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 123 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L44
	.loc 1 124 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 125 13
	j	.L45
.L44:
	.loc 1 128 10
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 130 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 130 12
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L46
.LBB6:
	.loc 1 131 17
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 132 20
	ld	a5,-24(s0)
	addi	a5,a5,1
	.loc 1 132 17
	lbu	a5,0(a5)
	.loc 1 132 16
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L47
	.loc 1 133 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 1 134 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L47:
	.loc 1 136 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 138 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 138 13
	li	a4,100
	beq	a5,a4,.L48
	li	a4,120
	bne	a5,a4,.L49
	.loc 1 140 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L50
.LBB7:
	.loc 1 141 39
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 142 25
	li	a2,0
	li	a1,16
	ld	a0,-80(s0)
	call	printlong
.LBE7:
	.loc 1 147 21
	j	.L45
.L50:
.LBB8:
	.loc 1 144 44
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-72(s0)
	.loc 1 145 25
	li	a2,0
	li	a1,16
	ld	a0,-72(s0)
	call	printlonglong
.LBE8:
	.loc 1 147 21
	j	.L45
.L48:
	.loc 1 150 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L53
.LBB9:
	.loc 1 151 30
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-96(s0)
	.loc 1 152 25
	ld	a5,-96(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlong
.LBE9:
	.loc 1 157 21
	j	.L45
.L53:
.LBB10:
	.loc 1 154 35
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-88(s0)
	.loc 1 155 25
	ld	a5,-88(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlonglong
.LBE10:
	.loc 1 157 21
	j	.L45
.L49:
	.loc 1 160 21
	li	a0,37
	call	putchar
.LBB11:
	.loc 1 161 30
	sw	zero,-32(s0)
	.loc 1 161 21
	j	.L55
.L56:
	.loc 1 161 50 discriminator 3
	li	a0,108
	call	putchar
	.loc 1 161 46 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L55:
	.loc 1 161 36 discriminator 2
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L56
.LBE11:
	.loc 1 162 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 163 21
	j	.L45
.L46:
.LBE6:
	.loc 1 167 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 167 13
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
	.loc 1 169 25
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-60(s0)
	.loc 1 170 21
	lw	a5,-60(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printint
	.loc 1 171 21
	j	.L45
.L59:
.LBE12:
.LBB13:
	.loc 1 174 34
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 175 21
	lw	a5,-44(s0)
	li	a2,0
	li	a1,16
	mv	a0,a5
	call	printint
	.loc 1 176 21
	j	.L45
.L62:
.LBE13:
.LBB14:
	.loc 1 179 57
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	.loc 1 179 35 discriminator 1
	sd	a5,-56(s0)
	.loc 1 180 21
	li	a0,48
	call	putchar
	.loc 1 180 35 discriminator 1
	li	a0,120
	call	putchar
	.loc 1 181 21
	li	a2,0
	li	a1,16
	ld	a0,-56(s0)
	call	printlong
	.loc 1 182 21
	j	.L45
.L61:
.LBE14:
.LBB15:
	.loc 1 185 33
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 186 24
	ld	a5,-40(s0)
	bne	a5,zero,.L66
	.loc 1 186 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 1 187 27
	j	.L66
.L67:
	.loc 1 187 42 discriminator 2
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 187 32 discriminator 2
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L66:
	.loc 1 187 28 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L67
	.loc 1 188 21
	j	.L45
.L64:
.LBE15:
.LBB16:
	.loc 1 191 36
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	.loc 1 191 26 discriminator 1
	sb	a5,-61(s0)
	.loc 1 192 21
	lbu	a5,-61(s0)
	mv	a0,a5
	call	putchar
	.loc 1 193 21
	j	.L45
.L57:
.LBE16:
	.loc 1 196 21
	li	a0,37
	call	putchar
	.loc 1 197 21
	j	.L45
.L58:
	.loc 1 200 21
	li	a0,37
	call	putchar
	.loc 1 201 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 202 21
	nop
.L45:
	.loc 1 122 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L43:
	.loc 1 122 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L68
	.loc 1 209 12
	li	a5,0
	.loc 1 210 1
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
.LFE5:
	.size	printf, .-printf
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB6:
	.loc 1 214 26
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
	.loc 1 215 11
	j	.L71
.L72:
	.loc 1 216 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 1 216 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L71:
	.loc 1 215 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L72
	.loc 1 218 1
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
.LFE6:
	.size	puts, .-puts
	.align	1
	.globl	xisalpha
	.type	xisalpha, @function
xisalpha:
.LFB7:
	.loc 1 221 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-33(s0)
	.loc 1 222 41
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,96
	bleu	a4,a5,.L74
	.loc 1 222 28 discriminator 1
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,122
	bleu	a4,a5,.L75
.L74:
	.loc 1 222 41 discriminator 4
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,64
	bleu	a4,a5,.L76
	.loc 1 222 54 discriminator 5
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,90
	bgtu	a4,a5,.L76
.L75:
	.loc 1 222 41 discriminator 7
	li	a5,1
	.loc 1 222 41 is_stmt 0
	j	.L77
.L76:
	.loc 1 222 41 discriminator 8
	li	a5,0
.L77:
	.loc 1 222 9 is_stmt 1 discriminator 10
	sw	a5,-20(s0)
	.loc 1 223 12
	lw	a5,-20(s0)
	.loc 1 224 1
	mv	a0,a5
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	xisalpha, .-xisalpha
	.align	1
	.globl	xisblank
	.type	xisblank, @function
xisblank:
.LFB8:
	.loc 1 227 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 228 21
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,32
	beq	a4,a5,.L80
	.loc 1 228 21 is_stmt 0 discriminator 2
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,9
	bne	a4,a5,.L81
.L80:
	.loc 1 228 21 discriminator 3
	li	a5,1
	.loc 1 228 21
	j	.L82
.L81:
	.loc 1 228 21 discriminator 4
	li	a5,0
.L82:
	.loc 1 229 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	xisblank, .-xisblank
	.align	1
	.globl	xisdigit
	.type	xisdigit, @function
xisdigit:
.LFB9:
	.loc 1 232 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 233 22
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,47
	bleu	a4,a5,.L85
	.loc 1 233 22 is_stmt 0 discriminator 1
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,57
	bgtu	a4,a5,.L85
	.loc 1 233 22 discriminator 3
	li	a5,1
	.loc 1 233 22
	j	.L86
.L85:
	.loc 1 233 22 discriminator 4
	li	a5,0
.L86:
	.loc 1 234 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE9:
	.size	xisdigit, .-xisdigit
	.align	1
	.globl	xisalnum
	.type	xisalnum, @function
xisalnum:
.LFB10:
	.loc 1 237 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 238 12
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisalpha
	mv	a5,a0
	.loc 1 238 24 discriminator 1
	bne	a5,zero,.L89
	.loc 1 238 27 discriminator 2
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 238 24 discriminator 1
	beq	a5,zero,.L90
.L89:
	.loc 1 238 24 is_stmt 0 discriminator 3
	li	a5,1
	.loc 1 238 24
	j	.L91
.L90:
	.loc 1 238 24 discriminator 4
	li	a5,0
.L91:
	.loc 1 239 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE10:
	.size	xisalnum, .-xisalnum
	.section	.rodata
	.align	3
.LC1:
	.string	"REDIRECT WRITE FILE CAN'T BE OPENED"
	.text
	.align	1
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB11:
	.loc 1 305 1
	.cfi_startproc
	addi	sp,sp,-128
	.cfi_def_cfa_offset 128
	sd	ra,120(sp)
	sd	s0,112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,128
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-128(s0)
	mv	a4,a2
	sw	a5,-116(s0)
	mv	a5,a4
	sw	a5,-120(s0)
	.loc 1 306 9
	sw	zero,-56(s0)
	sw	zero,-52(s0)
	.loc 1 308 41
	lw	a4,-116(s0)
	li	a5,88
	mul	a5,a4,a5
	.loc 1 308 22
	ld	a4,-128(s0)
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 310 25
	lw	a5,-120(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 310 7
	lw	a4,-116(s0)
	sext.w	a4,a4
	bne	a4,a5,.L94
.LBB17:
	.loc 1 313 14
	sw	zero,-20(s0)
	.loc 1 313 9
	j	.L95
.L96:
	.loc 1 314 22
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-40(s0)
	add	a4,a4,a5
	.loc 1 314 20
	lw	a3,-20(s0)
	addi	a5,s0,-80
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 313 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L95:
	.loc 1 313 27 discriminator 1
	ld	a5,-40(s0)
	lw	a5,48(a5)
	.loc 1 313 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L96
	.loc 1 316 17
	lw	a4,-20(s0)
	addi	a5,s0,-80
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 318 34
	ld	a5,-40(s0)
	lbu	a5,52(a5)
	.loc 1 318 11
	beq	a5,zero,.L97
.LBB18:
	.loc 1 320 23
	ld	a5,-40(s0)
	lw	a5,84(a5)
	.loc 1 320 15
	beq	a5,zero,.L98
.LBB19:
	.loc 1 321 22
	ld	a5,-40(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 321 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE19:
	.loc 1 321 20
	sw	a5,-24(s0)
	j	.L99
.L98:
.LBB20:
	.loc 1 324 22
	ld	a5,-40(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
 #APP
# 324 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE20:
	.loc 1 324 20
	sw	a5,-24(s0)
.L99:
	.loc 1 327 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L100
	.loc 1 328 17
	lla	a0,.LC1
	call	puts
.LBB21:
	.loc 1 329 17
	li	a0,1
	li	a7,70
 #APP
# 329 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L101:
	j	.L101
.L100:
.LBE21:
.LBB22:
	.loc 1 332 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 332 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE22:
.LBB23:
	.loc 1 333 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 333 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L97:
.LBE23:
.LBE18:
.LBB24:
	.loc 1 336 9
	ld	a5,-80(s0)
	mv	a0,a5
	addi	a5,s0,-80
	mv	a1,a5
	li	a7,69
 #APP
# 336 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 337 9
	li	a0,127
	li	a7,70
 #APP
# 337 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L102:
	j	.L102
.L94:
.LBE25:
.LBE17:
.LBB26:
.LBB27:
	.loc 1 340 9
	addi	a5,s0,-56
	mv	a0,a5
	li	a7,73
 #APP
# 340 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE27:
.LBB28:
	.loc 1 342 19
	li	a7,68
 #APP
# 342 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE28:
	.loc 1 342 13
	sw	a5,-44(s0)
	.loc 1 344 11
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L103
.LBB29:
	.loc 1 345 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 345 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
.LBB30:
	.loc 1 346 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 346 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE30:
.LBB31:
	.loc 1 347 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 347 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE31:
	.loc 1 348 13
	lw	a5,-116(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-120(s0)
	mv	a2,a4
	ld	a1,-128(s0)
	mv	a0,a5
	call	run_command
	j	.L109
.L103:
.LBB32:
.LBB33:
	.loc 1 351 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 351 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE33:
.LBB34:
	.loc 1 352 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 352 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE34:
.LBB35:
	.loc 1 353 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 353 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE35:
	.loc 1 357 18
	sw	zero,-28(s0)
	.loc 1 357 13
	j	.L105
.L106:
	.loc 1 358 26
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-40(s0)
	add	a4,a4,a5
	.loc 1 358 24
	lw	a3,-28(s0)
	addi	a5,s0,-104
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 357 43 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L105:
	.loc 1 357 31 discriminator 1
	ld	a5,-40(s0)
	lw	a5,48(a5)
	.loc 1 357 23 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L106
	.loc 1 360 21
	lw	a4,-28(s0)
	addi	a5,s0,-104
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB36:
	.loc 1 362 13
	ld	a5,-104(s0)
	mv	a0,a5
	addi	a5,s0,-104
	mv	a1,a5
	li	a7,69
 #APP
# 362 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE36:
.LBB37:
	.loc 1 363 13
	li	a0,127
	li	a7,70
 #APP
# 363 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L107:
	j	.L107
.L109:
.LBE37:
.LBE32:
.LBE26:
	.loc 1 367 12
	li	a5,1
	.loc 1 368 1
	mv	a0,a5
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 128
	addi	sp,sp,128
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE11:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC2:
	.string	"$ "
	.align	3
.LC3:
	.string	"\b \b"
	.align	3
.LC4:
	.string	"\r\n"
	.align	3
.LC5:
	.string	"ARG NUM ERROR"
	.align	3
.LC6:
	.string	"ERR MAX COMMAND"
	.align	3
.LC7:
	.string	"FILE NAME IS TOO LONG"
	.align	3
.LC8:
	.string	"ERR ARG NUM"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB12:
	.loc 1 370 16
	.cfi_startproc
	addi	sp,sp,-624
	.cfi_def_cfa_offset 624
	sd	ra,616(sp)
	sd	s0,608(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,624
	.cfi_def_cfa 8, 0
.L157:
.LBB38:
	.loc 1 386 9
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 386 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-64(s0)
.LBE38:
	.loc 1 389 11
	sd	zero,-24(s0)
.L117:
.LBB39:
	.loc 1 391 13
	li	a0,0
	addi	a5,s0,-176
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 391 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-72(s0)
.LBE39:
.LBB40:
	.loc 1 392 13
	li	a0,1
	addi	a5,s0,-176
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 392 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-80(s0)
.LBE40:
	.loc 1 395 22
	lbu	a5,-176(s0)
	.loc 1 395 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L111
	.loc 1 395 41 discriminator 2
	lbu	a5,-176(s0)
	.loc 1 395 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L112
.L111:
	.loc 1 395 53 discriminator 3
	ld	a5,-24(s0)
	ble	a5,zero,.L112
	.loc 1 397 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 398 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-152(a5)
.LBB41:
	.loc 1 400 17
	li	a0,1
	lla	a5,.LC3
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 400 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE41:
	j	.L113
.L112:
	.loc 1 402 25
	lbu	a5,-176(s0)
	.loc 1 402 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L158
	.loc 1 405 25
	lbu	a5,-176(s0)
	.loc 1 405 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L159
	.loc 1 409 30
	lbu	a4,-176(s0)
	.loc 1 409 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-152(a5)
	.loc 1 410 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L113:
	.loc 1 391 13
	j	.L117
.L158:
	.loc 1 403 17
	nop
	j	.L115
.L159:
	.loc 1 406 17
	nop
.L115:
	.loc 1 413 16
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-152(a5)
.LBB42:
	.loc 1 417 9
	li	a0,1
	lla	a5,.LC4
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 417 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-96(s0)
.LBE42:
	.loc 1 419 15
	lbu	a5,-168(s0)
	.loc 1 419 11
	beq	a5,zero,.L160
	.loc 1 423 22
	sw	zero,-28(s0)
	.loc 1 424 17
	sw	zero,-32(s0)
	.loc 1 425 11
	addi	a5,s0,-168
	sd	a5,-40(s0)
	.loc 1 426 11
	sd	zero,-24(s0)
	.loc 1 428 49
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-548(a5)
.L153:
	.loc 1 431 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 431 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L120
	.loc 1 433 19
	ld	a5,-24(s0)
	ble	a5,zero,.L121
	.loc 1 434 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,88
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-600(a5)
	.loc 1 435 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 436 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L121
	.loc 1 437 25
	lla	a0,.LC5
	call	puts
	.loc 1 438 25
	j	.L122
.L121:
	.loc 1 441 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 442 22
	j	.L123
.L124:
	.loc 1 443 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L123:
	.loc 1 442 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 442 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L124
	.loc 1 442 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 442 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L124
	.loc 1 445 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-552(a5)
	.loc 1 447 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 448 19
	sd	zero,-24(s0)
	.loc 1 449 25
	sw	zero,-32(s0)
	.loc 1 451 57
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-548(a5)
	.loc 1 453 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L153
	.loc 1 454 21
	lla	a0,.LC6
	call	puts
	.loc 1 455 21
	j	.L122
.L120:
	.loc 1 458 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 458 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L126
	.loc 1 458 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 458 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 458 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L126
.LBB43:
	.loc 1 460 19
	ld	a5,-24(s0)
	ble	a5,zero,.L127
	.loc 1 461 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,88
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-600(a5)
	.loc 1 462 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 463 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L128
	.loc 1 464 25
	lla	a0,.LC5
	call	puts
	.loc 1 465 25
	j	.L122
.L128:
	.loc 1 467 23
	sd	zero,-24(s0)
.L127:
	.loc 1 469 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 470 22
	j	.L129
.L130:
	.loc 1 471 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L129:
	.loc 1 470 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 470 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L130
	.loc 1 470 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 470 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L130
	.loc 1 474 21
	sw	zero,-44(s0)
	.loc 1 476 22
	j	.L131
.L133:
	.loc 1 477 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 477 59
	lw	a4,-44(s0)
	addiw	a3,a4,1
	sw	a3,-44(s0)
	.loc 1 477 65
	lbu	a3,0(a5)
	.loc 1 477 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-548(a5)
	.loc 1 479 23
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L131
	.loc 1 480 25
	lla	a0,.LC7
	call	puts
.LBB44:
	.loc 1 481 25
	li	a0,2
	li	a7,70
 #APP
# 481 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L132:
	j	.L132
.L131:
.LBE44:
	.loc 1 476 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 476 75 discriminator 1
	bne	a5,zero,.L133
	.loc 1 476 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 476 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L133
	.loc 1 476 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 476 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L133
	.loc 1 476 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 476 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L133
	.loc 1 476 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 476 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L133
	.loc 1 484 57
	lw	a4,-44(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-548(a5)
	.loc 1 485 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	zero,-516(a5)
	.loc 1 487 22
	j	.L134
.L135:
	.loc 1 488 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L134:
	.loc 1 487 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 487 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L135
	.loc 1 487 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 487 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L135
.LBE43:
	.loc 1 458 49
	j	.L125
.L126:
	.loc 1 491 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 491 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L136
	.loc 1 491 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 491 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 491 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L136
.LBB45:
	.loc 1 493 19
	ld	a5,-24(s0)
	ble	a5,zero,.L137
	.loc 1 494 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,88
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-600(a5)
	.loc 1 495 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 496 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L138
	.loc 1 497 25
	lla	a0,.LC5
	call	puts
	.loc 1 498 25
	j	.L122
.L138:
	.loc 1 500 23
	sd	zero,-24(s0)
.L137:
	.loc 1 503 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 504 22
	j	.L139
.L140:
	.loc 1 505 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L139:
	.loc 1 504 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 504 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L140
	.loc 1 504 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 504 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L140
	.loc 1 508 21
	sw	zero,-48(s0)
	.loc 1 510 22
	j	.L141
.L143:
	.loc 1 511 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 511 59
	lw	a4,-48(s0)
	addiw	a3,a4,1
	sw	a3,-48(s0)
	.loc 1 511 65
	lbu	a3,0(a5)
	.loc 1 511 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-548(a5)
	.loc 1 513 23
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L141
	.loc 1 514 25
	lla	a0,.LC7
	call	puts
.LBB46:
	.loc 1 515 25
	li	a0,2
	li	a7,70
 #APP
# 515 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L142:
	j	.L142
.L141:
.LBE46:
	.loc 1 510 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 510 75 discriminator 1
	bne	a5,zero,.L143
	.loc 1 510 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 510 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L143
	.loc 1 510 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 510 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L143
	.loc 1 510 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 510 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L143
	.loc 1 510 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 510 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L143
	.loc 1 518 57
	lw	a4,-48(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-548(a5)
	.loc 1 519 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,1
	sw	a4,-516(a5)
	.loc 1 521 22
	j	.L144
.L145:
	.loc 1 522 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L144:
	.loc 1 521 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 521 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L145
	.loc 1 521 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 521 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L145
.LBE45:
	.loc 1 491 49
	j	.L125
.L136:
	.loc 1 525 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 525 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L148
	.loc 1 525 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 525 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L147
	.loc 1 526 22
	j	.L148
.L149:
	.loc 1 527 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L148:
	.loc 1 526 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 526 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L149
	.loc 1 526 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 526 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L149
	.loc 1 529 19
	ld	a5,-24(s0)
	ble	a5,zero,.L161
	.loc 1 530 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,88
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-600(a5)
	.loc 1 531 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 532 23
	sd	zero,-24(s0)
	.loc 1 533 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L161
	.loc 1 534 25
	lla	a0,.LC5
	call	puts
	.loc 1 535 25
	j	.L122
.L147:
	.loc 1 540 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 540 20
	bne	a5,zero,.L151
	.loc 1 542 20
	ld	a5,-24(s0)
	ble	a5,zero,.L152
	.loc 1 543 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,88
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-600(a5)
	.loc 1 544 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 545 23
	sd	zero,-24(s0)
.L152:
	.loc 1 548 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-552(a5)
	.loc 1 549 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 550 17
	j	.L122
.L151:
	.loc 1 553 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 553 57
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,4
	li	a5,88
	mul	a5,a2,a5
	add	a5,a3,a5
	addi	a5,a5,-16
	add	a3,a5,s0
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-600(a5)
	.loc 1 554 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 555 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 557 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L153
	.loc 1 558 21
	lla	a0,.LC8
	call	puts
	.loc 1 559 21
	j	.L122
.L161:
	.loc 1 529 19
	nop
.L125:
	.loc 1 431 15
	j	.L153
.L122:
.LBB47:
	.loc 1 564 15
	li	a7,68
 #APP
# 564 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE47:
	.loc 1 564 13
	sw	a5,-100(s0)
	.loc 1 566 11
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L154
	.loc 1 567 13
	lw	a4,-28(s0)
	addi	a5,s0,-616
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L157
.L154:
.LBB48:
	.loc 1 570 21
	sw	zero,-52(s0)
	.loc 1 570 13
	j	.L155
.L156:
.LBB49:
.LBB50:
	.loc 1 572 17
	addi	a5,s0,-620
	mv	a0,a5
	li	a7,71
 #APP
# 572 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE50:
.LBE49:
	.loc 1 570 43 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L155:
	.loc 1 570 27 discriminator 1
	lw	a5,-52(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L156
	j	.L157
.L160:
.LBE48:
	.loc 1 420 13
	nop
	.loc 1 386 9
	j	.L157
	.cfi_endproc
.LFE12:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xf91
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x15
	.4byte	.LASF49
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x7
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x7
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x16
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x7
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x7
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x7
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x7
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x7
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x7
	.byte	0x8
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0xe
	.4byte	.LASF11
	.byte	0x2
	.byte	0x28
	.byte	0x1b
	.4byte	0x80
	.uleb128 0x17
	.byte	0x8
	.4byte	.LASF50
	.uleb128 0xe
	.4byte	.LASF12
	.byte	0x2
	.byte	0x67
	.byte	0x18
	.4byte	0x74
	.uleb128 0xe
	.4byte	.LASF13
	.byte	0x3
	.byte	0x4
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x18
	.4byte	.LASF51
	.byte	0x58
	.byte	0x1
	.2byte	0x128
	.byte	0x8
	.4byte	0xe1
	.uleb128 0xc
	.4byte	.LASF14
	.2byte	0x12a
	.byte	0xa
	.4byte	0xe1
	.byte	0
	.uleb128 0xc
	.4byte	.LASF15
	.2byte	0x12b
	.byte	0x9
	.4byte	0x3c
	.byte	0x30
	.uleb128 0xc
	.4byte	.LASF16
	.2byte	0x12c
	.byte	0xa
	.4byte	0x103
	.byte	0x34
	.uleb128 0xc
	.4byte	.LASF17
	.2byte	0x12d
	.byte	0x9
	.4byte	0x3c
	.byte	0x54
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0xf7
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x2
	.uleb128 0x8
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF18
	.uleb128 0x19
	.4byte	0xf7
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x113
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x11
	.4byte	.LASF26
	.2byte	0x172
	.4byte	0x3c
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4db
	.uleb128 0x1
	.string	"buf"
	.2byte	0x173
	.byte	0xa
	.4byte	0x4db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x1
	.string	"n"
	.2byte	0x174
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF19
	.2byte	0x175
	.byte	0xa
	.4byte	0x4eb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"pid"
	.2byte	0x176
	.byte	0xb
	.4byte	0x92
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x12
	.4byte	.LASF20
	.2byte	0x177
	.4byte	0x3c
	.uleb128 0x12
	.4byte	.LASF21
	.2byte	0x178
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x17a
	.byte	0x15
	.4byte	0x4fb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x17b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF15
	.2byte	0x17c
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x17d
	.byte	0xb
	.4byte	0x50b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x21f
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.4byte	0x27d
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.4byte	0x2db
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x188
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x188
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x188
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x188
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x188
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.4byte	0x339
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x190
	.byte	0x11
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x190
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x190
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x190
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x190
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x397
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x1a1
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1a1
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1a1
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1a1
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1a1
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.4byte	0x3e8
	.uleb128 0x1
	.string	"i"
	.2byte	0x1da
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x6
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1e1
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1e1
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.4byte	0x439
	.uleb128 0x1
	.string	"i"
	.2byte	0x1fc
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x6
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x203
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x203
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.4byte	0x46b
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x234
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x234
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x6
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x1
	.string	"k"
	.2byte	0x23a
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x3
	.4byte	.LASF21
	.2byte	0x23b
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -620
	.uleb128 0x6
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x23c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x23c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x4eb
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x4fb
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x9e
	.4byte	0x50b
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x4
	.byte	0
	.uleb128 0xf
	.4byte	0xf7
	.uleb128 0x11
	.4byte	.LASF27
	.2byte	0x130
	.4byte	0x3c
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x9e6
	.uleb128 0x1a
	.string	"n"
	.byte	0x1
	.2byte	0x130
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x13
	.4byte	.LASF22
	.byte	0x29
	.4byte	0x9e6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x13
	.4byte	.LASF23
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.4byte	.LASF28
	.2byte	0x132
	.byte	0x9
	.4byte	0x9eb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF29
	.2byte	0x134
	.byte	0x16
	.4byte	0x9e6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x77b
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x137
	.byte	0xf
	.4byte	0x9fb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"j"
	.2byte	0x138
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x70c
	.uleb128 0x1
	.string	"fd"
	.2byte	0x13f
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x61d
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x141
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x141
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x141
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x141
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x66b
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x144
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x144
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x144
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x144
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x69d
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x149
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x149
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x6dd
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x14c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x14c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x14c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x14d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x14d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x74c
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x150
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x150
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x150
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x151
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x151
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x6
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.uleb128 0x1
	.string	"pid"
	.2byte	0x156
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0x7cd
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x154
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x154
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0x7ff
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x156
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x156
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x83f
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x159
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x159
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x159
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x871
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.4byte	0x8a3
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x163
	.byte	0x13
	.4byte	0x9fb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"j"
	.2byte	0x164
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0x903
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x943
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x160
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x160
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x160
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0x975
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x161
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x161
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0x9b5
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x16a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x16a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x16a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x16b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x16b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xf
	.4byte	0x9e
	.uleb128 0xa
	.4byte	0x3c
	.4byte	0x9fb
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x50b
	.4byte	0xa0b
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x2
	.byte	0
	.uleb128 0x14
	.4byte	.LASF30
	.byte	0xec
	.4byte	0x3c
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa38
	.uleb128 0x9
	.string	"c"
	.byte	0xec
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x10
	.4byte	.LASF31
	.byte	0xe7
	.4byte	0x3c
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa65
	.uleb128 0x9
	.string	"c"
	.byte	0xe7
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x10
	.4byte	.LASF32
	.byte	0xe2
	.4byte	0x3c
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa92
	.uleb128 0x9
	.string	"c"
	.byte	0xe2
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x10
	.4byte	.LASF33
	.byte	0xdc
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xacd
	.uleb128 0x9
	.string	"c"
	.byte	0xdc
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x4
	.4byte	.LASF34
	.byte	0xde
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xd
	.4byte	.LASF38
	.byte	0xd6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xaf6
	.uleb128 0x9
	.string	"s"
	.byte	0xd6
	.byte	0x17
	.4byte	0xaf6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xf
	.4byte	0xfe
	.uleb128 0x14
	.4byte	.LASF35
	.byte	0x75
	.4byte	0x3c
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcd0
	.uleb128 0x9
	.string	"fmt"
	.byte	0x75
	.byte	0x18
	.4byte	0xaf6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1b
	.uleb128 0x5
	.string	"ap"
	.byte	0x76
	.byte	0xd
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x5
	.string	"p"
	.byte	0x79
	.byte	0x11
	.4byte	0xaf6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0xc1e
	.uleb128 0x4
	.4byte	.LASF36
	.byte	0x83
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0xb8f
	.uleb128 0x4
	.4byte	.LASF37
	.byte	0x8d
	.byte	0x27
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0xbb4
	.uleb128 0x4
	.4byte	.LASF37
	.byte	0x90
	.byte	0x2c
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.byte	0
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0xbd9
	.uleb128 0x4
	.4byte	.LASF37
	.byte	0x97
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0xbfe
	.uleb128 0x4
	.4byte	.LASF37
	.byte	0x9a
	.byte	0x23
	.4byte	0x43
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.byte	0
	.uleb128 0x6
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x5
	.string	"i"
	.byte	0xa1
	.byte	0x1e
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0xc43
	.uleb128 0x4
	.4byte	.LASF37
	.byte	0xa9
	.byte	0x19
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0xc68
	.uleb128 0x4
	.4byte	.LASF37
	.byte	0xae
	.byte	0x22
	.4byte	0x58
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0xc8d
	.uleb128 0x4
	.4byte	.LASF37
	.byte	0xb3
	.byte	0x23
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.byte	0
	.uleb128 0x2
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0xcb0
	.uleb128 0x5
	.string	"s"
	.byte	0xb9
	.byte	0x21
	.4byte	0xaf6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x6
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x5
	.string	"c"
	.byte	0xbf
	.byte	0x1a
	.4byte	0xf7
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF39
	.byte	0x57
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd63
	.uleb128 0xb
	.4byte	.LASF37
	.byte	0x57
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF40
	.byte	0x57
	.byte	0x31
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF41
	.byte	0x57
	.byte	0x3b
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x5
	.string	"buf"
	.byte	0x58
	.byte	0xa
	.4byte	0xd63
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x5
	.string	"i"
	.byte	0x59
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF42
	.byte	0x5a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0x67
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0xd73
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF44
	.byte	0x39
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe06
	.uleb128 0xb
	.4byte	.LASF37
	.byte	0x39
	.byte	0x1e
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF40
	.byte	0x39
	.byte	0x28
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF41
	.byte	0x39
	.byte	0x32
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x5
	.string	"buf"
	.byte	0x3a
	.byte	0xa
	.4byte	0xd63
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x5
	.string	"i"
	.byte	0x3b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF42
	.byte	0x3c
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0x49
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF45
	.byte	0x18
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xea7
	.uleb128 0xb
	.4byte	.LASF37
	.byte	0x18
	.byte	0x13
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0xb
	.4byte	.LASF40
	.byte	0x18
	.byte	0x1d
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xb
	.4byte	.LASF41
	.byte	0x18
	.byte	0x27
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x5
	.string	"buf"
	.byte	0x19
	.byte	0xa
	.4byte	0xea7
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.string	"i"
	.byte	0x1a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF42
	.byte	0x1b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF46
	.byte	0x1c
	.byte	0x12
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x6
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0x2b
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0xeb7
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x20
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF47
	.byte	0x1
	.byte	0x10
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf44
	.uleb128 0x9
	.string	"c"
	.byte	0x10
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x5
	.string	"buf"
	.byte	0x12
	.byte	0xa
	.4byte	0x4eb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x6
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x4
	.4byte	.LASF24
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.string	"_a0"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a1"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x5
	.string	"_a2"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x5
	.string	"_a7"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF48
	.byte	0x1
	.byte	0x5
	.byte	0x7
	.4byte	0x50b
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x9
	.string	"s"
	.byte	0x5
	.byte	0x15
	.4byte	0x50b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x9
	.string	"t"
	.byte	0x5
	.byte	0x24
	.4byte	0xaf6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x9
	.string	"n"
	.byte	0x5
	.byte	0x2b
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.string	"os"
	.byte	0x6
	.byte	0x9
	.4byte	0x50b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
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
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0x2
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
	.uleb128 0x3
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x7
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
	.uleb128 0x8
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0xa
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0xc
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0xe
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
	.uleb128 0xf
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 5
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
	.uleb128 0x11
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 5
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
	.uleb128 0x12
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 9
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 304
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 5
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
	.uleb128 0x15
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
	.uleb128 0x16
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
	.uleb128 0x17
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
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
	.uleb128 0x1b
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1c
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
	.uleb128 0x1d
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
.LASF23:
	.string	"num_commands"
.LASF19:
	.string	"buf2"
.LASF51:
	.string	"sCommand"
.LASF50:
	.string	"__builtin_va_list"
.LASF25:
	.string	"_num"
.LASF15:
	.string	"num_arg"
.LASF29:
	.string	"command"
.LASF44:
	.string	"printlong"
.LASF13:
	.string	"pid_t"
.LASF11:
	.string	"__gnuc_va_list"
.LASF5:
	.string	"unsigned char"
.LASF49:
	.string	"GNU C17 14.2.0 -mcmodel=medany -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr -g -O0 -fno-omit-frame-pointer"
.LASF24:
	.string	"_ret"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF47:
	.string	"putchar"
.LASF12:
	.string	"va_list"
.LASF48:
	.string	"strncpy"
.LASF36:
	.string	"lcount"
.LASF31:
	.string	"xisdigit"
.LASF26:
	.string	"main"
.LASF27:
	.string	"run_command"
.LASF28:
	.string	"pipes"
.LASF45:
	.string	"printint"
.LASF33:
	.string	"xisalpha"
.LASF7:
	.string	"unsigned int"
.LASF43:
	.string	"digit"
.LASF8:
	.string	"long long unsigned int"
.LASF16:
	.string	"redirect_file"
.LASF34:
	.string	"result"
.LASF46:
	.string	"uval"
.LASF20:
	.string	"argc"
.LASF4:
	.string	"long long int"
.LASF17:
	.string	"redirect_append"
.LASF18:
	.string	"char"
.LASF40:
	.string	"base"
.LASF35:
	.string	"printf"
.LASF3:
	.string	"short int"
.LASF30:
	.string	"xisalnum"
.LASF39:
	.string	"printlonglong"
.LASF14:
	.string	"argv"
.LASF32:
	.string	"xisblank"
.LASF37:
	.string	"val_"
.LASF9:
	.string	"long int"
.LASF41:
	.string	"sign"
.LASF21:
	.string	"status"
.LASF38:
	.string	"puts"
.LASF2:
	.string	"signed char"
.LASF22:
	.string	"commands"
.LASF42:
	.string	"negative"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/Users/ab25cq/minux9"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
