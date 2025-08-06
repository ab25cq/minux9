	.file	"msh.c"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.align	1
	.globl	strncpy
	.type	strncpy, @function
strncpy:
.LFB0:
	.file 1 "msh.c"
	.loc 1 5 46
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	s0,56(sp)
	.cfi_offset 8, -8
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
	.loc 1 9 8 discriminator 2
	blez	a5,.L4
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
	bnez	a5,.L3
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
	.loc 1 11 8
	bgtz	a5,.L5
	.loc 1 13 10
	ld	a5,-24(s0)
	.loc 1 14 1
	mv	a0,a5
	ld	s0,56(sp)
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
	sd	s0,40(sp)
	.cfi_offset 8, -8
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
# 21 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-24(s0)
.LBE2:
	.loc 1 22 1
	nop
	ld	s0,40(sp)
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
	beqz	a5,.L9
	.loc 1 30 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bgez	a5,.L9
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
	bnez	a5,.L13
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
	addi	a3,s0,-16
	add	a4,a3,a4
	sb	a5,-56(a4)
	.loc 1 45 14 discriminator 4
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	divuw	a5,a4,a5
	sw	a5,-28(s0)
.L13:
.LBE3:
	.loc 1 42 11
	lw	a5,-28(s0)
	sext.w	a5,a5
	bnez	a5,.L16
	.loc 1 48 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beqz	a5,.L18
	.loc 1 49 9
	li	a0,45
	call	putchar
	.loc 1 52 11
	j	.L18
.L19:
	.loc 1 53 9
	lw	a5,-20(s0)
	addi	a4,s0,-16
	add	a5,a4,a5
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L18:
	.loc 1 52 11
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bgez	a5,.L19
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
	beqz	a5,.L21
	.loc 1 62 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 62 14 discriminator 1
	bgez	a5,.L21
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
	bnez	a5,.L24
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
	addi	a3,s0,-16
	add	a4,a3,a4
	sb	a5,-80(a4)
	.loc 1 75 14 discriminator 4
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L24:
.LBE4:
	.loc 1 72 11
	ld	a5,-104(s0)
	bnez	a5,.L27
	.loc 1 78 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beqz	a5,.L29
	.loc 1 79 9
	li	a0,45
	call	putchar
	.loc 1 82 11
	j	.L29
.L30:
	.loc 1 83 9
	lw	a5,-20(s0)
	addi	a4,s0,-16
	add	a5,a4,a5
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L29:
	.loc 1 82 11
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bgez	a5,.L30
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
	beqz	a5,.L32
	.loc 1 92 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 92 14 discriminator 1
	bgez	a5,.L32
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
	bnez	a5,.L35
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
	addi	a3,s0,-16
	add	a4,a3,a4
	sb	a5,-80(a4)
	.loc 1 105 14 discriminator 4
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L35:
.LBE5:
	.loc 1 102 11
	ld	a5,-104(s0)
	bnez	a5,.L38
	.loc 1 108 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beqz	a5,.L40
	.loc 1 109 9
	li	a0,45
	call	putchar
	.loc 1 112 11
	j	.L40
.L41:
	.loc 1 113 9
	lw	a5,-20(s0)
	addi	a4,s0,-16
	add	a5,a4,a5
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L40:
	.loc 1 112 11
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bgez	a5,.L41
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
	sext.w	a4,a5
	.loc 1 138 13
	mv	a3,a4
	li	a5,100
	beq	a3,a5,.L48
	li	a5,120
	bne	a4,a5,.L49
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
	.loc 1 161 21 discriminator 1
	lw	a4,-32(s0)
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
	mv	a3,a5
	li	a4,37
	beq	a3,a4,.L57
	mv	a3,a5
	li	a4,37
	blt	a3,a4,.L58
	mv	a3,a5
	li	a4,120
	bgt	a3,a4,.L58
	mv	a3,a5
	li	a4,99
	blt	a3,a4,.L58
	addiw	a3,a5,-99
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
	.loc 1 179 35
	sd	a5,-56(s0)
	.loc 1 180 21
	li	a0,48
	call	putchar
	.loc 1 180 35
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
	bnez	a5,.L66
	.loc 1 186 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 1 187 27 discriminator 1
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
	.loc 1 187 27 discriminator 1
	bnez	a5,.L67
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
	.loc 1 191 26
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
	.loc 1 122 5 discriminator 1
	bnez	a5,.L68
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
	.loc 1 215 11
	bnez	a5,.L72
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
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB7:
	.loc 1 280 1
	.cfi_startproc
	addi	sp,sp,-112
	.cfi_def_cfa_offset 112
	sd	ra,104(sp)
	sd	s0,96(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,112
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-112(s0)
	mv	a4,a2
	sw	a5,-100(s0)
	mv	a5,a4
	sw	a5,-104(s0)
	.loc 1 281 9
	sw	zero,-48(s0)
	sw	zero,-44(s0)
	.loc 1 283 41
	lw	a4,-100(s0)
	li	a5,52
	mul	a5,a4,a5
	.loc 1 283 22
	ld	a4,-112(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 285 25
	lw	a5,-104(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 285 7
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,a4,.L74
.LBB17:
	.loc 1 288 14
	sw	zero,-20(s0)
	.loc 1 288 9
	j	.L75
.L76:
	.loc 1 289 22 discriminator 3
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a4,a4,a5
	.loc 1 289 20 discriminator 3
	lw	a5,-20(s0)
	slli	a5,a5,3
	addi	a3,s0,-16
	add	a5,a3,a5
	sd	a4,-56(a5)
	.loc 1 288 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L75:
	.loc 1 288 27 discriminator 1
	ld	a5,-32(s0)
	lw	a4,48(a5)
	.loc 1 288 9 discriminator 1
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,a4,.L76
	.loc 1 291 17
	lw	a5,-20(s0)
	slli	a5,a5,3
	addi	a4,s0,-16
	add	a5,a4,a5
	sd	zero,-56(a5)
.LBB18:
	.loc 1 293 9
	ld	a5,-72(s0)
	mv	a0,a5
	addi	a5,s0,-72
	mv	a1,a5
	li	a7,69
 #APP
# 293 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE18:
.LBB19:
	.loc 1 294 9
	li	a0,127
	li	a7,70
 #APP
# 294 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L77:
	.loc 1 294 9 is_stmt 0 discriminator 1
	j	.L77
.L74:
.LBE19:
.LBE17:
.LBB20:
.LBB21:
	.loc 1 297 9 is_stmt 1
	addi	a5,s0,-48
	mv	a0,a5
	li	a7,73
 #APP
# 297 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE21:
.LBB22:
	.loc 1 299 19
	li	a7,68
 #APP
# 299 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE22:
	.loc 1 299 13
	sw	a5,-36(s0)
	.loc 1 301 11
	lw	a5,-36(s0)
	sext.w	a5,a5
	bnez	a5,.L78
.LBB23:
	.loc 1 302 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 302 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE23:
.LBB24:
	.loc 1 303 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 303 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 304 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 304 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE25:
	.loc 1 305 13
	lw	a5,-100(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-104(s0)
	mv	a2,a4
	ld	a1,-112(s0)
	mv	a0,a5
	call	run_command
	j	.L84
.L78:
.LBB26:
.LBB27:
	.loc 1 308 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 308 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE27:
.LBB28:
	.loc 1 309 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 309 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE28:
.LBB29:
	.loc 1 310 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 310 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
	.loc 1 314 18
	sw	zero,-24(s0)
	.loc 1 314 13
	j	.L80
.L81:
	.loc 1 315 26 discriminator 3
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a4,a4,a5
	.loc 1 315 24 discriminator 3
	lw	a5,-24(s0)
	slli	a5,a5,3
	addi	a3,s0,-16
	add	a5,a3,a5
	sd	a4,-80(a5)
	.loc 1 314 43 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L80:
	.loc 1 314 31 discriminator 1
	ld	a5,-32(s0)
	lw	a4,48(a5)
	.loc 1 314 13 discriminator 1
	lw	a5,-24(s0)
	sext.w	a5,a5
	blt	a5,a4,.L81
	.loc 1 317 21
	lw	a5,-24(s0)
	slli	a5,a5,3
	addi	a4,s0,-16
	add	a5,a4,a5
	sd	zero,-80(a5)
.LBB30:
	.loc 1 319 13
	ld	a5,-96(s0)
	mv	a0,a5
	addi	a5,s0,-96
	mv	a1,a5
	li	a7,69
 #APP
# 319 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE30:
.LBB31:
	.loc 1 320 13
	li	a0,127
	li	a7,70
 #APP
# 320 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L82:
	.loc 1 320 13 is_stmt 0 discriminator 2
	j	.L82
.L84:
.LBE31:
.LBE26:
.LBE20:
	.loc 1 324 12 is_stmt 1
	li	a5,1
	.loc 1 325 1
	mv	a0,a5
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC1:
	.string	"$ "
	.align	3
.LC2:
	.string	"\b \b"
	.align	3
.LC3:
	.string	"\r\n"
	.align	3
.LC4:
	.string	"ERR MAX COMMAND"
	.align	3
.LC5:
	.string	"ARG NUM ERROR"
	.align	3
.LC6:
	.string	"ERR ARG NUM"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB8:
	.loc 1 327 16
	.cfi_startproc
	addi	sp,sp,-336
	.cfi_def_cfa_offset 336
	sd	ra,328(sp)
	sd	s0,320(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,336
	.cfi_def_cfa 8, 0
.L111:
.LBB32:
.LBB33:
	.loc 1 338 9
	li	a0,1
	lla	a5,.LC1
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 338 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-56(s0)
.LBE33:
	.loc 1 342 11
	sd	zero,-24(s0)
.L92:
.LBB34:
	.loc 1 344 13
	li	a0,0
	addi	a5,s0,-168
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 344 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-64(s0)
.LBE34:
.LBB35:
	.loc 1 345 13
	li	a0,1
	addi	a5,s0,-168
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 345 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-72(s0)
.LBE35:
	.loc 1 348 22
	lbu	a5,-168(s0)
	.loc 1 348 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L86
	.loc 1 348 41 discriminator 2
	lbu	a5,-168(s0)
	.loc 1 348 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L87
.L86:
	.loc 1 348 53 discriminator 3
	ld	a5,-24(s0)
	blez	a5,.L87
	.loc 1 350 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 351 24
	ld	a5,-24(s0)
	addi	a4,s0,-16
	add	a5,a4,a5
	sb	zero,-144(a5)
.LBB36:
	.loc 1 353 17
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 353 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-80(s0)
.LBE36:
	j	.L88
.L87:
	.loc 1 355 25
	lbu	a5,-168(s0)
	.loc 1 355 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L112
	.loc 1 358 25
	lbu	a5,-168(s0)
	.loc 1 358 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L113
	.loc 1 362 30
	lbu	a4,-168(s0)
	.loc 1 362 24
	ld	a5,-24(s0)
	addi	a3,s0,-16
	add	a5,a3,a5
	sb	a4,-144(a5)
	.loc 1 363 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L88:
	.loc 1 344 13
	j	.L92
.L112:
	.loc 1 356 17
	nop
	j	.L90
.L113:
	.loc 1 359 17
	nop
.L90:
.LBB37:
	.loc 1 367 9
	li	a0,1
	lla	a5,.LC3
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 367 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE37:
	.loc 1 369 15
	lbu	a5,-160(s0)
	.loc 1 369 11
	beqz	a5,.L114
	.loc 1 375 13
	sw	zero,-28(s0)
	.loc 1 376 13
	sw	zero,-32(s0)
	.loc 1 377 15
	addi	a5,s0,-160
	sd	a5,-40(s0)
	.loc 1 378 11
	sd	zero,-24(s0)
.L106:
	.loc 1 381 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 381 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L95
	.loc 1 382 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 383 22
	j	.L96
.L97:
	.loc 1 384 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L96:
	.loc 1 383 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 383 22
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L97
	.loc 1 383 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 383 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L97
	.loc 1 387 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a4,s0,-16
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-312(a5)
	.loc 1 388 48
	lw	a4,-28(s0)
	li	a5,52
	mul	a5,a4,a5
	addi	a4,s0,-16
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,-264(a5)
	.loc 1 390 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 391 19
	sd	zero,-24(s0)
	.loc 1 392 25
	sw	zero,-32(s0)
	.loc 1 394 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L106
	.loc 1 395 21
	lla	a0,.LC4
	call	puts
	.loc 1 396 21
	j	.L99
.L95:
	.loc 1 399 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 399 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L102
	.loc 1 399 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 399 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L101
	.loc 1 400 22
	j	.L102
.L103:
	.loc 1 401 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L102:
	.loc 1 400 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 400 22
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L103
	.loc 1 400 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 400 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L103
	.loc 1 403 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a4,s0,-16
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-312(a5)
	.loc 1 404 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 405 19
	sd	zero,-24(s0)
	.loc 1 407 19
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L98
	.loc 1 408 21
	lla	a0,.LC5
	call	puts
	.loc 1 409 21
	j	.L99
.L101:
	.loc 1 412 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 412 20
	bnez	a5,.L105
	.loc 1 413 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a4,s0,-16
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-312(a5)
	.loc 1 415 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 416 48
	lw	a4,-28(s0)
	li	a5,52
	mul	a5,a4,a5
	addi	a4,s0,-16
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,-264(a5)
	.loc 1 417 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 418 17
	j	.L99
.L105:
	.loc 1 421 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 421 57
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,4
	li	a5,52
	mul	a5,a2,a5
	add	a5,a3,a5
	addi	a3,s0,-16
	add	a3,a3,a5
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-312(a5)
	.loc 1 422 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 423 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 425 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L106
	.loc 1 426 21
	lla	a0,.LC6
	call	puts
	.loc 1 427 21
	j	.L99
.L98:
	.loc 1 381 15 discriminator 1
	j	.L106
.L99:
.LBB38:
	.loc 1 432 21
	li	a7,68
 #APP
# 432 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE38:
	.loc 1 432 15
	sw	a5,-92(s0)
	.loc 1 434 11
	lw	a5,-92(s0)
	sext.w	a5,a5
	bnez	a5,.L107
	.loc 1 435 13
	lw	a4,-28(s0)
	addi	a5,s0,-328
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L111
.L107:
.LBB39:
	.loc 1 438 21
	sw	zero,-44(s0)
	.loc 1 438 13
	j	.L109
.L110:
.LBB40:
.LBB41:
	.loc 1 440 17 discriminator 3
	addi	a5,s0,-172
	mv	a0,a5
	li	a7,71
 #APP
# 440 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE41:
.LBE40:
	.loc 1 438 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L109:
	.loc 1 438 13 discriminator 1
	lw	a4,-44(s0)
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L110
	j	.L111
.L114:
.LBE39:
	.loc 1 370 13
	nop
.LBE32:
	.loc 1 335 14
	j	.L111
	.cfi_endproc
.LFE8:
	.size	main, .-main
.Letext0:
	.file 2 "/usr/lib/gcc/riscv64-unknown-elf/9.3.0/include/stdarg.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xd57
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x8
	.byte	0x1
	.4byte	.LASF40
	.byte	0xc
	.4byte	.LASF41
	.4byte	.LASF42
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.byte	0x2
	.byte	0x1
	.byte	0x6
	.4byte	.LASF0
	.byte	0x2
	.byte	0x2
	.byte	0x5
	.4byte	.LASF1
	.byte	0x3
	.byte	0x4
	.byte	0x5
	.string	"int"
	.byte	0x2
	.byte	0x8
	.byte	0x5
	.4byte	.LASF2
	.byte	0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF3
	.byte	0x2
	.byte	0x2
	.byte	0x7
	.4byte	.LASF4
	.byte	0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF5
	.byte	0x2
	.byte	0x8
	.byte	0x7
	.4byte	.LASF6
	.byte	0x2
	.byte	0x8
	.byte	0x5
	.4byte	.LASF7
	.byte	0x2
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.byte	0x4
	.4byte	.LASF9
	.byte	0x2
	.byte	0x28
	.byte	0x1b
	.4byte	0x7f
	.byte	0x5
	.byte	0x8
	.4byte	.LASF43
	.byte	0x4
	.4byte	.LASF10
	.byte	0x2
	.byte	0x63
	.byte	0x18
	.4byte	0x73
	.byte	0x4
	.4byte	.LASF11
	.byte	0x3
	.byte	0x4
	.byte	0xd
	.4byte	0x3b
	.byte	0x6
	.4byte	.LASF44
	.byte	0x34
	.byte	0x1
	.2byte	0x111
	.byte	0x8
	.4byte	0xc8
	.byte	0x7
	.4byte	.LASF12
	.byte	0x1
	.2byte	0x113
	.byte	0xa
	.4byte	0xc8
	.byte	0
	.byte	0x7
	.4byte	.LASF13
	.byte	0x1
	.2byte	0x114
	.byte	0x9
	.4byte	0x3b
	.byte	0x30
	.byte	0
	.byte	0x8
	.4byte	0xde
	.4byte	0xde
	.byte	0x9
	.4byte	0x6c
	.byte	0x2
	.byte	0x9
	.4byte	0x6c
	.byte	0xf
	.byte	0
	.byte	0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF14
	.byte	0xa
	.4byte	0xde
	.byte	0xb
	.4byte	.LASF22
	.byte	0x1
	.2byte	0x147
	.byte	0x5
	.4byte	0x3b
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.byte	0x1
	.byte	0x9c
	.4byte	0x45b
	.byte	0xc
	.string	"buf"
	.byte	0x1
	.2byte	0x148
	.byte	0xa
	.4byte	0x45b
	.byte	0x3
	.byte	0x91
	.byte	0xe0,0x7e
	.byte	0xc
	.string	"n"
	.byte	0x1
	.2byte	0x149
	.byte	0xa
	.4byte	0x65
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0xd
	.4byte	.LASF15
	.byte	0x1
	.2byte	0x14a
	.byte	0xa
	.4byte	0x46b
	.byte	0x3
	.byte	0x91
	.byte	0xd8,0x7e
	.byte	0xe
	.string	"pid"
	.byte	0x1
	.2byte	0x14b
	.byte	0xb
	.4byte	0x91
	.byte	0xf
	.4byte	.LASF16
	.byte	0x1
	.2byte	0x14c
	.byte	0x9
	.4byte	0x3b
	.byte	0xf
	.4byte	.LASF17
	.byte	0x1
	.2byte	0x14d
	.byte	0x9
	.4byte	0x3b
	.byte	0x10
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.byte	0xd
	.4byte	.LASF18
	.byte	0x1
	.2byte	0x175
	.byte	0x19
	.4byte	0x47b
	.byte	0x3
	.byte	0x91
	.byte	0xb8,0x7d
	.byte	0xd
	.4byte	.LASF19
	.byte	0x1
	.2byte	0x177
	.byte	0xd
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x64
	.byte	0xd
	.4byte	.LASF13
	.byte	0x1
	.2byte	0x178
	.byte	0xd
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x60
	.byte	0xc
	.string	"p"
	.byte	0x1
	.2byte	0x179
	.byte	0xf
	.4byte	0x48b
	.byte	0x2
	.byte	0x91
	.byte	0x58
	.byte	0xc
	.string	"pid"
	.byte	0x1
	.2byte	0x1b0
	.byte	0xf
	.4byte	0x91
	.byte	0x3
	.byte	0x91
	.byte	0xa4,0x7f
	.byte	0x11
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0x227
	.byte	0xd
	.4byte	.LASF20
	.byte	0x1
	.2byte	0x152
	.byte	0x9
	.4byte	0x65
	.byte	0x2
	.byte	0x91
	.byte	0x48
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x152
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x152
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a2"
	.byte	0x1
	.2byte	0x152
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5c
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x152
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x289
	.byte	0xd
	.4byte	.LASF20
	.byte	0x1
	.2byte	0x158
	.byte	0xd
	.4byte	0x65
	.byte	0x2
	.byte	0x91
	.byte	0x40
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x158
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x158
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a2"
	.byte	0x1
	.2byte	0x158
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5c
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x158
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0x2ec
	.byte	0xd
	.4byte	.LASF20
	.byte	0x1
	.2byte	0x159
	.byte	0xd
	.4byte	0x65
	.byte	0x3
	.byte	0x91
	.byte	0xb8,0x7f
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x159
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x159
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a2"
	.byte	0x1
	.2byte	0x159
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5c
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x159
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0x34f
	.byte	0xd
	.4byte	.LASF20
	.byte	0x1
	.2byte	0x161
	.byte	0x11
	.4byte	0x65
	.byte	0x3
	.byte	0x91
	.byte	0xb0,0x7f
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x161
	.byte	0x11
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x161
	.byte	0x11
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a2"
	.byte	0x1
	.2byte	0x161
	.byte	0x11
	.4byte	0x65
	.byte	0x1
	.byte	0x5c
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x161
	.byte	0x11
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0x3b2
	.byte	0xd
	.4byte	.LASF20
	.byte	0x1
	.2byte	0x16f
	.byte	0x9
	.4byte	0x65
	.byte	0x3
	.byte	0x91
	.byte	0xa8,0x7f
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x16f
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x16f
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a2"
	.byte	0x1
	.2byte	0x16f
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5c
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x16f
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x3e6
	.byte	0xd
	.4byte	.LASF21
	.byte	0x1
	.2byte	0x1b0
	.byte	0x15
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0xd
	.4byte	.LASF20
	.byte	0x1
	.2byte	0x1b0
	.byte	0x15
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0
	.byte	0x10
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.byte	0xc
	.string	"k"
	.byte	0x1
	.2byte	0x1b6
	.byte	0x15
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x54
	.byte	0x10
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.byte	0xd
	.4byte	.LASF17
	.byte	0x1
	.2byte	0x1b7
	.byte	0x15
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0xd4,0x7e
	.byte	0x10
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x1b8
	.byte	0x11
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x1b8
	.byte	0x11
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0x8
	.4byte	0xde
	.4byte	0x46b
	.byte	0x9
	.4byte	0x6c
	.byte	0x3f
	.byte	0
	.byte	0x8
	.4byte	0xde
	.4byte	0x47b
	.byte	0x9
	.4byte	0x6c
	.byte	0x1
	.byte	0
	.byte	0x8
	.4byte	0x9d
	.4byte	0x48b
	.byte	0x9
	.4byte	0x6c
	.byte	0x2
	.byte	0
	.byte	0x12
	.byte	0x8
	.4byte	0xde
	.byte	0xb
	.4byte	.LASF23
	.byte	0x1
	.2byte	0x117
	.byte	0x5
	.4byte	0x3b
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.byte	0x1
	.byte	0x9c
	.4byte	0x832
	.byte	0x13
	.string	"n"
	.byte	0x1
	.2byte	0x117
	.byte	0x15
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0x9c,0x7f
	.byte	0x14
	.4byte	.LASF18
	.byte	0x1
	.2byte	0x117
	.byte	0x29
	.4byte	0x832
	.byte	0x3
	.byte	0x91
	.byte	0x90,0x7f
	.byte	0x14
	.4byte	.LASF19
	.byte	0x1
	.2byte	0x117
	.byte	0x37
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0x98,0x7f
	.byte	0xd
	.4byte	.LASF24
	.byte	0x1
	.2byte	0x119
	.byte	0x9
	.4byte	0x838
	.byte	0x2
	.byte	0x91
	.byte	0x50
	.byte	0xd
	.4byte	.LASF25
	.byte	0x1
	.2byte	0x11b
	.byte	0x16
	.4byte	0x832
	.byte	0x2
	.byte	0x91
	.byte	0x60
	.byte	0x11
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x5ad
	.byte	0xd
	.4byte	.LASF12
	.byte	0x1
	.2byte	0x11e
	.byte	0xf
	.4byte	0x848
	.byte	0x3
	.byte	0x91
	.byte	0xb8,0x7f
	.byte	0xc
	.string	"j"
	.byte	0x1
	.2byte	0x11f
	.byte	0xd
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x6c
	.byte	0x11
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x57c
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x125
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x125
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x125
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x10
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x126
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x126
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0x10
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.byte	0xc
	.string	"pid"
	.byte	0x1
	.2byte	0x12b
	.byte	0xd
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x5c
	.byte	0x11
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x602
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x129
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x129
	.byte	0x9
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x636
	.byte	0xd
	.4byte	.LASF21
	.byte	0x1
	.2byte	0x12b
	.byte	0x13
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0xd
	.4byte	.LASF20
	.byte	0x1
	.2byte	0x12b
	.byte	0x13
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0
	.byte	0x11
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x66a
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x12e
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x12e
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x6ad
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x12f
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x12f
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x12f
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0x6e1
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x130
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x130
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x10
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.byte	0xd
	.4byte	.LASF12
	.byte	0x1
	.2byte	0x138
	.byte	0x13
	.4byte	0x848
	.byte	0x3
	.byte	0x91
	.byte	0xa0,0x7f
	.byte	0xc
	.string	"j"
	.byte	0x1
	.2byte	0x139
	.byte	0x11
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0x11
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0x745
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x134
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x134
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0x788
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x135
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x135
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x135
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x7bc
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x136
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x136
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x11
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x7ff
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x13f
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a1"
	.byte	0x1
	.2byte	0x13f
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x13f
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0x10
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.byte	0xc
	.string	"_a0"
	.byte	0x1
	.2byte	0x140
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0xc
	.string	"_a7"
	.byte	0x1
	.2byte	0x140
	.byte	0xd
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0x12
	.byte	0x8
	.4byte	0x9d
	.byte	0x8
	.4byte	0x3b
	.4byte	0x848
	.byte	0x9
	.4byte	0x6c
	.byte	0x1
	.byte	0
	.byte	0x8
	.4byte	0x48b
	.4byte	0x858
	.byte	0x9
	.4byte	0x6c
	.byte	0x2
	.byte	0
	.byte	0x15
	.4byte	.LASF29
	.byte	0x1
	.byte	0xd6
	.byte	0x6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.byte	0x1
	.byte	0x9c
	.4byte	0x884
	.byte	0x16
	.string	"s"
	.byte	0x1
	.byte	0xd6
	.byte	0x17
	.4byte	0x884
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0
	.byte	0x12
	.byte	0x8
	.4byte	0xe5
	.byte	0x17
	.4byte	.LASF26
	.byte	0x1
	.byte	0x75
	.byte	0x5
	.4byte	0x3b
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.byte	0x1
	.byte	0x9c
	.4byte	0xa6f
	.byte	0x16
	.string	"fmt"
	.byte	0x1
	.byte	0x75
	.byte	0x18
	.4byte	0x884
	.byte	0x3
	.byte	0x91
	.byte	0xc8,0x7e
	.byte	0x18
	.byte	0x19
	.string	"ap"
	.byte	0x1
	.byte	0x76
	.byte	0xd
	.4byte	0x85
	.byte	0x3
	.byte	0x91
	.byte	0xd8,0x7e
	.byte	0x19
	.string	"p"
	.byte	0x1
	.byte	0x79
	.byte	0x11
	.4byte	0x884
	.byte	0x3
	.byte	0x91
	.byte	0xa8,0x7f
	.byte	0x11
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x9b8
	.byte	0x1a
	.4byte	.LASF27
	.byte	0x1
	.byte	0x83
	.byte	0x11
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0xa4,0x7f
	.byte	0x11
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x925
	.byte	0x1a
	.4byte	.LASF28
	.byte	0x1
	.byte	0x8d
	.byte	0x27
	.4byte	0x6c
	.byte	0x3
	.byte	0x91
	.byte	0xf0,0x7e
	.byte	0
	.byte	0x11
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x94b
	.byte	0x1a
	.4byte	.LASF28
	.byte	0x1
	.byte	0x90
	.byte	0x2c
	.4byte	0x5e
	.byte	0x3
	.byte	0x91
	.byte	0xf8,0x7e
	.byte	0
	.byte	0x11
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x971
	.byte	0x1a
	.4byte	.LASF28
	.byte	0x1
	.byte	0x97
	.byte	0x1e
	.4byte	0x65
	.byte	0x3
	.byte	0x91
	.byte	0xe0,0x7e
	.byte	0
	.byte	0x11
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x997
	.byte	0x1a
	.4byte	.LASF28
	.byte	0x1
	.byte	0x9a
	.byte	0x23
	.4byte	0x42
	.byte	0x3
	.byte	0x91
	.byte	0xe8,0x7e
	.byte	0
	.byte	0x10
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.byte	0x19
	.string	"i"
	.byte	0x1
	.byte	0xa1
	.byte	0x1e
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0xa0,0x7f
	.byte	0
	.byte	0
	.byte	0x11
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0x9de
	.byte	0x1a
	.4byte	.LASF28
	.byte	0x1
	.byte	0xa9
	.byte	0x19
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0x84,0x7f
	.byte	0
	.byte	0x11
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0xa04
	.byte	0x1a
	.4byte	.LASF28
	.byte	0x1
	.byte	0xae
	.byte	0x22
	.4byte	0x57
	.byte	0x3
	.byte	0x91
	.byte	0x94,0x7f
	.byte	0
	.byte	0x11
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0xa2a
	.byte	0x1a
	.4byte	.LASF28
	.byte	0x1
	.byte	0xb3
	.byte	0x23
	.4byte	0x6c
	.byte	0x3
	.byte	0x91
	.byte	0x88,0x7f
	.byte	0
	.byte	0x11
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0xa4e
	.byte	0x19
	.string	"s"
	.byte	0x1
	.byte	0xb9
	.byte	0x21
	.4byte	0x884
	.byte	0x3
	.byte	0x91
	.byte	0x98,0x7f
	.byte	0
	.byte	0x10
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.byte	0x19
	.string	"c"
	.byte	0x1
	.byte	0xbf
	.byte	0x1a
	.4byte	0xde
	.byte	0x3
	.byte	0x91
	.byte	0x83,0x7f
	.byte	0
	.byte	0
	.byte	0x15
	.4byte	.LASF30
	.byte	0x1
	.byte	0x57
	.byte	0x6
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.byte	0x1
	.byte	0x9c
	.4byte	0xb0b
	.byte	0x1b
	.4byte	.LASF28
	.byte	0x1
	.byte	0x57
	.byte	0x27
	.4byte	0x5e
	.byte	0x3
	.byte	0x91
	.byte	0x98,0x7f
	.byte	0x1b
	.4byte	.LASF31
	.byte	0x1
	.byte	0x57
	.byte	0x31
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0x94,0x7f
	.byte	0x1b
	.4byte	.LASF32
	.byte	0x1
	.byte	0x57
	.byte	0x3b
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0x90,0x7f
	.byte	0x19
	.string	"buf"
	.byte	0x1
	.byte	0x58
	.byte	0xa
	.4byte	0xb0b
	.byte	0x3
	.byte	0x91
	.byte	0xa0,0x7f
	.byte	0x19
	.string	"i"
	.byte	0x1
	.byte	0x59
	.byte	0x9
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x6c
	.byte	0x1a
	.4byte	.LASF33
	.byte	0x1
	.byte	0x5a
	.byte	0x9
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0x10
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.byte	0x1a
	.4byte	.LASF34
	.byte	0x1
	.byte	0x67
	.byte	0xd
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x64
	.byte	0
	.byte	0
	.byte	0x8
	.4byte	0xde
	.4byte	0xb1b
	.byte	0x9
	.4byte	0x6c
	.byte	0x40
	.byte	0
	.byte	0x15
	.4byte	.LASF35
	.byte	0x1
	.byte	0x39
	.byte	0x6
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.byte	0x1
	.byte	0x9c
	.4byte	0xbb7
	.byte	0x1b
	.4byte	.LASF28
	.byte	0x1
	.byte	0x39
	.byte	0x1e
	.4byte	0x6c
	.byte	0x3
	.byte	0x91
	.byte	0x98,0x7f
	.byte	0x1b
	.4byte	.LASF31
	.byte	0x1
	.byte	0x39
	.byte	0x28
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0x94,0x7f
	.byte	0x1b
	.4byte	.LASF32
	.byte	0x1
	.byte	0x39
	.byte	0x32
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0x90,0x7f
	.byte	0x19
	.string	"buf"
	.byte	0x1
	.byte	0x3a
	.byte	0xa
	.4byte	0xb0b
	.byte	0x3
	.byte	0x91
	.byte	0xa0,0x7f
	.byte	0x19
	.string	"i"
	.byte	0x1
	.byte	0x3b
	.byte	0x9
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x6c
	.byte	0x1a
	.4byte	.LASF33
	.byte	0x1
	.byte	0x3c
	.byte	0x9
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0x10
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.byte	0x1a
	.4byte	.LASF34
	.byte	0x1
	.byte	0x49
	.byte	0xd
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x64
	.byte	0
	.byte	0
	.byte	0x15
	.4byte	.LASF36
	.byte	0x1
	.byte	0x18
	.byte	0x6
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.byte	0x1
	.byte	0x9c
	.4byte	0xc62
	.byte	0x1b
	.4byte	.LASF28
	.byte	0x1
	.byte	0x18
	.byte	0x13
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0xac,0x7f
	.byte	0x1b
	.4byte	.LASF31
	.byte	0x1
	.byte	0x18
	.byte	0x1d
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0xa8,0x7f
	.byte	0x1b
	.4byte	.LASF32
	.byte	0x1
	.byte	0x18
	.byte	0x27
	.4byte	0x3b
	.byte	0x3
	.byte	0x91
	.byte	0xa4,0x7f
	.byte	0x19
	.string	"buf"
	.byte	0x1
	.byte	0x19
	.byte	0xa
	.4byte	0xc62
	.byte	0x3
	.byte	0x91
	.byte	0xb8,0x7f
	.byte	0x19
	.string	"i"
	.byte	0x1
	.byte	0x1a
	.byte	0x9
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x6c
	.byte	0x1a
	.4byte	.LASF33
	.byte	0x1
	.byte	0x1b
	.byte	0x9
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0x1a
	.4byte	.LASF37
	.byte	0x1
	.byte	0x1c
	.byte	0x12
	.4byte	0x57
	.byte	0x2
	.byte	0x91
	.byte	0x64
	.byte	0x10
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.byte	0x1a
	.4byte	.LASF34
	.byte	0x1
	.byte	0x2b
	.byte	0xd
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x60
	.byte	0
	.byte	0
	.byte	0x8
	.4byte	0xde
	.4byte	0xc72
	.byte	0x9
	.4byte	0x6c
	.byte	0x20
	.byte	0
	.byte	0x1c
	.4byte	.LASF38
	.byte	0x1
	.byte	0x10
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.byte	0x1
	.byte	0x9c
	.4byte	0xd06
	.byte	0x16
	.string	"c"
	.byte	0x1
	.byte	0x10
	.byte	0x13
	.4byte	0xde
	.byte	0x2
	.byte	0x91
	.byte	0x5f
	.byte	0x19
	.string	"buf"
	.byte	0x1
	.byte	0x12
	.byte	0xa
	.4byte	0x46b
	.byte	0x2
	.byte	0x91
	.byte	0x60
	.byte	0x10
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.byte	0x1a
	.4byte	.LASF20
	.byte	0x1
	.byte	0x15
	.byte	0x5
	.4byte	0x65
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0x19
	.string	"_a0"
	.byte	0x1
	.byte	0x15
	.byte	0x5
	.4byte	0x65
	.byte	0x1
	.byte	0x5a
	.byte	0x19
	.string	"_a1"
	.byte	0x1
	.byte	0x15
	.byte	0x5
	.4byte	0x65
	.byte	0x1
	.byte	0x5b
	.byte	0x19
	.string	"_a2"
	.byte	0x1
	.byte	0x15
	.byte	0x5
	.4byte	0x65
	.byte	0x1
	.byte	0x5c
	.byte	0x19
	.string	"_a7"
	.byte	0x1
	.byte	0x15
	.byte	0x5
	.4byte	0x65
	.byte	0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0x1d
	.4byte	.LASF39
	.byte	0x1
	.byte	0x5
	.byte	0x7
	.4byte	0x48b
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.byte	0x1
	.byte	0x9c
	.byte	0x16
	.string	"s"
	.byte	0x1
	.byte	0x5
	.byte	0x15
	.4byte	0x48b
	.byte	0x2
	.byte	0x91
	.byte	0x58
	.byte	0x16
	.string	"t"
	.byte	0x1
	.byte	0x5
	.byte	0x24
	.4byte	0x884
	.byte	0x2
	.byte	0x91
	.byte	0x50
	.byte	0x16
	.string	"n"
	.byte	0x1
	.byte	0x5
	.byte	0x2b
	.4byte	0x3b
	.byte	0x2
	.byte	0x91
	.byte	0x4c
	.byte	0x19
	.string	"os"
	.byte	0x1
	.byte	0x6
	.byte	0x9
	.4byte	0x48b
	.byte	0x2
	.byte	0x91
	.byte	0x68
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.byte	0x1
	.byte	0x11
	.byte	0x1
	.byte	0x25
	.byte	0xe
	.byte	0x13
	.byte	0xb
	.byte	0x3
	.byte	0xe
	.byte	0x1b
	.byte	0xe
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0x10
	.byte	0x17
	.byte	0
	.byte	0
	.byte	0x2
	.byte	0x24
	.byte	0
	.byte	0xb
	.byte	0xb
	.byte	0x3e
	.byte	0xb
	.byte	0x3
	.byte	0xe
	.byte	0
	.byte	0
	.byte	0x3
	.byte	0x24
	.byte	0
	.byte	0xb
	.byte	0xb
	.byte	0x3e
	.byte	0xb
	.byte	0x3
	.byte	0x8
	.byte	0
	.byte	0
	.byte	0x4
	.byte	0x16
	.byte	0
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x5
	.byte	0xf
	.byte	0
	.byte	0xb
	.byte	0xb
	.byte	0x3
	.byte	0xe
	.byte	0
	.byte	0
	.byte	0x6
	.byte	0x13
	.byte	0x1
	.byte	0x3
	.byte	0xe
	.byte	0xb
	.byte	0xb
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x1
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x7
	.byte	0xd
	.byte	0
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x38
	.byte	0xb
	.byte	0
	.byte	0
	.byte	0x8
	.byte	0x1
	.byte	0x1
	.byte	0x49
	.byte	0x13
	.byte	0x1
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x9
	.byte	0x21
	.byte	0
	.byte	0x49
	.byte	0x13
	.byte	0x2f
	.byte	0xb
	.byte	0
	.byte	0
	.byte	0xa
	.byte	0x26
	.byte	0
	.byte	0x49
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0xb
	.byte	0x2e
	.byte	0x1
	.byte	0x3f
	.byte	0x19
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x27
	.byte	0x19
	.byte	0x49
	.byte	0x13
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0x40
	.byte	0x18
	.byte	0x96,0x42
	.byte	0x19
	.byte	0x1
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0xc
	.byte	0x34
	.byte	0
	.byte	0x3
	.byte	0x8
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0xd
	.byte	0x34
	.byte	0
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0xe
	.byte	0x34
	.byte	0
	.byte	0x3
	.byte	0x8
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0xf
	.byte	0x34
	.byte	0
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x10
	.byte	0xb
	.byte	0x1
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0
	.byte	0
	.byte	0x11
	.byte	0xb
	.byte	0x1
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0x1
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x12
	.byte	0xf
	.byte	0
	.byte	0xb
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x13
	.byte	0x5
	.byte	0
	.byte	0x3
	.byte	0x8
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0x14
	.byte	0x5
	.byte	0
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0x5
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0x15
	.byte	0x2e
	.byte	0x1
	.byte	0x3f
	.byte	0x19
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x27
	.byte	0x19
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0x40
	.byte	0x18
	.byte	0x96,0x42
	.byte	0x19
	.byte	0x1
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x16
	.byte	0x5
	.byte	0
	.byte	0x3
	.byte	0x8
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0x17
	.byte	0x2e
	.byte	0x1
	.byte	0x3f
	.byte	0x19
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x27
	.byte	0x19
	.byte	0x49
	.byte	0x13
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0x40
	.byte	0x18
	.byte	0x96,0x42
	.byte	0x19
	.byte	0x1
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x18
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0
	.byte	0x19
	.byte	0x34
	.byte	0
	.byte	0x3
	.byte	0x8
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0x1a
	.byte	0x34
	.byte	0
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0x1b
	.byte	0x5
	.byte	0
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x49
	.byte	0x13
	.byte	0x2
	.byte	0x18
	.byte	0
	.byte	0
	.byte	0x1c
	.byte	0x2e
	.byte	0x1
	.byte	0x3f
	.byte	0x19
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x27
	.byte	0x19
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0x40
	.byte	0x18
	.byte	0x97,0x42
	.byte	0x19
	.byte	0x1
	.byte	0x13
	.byte	0
	.byte	0
	.byte	0x1d
	.byte	0x2e
	.byte	0x1
	.byte	0x3f
	.byte	0x19
	.byte	0x3
	.byte	0xe
	.byte	0x3a
	.byte	0xb
	.byte	0x3b
	.byte	0xb
	.byte	0x39
	.byte	0xb
	.byte	0x27
	.byte	0x19
	.byte	0x49
	.byte	0x13
	.byte	0x11
	.byte	0x1
	.byte	0x12
	.byte	0x7
	.byte	0x40
	.byte	0x18
	.byte	0x97,0x42
	.byte	0x19
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
.LASF41:
	.string	"msh.c"
.LASF42:
	.string	"/home/ab25cq/minux9"
.LASF15:
	.string	"buf2"
.LASF44:
	.string	"sCommand"
.LASF43:
	.string	"__builtin_va_list"
.LASF21:
	.string	"_num"
.LASF13:
	.string	"num_arg"
.LASF25:
	.string	"command"
.LASF35:
	.string	"printlong"
.LASF11:
	.string	"pid_t"
.LASF9:
	.string	"__gnuc_va_list"
.LASF3:
	.string	"unsigned char"
.LASF20:
	.string	"_ret"
.LASF8:
	.string	"long unsigned int"
.LASF4:
	.string	"short unsigned int"
.LASF19:
	.string	"num_commands"
.LASF10:
	.string	"va_list"
.LASF39:
	.string	"strncpy"
.LASF27:
	.string	"lcount"
.LASF22:
	.string	"main"
.LASF23:
	.string	"run_command"
.LASF24:
	.string	"pipes"
.LASF36:
	.string	"printint"
.LASF31:
	.string	"base"
.LASF5:
	.string	"unsigned int"
.LASF34:
	.string	"digit"
.LASF6:
	.string	"long long unsigned int"
.LASF40:
	.string	"GNU C17 9.3.0 -mcmodel=medany -march=rv64imafdc -mabi=lp64d -g -O0 -fno-omit-frame-pointer"
.LASF38:
	.string	"putchar"
.LASF37:
	.string	"uval"
.LASF16:
	.string	"argc"
.LASF2:
	.string	"long long int"
.LASF14:
	.string	"char"
.LASF26:
	.string	"printf"
.LASF1:
	.string	"short int"
.LASF30:
	.string	"printlonglong"
.LASF12:
	.string	"argv"
.LASF28:
	.string	"val_"
.LASF7:
	.string	"long int"
.LASF32:
	.string	"sign"
.LASF17:
	.string	"status"
.LASF29:
	.string	"puts"
.LASF0:
	.string	"signed char"
.LASF18:
	.string	"commands"
.LASF33:
	.string	"negative"
	.ident	"GCC: () 9.3.0"
