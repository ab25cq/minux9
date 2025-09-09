	.file	"sh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9-dev" "sh.c"
	.align	1
	.globl	strcmp
	.type	strcmp, @function
strcmp:
.LFB0:
	.file 1 "sh.c"
	.loc 1 5 44
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
	sd	a1,-32(s0)
	.loc 1 6 11
	j	.L2
.L4:
	.loc 1 7 11
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 8 11
	ld	a5,-32(s0)
	addi	a5,a5,1
	sd	a5,-32(s0)
.L2:
	.loc 1 6 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 6 16
	beq	a5,zero,.L3
	.loc 1 6 20 discriminator 1
	ld	a5,-24(s0)
	lbu	a4,0(a5)
	.loc 1 6 27 discriminator 1
	ld	a5,-32(s0)
	lbu	a5,0(a5)
	.loc 1 6 16 discriminator 1
	beq	a4,a5,.L4
.L3:
	.loc 1 10 27
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 10 12
	sext.w	a4,a5
	.loc 1 10 48
	ld	a5,-32(s0)
	lbu	a5,0(a5)
	.loc 1 10 33
	sext.w	a5,a5
	.loc 1 10 31
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 11 1
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
.LFE0:
	.size	strcmp, .-strcmp
	.align	1
	.globl	strncpy
	.type	strncpy, @function
strncpy:
.LFB1:
	.loc 1 13 46
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
	.loc 1 16 6
	ld	a5,-40(s0)
	sd	a5,-24(s0)
	.loc 1 17 8
	nop
.L8:
	.loc 1 17 10 discriminator 2
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 17 17 discriminator 2
	ble	a5,zero,.L9
	.loc 1 17 30 discriminator 1
	ld	a4,-48(s0)
	addi	a5,a4,1
	sd	a5,-48(s0)
	.loc 1 17 23 discriminator 1
	ld	a5,-40(s0)
	addi	a3,a5,1
	sd	a3,-40(s0)
	.loc 1 17 28 discriminator 1
	lbu	a4,0(a4)
	.loc 1 17 26 discriminator 1
	sb	a4,0(a5)
	.loc 1 17 21 discriminator 1
	lbu	a5,0(a5)
	.loc 1 17 17 discriminator 1
	bne	a5,zero,.L8
	.loc 1 19 8
	j	.L9
.L10:
	.loc 1 20 7
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 20 10
	sb	zero,0(a5)
.L9:
	.loc 1 19 10
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 19 13
	bgt	a5,zero,.L10
	.loc 1 21 10
	ld	a5,-24(s0)
	.loc 1 22 1
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
.LFE1:
	.size	strncpy, .-strncpy
	.align	1
	.globl	putchar
	.type	putchar, @function
putchar:
.LFB2:
	.loc 1 25 1
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
	.loc 1 27 12
	lbu	a5,-33(s0)
	sb	a5,-32(s0)
	.loc 1 28 12
	sb	zero,-31(s0)
.LBB2:
	.loc 1 29 5
	li	a0,1
	addi	a5,s0,-32
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 29 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-24(s0)
.LBE2:
	.loc 1 30 1
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
.LFE2:
	.size	putchar, .-putchar
	.align	1
	.globl	printint
	.type	printint, @function
printint:
.LFB3:
	.loc 1 32 45
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
	.loc 1 34 9
	sw	zero,-20(s0)
	.loc 1 35 9
	sw	zero,-24(s0)
	.loc 1 38 8
	lw	a5,-92(s0)
	sext.w	a5,a5
	beq	a5,zero,.L14
	.loc 1 38 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L14
	.loc 1 39 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 40 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 1 40 14
	sw	a5,-28(s0)
	j	.L15
.L14:
	.loc 1 42 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L15:
	.loc 1 45 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L18
	.loc 1 46 9
	li	a0,48
	call	putchar
	j	.L13
.L21:
.LBB3:
	.loc 1 51 26
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 51 13
	sw	a5,-32(s0)
	.loc 1 52 18
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L19
	.loc 1 52 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 52 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L20
.L19:
	.loc 1 52 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 52 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L20:
	.loc 1 52 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 52 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-56(a4)
	.loc 1 53 14
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	divuw	a5,a4,a5
	sw	a5,-28(s0)
.L18:
.LBE3:
	.loc 1 50 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L21
	.loc 1 56 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L23
	.loc 1 57 9
	li	a0,45
	call	putchar
	.loc 1 60 11
	j	.L23
.L24:
	.loc 1 61 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L23:
	.loc 1 60 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L24
.L13:
	.loc 1 63 1
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	printint, .-printint
	.align	1
	.globl	printlong
	.type	printlong, @function
printlong:
.LFB4:
	.loc 1 65 57
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
	.loc 1 67 9
	sw	zero,-20(s0)
	.loc 1 68 9
	sw	zero,-24(s0)
	.loc 1 70 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L26
	.loc 1 70 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 70 14 discriminator 1
	bge	a5,zero,.L26
	.loc 1 71 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 72 17
	ld	a5,-104(s0)
	.loc 1 72 16
	neg	a5,a5
	.loc 1 72 14
	sd	a5,-104(s0)
.L26:
	.loc 1 75 8
	ld	a5,-104(s0)
	bne	a5,zero,.L29
	.loc 1 76 9
	li	a0,48
	call	putchar
	j	.L25
.L32:
.LBB4:
	.loc 1 81 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 81 13
	sw	a5,-28(s0)
	.loc 1 82 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L30
	.loc 1 82 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 82 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L31
.L30:
	.loc 1 82 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 82 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L31:
	.loc 1 82 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 82 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 83 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L29:
.LBE4:
	.loc 1 80 17
	ld	a5,-104(s0)
	bne	a5,zero,.L32
	.loc 1 86 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L34
	.loc 1 87 9
	li	a0,45
	call	putchar
	.loc 1 90 11
	j	.L34
.L35:
	.loc 1 91 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L34:
	.loc 1 90 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L35
.L25:
	.loc 1 93 1
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
	.size	printlong, .-printlong
	.align	1
	.globl	printlonglong
	.type	printlonglong, @function
printlonglong:
.LFB5:
	.loc 1 95 66
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
	.loc 1 97 9
	sw	zero,-20(s0)
	.loc 1 98 9
	sw	zero,-24(s0)
	.loc 1 100 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L37
	.loc 1 100 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 100 14 discriminator 1
	bge	a5,zero,.L37
	.loc 1 101 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 102 17
	ld	a5,-104(s0)
	.loc 1 102 16
	neg	a5,a5
	.loc 1 102 14
	sd	a5,-104(s0)
.L37:
	.loc 1 105 8
	ld	a5,-104(s0)
	bne	a5,zero,.L40
	.loc 1 106 9
	li	a0,48
	call	putchar
	j	.L36
.L43:
.LBB5:
	.loc 1 111 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 111 13
	sw	a5,-28(s0)
	.loc 1 112 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L41
	.loc 1 112 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 112 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L42
.L41:
	.loc 1 112 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 112 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L42:
	.loc 1 112 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 112 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 113 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L40:
.LBE5:
	.loc 1 110 17
	ld	a5,-104(s0)
	bne	a5,zero,.L43
	.loc 1 116 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L45
	.loc 1 117 9
	li	a0,45
	call	putchar
	.loc 1 120 11
	j	.L45
.L46:
	.loc 1 121 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L45:
	.loc 1 120 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L46
.L36:
	.loc 1 123 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE5:
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
.LFB6:
	.loc 1 125 34
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
	.loc 1 127 5
	addi	a5,s0,64
	sd	a5,-128(s0)
	ld	a5,-128(s0)
	addi	a5,a5,-56
	sd	a5,-104(s0)
	.loc 1 130 12
	ld	a5,-120(s0)
	sd	a5,-24(s0)
	.loc 1 130 5
	j	.L48
.L73:
	.loc 1 131 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 131 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L49
	.loc 1 132 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 133 13
	j	.L50
.L49:
	.loc 1 136 10
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 138 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 138 12
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L51
.LBB6:
	.loc 1 139 17
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 140 20
	ld	a5,-24(s0)
	addi	a5,a5,1
	.loc 1 140 17
	lbu	a5,0(a5)
	.loc 1 140 16
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L52
	.loc 1 141 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 1 142 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L52:
	.loc 1 144 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 146 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 146 13
	li	a4,100
	beq	a5,a4,.L53
	li	a4,120
	bne	a5,a4,.L54
	.loc 1 148 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L55
.LBB7:
	.loc 1 149 39
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 150 25
	li	a2,0
	li	a1,16
	ld	a0,-80(s0)
	call	printlong
.LBE7:
	.loc 1 155 21
	j	.L50
.L55:
.LBB8:
	.loc 1 152 44
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-72(s0)
	.loc 1 153 25
	li	a2,0
	li	a1,16
	ld	a0,-72(s0)
	call	printlonglong
.LBE8:
	.loc 1 155 21
	j	.L50
.L53:
	.loc 1 158 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L58
.LBB9:
	.loc 1 159 30
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-96(s0)
	.loc 1 160 25
	ld	a5,-96(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlong
.LBE9:
	.loc 1 165 21
	j	.L50
.L58:
.LBB10:
	.loc 1 162 35
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-88(s0)
	.loc 1 163 25
	ld	a5,-88(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlonglong
.LBE10:
	.loc 1 165 21
	j	.L50
.L54:
	.loc 1 168 21
	li	a0,37
	call	putchar
.LBB11:
	.loc 1 169 30
	sw	zero,-32(s0)
	.loc 1 169 21
	j	.L60
.L61:
	.loc 1 169 50 discriminator 3
	li	a0,108
	call	putchar
	.loc 1 169 46 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L60:
	.loc 1 169 36 discriminator 2
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L61
.LBE11:
	.loc 1 170 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 171 21
	j	.L50
.L51:
.LBE6:
	.loc 1 175 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 175 13
	li	a4,37
	beq	a5,a4,.L62
	li	a4,37
	blt	a5,a4,.L63
	li	a4,120
	bgt	a5,a4,.L63
	li	a4,99
	blt	a5,a4,.L63
	addiw	a5,a5,-99
	mv	a3,a5
	sext.w	a4,a3
	li	a5,21
	bgtu	a4,a5,.L63
	slli	a5,a3,32
	srli	a5,a5,32
	slli	a4,a5,2
	lla	a5,.L65
	add	a5,a4,a5
	lw	a5,0(a5)
	sext.w	a4,a5
	lla	a5,.L65
	add	a5,a4,a5
	jr	a5
	.section	.rodata
	.align	2
	.align	2
.L65:
	.word	.L69-.L65
	.word	.L68-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L67-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L66-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L63-.L65
	.word	.L64-.L65
	.text
.L68:
.LBB12:
	.loc 1 177 25
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-60(s0)
	.loc 1 178 21
	lw	a5,-60(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printint
	.loc 1 179 21
	j	.L50
.L64:
.LBE12:
.LBB13:
	.loc 1 182 34
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 183 21
	lw	a5,-44(s0)
	li	a2,0
	li	a1,16
	mv	a0,a5
	call	printint
	.loc 1 184 21
	j	.L50
.L67:
.LBE13:
.LBB14:
	.loc 1 187 57
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	.loc 1 187 35 discriminator 1
	sd	a5,-56(s0)
	.loc 1 188 21
	li	a0,48
	call	putchar
	.loc 1 188 35 discriminator 1
	li	a0,120
	call	putchar
	.loc 1 189 21
	li	a2,0
	li	a1,16
	ld	a0,-56(s0)
	call	printlong
	.loc 1 190 21
	j	.L50
.L66:
.LBE14:
.LBB15:
	.loc 1 193 33
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 194 24
	ld	a5,-40(s0)
	bne	a5,zero,.L71
	.loc 1 194 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 1 195 27
	j	.L71
.L72:
	.loc 1 195 42 discriminator 2
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 195 32 discriminator 2
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L71:
	.loc 1 195 28 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L72
	.loc 1 196 21
	j	.L50
.L69:
.LBE15:
.LBB16:
	.loc 1 199 36
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	.loc 1 199 26 discriminator 1
	sb	a5,-61(s0)
	.loc 1 200 21
	lbu	a5,-61(s0)
	mv	a0,a5
	call	putchar
	.loc 1 201 21
	j	.L50
.L62:
.LBE16:
	.loc 1 204 21
	li	a0,37
	call	putchar
	.loc 1 205 21
	j	.L50
.L63:
	.loc 1 208 21
	li	a0,37
	call	putchar
	.loc 1 209 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 210 21
	nop
.L50:
	.loc 1 130 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L48:
	.loc 1 130 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L73
	.loc 1 217 12
	li	a5,0
	.loc 1 218 1
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
.LFE6:
	.size	printf, .-printf
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB7:
	.loc 1 222 26
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
	.loc 1 223 11
	j	.L76
.L77:
	.loc 1 224 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 1 224 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L76:
	.loc 1 223 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L77
	.loc 1 226 1
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
.LFE7:
	.size	puts, .-puts
	.align	1
	.globl	xisalpha
	.type	xisalpha, @function
xisalpha:
.LFB8:
	.loc 1 229 1
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
	.loc 1 230 41
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,96
	bleu	a4,a5,.L79
	.loc 1 230 28 discriminator 1
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,122
	bleu	a4,a5,.L80
.L79:
	.loc 1 230 41 discriminator 4
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,64
	bleu	a4,a5,.L81
	.loc 1 230 54 discriminator 5
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,90
	bgtu	a4,a5,.L81
.L80:
	.loc 1 230 41 discriminator 7
	li	a5,1
	.loc 1 230 41 is_stmt 0
	j	.L82
.L81:
	.loc 1 230 41 discriminator 8
	li	a5,0
.L82:
	.loc 1 230 9 is_stmt 1 discriminator 10
	sw	a5,-20(s0)
	.loc 1 231 12
	lw	a5,-20(s0)
	.loc 1 232 1
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
.LFE8:
	.size	xisalpha, .-xisalpha
	.align	1
	.globl	xisblank
	.type	xisblank, @function
xisblank:
.LFB9:
	.loc 1 235 1
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
	.loc 1 236 21
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,32
	beq	a4,a5,.L85
	.loc 1 236 21 is_stmt 0 discriminator 2
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,9
	bne	a4,a5,.L86
.L85:
	.loc 1 236 21 discriminator 3
	li	a5,1
	.loc 1 236 21
	j	.L87
.L86:
	.loc 1 236 21 discriminator 4
	li	a5,0
.L87:
	.loc 1 237 1 is_stmt 1
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
	.size	xisblank, .-xisblank
	.align	1
	.globl	xisdigit
	.type	xisdigit, @function
xisdigit:
.LFB10:
	.loc 1 240 1
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
	.loc 1 241 22
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,47
	bleu	a4,a5,.L90
	.loc 1 241 22 is_stmt 0 discriminator 1
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,57
	bgtu	a4,a5,.L90
	.loc 1 241 22 discriminator 3
	li	a5,1
	.loc 1 241 22
	j	.L91
.L90:
	.loc 1 241 22 discriminator 4
	li	a5,0
.L91:
	.loc 1 242 1 is_stmt 1
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
	.size	xisdigit, .-xisdigit
	.align	1
	.globl	xisalnum
	.type	xisalnum, @function
xisalnum:
.LFB11:
	.loc 1 245 1
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
	.loc 1 246 12
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisalpha
	mv	a5,a0
	.loc 1 246 24 discriminator 1
	bne	a5,zero,.L94
	.loc 1 246 27 discriminator 2
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 246 24 discriminator 1
	beq	a5,zero,.L95
.L94:
	.loc 1 246 24 is_stmt 0 discriminator 3
	li	a5,1
	.loc 1 246 24
	j	.L96
.L95:
	.loc 1 246 24 discriminator 4
	li	a5,0
.L96:
	.loc 1 247 1 is_stmt 1
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
.LFE11:
	.size	xisalnum, .-xisalnum
	.align	1
	.type	isdir, @function
isdir:
.LFB12:
	.loc 1 250 36
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
.LBB17:
	.loc 1 251 14
	ld	a5,-40(s0)
	mv	a0,a5
	li	a7,76
 #APP
# 251 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE17:
	.loc 1 251 9
	sw	a5,-20(s0)
	.loc 1 252 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L99
.LBB18:
	.loc 1 252 20 discriminator 1
	lw	a5,-20(s0)
	mv	a0,a5
	li	a7,78
 #APP
# 252 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE18:
	.loc 1 252 41 discriminator 1
	li	a5,1
	.loc 1 252 41 is_stmt 0
	j	.L100
.L99:
	.loc 1 253 12 is_stmt 1
	li	a5,0
.L100:
	.loc 1 254 1
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
.LFE12:
	.size	isdir, .-isdir
	.section	.rodata
	.align	3
.LC1:
	.string	"REDIRECT WRITE FILE CAN'T BE OPENED"
	.text
	.align	1
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB13:
	.loc 1 320 1
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
	.loc 1 321 9
	sw	zero,-56(s0)
	sw	zero,-52(s0)
	.loc 1 323 41
	lw	a4,-116(s0)
	li	a5,88
	mul	a5,a4,a5
	.loc 1 323 22
	ld	a4,-128(s0)
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 325 25
	lw	a5,-120(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 325 7
	lw	a4,-116(s0)
	sext.w	a4,a4
	bne	a4,a5,.L102
.LBB19:
	.loc 1 328 14
	sw	zero,-20(s0)
	.loc 1 328 9
	j	.L103
.L104:
	.loc 1 329 22
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-40(s0)
	add	a4,a4,a5
	.loc 1 329 20
	lw	a3,-20(s0)
	addi	a5,s0,-80
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 328 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L103:
	.loc 1 328 27 discriminator 1
	ld	a5,-40(s0)
	lw	a5,48(a5)
	.loc 1 328 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L104
	.loc 1 331 17
	lw	a4,-20(s0)
	addi	a5,s0,-80
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 333 34
	ld	a5,-40(s0)
	lbu	a5,52(a5)
	.loc 1 333 11
	beq	a5,zero,.L105
.LBB20:
	.loc 1 335 23
	ld	a5,-40(s0)
	lw	a5,84(a5)
	.loc 1 335 15
	beq	a5,zero,.L106
.LBB21:
	.loc 1 336 22
	ld	a5,-40(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 336 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE21:
	.loc 1 336 20
	sw	a5,-24(s0)
	j	.L107
.L106:
.LBB22:
	.loc 1 339 22
	ld	a5,-40(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
 #APP
# 339 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE22:
	.loc 1 339 20
	sw	a5,-24(s0)
.L107:
	.loc 1 342 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L108
	.loc 1 343 17
	lla	a0,.LC1
	call	puts
.LBB23:
	.loc 1 344 17
	li	a0,1
	li	a7,70
 #APP
# 344 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L109:
	j	.L109
.L108:
.LBE23:
.LBB24:
	.loc 1 347 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 347 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 348 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 348 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L105:
.LBE25:
.LBE20:
.LBB26:
	.loc 1 351 9
	ld	a5,-80(s0)
	mv	a0,a5
	addi	a5,s0,-80
	mv	a1,a5
	li	a7,69
 #APP
# 351 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
.LBB27:
	.loc 1 352 9
	li	a0,127
	li	a7,70
 #APP
# 352 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L110:
	j	.L110
.L102:
.LBE27:
.LBE19:
.LBB28:
.LBB29:
	.loc 1 355 9
	addi	a5,s0,-56
	mv	a0,a5
	li	a7,73
 #APP
# 355 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
.LBB30:
	.loc 1 357 19
	li	a7,68
 #APP
# 357 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE30:
	.loc 1 357 13
	sw	a5,-44(s0)
	.loc 1 359 11
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L111
.LBB31:
	.loc 1 360 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 360 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE31:
.LBB32:
	.loc 1 361 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 361 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE32:
.LBB33:
	.loc 1 362 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 362 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE33:
	.loc 1 363 13
	lw	a5,-116(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-120(s0)
	mv	a2,a4
	ld	a1,-128(s0)
	mv	a0,a5
	call	run_command
	j	.L117
.L111:
.LBB34:
.LBB35:
	.loc 1 366 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 366 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE35:
.LBB36:
	.loc 1 367 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 367 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE36:
.LBB37:
	.loc 1 368 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 368 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE37:
	.loc 1 372 18
	sw	zero,-28(s0)
	.loc 1 372 13
	j	.L113
.L114:
	.loc 1 373 26
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-40(s0)
	add	a4,a4,a5
	.loc 1 373 24
	lw	a3,-28(s0)
	addi	a5,s0,-104
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 372 43 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L113:
	.loc 1 372 31 discriminator 1
	ld	a5,-40(s0)
	lw	a5,48(a5)
	.loc 1 372 23 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L114
	.loc 1 375 21
	lw	a4,-28(s0)
	addi	a5,s0,-104
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB38:
	.loc 1 377 13
	ld	a5,-104(s0)
	mv	a0,a5
	addi	a5,s0,-104
	mv	a1,a5
	li	a7,69
 #APP
# 377 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE38:
.LBB39:
	.loc 1 378 13
	li	a0,127
	li	a7,70
 #APP
# 378 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L115:
	j	.L115
.L117:
.LBE39:
.LBE34:
.LBE28:
	.loc 1 382 12
	li	a5,1
	.loc 1 383 1
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
.LFE13:
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
	.align	3
.LC9:
	.string	"cd"
	.align	3
.LC10:
	.string	"/"
	.align	3
.LC11:
	.string	"cd: failed\n"
	.align	3
.LC12:
	.string	"mkdir"
	.align	3
.LC13:
	.string	"mkdir: missing operand\n"
	.align	3
.LC14:
	.string	"-p"
	.align	3
.LC15:
	.string	"mkdir: invalid path\n"
	.align	3
.LC16:
	.string	"mkdir: failed\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB14:
	.loc 1 385 16
	.cfi_startproc
	addi	sp,sp,-1008
	.cfi_def_cfa_offset 1008
	sd	ra,1000(sp)
	sd	s0,992(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1008
	.cfi_def_cfa 8, 0
.L199:
.LBB40:
	.loc 1 401 9
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 401 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-104(s0)
.LBE40:
	.loc 1 404 11
	sd	zero,-24(s0)
.L125:
.LBB41:
	.loc 1 406 13
	li	a0,0
	addi	a5,s0,-232
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 406 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-112(s0)
.LBE41:
.LBB42:
	.loc 1 407 13
	li	a0,1
	addi	a5,s0,-232
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 407 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-120(s0)
.LBE42:
	.loc 1 410 22
	lbu	a5,-232(s0)
	.loc 1 410 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L119
	.loc 1 410 41 discriminator 2
	lbu	a5,-232(s0)
	.loc 1 410 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L120
.L119:
	.loc 1 410 53 discriminator 3
	ld	a5,-24(s0)
	ble	a5,zero,.L120
	.loc 1 412 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 413 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-208(a5)
.LBB43:
	.loc 1 415 17
	li	a0,1
	lla	a5,.LC3
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 415 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-128(s0)
.LBE43:
	j	.L121
.L120:
	.loc 1 417 25
	lbu	a5,-232(s0)
	.loc 1 417 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L200
	.loc 1 420 25
	lbu	a5,-232(s0)
	.loc 1 420 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L201
	.loc 1 424 30
	lbu	a4,-232(s0)
	.loc 1 424 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-208(a5)
	.loc 1 425 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L121:
	.loc 1 406 13
	j	.L125
.L200:
	.loc 1 418 17
	nop
	j	.L123
.L201:
	.loc 1 421 17
	nop
.L123:
	.loc 1 428 16
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-208(a5)
.LBB44:
	.loc 1 432 9
	li	a0,1
	lla	a5,.LC4
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 432 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-136(s0)
.LBE44:
	.loc 1 434 15
	lbu	a5,-224(s0)
	.loc 1 434 11
	beq	a5,zero,.L202
	.loc 1 438 22
	sw	zero,-28(s0)
	.loc 1 439 17
	sw	zero,-32(s0)
	.loc 1 440 11
	addi	a5,s0,-224
	sd	a5,-40(s0)
	.loc 1 441 11
	sd	zero,-24(s0)
	.loc 1 443 49
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-604(a5)
.L161:
	.loc 1 446 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 446 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L128
	.loc 1 448 19
	ld	a5,-24(s0)
	ble	a5,zero,.L129
	.loc 1 449 61
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
	sb	zero,-656(a5)
	.loc 1 450 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 451 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L129
	.loc 1 452 25
	lla	a0,.LC5
	call	puts
	.loc 1 453 25
	j	.L130
.L129:
	.loc 1 456 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 457 22
	j	.L131
.L132:
	.loc 1 458 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L131:
	.loc 1 457 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 457 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L132
	.loc 1 457 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 457 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L132
	.loc 1 460 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-608(a5)
	.loc 1 462 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 463 19
	sd	zero,-24(s0)
	.loc 1 464 25
	sw	zero,-32(s0)
	.loc 1 466 57
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-604(a5)
	.loc 1 468 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L161
	.loc 1 469 21
	lla	a0,.LC6
	call	puts
	.loc 1 470 21
	j	.L130
.L128:
	.loc 1 473 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 473 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L134
	.loc 1 473 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 473 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 473 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L134
.LBB45:
	.loc 1 475 19
	ld	a5,-24(s0)
	ble	a5,zero,.L135
	.loc 1 476 61
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
	sb	zero,-656(a5)
	.loc 1 477 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 478 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L136
	.loc 1 479 25
	lla	a0,.LC5
	call	puts
	.loc 1 480 25
	j	.L130
.L136:
	.loc 1 482 23
	sd	zero,-24(s0)
.L135:
	.loc 1 484 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 485 22
	j	.L137
.L138:
	.loc 1 486 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L137:
	.loc 1 485 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 485 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L138
	.loc 1 485 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 485 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L138
	.loc 1 489 21
	sw	zero,-44(s0)
	.loc 1 491 22
	j	.L139
.L141:
	.loc 1 492 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 492 59
	lw	a4,-44(s0)
	addiw	a3,a4,1
	sw	a3,-44(s0)
	.loc 1 492 65
	lbu	a3,0(a5)
	.loc 1 492 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-604(a5)
	.loc 1 494 23
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L139
	.loc 1 495 25
	lla	a0,.LC7
	call	puts
.LBB46:
	.loc 1 496 25
	li	a0,2
	li	a7,70
 #APP
# 496 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L140:
	j	.L140
.L139:
.LBE46:
	.loc 1 491 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 491 75 discriminator 1
	bne	a5,zero,.L141
	.loc 1 491 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 491 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L141
	.loc 1 491 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 491 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L141
	.loc 1 491 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 491 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L141
	.loc 1 491 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 491 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L141
	.loc 1 499 57
	lw	a4,-44(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-604(a5)
	.loc 1 500 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	zero,-572(a5)
	.loc 1 502 22
	j	.L142
.L143:
	.loc 1 503 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L142:
	.loc 1 502 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 502 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L143
	.loc 1 502 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 502 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L143
.LBE45:
	.loc 1 473 49
	j	.L133
.L134:
	.loc 1 506 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 506 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L144
	.loc 1 506 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 506 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 506 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L144
.LBB47:
	.loc 1 508 19
	ld	a5,-24(s0)
	ble	a5,zero,.L145
	.loc 1 509 61
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
	sb	zero,-656(a5)
	.loc 1 510 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 511 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L146
	.loc 1 512 25
	lla	a0,.LC5
	call	puts
	.loc 1 513 25
	j	.L130
.L146:
	.loc 1 515 23
	sd	zero,-24(s0)
.L145:
	.loc 1 518 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 519 22
	j	.L147
.L148:
	.loc 1 520 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L147:
	.loc 1 519 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 519 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L148
	.loc 1 519 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 519 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L148
	.loc 1 523 21
	sw	zero,-48(s0)
	.loc 1 525 22
	j	.L149
.L151:
	.loc 1 526 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 526 59
	lw	a4,-48(s0)
	addiw	a3,a4,1
	sw	a3,-48(s0)
	.loc 1 526 65
	lbu	a3,0(a5)
	.loc 1 526 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-604(a5)
	.loc 1 528 23
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L149
	.loc 1 529 25
	lla	a0,.LC7
	call	puts
.LBB48:
	.loc 1 530 25
	li	a0,2
	li	a7,70
 #APP
# 530 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L150:
	j	.L150
.L149:
.LBE48:
	.loc 1 525 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 525 75 discriminator 1
	bne	a5,zero,.L151
	.loc 1 525 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 525 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L151
	.loc 1 525 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 525 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L151
	.loc 1 525 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 525 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L151
	.loc 1 525 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 525 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L151
	.loc 1 533 57
	lw	a4,-48(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-604(a5)
	.loc 1 534 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,1
	sw	a4,-572(a5)
	.loc 1 536 22
	j	.L152
.L153:
	.loc 1 537 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L152:
	.loc 1 536 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 536 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L153
	.loc 1 536 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 536 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L153
.LBE47:
	.loc 1 506 49
	j	.L133
.L144:
	.loc 1 540 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 540 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L156
	.loc 1 540 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 540 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L155
	.loc 1 541 22
	j	.L156
.L157:
	.loc 1 542 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L156:
	.loc 1 541 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 541 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L157
	.loc 1 541 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 541 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L157
	.loc 1 544 19
	ld	a5,-24(s0)
	ble	a5,zero,.L203
	.loc 1 545 61
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
	sb	zero,-656(a5)
	.loc 1 546 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 547 23
	sd	zero,-24(s0)
	.loc 1 548 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L203
	.loc 1 549 25
	lla	a0,.LC5
	call	puts
	.loc 1 550 25
	j	.L130
.L155:
	.loc 1 555 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 555 20
	bne	a5,zero,.L159
	.loc 1 557 20
	ld	a5,-24(s0)
	ble	a5,zero,.L160
	.loc 1 558 61
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
	sb	zero,-656(a5)
	.loc 1 559 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 560 23
	sd	zero,-24(s0)
.L160:
	.loc 1 563 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-608(a5)
	.loc 1 564 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 565 17
	j	.L130
.L159:
	.loc 1 568 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 568 57
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
	sb	a4,-656(a5)
	.loc 1 569 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 570 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 572 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L161
	.loc 1 573 21
	lla	a0,.LC8
	call	puts
	.loc 1 574 21
	j	.L130
.L203:
	.loc 1 544 19
	nop
.L133:
	.loc 1 446 15
	j	.L161
.L130:
	.loc 1 580 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L162
	.loc 1 580 45 discriminator 1
	lw	a5,-624(s0)
	.loc 1 580 31 discriminator 1
	ble	a5,zero,.L162
	.loc 1 580 62 discriminator 2
	addi	a5,s0,-672
	lla	a1,.LC9
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 580 59 discriminator 1
	bne	a5,zero,.L162
.LBB49:
	.loc 1 581 25
	lla	a5,.LC10
	sd	a5,-56(s0)
	.loc 1 582 28
	lw	a4,-624(s0)
	.loc 1 582 16
	li	a5,1
	ble	a4,a5,.L163
	.loc 1 582 64 discriminator 1
	lbu	a5,-656(s0)
	.loc 1 582 42 discriminator 1
	beq	a5,zero,.L163
	.loc 1 583 24
	addi	a5,s0,-672
	addi	a5,a5,16
	sd	a5,-56(s0)
.L163:
.LBB50:
	.loc 1 585 22
	ld	a5,-56(s0)
	mv	a0,a5
	li	a7,80
 #APP
# 585 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE50:
	.loc 1 585 17
	sw	a5,-140(s0)
	.loc 1 586 16
	lw	a5,-140(s0)
	sext.w	a5,a5
	bge	a5,zero,.L204
	.loc 1 587 17
	lla	a0,.LC11
	call	puts
	.loc 1 589 13
	j	.L204
.L162:
.LBE49:
	.loc 1 593 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L165
	.loc 1 593 45 discriminator 1
	lw	a5,-624(s0)
	.loc 1 593 31 discriminator 1
	ble	a5,zero,.L165
	.loc 1 593 62 discriminator 2
	addi	a5,s0,-672
	lla	a1,.LC12
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 593 59 discriminator 1
	bne	a5,zero,.L165
.LBB51:
	.loc 1 594 28
	lw	a4,-624(s0)
	.loc 1 594 16
	li	a5,1
	bgt	a4,a5,.L166
	.loc 1 594 44 discriminator 1
	lla	a0,.LC13
	call	puts
	.loc 1 594 78
	j	.L127
.L166:
	.loc 1 595 17
	li	a5,1
	sw	a5,-60(s0)
	.loc 1 595 31
	sw	zero,-64(s0)
	.loc 1 596 28
	lw	a4,-624(s0)
	.loc 1 596 16
	li	a5,1
	ble	a4,a5,.L167
	.loc 1 596 45 discriminator 1
	addi	a5,s0,-672
	addi	a5,a5,16
	lla	a1,.LC14
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 596 42 discriminator 1
	bne	a5,zero,.L167
	.loc 1 596 95 discriminator 2
	li	a5,1
	sw	a5,-64(s0)
	.loc 1 596 105 discriminator 2
	li	a5,2
	sw	a5,-60(s0)
.L167:
	.loc 1 597 28
	lw	a5,-624(s0)
	.loc 1 597 16
	lw	a4,-60(s0)
	sext.w	a4,a4
	blt	a4,a5,.L168
	.loc 1 597 48 discriminator 1
	lla	a0,.LC13
	call	puts
	.loc 1 597 82
	j	.L127
.L168:
.LBB52:
	.loc 1 599 22
	lw	a5,-60(s0)
	sw	a5,-68(s0)
	.loc 1 599 13
	j	.L169
.L195:
.LBB53:
	.loc 1 600 29
	addi	a4,s0,-672
	lw	a5,-68(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	sd	a5,-152(s0)
	.loc 1 601 20
	ld	a5,-152(s0)
	beq	a5,zero,.L170
	.loc 1 601 35 discriminator 2
	ld	a5,-152(s0)
	lbu	a5,0(a5)
	.loc 1 601 27 discriminator 2
	bne	a5,zero,.L171
.L170:
	.loc 1 601 42 discriminator 3
	lla	a0,.LC15
	call	puts
	.loc 1 601 73
	j	.L172
.L171:
	.loc 1 602 20
	lw	a5,-64(s0)
	sext.w	a5,a5
	bne	a5,zero,.L173
.LBB54:
.LBB55:
	.loc 1 603 30
	ld	a5,-152(s0)
	mv	a0,a5
	li	a1,493
	li	a7,81
 #APP
# 603 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE55:
	.loc 1 603 25
	sw	a5,-156(s0)
	.loc 1 604 24
	lw	a5,-156(s0)
	sext.w	a5,a5
	bge	a5,zero,.L172
	.loc 1 604 33 discriminator 1
	lla	a0,.LC16
	call	puts
	j	.L172
.L173:
.LBE54:
.LBB56:
	.loc 1 607 42
	sw	zero,-72(s0)
	.loc 1 607 59
	sb	zero,-936(s0)
	.loc 1 608 33
	ld	a5,-152(s0)
	sd	a5,-80(s0)
	.loc 1 609 25
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 609 24
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L177
	.loc 1 609 46 discriminator 1
	lw	a5,-72(s0)
	addiw	a4,a5,1
	sw	a4,-72(s0)
	.loc 1 609 50 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,47
	sb	a4,-920(a5)
	.loc 1 609 67 discriminator 1
	lw	a5,-72(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-920(a5)
	.loc 1 609 81
	j	.L175
.L176:
	.loc 1 609 92 discriminator 4
	ld	a5,-80(s0)
	addi	a5,a5,1
	sd	a5,-80(s0)
.L175:
	.loc 1 609 82 discriminator 2
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 609 84 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L176
	.loc 1 610 27
	j	.L177
.L194:
.LBB57:
	.loc 1 611 44
	sw	zero,-84(s0)
	.loc 1 612 31
	j	.L178
.L180:
	.loc 1 612 98 discriminator 4
	ld	a4,-80(s0)
	addi	a5,a4,1
	sd	a5,-80(s0)
	.loc 1 612 90 discriminator 4
	lw	a5,-84(s0)
	addiw	a3,a5,1
	sw	a3,-84(s0)
	.loc 1 612 96 discriminator 4
	lbu	a4,0(a4)
	.loc 1 612 94 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-984(a5)
.L178:
	.loc 1 612 33 discriminator 1
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 612 52 discriminator 1
	beq	a5,zero,.L179
	.loc 1 612 41 discriminator 2
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 612 37 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L179
	.loc 1 612 52 discriminator 3
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L180
.L179:
	.loc 1 613 34
	lw	a5,-84(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-984(a5)
	.loc 1 614 31
	j	.L181
.L182:
	.loc 1 614 44 discriminator 2
	ld	a5,-80(s0)
	addi	a5,a5,1
	sd	a5,-80(s0)
.L181:
	.loc 1 614 32 discriminator 1
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 614 35 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L182
	.loc 1 615 28
	lw	a5,-84(s0)
	sext.w	a5,a5
	beq	a5,zero,.L205
	.loc 1 616 28
	lw	a5,-72(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L185
	.loc 1 616 45 discriminator 2
	lbu	a5,-936(s0)
	.loc 1 616 29 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L186
.L185:
	.loc 1 616 61 discriminator 3
	lw	a5,-72(s0)
	sext.w	a4,a5
	li	a5,254
	bgt	a4,a5,.L186
	.loc 1 616 97 discriminator 4
	lw	a5,-72(s0)
	addiw	a4,a5,1
	sw	a4,-72(s0)
	.loc 1 616 101 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,47
	sb	a4,-920(a5)
.L186:
.LBB58:
	.loc 1 617 34
	sw	zero,-88(s0)
	.loc 1 617 25
	j	.L187
.L189:
	.loc 1 617 87 discriminator 4
	lw	a5,-72(s0)
	addiw	a4,a5,1
	sw	a4,-72(s0)
	.loc 1 617 97 discriminator 4
	lw	a4,-88(s0)
	addi	a4,a4,-16
	add	a4,a4,s0
	lbu	a4,-984(a4)
	.loc 1 617 91 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-920(a5)
	.loc 1 617 75 discriminator 4
	lw	a5,-88(s0)
	addiw	a5,a5,1
	sw	a5,-88(s0)
.L187:
	.loc 1 617 44 discriminator 1
	lw	a5,-88(s0)
	mv	a4,a5
	lw	a5,-84(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bge	a4,a5,.L188
	.loc 1 617 44 is_stmt 0 discriminator 3
	lw	a5,-72(s0)
	sext.w	a4,a5
	li	a5,254
	ble	a4,a5,.L189
.L188:
.LBE58:
	.loc 1 618 35 is_stmt 1
	lw	a5,-72(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-920(a5)
	.loc 1 619 29
	addi	a5,s0,-936
	mv	a0,a5
	call	isdir
	mv	a5,a0
	.loc 1 619 28 discriminator 1
	bne	a5,zero,.L206
.LBB59:
	.loc 1 620 29
	addi	a5,s0,-936
	mv	a0,a5
	li	a1,493
	li	a7,81
 #APP
# 620 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE59:
	.loc 1 620 28
	bge	a5,zero,.L177
	.loc 1 620 55 discriminator 1
	lla	a0,.LC16
	call	puts
	.loc 1 620 80
	j	.L172
.L205:
	.loc 1 615 38
	nop
	j	.L177
.L206:
	.loc 1 619 43
	nop
.L177:
.LBE57:
	.loc 1 610 28
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L194
.L172:
.LBE56:
.LBE53:
	.loc 1 599 61 discriminator 2
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L169:
	.loc 1 599 49 discriminator 1
	lw	a5,-624(s0)
	.loc 1 599 36 discriminator 1
	lw	a4,-68(s0)
	sext.w	a4,a4
	blt	a4,a5,.L195
.LBE52:
	.loc 1 624 13
	j	.L127
.L165:
.LBE51:
.LBB60:
	.loc 1 627 15
	li	a7,68
 #APP
# 627 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE60:
	.loc 1 627 13
	sw	a5,-160(s0)
	.loc 1 629 11
	lw	a5,-160(s0)
	sext.w	a5,a5
	bne	a5,zero,.L196
	.loc 1 630 13
	lw	a4,-28(s0)
	addi	a5,s0,-672
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L199
.L196:
.LBB61:
	.loc 1 633 21
	sw	zero,-92(s0)
	.loc 1 633 13
	j	.L197
.L198:
.LBB62:
.LBB63:
	.loc 1 635 17
	addi	a5,s0,-676
	mv	a0,a5
	li	a7,71
 #APP
# 635 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE63:
.LBE62:
	.loc 1 633 43 discriminator 3
	lw	a5,-92(s0)
	addiw	a5,a5,1
	sw	a5,-92(s0)
.L197:
	.loc 1 633 27 discriminator 1
	lw	a5,-92(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L198
	j	.L199
.L202:
.LBE61:
	.loc 1 435 13
	nop
	j	.L199
.L204:
.LBB64:
	.loc 1 589 13
	nop
.L127:
.LBE64:
	.loc 1 401 9
	j	.L199
	.cfi_endproc
.LFE14:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x127a
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x15
	.4byte	.LASF56
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x9
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x9
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x16
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x9
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x9
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x9
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x9
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x9
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x9
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x9
	.byte	0x8
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0xf
	.4byte	.LASF11
	.byte	0x2
	.byte	0x28
	.byte	0x1b
	.4byte	0x80
	.uleb128 0x17
	.byte	0x8
	.4byte	.LASF57
	.uleb128 0xf
	.4byte	.LASF12
	.byte	0x2
	.byte	0x67
	.byte	0x18
	.4byte	0x74
	.uleb128 0xf
	.4byte	.LASF13
	.byte	0x3
	.byte	0x4
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x18
	.4byte	.LASF58
	.byte	0x58
	.byte	0x1
	.2byte	0x137
	.byte	0x8
	.4byte	0xe1
	.uleb128 0xc
	.4byte	.LASF14
	.2byte	0x139
	.byte	0xa
	.4byte	0xe1
	.byte	0
	.uleb128 0xc
	.4byte	.LASF15
	.2byte	0x13a
	.byte	0x9
	.4byte	0x3c
	.byte	0x30
	.uleb128 0xc
	.4byte	.LASF16
	.2byte	0x13b
	.byte	0xa
	.4byte	0x103
	.byte	0x34
	.uleb128 0xc
	.4byte	.LASF17
	.2byte	0x13c
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
	.uleb128 0x9
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
	.4byte	.LASF32
	.2byte	0x181
	.4byte	0x3c
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6db
	.uleb128 0x1
	.string	"buf"
	.2byte	0x182
	.byte	0xa
	.4byte	0x6db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x1
	.string	"n"
	.2byte	0x183
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF19
	.2byte	0x184
	.byte	0xa
	.4byte	0x6eb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.string	"pid"
	.2byte	0x185
	.byte	0xb
	.4byte	0x92
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x12
	.4byte	.LASF20
	.2byte	0x186
	.4byte	0x3c
	.uleb128 0x12
	.4byte	.LASF21
	.2byte	0x187
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x189
	.byte	0x15
	.4byte	0x6fb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x18a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF15
	.2byte	0x18b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x18c
	.byte	0xb
	.4byte	0x70b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.4byte	0x220
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x191
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x191
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x191
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x191
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x191
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.4byte	0x27e
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x196
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x196
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x196
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x196
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x196
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x2dc
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x197
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x197
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x197
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x197
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x197
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.4byte	0x33a
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x19f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x19f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x19f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x19f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x19f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0x398
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x1b0
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1b0
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1b0
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1b0
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1b0
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.4byte	0x3e9
	.uleb128 0x1
	.string	"i"
	.2byte	0x1e9
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1f0
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1f0
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.4byte	0x43a
	.uleb128 0x1
	.string	"i"
	.2byte	0x20b
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x212
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x212
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x1a
	.4byte	.LLRL0
	.4byte	0x490
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x245
	.byte	0x19
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"rc"
	.2byte	0x249
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x4
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x249
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x249
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x638
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x253
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x3
	.4byte	.LASF27
	.2byte	0x253
	.byte	0x1f
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.uleb128 0x1
	.string	"ai"
	.2byte	0x257
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB53
	.8byte	.LBE53-.LBB53
	.uleb128 0x3
	.4byte	.LASF28
	.2byte	0x258
	.byte	0x1d
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.4byte	0x565
	.uleb128 0x1
	.string	"rc"
	.2byte	0x25b
	.byte	0x19
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x4
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x25b
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x25b
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x25b
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB56
	.8byte	.LBE56-.LBB56
	.uleb128 0x3
	.4byte	.LASF29
	.2byte	0x25f
	.byte	0x1a
	.4byte	0x715
	.uleb128 0x3
	.byte	0x91
	.sleb128 -936
	.uleb128 0x1
	.string	"ap"
	.2byte	0x25f
	.byte	0x2a
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.string	"s"
	.2byte	0x260
	.byte	0x21
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x263
	.byte	0x1e
	.4byte	0x6db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1000
	.uleb128 0x1
	.string	"ni"
	.2byte	0x263
	.byte	0x2c
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x2
	.8byte	.LBB58
	.8byte	.LBE58-.LBB58
	.4byte	0x5f7
	.uleb128 0x1
	.string	"k"
	.2byte	0x269
	.byte	0x22
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.byte	0
	.uleb128 0x4
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x26c
	.byte	0x1d
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x26c
	.byte	0x1d
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x26c
	.byte	0x1d
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.4byte	0x66a
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x273
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x273
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x4
	.8byte	.LBB61
	.8byte	.LBE61-.LBB61
	.uleb128 0x1
	.string	"k"
	.2byte	0x279
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x4
	.8byte	.LBB62
	.8byte	.LBE62-.LBB62
	.uleb128 0x3
	.4byte	.LASF21
	.2byte	0x27a
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -676
	.uleb128 0x4
	.8byte	.LBB63
	.8byte	.LBE63-.LBB63
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x27b
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x27b
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
	.4byte	0x6eb
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x6fb
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x9e
	.4byte	0x70b
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x4
	.byte	0
	.uleb128 0x10
	.4byte	0xf7
	.uleb128 0x10
	.4byte	0xfe
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x725
	.uleb128 0x8
	.4byte	0x6d
	.byte	0xff
	.byte	0
	.uleb128 0x11
	.4byte	.LASF33
	.2byte	0x13f
	.4byte	0x3c
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbfb
	.uleb128 0x1b
	.string	"n"
	.byte	0x1
	.2byte	0x13f
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x13
	.4byte	.LASF22
	.byte	0x29
	.4byte	0xbfb
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
	.4byte	.LASF34
	.2byte	0x141
	.byte	0x9
	.4byte	0xc00
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF35
	.2byte	0x143
	.byte	0x16
	.4byte	0xbfb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x990
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x146
	.byte	0xf
	.4byte	0xc10
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"j"
	.2byte	0x147
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x921
	.uleb128 0x1
	.string	"fd"
	.2byte	0x14e
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x832
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x150
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x150
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x150
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x150
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x880
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x153
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x153
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x153
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x153
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x8b2
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x158
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x158
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x8f2
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x15b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x961
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15f
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x15f
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15f
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x160
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x160
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x1
	.string	"pid"
	.2byte	0x165
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x9e2
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x163
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x163
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0xa14
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x165
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x165
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.4byte	0xa54
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x168
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x168
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x168
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0xa86
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x169
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x169
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0xab8
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x16a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x16a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x172
	.byte	0x13
	.4byte	0xc10
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"j"
	.2byte	0x173
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0xb18
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x16e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x16e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0xb58
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x16f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x16f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x16f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0xb8a
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x170
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x170
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0xbca
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x179
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x179
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x179
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x17a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x17a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	0x9e
	.uleb128 0xa
	.4byte	0x3c
	.4byte	0xc10
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x70b
	.4byte	0xc20
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x2
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF59
	.byte	0x1
	.byte	0xfa
	.byte	0xc
	.4byte	0x3c
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcba
	.uleb128 0xb
	.4byte	.LASF28
	.byte	0xfa
	.byte	0x1e
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.string	"fd"
	.byte	0xfb
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0xc8d
	.uleb128 0x5
	.string	"_a0"
	.byte	0xfb
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.byte	0xfb
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x5
	.string	"_a0"
	.byte	0xfc
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.byte	0xfc
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF36
	.byte	0xf4
	.4byte	0x3c
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xce7
	.uleb128 0x7
	.string	"c"
	.byte	0xf4
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF37
	.byte	0xef
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd15
	.uleb128 0x7
	.string	"c"
	.byte	0xef
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF38
	.byte	0xea
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd43
	.uleb128 0x7
	.string	"c"
	.byte	0xea
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF39
	.byte	0xe4
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd7f
	.uleb128 0x7
	.string	"c"
	.byte	0xe4
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x6
	.4byte	.LASF40
	.byte	0xe6
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xe
	.4byte	.LASF44
	.byte	0xde
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xda8
	.uleb128 0x7
	.string	"s"
	.byte	0xde
	.byte	0x17
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF41
	.byte	0x7d
	.4byte	0x3c
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf7d
	.uleb128 0x7
	.string	"fmt"
	.byte	0x7d
	.byte	0x18
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1d
	.uleb128 0x5
	.string	"ap"
	.byte	0x7e
	.byte	0xd
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x5
	.string	"p"
	.byte	0x81
	.byte	0x11
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0xecb
	.uleb128 0x6
	.4byte	.LASF42
	.byte	0x8b
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0xe3c
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0x95
	.byte	0x27
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0xe61
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0x98
	.byte	0x2c
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.byte	0
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0xe86
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0x9f
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0xeab
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0xa2
	.byte	0x23
	.4byte	0x43
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.byte	0
	.uleb128 0x4
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x5
	.string	"i"
	.byte	0xa9
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
	.4byte	0xef0
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0xb1
	.byte	0x19
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0xf15
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0xb6
	.byte	0x22
	.4byte	0x58
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0xf3a
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0xbb
	.byte	0x23
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.byte	0
	.uleb128 0x2
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0xf5d
	.uleb128 0x5
	.string	"s"
	.byte	0xc1
	.byte	0x21
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x5
	.string	"c"
	.byte	0xc7
	.byte	0x1a
	.4byte	0xf7
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF45
	.byte	0x5f
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1010
	.uleb128 0xb
	.4byte	.LASF43
	.byte	0x5f
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF46
	.byte	0x5f
	.byte	0x31
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF47
	.byte	0x5f
	.byte	0x3b
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x5
	.string	"buf"
	.byte	0x60
	.byte	0xa
	.4byte	0x1010
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x5
	.string	"i"
	.byte	0x61
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.4byte	.LASF48
	.byte	0x62
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x6
	.4byte	.LASF49
	.byte	0x6f
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x1020
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x40
	.byte	0
	.uleb128 0xe
	.4byte	.LASF50
	.byte	0x41
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10b3
	.uleb128 0xb
	.4byte	.LASF43
	.byte	0x41
	.byte	0x1e
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF46
	.byte	0x41
	.byte	0x28
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF47
	.byte	0x41
	.byte	0x32
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x5
	.string	"buf"
	.byte	0x42
	.byte	0xa
	.4byte	0x1010
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x5
	.string	"i"
	.byte	0x43
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.4byte	.LASF48
	.byte	0x44
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x6
	.4byte	.LASF49
	.byte	0x51
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF51
	.byte	0x20
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1154
	.uleb128 0xb
	.4byte	.LASF43
	.byte	0x20
	.byte	0x13
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0xb
	.4byte	.LASF46
	.byte	0x20
	.byte	0x1d
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xb
	.4byte	.LASF47
	.byte	0x20
	.byte	0x27
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x5
	.string	"buf"
	.byte	0x21
	.byte	0xa
	.4byte	0x1154
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.string	"i"
	.byte	0x22
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.4byte	.LASF48
	.byte	0x23
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.4byte	.LASF52
	.byte	0x24
	.byte	0x12
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x6
	.4byte	.LASF49
	.byte	0x33
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x1164
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x20
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF53
	.byte	0x1
	.byte	0x18
	.byte	0x6
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11f1
	.uleb128 0x7
	.string	"c"
	.byte	0x18
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x5
	.string	"buf"
	.byte	0x1a
	.byte	0xa
	.4byte	0x6eb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x6
	.4byte	.LASF24
	.byte	0x1d
	.byte	0x5
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.string	"_a0"
	.byte	0x1d
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a1"
	.byte	0x1d
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x5
	.string	"_a2"
	.byte	0x1d
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x5
	.string	"_a7"
	.byte	0x1d
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF54
	.byte	0xd
	.byte	0x7
	.4byte	0x70b
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1244
	.uleb128 0x7
	.string	"s"
	.byte	0xd
	.byte	0x15
	.4byte	0x70b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.string	"t"
	.byte	0xd
	.byte	0x24
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x7
	.string	"n"
	.byte	0xd
	.byte	0x2b
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.string	"os"
	.byte	0xe
	.byte	0x9
	.4byte	0x70b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF55
	.byte	0x1
	.byte	0x5
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x7
	.string	"s1"
	.byte	0x5
	.byte	0x18
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.string	"s2"
	.byte	0x5
	.byte	0x28
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
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
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
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
	.uleb128 0x7
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
	.uleb128 0xe
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
	.uleb128 0xf
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
	.uleb128 0x10
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
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
	.sleb128 319
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
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1b
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
	.uleb128 0x1c
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
	.uleb128 0x1d
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1e
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
	.uleb128 0x1f
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
	.section	.debug_rnglists,"",@progbits
.Ldebug_ranges0:
	.4byte	.Ldebug_ranges3-.Ldebug_ranges2
.Ldebug_ranges2:
	.2byte	0x5
	.byte	0x8
	.byte	0
	.4byte	0
.LLRL0:
	.byte	0x4
	.uleb128 .LBB49-.Ltext0
	.uleb128 .LBE49-.Ltext0
	.byte	0x4
	.uleb128 .LBB64-.Ltext0
	.uleb128 .LBE64-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF56:
	.string	"GNU C17 14.2.0 -mcmodel=medany -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr -g -O0 -fno-omit-frame-pointer"
.LASF54:
	.string	"strncpy"
.LASF24:
	.string	"_ret"
.LASF16:
	.string	"redirect_file"
.LASF25:
	.string	"target"
.LASF3:
	.string	"short int"
.LASF53:
	.string	"putchar"
.LASF32:
	.string	"main"
.LASF52:
	.string	"uval"
.LASF33:
	.string	"run_command"
.LASF12:
	.string	"va_list"
.LASF23:
	.string	"num_commands"
.LASF45:
	.string	"printlonglong"
.LASF58:
	.string	"sCommand"
.LASF4:
	.string	"long long int"
.LASF26:
	.string	"argi"
.LASF51:
	.string	"printint"
.LASF9:
	.string	"long int"
.LASF46:
	.string	"base"
.LASF41:
	.string	"printf"
.LASF40:
	.string	"result"
.LASF48:
	.string	"negative"
.LASF30:
	.string	"name"
.LASF22:
	.string	"commands"
.LASF5:
	.string	"unsigned char"
.LASF20:
	.string	"argc"
.LASF38:
	.string	"xisblank"
.LASF2:
	.string	"signed char"
.LASF8:
	.string	"long long unsigned int"
.LASF36:
	.string	"xisalnum"
.LASF7:
	.string	"unsigned int"
.LASF59:
	.string	"isdir"
.LASF44:
	.string	"puts"
.LASF14:
	.string	"argv"
.LASF6:
	.string	"short unsigned int"
.LASF21:
	.string	"status"
.LASF50:
	.string	"printlong"
.LASF18:
	.string	"char"
.LASF27:
	.string	"parents"
.LASF17:
	.string	"redirect_append"
.LASF37:
	.string	"xisdigit"
.LASF43:
	.string	"val_"
.LASF10:
	.string	"long unsigned int"
.LASF57:
	.string	"__builtin_va_list"
.LASF47:
	.string	"sign"
.LASF13:
	.string	"pid_t"
.LASF39:
	.string	"xisalpha"
.LASF55:
	.string	"strcmp"
.LASF28:
	.string	"path"
.LASF42:
	.string	"lcount"
.LASF15:
	.string	"num_arg"
.LASF11:
	.string	"__gnuc_va_list"
.LASF49:
	.string	"digit"
.LASF29:
	.string	"accum"
.LASF31:
	.string	"_num"
.LASF19:
	.string	"buf2"
.LASF35:
	.string	"command"
.LASF34:
	.string	"pipes"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/Users/ab25cq/minux9-dev"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
