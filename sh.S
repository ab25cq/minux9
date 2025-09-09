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
	.loc 1 7 44
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
	.loc 1 8 11
	j	.L2
.L4:
	.loc 1 9 11
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 10 11
	ld	a5,-32(s0)
	addi	a5,a5,1
	sd	a5,-32(s0)
.L2:
	.loc 1 8 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 8 16
	beq	a5,zero,.L3
	.loc 1 8 20 discriminator 1
	ld	a5,-24(s0)
	lbu	a4,0(a5)
	.loc 1 8 27 discriminator 1
	ld	a5,-32(s0)
	lbu	a5,0(a5)
	.loc 1 8 16 discriminator 1
	beq	a4,a5,.L4
.L3:
	.loc 1 12 27
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 12 12
	sext.w	a4,a5
	.loc 1 12 48
	ld	a5,-32(s0)
	lbu	a5,0(a5)
	.loc 1 12 33
	sext.w	a5,a5
	.loc 1 12 31
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 13 1
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
	.type	s_strchr, @function
s_strchr:
.LFB1:
	.loc 1 15 52
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
	mv	a5,a1
	sw	a5,-28(s0)
	.loc 1 16 11
	j	.L7
.L10:
	.loc 1 16 22 discriminator 4
	ld	a5,-24(s0)
	lbu	a4,0(a5)
	.loc 1 16 25 discriminator 4
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 16 21 discriminator 4
	bne	a4,a5,.L8
	.loc 1 16 45 discriminator 1
	ld	a5,-24(s0)
	.loc 1 16 45 is_stmt 0
	j	.L9
.L8:
	.loc 1 16 49 is_stmt 1 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L7:
	.loc 1 16 12 discriminator 3
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L10
	.loc 1 17 12
	li	a5,0
.L9:
	.loc 1 18 1
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
.LFE1:
	.size	s_strchr, .-s_strchr
	.align	1
	.globl	strncpy
	.type	strncpy, @function
strncpy:
.LFB2:
	.loc 1 20 46
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
	.loc 1 23 6
	ld	a5,-40(s0)
	sd	a5,-24(s0)
	.loc 1 24 8
	nop
.L13:
	.loc 1 24 10 discriminator 2
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 24 17 discriminator 2
	ble	a5,zero,.L14
	.loc 1 24 30 discriminator 1
	ld	a4,-48(s0)
	addi	a5,a4,1
	sd	a5,-48(s0)
	.loc 1 24 23 discriminator 1
	ld	a5,-40(s0)
	addi	a3,a5,1
	sd	a3,-40(s0)
	.loc 1 24 28 discriminator 1
	lbu	a4,0(a4)
	.loc 1 24 26 discriminator 1
	sb	a4,0(a5)
	.loc 1 24 21 discriminator 1
	lbu	a5,0(a5)
	.loc 1 24 17 discriminator 1
	bne	a5,zero,.L13
	.loc 1 26 8
	j	.L14
.L15:
	.loc 1 27 7
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 27 10
	sb	zero,0(a5)
.L14:
	.loc 1 26 10
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 1 26 13
	bgt	a5,zero,.L15
	.loc 1 28 10
	ld	a5,-24(s0)
	.loc 1 29 1
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
.LFE2:
	.size	strncpy, .-strncpy
	.align	1
	.globl	putchar
	.type	putchar, @function
putchar:
.LFB3:
	.loc 1 32 1
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
	.loc 1 34 12
	lbu	a5,-33(s0)
	sb	a5,-32(s0)
	.loc 1 35 12
	sb	zero,-31(s0)
.LBB2:
	.loc 1 36 5
	li	a0,1
	addi	a5,s0,-32
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 36 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-24(s0)
.LBE2:
	.loc 1 37 1
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
.LFE3:
	.size	putchar, .-putchar
	.align	1
	.globl	printint
	.type	printint, @function
printint:
.LFB4:
	.loc 1 39 45
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
	.loc 1 41 9
	sw	zero,-20(s0)
	.loc 1 42 9
	sw	zero,-24(s0)
	.loc 1 45 8
	lw	a5,-92(s0)
	sext.w	a5,a5
	beq	a5,zero,.L19
	.loc 1 45 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L19
	.loc 1 46 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 47 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 1 47 14
	sw	a5,-28(s0)
	j	.L20
.L19:
	.loc 1 49 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L20:
	.loc 1 52 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L23
	.loc 1 53 9
	li	a0,48
	call	putchar
	j	.L18
.L26:
.LBB3:
	.loc 1 58 26
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 58 13
	sw	a5,-32(s0)
	.loc 1 59 18
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L24
	.loc 1 59 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 59 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L25
.L24:
	.loc 1 59 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 1 59 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L25:
	.loc 1 59 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 59 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-56(a4)
	.loc 1 60 14
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	divuw	a5,a4,a5
	sw	a5,-28(s0)
.L23:
.LBE3:
	.loc 1 57 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L26
	.loc 1 63 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L28
	.loc 1 64 9
	li	a0,45
	call	putchar
	.loc 1 67 11
	j	.L28
.L29:
	.loc 1 68 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L28:
	.loc 1 67 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L29
.L18:
	.loc 1 70 1
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	printint, .-printint
	.align	1
	.globl	printlong
	.type	printlong, @function
printlong:
.LFB5:
	.loc 1 72 57
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
	.loc 1 74 9
	sw	zero,-20(s0)
	.loc 1 75 9
	sw	zero,-24(s0)
	.loc 1 77 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L31
	.loc 1 77 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 77 14 discriminator 1
	bge	a5,zero,.L31
	.loc 1 78 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 79 17
	ld	a5,-104(s0)
	.loc 1 79 16
	neg	a5,a5
	.loc 1 79 14
	sd	a5,-104(s0)
.L31:
	.loc 1 82 8
	ld	a5,-104(s0)
	bne	a5,zero,.L34
	.loc 1 83 9
	li	a0,48
	call	putchar
	j	.L30
.L37:
.LBB4:
	.loc 1 88 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 88 13
	sw	a5,-28(s0)
	.loc 1 89 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L35
	.loc 1 89 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 89 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L36
.L35:
	.loc 1 89 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 89 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L36:
	.loc 1 89 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 89 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 90 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L34:
.LBE4:
	.loc 1 87 17
	ld	a5,-104(s0)
	bne	a5,zero,.L37
	.loc 1 93 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L39
	.loc 1 94 9
	li	a0,45
	call	putchar
	.loc 1 97 11
	j	.L39
.L40:
	.loc 1 98 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L39:
	.loc 1 97 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L40
.L30:
	.loc 1 100 1
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
	.size	printlong, .-printlong
	.align	1
	.globl	printlonglong
	.type	printlonglong, @function
printlonglong:
.LFB6:
	.loc 1 102 66
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
	.loc 1 104 9
	sw	zero,-20(s0)
	.loc 1 105 9
	sw	zero,-24(s0)
	.loc 1 107 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L42
	.loc 1 107 17 discriminator 1
	ld	a5,-104(s0)
	.loc 1 107 14 discriminator 1
	bge	a5,zero,.L42
	.loc 1 108 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 109 17
	ld	a5,-104(s0)
	.loc 1 109 16
	neg	a5,a5
	.loc 1 109 14
	sd	a5,-104(s0)
.L42:
	.loc 1 112 8
	ld	a5,-104(s0)
	bne	a5,zero,.L45
	.loc 1 113 9
	li	a0,48
	call	putchar
	j	.L41
.L48:
.LBB5:
	.loc 1 118 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 1 118 13
	sw	a5,-28(s0)
	.loc 1 119 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L46
	.loc 1 119 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 119 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L47
.L46:
	.loc 1 119 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 119 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L47:
	.loc 1 119 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 1 119 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 1 120 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L45:
.LBE5:
	.loc 1 117 17
	ld	a5,-104(s0)
	bne	a5,zero,.L48
	.loc 1 123 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L50
	.loc 1 124 9
	li	a0,45
	call	putchar
	.loc 1 127 11
	j	.L50
.L51:
	.loc 1 128 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L50:
	.loc 1 127 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L51
.L41:
	.loc 1 130 1
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
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
.LFB7:
	.loc 1 132 34
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
	.loc 1 134 5
	addi	a5,s0,64
	sd	a5,-128(s0)
	ld	a5,-128(s0)
	addi	a5,a5,-56
	sd	a5,-104(s0)
	.loc 1 137 12
	ld	a5,-120(s0)
	sd	a5,-24(s0)
	.loc 1 137 5
	j	.L53
.L78:
	.loc 1 138 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 138 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L54
	.loc 1 139 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 140 13
	j	.L55
.L54:
	.loc 1 143 10
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 145 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 1 145 12
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L56
.LBB6:
	.loc 1 146 17
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 147 20
	ld	a5,-24(s0)
	addi	a5,a5,1
	.loc 1 147 17
	lbu	a5,0(a5)
	.loc 1 147 16
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L57
	.loc 1 148 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 1 149 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L57:
	.loc 1 151 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 153 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 153 13
	li	a4,100
	beq	a5,a4,.L58
	li	a4,120
	bne	a5,a4,.L59
	.loc 1 155 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L60
.LBB7:
	.loc 1 156 39
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 157 25
	li	a2,0
	li	a1,16
	ld	a0,-80(s0)
	call	printlong
.LBE7:
	.loc 1 162 21
	j	.L55
.L60:
.LBB8:
	.loc 1 159 44
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-72(s0)
	.loc 1 160 25
	li	a2,0
	li	a1,16
	ld	a0,-72(s0)
	call	printlonglong
.LBE8:
	.loc 1 162 21
	j	.L55
.L58:
	.loc 1 165 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L63
.LBB9:
	.loc 1 166 30
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-96(s0)
	.loc 1 167 25
	ld	a5,-96(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlong
.LBE9:
	.loc 1 172 21
	j	.L55
.L63:
.LBB10:
	.loc 1 169 35
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-88(s0)
	.loc 1 170 25
	ld	a5,-88(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlonglong
.LBE10:
	.loc 1 172 21
	j	.L55
.L59:
	.loc 1 175 21
	li	a0,37
	call	putchar
.LBB11:
	.loc 1 176 30
	sw	zero,-32(s0)
	.loc 1 176 21
	j	.L65
.L66:
	.loc 1 176 50 discriminator 3
	li	a0,108
	call	putchar
	.loc 1 176 46 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L65:
	.loc 1 176 36 discriminator 2
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L66
.LBE11:
	.loc 1 177 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 178 21
	j	.L55
.L56:
.LBE6:
	.loc 1 182 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 1 182 13
	li	a4,37
	beq	a5,a4,.L67
	li	a4,37
	blt	a5,a4,.L68
	li	a4,120
	bgt	a5,a4,.L68
	li	a4,99
	blt	a5,a4,.L68
	addiw	a5,a5,-99
	mv	a3,a5
	sext.w	a4,a3
	li	a5,21
	bgtu	a4,a5,.L68
	slli	a5,a3,32
	srli	a5,a5,32
	slli	a4,a5,2
	lla	a5,.L70
	add	a5,a4,a5
	lw	a5,0(a5)
	sext.w	a4,a5
	lla	a5,.L70
	add	a5,a4,a5
	jr	a5
	.section	.rodata
	.align	2
	.align	2
.L70:
	.word	.L74-.L70
	.word	.L73-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L72-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L71-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L68-.L70
	.word	.L69-.L70
	.text
.L73:
.LBB12:
	.loc 1 184 25
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-60(s0)
	.loc 1 185 21
	lw	a5,-60(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printint
	.loc 1 186 21
	j	.L55
.L69:
.LBE12:
.LBB13:
	.loc 1 189 34
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 190 21
	lw	a5,-44(s0)
	li	a2,0
	li	a1,16
	mv	a0,a5
	call	printint
	.loc 1 191 21
	j	.L55
.L72:
.LBE13:
.LBB14:
	.loc 1 194 57
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	.loc 1 194 35 discriminator 1
	sd	a5,-56(s0)
	.loc 1 195 21
	li	a0,48
	call	putchar
	.loc 1 195 35 discriminator 1
	li	a0,120
	call	putchar
	.loc 1 196 21
	li	a2,0
	li	a1,16
	ld	a0,-56(s0)
	call	printlong
	.loc 1 197 21
	j	.L55
.L71:
.LBE14:
.LBB15:
	.loc 1 200 33
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 201 24
	ld	a5,-40(s0)
	bne	a5,zero,.L76
	.loc 1 201 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 1 202 27
	j	.L76
.L77:
	.loc 1 202 42 discriminator 2
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 202 32 discriminator 2
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L76:
	.loc 1 202 28 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L77
	.loc 1 203 21
	j	.L55
.L74:
.LBE15:
.LBB16:
	.loc 1 206 36
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	.loc 1 206 26 discriminator 1
	sb	a5,-61(s0)
	.loc 1 207 21
	lbu	a5,-61(s0)
	mv	a0,a5
	call	putchar
	.loc 1 208 21
	j	.L55
.L67:
.LBE16:
	.loc 1 211 21
	li	a0,37
	call	putchar
	.loc 1 212 21
	j	.L55
.L68:
	.loc 1 215 21
	li	a0,37
	call	putchar
	.loc 1 216 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 1 217 21
	nop
.L55:
	.loc 1 137 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L53:
	.loc 1 137 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L78
	.loc 1 224 12
	li	a5,0
	.loc 1 225 1
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
.LFE7:
	.size	printf, .-printf
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB8:
	.loc 1 229 26
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
	.loc 1 230 11
	j	.L81
.L82:
	.loc 1 231 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 1 231 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L81:
	.loc 1 230 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L82
	.loc 1 233 1
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
.LFE8:
	.size	puts, .-puts
	.align	1
	.globl	xisalpha
	.type	xisalpha, @function
xisalpha:
.LFB9:
	.loc 1 236 1
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
	.loc 1 237 41
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,96
	bleu	a4,a5,.L84
	.loc 1 237 28 discriminator 1
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,122
	bleu	a4,a5,.L85
.L84:
	.loc 1 237 41 discriminator 4
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,64
	bleu	a4,a5,.L86
	.loc 1 237 54 discriminator 5
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,90
	bgtu	a4,a5,.L86
.L85:
	.loc 1 237 41 discriminator 7
	li	a5,1
	.loc 1 237 41 is_stmt 0
	j	.L87
.L86:
	.loc 1 237 41 discriminator 8
	li	a5,0
.L87:
	.loc 1 237 9 is_stmt 1 discriminator 10
	sw	a5,-20(s0)
	.loc 1 238 12
	lw	a5,-20(s0)
	.loc 1 239 1
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
.LFE9:
	.size	xisalpha, .-xisalpha
	.align	1
	.globl	xisblank
	.type	xisblank, @function
xisblank:
.LFB10:
	.loc 1 242 1
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
	.loc 1 243 21
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,32
	beq	a4,a5,.L90
	.loc 1 243 21 is_stmt 0 discriminator 2
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,9
	bne	a4,a5,.L91
.L90:
	.loc 1 243 21 discriminator 3
	li	a5,1
	.loc 1 243 21
	j	.L92
.L91:
	.loc 1 243 21 discriminator 4
	li	a5,0
.L92:
	.loc 1 244 1 is_stmt 1
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
	.size	xisblank, .-xisblank
	.align	1
	.globl	xisdigit
	.type	xisdigit, @function
xisdigit:
.LFB11:
	.loc 1 247 1
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
	.loc 1 248 22
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,47
	bleu	a4,a5,.L95
	.loc 1 248 22 is_stmt 0 discriminator 1
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,57
	bgtu	a4,a5,.L95
	.loc 1 248 22 discriminator 3
	li	a5,1
	.loc 1 248 22
	j	.L96
.L95:
	.loc 1 248 22 discriminator 4
	li	a5,0
.L96:
	.loc 1 249 1 is_stmt 1
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
	.size	xisdigit, .-xisdigit
	.align	1
	.globl	xisalnum
	.type	xisalnum, @function
xisalnum:
.LFB12:
	.loc 1 252 1
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
	.loc 1 253 12
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisalpha
	mv	a5,a0
	.loc 1 253 24 discriminator 1
	bne	a5,zero,.L99
	.loc 1 253 27 discriminator 2
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 253 24 discriminator 1
	beq	a5,zero,.L100
.L99:
	.loc 1 253 24 is_stmt 0 discriminator 3
	li	a5,1
	.loc 1 253 24
	j	.L101
.L100:
	.loc 1 253 24 discriminator 4
	li	a5,0
.L101:
	.loc 1 254 1 is_stmt 1
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
.LFE12:
	.size	xisalnum, .-xisalnum
	.align	1
	.type	isdir, @function
isdir:
.LFB13:
	.loc 1 257 36
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
	.loc 1 258 14
	ld	a5,-40(s0)
	mv	a0,a5
	li	a7,76
 #APP
# 258 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE17:
	.loc 1 258 9
	sw	a5,-20(s0)
	.loc 1 259 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L104
.LBB18:
	.loc 1 259 20 discriminator 1
	lw	a5,-20(s0)
	mv	a0,a5
	li	a7,78
 #APP
# 259 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE18:
	.loc 1 259 41 discriminator 1
	li	a5,1
	.loc 1 259 41 is_stmt 0
	j	.L105
.L104:
	.loc 1 260 12 is_stmt 1
	li	a5,0
.L105:
	.loc 1 261 1
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
.LFE13:
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
.LFB14:
	.loc 1 327 1
	.cfi_startproc
	addi	sp,sp,-192
	.cfi_def_cfa_offset 192
	sd	ra,184(sp)
	sd	s0,176(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,192
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-192(s0)
	mv	a4,a2
	sw	a5,-180(s0)
	mv	a5,a4
	sw	a5,-184(s0)
	.loc 1 328 9
	sw	zero,-64(s0)
	sw	zero,-60(s0)
	.loc 1 330 41
	lw	a4,-180(s0)
	li	a5,88
	mul	a5,a4,a5
	.loc 1 330 22
	ld	a4,-192(s0)
	add	a5,a4,a5
	sd	a5,-48(s0)
	.loc 1 332 25
	lw	a5,-184(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 332 7
	lw	a4,-180(s0)
	sext.w	a4,a4
	bne	a4,a5,.L107
.LBB19:
	.loc 1 335 14
	sw	zero,-20(s0)
	.loc 1 335 9
	j	.L108
.L109:
	.loc 1 336 22
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 336 20
	lw	a3,-20(s0)
	addi	a5,s0,-88
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 335 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L108:
	.loc 1 335 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,48(a5)
	.loc 1 335 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L109
	.loc 1 338 17
	lw	a4,-20(s0)
	addi	a5,s0,-88
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 340 34
	ld	a5,-48(s0)
	lbu	a5,52(a5)
	.loc 1 340 11
	beq	a5,zero,.L110
.LBB20:
	.loc 1 342 23
	ld	a5,-48(s0)
	lw	a5,84(a5)
	.loc 1 342 15
	beq	a5,zero,.L111
.LBB21:
	.loc 1 343 22
	ld	a5,-48(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 343 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE21:
	.loc 1 343 20
	sw	a5,-24(s0)
	j	.L112
.L111:
.LBB22:
	.loc 1 346 22
	ld	a5,-48(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
 #APP
# 346 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE22:
	.loc 1 346 20
	sw	a5,-24(s0)
.L112:
	.loc 1 349 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L113
	.loc 1 350 17
	lla	a0,.LC1
	call	puts
.LBB23:
	.loc 1 351 17
	li	a0,1
	li	a7,70
 #APP
# 351 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L114:
	j	.L114
.L113:
.LBE23:
.LBB24:
	.loc 1 354 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 354 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 355 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 355 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L110:
.LBE25:
.LBE20:
.LBB26:
	.loc 1 359 9
	ld	a5,-88(s0)
	mv	a0,a5
	addi	a5,s0,-88
	mv	a1,a5
	li	a7,69
 #APP
# 359 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
	.loc 1 360 17
	ld	a5,-88(s0)
	.loc 1 360 12
	beq	a5,zero,.L115
	.loc 1 360 28 discriminator 1
	ld	a5,-88(s0)
	.loc 1 360 31 discriminator 1
	lbu	a5,0(a5)
	.loc 1 360 21 discriminator 1
	beq	a5,zero,.L115
	.loc 1 360 52 discriminator 2
	ld	a5,-88(s0)
	.loc 1 360 39 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 360 35 discriminator 1
	bne	a5,zero,.L115
.LBB27:
	.loc 1 362 21
	li	a5,47
	sb	a5,-176(s0)
	.loc 1 363 17
	sw	zero,-28(s0)
	.loc 1 363 28
	j	.L116
.L118:
	.loc 1 363 86 discriminator 4
	ld	a4,-88(s0)
	.loc 1 363 89 discriminator 4
	lw	a5,-28(s0)
	add	a4,a4,a5
	.loc 1 363 76 discriminator 4
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 363 89 discriminator 4
	lbu	a4,0(a4)
	.loc 1 363 80 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-160(a5)
	.loc 1 363 95 discriminator 4
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L116:
	.loc 1 363 33 discriminator 1
	ld	a4,-88(s0)
	.loc 1 363 36 discriminator 1
	lw	a5,-28(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 363 40 discriminator 1
	beq	a5,zero,.L117
	.loc 1 363 40 is_stmt 0 discriminator 3
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L118
.L117:
	.loc 1 364 19 is_stmt 1
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 364 23
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-160(a5)
	.loc 1 365 21
	addi	a5,s0,-176
	sd	a5,-88(s0)
.LBB28:
	.loc 1 366 13
	ld	a5,-88(s0)
	mv	a0,a5
	addi	a5,s0,-88
	mv	a1,a5
	li	a7,69
 #APP
# 366 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L115:
.LBE28:
.LBE27:
.LBB29:
	.loc 1 368 9
	li	a0,127
	li	a7,70
 #APP
# 368 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L119:
	j	.L119
.L107:
.LBE29:
.LBE19:
.LBB30:
.LBB31:
	.loc 1 371 9
	addi	a5,s0,-64
	mv	a0,a5
	li	a7,73
 #APP
# 371 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE31:
.LBB32:
	.loc 1 373 19
	li	a7,68
 #APP
# 373 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE32:
	.loc 1 373 13
	sw	a5,-52(s0)
	.loc 1 375 11
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L120
.LBB33:
	.loc 1 376 13
	lw	a5,-64(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 376 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE33:
.LBB34:
	.loc 1 377 13
	lw	a5,-64(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 377 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE34:
.LBB35:
	.loc 1 378 13
	lw	a5,-60(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 378 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE35:
	.loc 1 379 13
	lw	a5,-180(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-184(s0)
	mv	a2,a4
	ld	a1,-192(s0)
	mv	a0,a5
	call	run_command
	j	.L130
.L120:
.LBB36:
.LBB37:
	.loc 1 382 13
	lw	a5,-64(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 382 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE37:
.LBB38:
	.loc 1 383 13
	lw	a5,-60(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 383 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE38:
.LBB39:
	.loc 1 384 13
	lw	a5,-60(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 384 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE39:
	.loc 1 388 18
	sw	zero,-32(s0)
	.loc 1 388 13
	j	.L122
.L123:
	.loc 1 389 26
	lw	a5,-32(s0)
	slli	a5,a5,4
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 389 24
	lw	a3,-32(s0)
	addi	a5,s0,-112
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 388 43 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L122:
	.loc 1 388 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,48(a5)
	.loc 1 388 23 discriminator 1
	lw	a4,-32(s0)
	sext.w	a4,a4
	blt	a4,a5,.L123
	.loc 1 391 21
	lw	a4,-32(s0)
	addi	a5,s0,-112
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB40:
	.loc 1 393 13
	ld	a5,-112(s0)
	mv	a0,a5
	addi	a5,s0,-112
	mv	a1,a5
	li	a7,69
 #APP
# 393 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE40:
	.loc 1 394 21
	ld	a5,-112(s0)
	.loc 1 394 16
	beq	a5,zero,.L124
	.loc 1 394 32 discriminator 1
	ld	a5,-112(s0)
	.loc 1 394 35 discriminator 1
	lbu	a5,0(a5)
	.loc 1 394 25 discriminator 1
	beq	a5,zero,.L124
	.loc 1 394 56 discriminator 2
	ld	a5,-112(s0)
	.loc 1 394 43 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 394 39 discriminator 1
	bne	a5,zero,.L124
.LBB41:
	.loc 1 396 25
	li	a5,47
	sb	a5,-176(s0)
	.loc 1 397 21
	sw	zero,-36(s0)
	.loc 1 397 32
	j	.L125
.L127:
	.loc 1 397 90 discriminator 4
	ld	a4,-112(s0)
	.loc 1 397 93 discriminator 4
	lw	a5,-36(s0)
	add	a4,a4,a5
	.loc 1 397 80 discriminator 4
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 397 93 discriminator 4
	lbu	a4,0(a4)
	.loc 1 397 84 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-160(a5)
	.loc 1 397 99 discriminator 4
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L125:
	.loc 1 397 37 discriminator 1
	ld	a4,-112(s0)
	.loc 1 397 40 discriminator 1
	lw	a5,-36(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 397 44 discriminator 1
	beq	a5,zero,.L126
	.loc 1 397 44 is_stmt 0 discriminator 3
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L127
.L126:
	.loc 1 398 23 is_stmt 1
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 398 27
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-160(a5)
	.loc 1 399 25
	addi	a5,s0,-176
	sd	a5,-112(s0)
.LBB42:
	.loc 1 400 17
	ld	a5,-112(s0)
	mv	a0,a5
	addi	a5,s0,-112
	mv	a1,a5
	li	a7,69
 #APP
# 400 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L124:
.LBE42:
.LBE41:
.LBB43:
	.loc 1 402 13
	li	a0,127
	li	a7,70
 #APP
# 402 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L128:
	j	.L128
.L130:
.LBE43:
.LBE36:
.LBE30:
	.loc 1 406 12
	li	a5,1
	.loc 1 407 1
	mv	a0,a5
	ld	ra,184(sp)
	.cfi_restore 1
	ld	s0,176(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 192
	addi	sp,sp,192
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE14:
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
.LFB15:
	.loc 1 409 16
	.cfi_startproc
	addi	sp,sp,-1008
	.cfi_def_cfa_offset 1008
	sd	ra,1000(sp)
	sd	s0,992(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1008
	.cfi_def_cfa 8, 0
.L212:
.LBB44:
	.loc 1 425 9
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 425 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-104(s0)
.LBE44:
	.loc 1 428 11
	sd	zero,-24(s0)
.L138:
.LBB45:
	.loc 1 430 13
	li	a0,0
	addi	a5,s0,-232
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 430 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-112(s0)
.LBE45:
.LBB46:
	.loc 1 431 13
	li	a0,1
	addi	a5,s0,-232
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 431 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-120(s0)
.LBE46:
	.loc 1 434 22
	lbu	a5,-232(s0)
	.loc 1 434 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L132
	.loc 1 434 41 discriminator 2
	lbu	a5,-232(s0)
	.loc 1 434 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L133
.L132:
	.loc 1 434 53 discriminator 3
	ld	a5,-24(s0)
	ble	a5,zero,.L133
	.loc 1 436 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 437 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-208(a5)
.LBB47:
	.loc 1 439 17
	li	a0,1
	lla	a5,.LC3
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 439 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-128(s0)
.LBE47:
	j	.L134
.L133:
	.loc 1 441 25
	lbu	a5,-232(s0)
	.loc 1 441 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L213
	.loc 1 444 25
	lbu	a5,-232(s0)
	.loc 1 444 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L214
	.loc 1 448 30
	lbu	a4,-232(s0)
	.loc 1 448 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-208(a5)
	.loc 1 449 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L134:
	.loc 1 430 13
	j	.L138
.L213:
	.loc 1 442 17
	nop
	j	.L136
.L214:
	.loc 1 445 17
	nop
.L136:
	.loc 1 452 16
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-208(a5)
.LBB48:
	.loc 1 456 9
	li	a0,1
	lla	a5,.LC4
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 456 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-136(s0)
.LBE48:
	.loc 1 458 15
	lbu	a5,-224(s0)
	.loc 1 458 11
	beq	a5,zero,.L215
	.loc 1 462 22
	sw	zero,-28(s0)
	.loc 1 463 17
	sw	zero,-32(s0)
	.loc 1 464 11
	addi	a5,s0,-224
	sd	a5,-40(s0)
	.loc 1 465 11
	sd	zero,-24(s0)
	.loc 1 467 49
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-604(a5)
.L174:
	.loc 1 470 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 470 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L141
	.loc 1 472 19
	ld	a5,-24(s0)
	ble	a5,zero,.L142
	.loc 1 473 61
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
	.loc 1 474 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 475 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L142
	.loc 1 476 25
	lla	a0,.LC5
	call	puts
	.loc 1 477 25
	j	.L143
.L142:
	.loc 1 480 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 481 22
	j	.L144
.L145:
	.loc 1 482 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L144:
	.loc 1 481 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 481 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L145
	.loc 1 481 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 481 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L145
	.loc 1 484 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-608(a5)
	.loc 1 486 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 487 19
	sd	zero,-24(s0)
	.loc 1 488 25
	sw	zero,-32(s0)
	.loc 1 490 57
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-604(a5)
	.loc 1 492 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L174
	.loc 1 493 21
	lla	a0,.LC6
	call	puts
	.loc 1 494 21
	j	.L143
.L141:
	.loc 1 497 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 497 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L147
	.loc 1 497 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 497 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 497 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L147
.LBB49:
	.loc 1 499 19
	ld	a5,-24(s0)
	ble	a5,zero,.L148
	.loc 1 500 61
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
	.loc 1 501 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 502 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L149
	.loc 1 503 25
	lla	a0,.LC5
	call	puts
	.loc 1 504 25
	j	.L143
.L149:
	.loc 1 506 23
	sd	zero,-24(s0)
.L148:
	.loc 1 508 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 509 22
	j	.L150
.L151:
	.loc 1 510 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L150:
	.loc 1 509 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 509 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L151
	.loc 1 509 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 509 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L151
	.loc 1 513 21
	sw	zero,-44(s0)
	.loc 1 515 22
	j	.L152
.L154:
	.loc 1 516 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 516 59
	lw	a4,-44(s0)
	addiw	a3,a4,1
	sw	a3,-44(s0)
	.loc 1 516 65
	lbu	a3,0(a5)
	.loc 1 516 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-604(a5)
	.loc 1 518 23
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L152
	.loc 1 519 25
	lla	a0,.LC7
	call	puts
.LBB50:
	.loc 1 520 25
	li	a0,2
	li	a7,70
 #APP
# 520 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L153:
	j	.L153
.L152:
.LBE50:
	.loc 1 515 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 515 75 discriminator 1
	bne	a5,zero,.L154
	.loc 1 515 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 515 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L154
	.loc 1 515 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 515 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L154
	.loc 1 515 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 515 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L154
	.loc 1 515 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 515 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L154
	.loc 1 523 57
	lw	a4,-44(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-604(a5)
	.loc 1 524 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	zero,-572(a5)
	.loc 1 526 22
	j	.L155
.L156:
	.loc 1 527 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L155:
	.loc 1 526 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 526 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L156
	.loc 1 526 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 526 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L156
.LBE49:
	.loc 1 497 49
	j	.L146
.L147:
	.loc 1 530 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 530 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L157
	.loc 1 530 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 530 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 530 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L157
.LBB51:
	.loc 1 532 19
	ld	a5,-24(s0)
	ble	a5,zero,.L158
	.loc 1 533 61
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
	.loc 1 534 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 535 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L159
	.loc 1 536 25
	lla	a0,.LC5
	call	puts
	.loc 1 537 25
	j	.L143
.L159:
	.loc 1 539 23
	sd	zero,-24(s0)
.L158:
	.loc 1 542 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 543 22
	j	.L160
.L161:
	.loc 1 544 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L160:
	.loc 1 543 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 543 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L161
	.loc 1 543 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 543 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L161
	.loc 1 547 21
	sw	zero,-48(s0)
	.loc 1 549 22
	j	.L162
.L164:
	.loc 1 550 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 550 59
	lw	a4,-48(s0)
	addiw	a3,a4,1
	sw	a3,-48(s0)
	.loc 1 550 65
	lbu	a3,0(a5)
	.loc 1 550 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-604(a5)
	.loc 1 552 23
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L162
	.loc 1 553 25
	lla	a0,.LC7
	call	puts
.LBB52:
	.loc 1 554 25
	li	a0,2
	li	a7,70
 #APP
# 554 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L163:
	j	.L163
.L162:
.LBE52:
	.loc 1 549 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 549 75 discriminator 1
	bne	a5,zero,.L164
	.loc 1 549 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 549 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L164
	.loc 1 549 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 549 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L164
	.loc 1 549 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 549 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L164
	.loc 1 549 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 549 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L164
	.loc 1 557 57
	lw	a4,-48(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-604(a5)
	.loc 1 558 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,1
	sw	a4,-572(a5)
	.loc 1 560 22
	j	.L165
.L166:
	.loc 1 561 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L165:
	.loc 1 560 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 560 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L166
	.loc 1 560 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 560 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L166
.LBE51:
	.loc 1 530 49
	j	.L146
.L157:
	.loc 1 564 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 564 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L169
	.loc 1 564 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 564 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L168
	.loc 1 565 22
	j	.L169
.L170:
	.loc 1 566 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L169:
	.loc 1 565 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 565 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L170
	.loc 1 565 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 565 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L170
	.loc 1 568 19
	ld	a5,-24(s0)
	ble	a5,zero,.L216
	.loc 1 569 61
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
	.loc 1 570 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 571 23
	sd	zero,-24(s0)
	.loc 1 572 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L216
	.loc 1 573 25
	lla	a0,.LC5
	call	puts
	.loc 1 574 25
	j	.L143
.L168:
	.loc 1 579 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 579 20
	bne	a5,zero,.L172
	.loc 1 581 20
	ld	a5,-24(s0)
	ble	a5,zero,.L173
	.loc 1 582 61
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
	.loc 1 583 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 584 23
	sd	zero,-24(s0)
.L173:
	.loc 1 587 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-608(a5)
	.loc 1 588 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 589 17
	j	.L143
.L172:
	.loc 1 592 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 592 57
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
	.loc 1 593 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 594 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 596 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L174
	.loc 1 597 21
	lla	a0,.LC8
	call	puts
	.loc 1 598 21
	j	.L143
.L216:
	.loc 1 568 19
	nop
.L146:
	.loc 1 470 15
	j	.L174
.L143:
	.loc 1 604 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L175
	.loc 1 604 45 discriminator 1
	lw	a5,-624(s0)
	.loc 1 604 31 discriminator 1
	ble	a5,zero,.L175
	.loc 1 604 62 discriminator 2
	addi	a5,s0,-672
	lla	a1,.LC9
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 604 59 discriminator 1
	bne	a5,zero,.L175
.LBB53:
	.loc 1 605 25
	lla	a5,.LC10
	sd	a5,-56(s0)
	.loc 1 606 28
	lw	a4,-624(s0)
	.loc 1 606 16
	li	a5,1
	ble	a4,a5,.L176
	.loc 1 606 64 discriminator 1
	lbu	a5,-656(s0)
	.loc 1 606 42 discriminator 1
	beq	a5,zero,.L176
	.loc 1 607 24
	addi	a5,s0,-672
	addi	a5,a5,16
	sd	a5,-56(s0)
.L176:
.LBB54:
	.loc 1 609 22
	ld	a5,-56(s0)
	mv	a0,a5
	li	a7,80
 #APP
# 609 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE54:
	.loc 1 609 17
	sw	a5,-140(s0)
	.loc 1 610 16
	lw	a5,-140(s0)
	sext.w	a5,a5
	bge	a5,zero,.L217
	.loc 1 611 17
	lla	a0,.LC11
	call	puts
	.loc 1 613 13
	j	.L217
.L175:
.LBE53:
	.loc 1 617 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L178
	.loc 1 617 45 discriminator 1
	lw	a5,-624(s0)
	.loc 1 617 31 discriminator 1
	ble	a5,zero,.L178
	.loc 1 617 62 discriminator 2
	addi	a5,s0,-672
	lla	a1,.LC12
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 617 59 discriminator 1
	bne	a5,zero,.L178
.LBB55:
	.loc 1 618 28
	lw	a4,-624(s0)
	.loc 1 618 16
	li	a5,1
	bgt	a4,a5,.L179
	.loc 1 618 44 discriminator 1
	lla	a0,.LC13
	call	puts
	.loc 1 618 78
	j	.L140
.L179:
	.loc 1 619 17
	li	a5,1
	sw	a5,-60(s0)
	.loc 1 619 31
	sw	zero,-64(s0)
	.loc 1 620 28
	lw	a4,-624(s0)
	.loc 1 620 16
	li	a5,1
	ble	a4,a5,.L180
	.loc 1 620 45 discriminator 1
	addi	a5,s0,-672
	addi	a5,a5,16
	lla	a1,.LC14
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 620 42 discriminator 1
	bne	a5,zero,.L180
	.loc 1 620 95 discriminator 2
	li	a5,1
	sw	a5,-64(s0)
	.loc 1 620 105 discriminator 2
	li	a5,2
	sw	a5,-60(s0)
.L180:
	.loc 1 621 28
	lw	a5,-624(s0)
	.loc 1 621 16
	lw	a4,-60(s0)
	sext.w	a4,a4
	blt	a4,a5,.L181
	.loc 1 621 48 discriminator 1
	lla	a0,.LC13
	call	puts
	.loc 1 621 82
	j	.L140
.L181:
.LBB56:
	.loc 1 623 22
	lw	a5,-60(s0)
	sw	a5,-68(s0)
	.loc 1 623 13
	j	.L182
.L208:
.LBB57:
	.loc 1 624 29
	addi	a4,s0,-672
	lw	a5,-68(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	sd	a5,-152(s0)
	.loc 1 625 20
	ld	a5,-152(s0)
	beq	a5,zero,.L183
	.loc 1 625 35 discriminator 2
	ld	a5,-152(s0)
	lbu	a5,0(a5)
	.loc 1 625 27 discriminator 2
	bne	a5,zero,.L184
.L183:
	.loc 1 625 42 discriminator 3
	lla	a0,.LC15
	call	puts
	.loc 1 625 73
	j	.L185
.L184:
	.loc 1 626 20
	lw	a5,-64(s0)
	sext.w	a5,a5
	bne	a5,zero,.L186
.LBB58:
.LBB59:
	.loc 1 627 30
	ld	a5,-152(s0)
	mv	a0,a5
	li	a1,493
	li	a7,81
 #APP
# 627 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE59:
	.loc 1 627 25
	sw	a5,-156(s0)
	.loc 1 628 24
	lw	a5,-156(s0)
	sext.w	a5,a5
	bge	a5,zero,.L185
	.loc 1 628 33 discriminator 1
	lla	a0,.LC16
	call	puts
	j	.L185
.L186:
.LBE58:
.LBB60:
	.loc 1 631 42
	sw	zero,-72(s0)
	.loc 1 631 59
	sb	zero,-936(s0)
	.loc 1 632 33
	ld	a5,-152(s0)
	sd	a5,-80(s0)
	.loc 1 633 25
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 633 24
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L190
	.loc 1 633 46 discriminator 1
	lw	a5,-72(s0)
	addiw	a4,a5,1
	sw	a4,-72(s0)
	.loc 1 633 50 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,47
	sb	a4,-920(a5)
	.loc 1 633 67 discriminator 1
	lw	a5,-72(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-920(a5)
	.loc 1 633 81
	j	.L188
.L189:
	.loc 1 633 92 discriminator 4
	ld	a5,-80(s0)
	addi	a5,a5,1
	sd	a5,-80(s0)
.L188:
	.loc 1 633 82 discriminator 2
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 633 84 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L189
	.loc 1 634 27
	j	.L190
.L207:
.LBB61:
	.loc 1 635 44
	sw	zero,-84(s0)
	.loc 1 636 31
	j	.L191
.L193:
	.loc 1 636 98 discriminator 4
	ld	a4,-80(s0)
	addi	a5,a4,1
	sd	a5,-80(s0)
	.loc 1 636 90 discriminator 4
	lw	a5,-84(s0)
	addiw	a3,a5,1
	sw	a3,-84(s0)
	.loc 1 636 96 discriminator 4
	lbu	a4,0(a4)
	.loc 1 636 94 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-984(a5)
.L191:
	.loc 1 636 33 discriminator 1
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 636 52 discriminator 1
	beq	a5,zero,.L192
	.loc 1 636 41 discriminator 2
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 636 37 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L192
	.loc 1 636 52 discriminator 3
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L193
.L192:
	.loc 1 637 34
	lw	a5,-84(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-984(a5)
	.loc 1 638 31
	j	.L194
.L195:
	.loc 1 638 44 discriminator 2
	ld	a5,-80(s0)
	addi	a5,a5,1
	sd	a5,-80(s0)
.L194:
	.loc 1 638 32 discriminator 1
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 638 35 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L195
	.loc 1 639 28
	lw	a5,-84(s0)
	sext.w	a5,a5
	beq	a5,zero,.L218
	.loc 1 640 28
	lw	a5,-72(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L198
	.loc 1 640 45 discriminator 2
	lbu	a5,-936(s0)
	.loc 1 640 29 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L199
.L198:
	.loc 1 640 61 discriminator 3
	lw	a5,-72(s0)
	sext.w	a4,a5
	li	a5,254
	bgt	a4,a5,.L199
	.loc 1 640 97 discriminator 4
	lw	a5,-72(s0)
	addiw	a4,a5,1
	sw	a4,-72(s0)
	.loc 1 640 101 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,47
	sb	a4,-920(a5)
.L199:
.LBB62:
	.loc 1 641 34
	sw	zero,-88(s0)
	.loc 1 641 25
	j	.L200
.L202:
	.loc 1 641 87 discriminator 4
	lw	a5,-72(s0)
	addiw	a4,a5,1
	sw	a4,-72(s0)
	.loc 1 641 97 discriminator 4
	lw	a4,-88(s0)
	addi	a4,a4,-16
	add	a4,a4,s0
	lbu	a4,-984(a4)
	.loc 1 641 91 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-920(a5)
	.loc 1 641 75 discriminator 4
	lw	a5,-88(s0)
	addiw	a5,a5,1
	sw	a5,-88(s0)
.L200:
	.loc 1 641 44 discriminator 1
	lw	a5,-88(s0)
	mv	a4,a5
	lw	a5,-84(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bge	a4,a5,.L201
	.loc 1 641 44 is_stmt 0 discriminator 3
	lw	a5,-72(s0)
	sext.w	a4,a5
	li	a5,254
	ble	a4,a5,.L202
.L201:
.LBE62:
	.loc 1 642 35 is_stmt 1
	lw	a5,-72(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-920(a5)
	.loc 1 643 29
	addi	a5,s0,-936
	mv	a0,a5
	call	isdir
	mv	a5,a0
	.loc 1 643 28 discriminator 1
	bne	a5,zero,.L219
.LBB63:
	.loc 1 644 29
	addi	a5,s0,-936
	mv	a0,a5
	li	a1,493
	li	a7,81
 #APP
# 644 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE63:
	.loc 1 644 28
	bge	a5,zero,.L190
	.loc 1 644 55 discriminator 1
	lla	a0,.LC16
	call	puts
	.loc 1 644 80
	j	.L185
.L218:
	.loc 1 639 38
	nop
	j	.L190
.L219:
	.loc 1 643 43
	nop
.L190:
.LBE61:
	.loc 1 634 28
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L207
.L185:
.LBE60:
.LBE57:
	.loc 1 623 61 discriminator 2
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L182:
	.loc 1 623 49 discriminator 1
	lw	a5,-624(s0)
	.loc 1 623 36 discriminator 1
	lw	a4,-68(s0)
	sext.w	a4,a4
	blt	a4,a5,.L208
.LBE56:
	.loc 1 648 13
	j	.L140
.L178:
.LBE55:
.LBB64:
	.loc 1 653 15
	li	a7,68
 #APP
# 653 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE64:
	.loc 1 653 13
	sw	a5,-160(s0)
	.loc 1 655 11
	lw	a5,-160(s0)
	sext.w	a5,a5
	bne	a5,zero,.L209
	.loc 1 656 13
	lw	a4,-28(s0)
	addi	a5,s0,-672
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L212
.L209:
.LBB65:
	.loc 1 659 21
	sw	zero,-92(s0)
	.loc 1 659 13
	j	.L210
.L211:
.LBB66:
.LBB67:
	.loc 1 661 17
	addi	a5,s0,-676
	mv	a0,a5
	li	a7,71
 #APP
# 661 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE67:
.LBE66:
	.loc 1 659 43 discriminator 3
	lw	a5,-92(s0)
	addiw	a5,a5,1
	sw	a5,-92(s0)
.L210:
	.loc 1 659 27 discriminator 1
	lw	a5,-92(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L211
	j	.L212
.L215:
.LBE65:
	.loc 1 459 13
	nop
	j	.L212
.L217:
.LBB68:
	.loc 1 613 13
	nop
.L140:
.LBE68:
	.loc 1 425 9
	j	.L212
	.cfi_endproc
.LFE15:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x139f
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x15
	.4byte	.LASF59
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
	.4byte	.LASF60
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
	.4byte	.LASF61
	.byte	0x58
	.byte	0x1
	.2byte	0x13e
	.byte	0x8
	.4byte	0xe1
	.uleb128 0xc
	.4byte	.LASF14
	.2byte	0x140
	.byte	0xa
	.4byte	0xe1
	.byte	0
	.uleb128 0xc
	.4byte	.LASF15
	.2byte	0x141
	.byte	0x9
	.4byte	0x3c
	.byte	0x30
	.uleb128 0xc
	.4byte	.LASF16
	.2byte	0x142
	.byte	0xa
	.4byte	0x103
	.byte	0x34
	.uleb128 0xc
	.4byte	.LASF17
	.2byte	0x143
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
	.uleb128 0x12
	.4byte	.LASF32
	.2byte	0x199
	.4byte	0x3c
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6db
	.uleb128 0x1
	.string	"buf"
	.2byte	0x19a
	.byte	0xa
	.4byte	0x6db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x1
	.string	"n"
	.2byte	0x19b
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF19
	.2byte	0x19c
	.byte	0xa
	.4byte	0x6eb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.string	"pid"
	.2byte	0x19d
	.byte	0xb
	.4byte	0x92
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x13
	.4byte	.LASF20
	.2byte	0x19e
	.4byte	0x3c
	.uleb128 0x13
	.4byte	.LASF21
	.2byte	0x19f
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x1a1
	.byte	0x15
	.4byte	0x6fb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x1a2
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF15
	.2byte	0x1a3
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x1a4
	.byte	0xb
	.4byte	0x70b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0x220
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x1a9
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1a9
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1a9
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1a9
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1a9
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.4byte	0x27e
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x1ae
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1ae
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1ae
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1ae
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1ae
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.4byte	0x2dc
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x1af
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1af
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1af
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1af
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1af
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.4byte	0x33a
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x1b7
	.byte	0x11
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1b7
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1b7
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1b7
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1b7
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.4byte	0x398
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x1c8
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1c8
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1c8
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1c8
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1c8
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.4byte	0x3e9
	.uleb128 0x1
	.string	"i"
	.2byte	0x201
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x208
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x208
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x43a
	.uleb128 0x1
	.string	"i"
	.2byte	0x223
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x22a
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x22a
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
	.2byte	0x25d
	.byte	0x19
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"rc"
	.2byte	0x261
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x4
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x261
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x261
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.4byte	0x638
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x26b
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x3
	.4byte	.LASF27
	.2byte	0x26b
	.byte	0x1f
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB56
	.8byte	.LBE56-.LBB56
	.uleb128 0x1
	.string	"ai"
	.2byte	0x26f
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.uleb128 0x3
	.4byte	.LASF28
	.2byte	0x270
	.byte	0x1d
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.8byte	.LBB58
	.8byte	.LBE58-.LBB58
	.4byte	0x565
	.uleb128 0x1
	.string	"rc"
	.2byte	0x273
	.byte	0x19
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x4
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x273
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x273
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x273
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.uleb128 0x3
	.4byte	.LASF29
	.2byte	0x277
	.byte	0x1a
	.4byte	0x715
	.uleb128 0x3
	.byte	0x91
	.sleb128 -936
	.uleb128 0x1
	.string	"ap"
	.2byte	0x277
	.byte	0x2a
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.string	"s"
	.2byte	0x278
	.byte	0x21
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.8byte	.LBB61
	.8byte	.LBE61-.LBB61
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x27b
	.byte	0x1e
	.4byte	0x6db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1000
	.uleb128 0x1
	.string	"ni"
	.2byte	0x27b
	.byte	0x2c
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x2
	.8byte	.LBB62
	.8byte	.LBE62-.LBB62
	.4byte	0x5f7
	.uleb128 0x1
	.string	"k"
	.2byte	0x281
	.byte	0x22
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.byte	0
	.uleb128 0x4
	.8byte	.LBB63
	.8byte	.LBE63-.LBB63
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x284
	.byte	0x1d
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x284
	.byte	0x1d
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x284
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
	.8byte	.LBB64
	.8byte	.LBE64-.LBB64
	.4byte	0x66a
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x28d
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x28d
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x4
	.8byte	.LBB65
	.8byte	.LBE65-.LBB65
	.uleb128 0x1
	.string	"k"
	.2byte	0x293
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x4
	.8byte	.LBB66
	.8byte	.LBE66-.LBB66
	.uleb128 0x3
	.4byte	.LASF21
	.2byte	0x294
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -676
	.uleb128 0x4
	.8byte	.LBB67
	.8byte	.LBE67-.LBB67
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x295
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x295
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
	.uleb128 0x12
	.4byte	.LASF33
	.2byte	0x146
	.4byte	0x3c
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcdd
	.uleb128 0x1b
	.string	"n"
	.byte	0x1
	.2byte	0x146
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -180
	.uleb128 0x11
	.4byte	.LASF22
	.2byte	0x146
	.byte	0x29
	.4byte	0xcdd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x11
	.4byte	.LASF23
	.2byte	0x146
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x3
	.4byte	.LASF34
	.2byte	0x148
	.byte	0x9
	.4byte	0xce2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF35
	.2byte	0x14a
	.byte	0x16
	.4byte	0xcdd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0xa03
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x14d
	.byte	0xf
	.4byte	0xcf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"j"
	.2byte	0x14e
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x925
	.uleb128 0x1
	.string	"fd"
	.2byte	0x155
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x836
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x157
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x157
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x157
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x157
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x884
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15a
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x15a
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x15a
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15a
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x8b6
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x8f6
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x162
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x162
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x162
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
	.2byte	0x163
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x163
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x965
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x167
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x167
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x167
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0x9d4
	.uleb128 0x3
	.4byte	.LASF36
	.2byte	0x169
	.byte	0x12
	.4byte	0x6db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"i"
	.2byte	0x16b
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x16e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x16e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x16e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x170
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x170
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.uleb128 0x1
	.string	"pid"
	.2byte	0x175
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.4byte	0xa55
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x173
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x173
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0xa87
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x175
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x175
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0xac7
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x178
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x178
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x178
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0xaf9
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x179
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x179
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0xb2b
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
	.uleb128 0x4
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x182
	.byte	0x13
	.4byte	0xcf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"j"
	.2byte	0x183
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0xb8b
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x17e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x17e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0xbcb
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x17f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x17f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x17f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.4byte	0xbfd
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x180
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x180
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.4byte	0xc3d
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x189
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x189
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x189
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.4byte	0xcac
	.uleb128 0x3
	.4byte	.LASF36
	.2byte	0x18b
	.byte	0x16
	.4byte	0x6db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"i"
	.2byte	0x18d
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
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
	.string	"_a7"
	.2byte	0x190
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x192
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x192
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
	.4byte	0xcf2
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x70b
	.4byte	0xd02
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x2
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF56
	.byte	0x1
	.2byte	0x101
	.byte	0xc
	.4byte	0x3c
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xda3
	.uleb128 0x11
	.4byte	.LASF28
	.2byte	0x101
	.byte	0x1e
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"fd"
	.2byte	0x102
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0xd74
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x102
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x102
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x103
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x103
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF37
	.byte	0xfb
	.4byte	0x3c
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdd0
	.uleb128 0x7
	.string	"c"
	.byte	0xfb
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF38
	.byte	0xf6
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdfe
	.uleb128 0x7
	.string	"c"
	.byte	0xf6
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF39
	.byte	0xf1
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe2c
	.uleb128 0x7
	.string	"c"
	.byte	0xf1
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF40
	.byte	0xeb
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe68
	.uleb128 0x7
	.string	"c"
	.byte	0xeb
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x5
	.4byte	.LASF41
	.byte	0xed
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xe
	.4byte	.LASF45
	.byte	0xe5
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe91
	.uleb128 0x7
	.string	"s"
	.byte	0xe5
	.byte	0x17
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF42
	.byte	0x84
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1066
	.uleb128 0x7
	.string	"fmt"
	.byte	0x84
	.byte	0x18
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1d
	.uleb128 0x6
	.string	"ap"
	.byte	0x85
	.byte	0xd
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x6
	.string	"p"
	.byte	0x88
	.byte	0x11
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0xfb4
	.uleb128 0x5
	.4byte	.LASF43
	.byte	0x92
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0xf25
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0x9c
	.byte	0x27
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0xf4a
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0x9f
	.byte	0x2c
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.byte	0
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0xf6f
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0xa6
	.byte	0x1e
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0xf94
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0xa9
	.byte	0x23
	.4byte	0x43
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.byte	0
	.uleb128 0x4
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x6
	.string	"i"
	.byte	0xb0
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
	.4byte	0xfd9
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0xb8
	.byte	0x19
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0xffe
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0xbd
	.byte	0x22
	.4byte	0x58
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0x1023
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0xc2
	.byte	0x23
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.byte	0
	.uleb128 0x2
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0x1046
	.uleb128 0x6
	.string	"s"
	.byte	0xc8
	.byte	0x21
	.4byte	0x710
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x6
	.string	"c"
	.byte	0xce
	.byte	0x1a
	.4byte	0xf7
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF46
	.byte	0x66
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10f9
	.uleb128 0xb
	.4byte	.LASF44
	.byte	0x66
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF47
	.byte	0x66
	.byte	0x31
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF48
	.byte	0x66
	.byte	0x3b
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x6
	.string	"buf"
	.byte	0x67
	.byte	0xa
	.4byte	0x10f9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x6
	.string	"i"
	.byte	0x68
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF49
	.byte	0x69
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x5
	.4byte	.LASF50
	.byte	0x76
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x1109
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x40
	.byte	0
	.uleb128 0xe
	.4byte	.LASF51
	.byte	0x48
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x119c
	.uleb128 0xb
	.4byte	.LASF44
	.byte	0x48
	.byte	0x1e
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF47
	.byte	0x48
	.byte	0x28
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF48
	.byte	0x48
	.byte	0x32
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x6
	.string	"buf"
	.byte	0x49
	.byte	0xa
	.4byte	0x10f9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x6
	.string	"i"
	.byte	0x4a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF49
	.byte	0x4b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x5
	.4byte	.LASF50
	.byte	0x58
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF52
	.byte	0x27
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x123d
	.uleb128 0xb
	.4byte	.LASF44
	.byte	0x27
	.byte	0x13
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0xb
	.4byte	.LASF47
	.byte	0x27
	.byte	0x1d
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xb
	.4byte	.LASF48
	.byte	0x27
	.byte	0x27
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x6
	.string	"buf"
	.byte	0x28
	.byte	0xa
	.4byte	0x123d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"i"
	.byte	0x29
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF49
	.byte	0x2a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF53
	.byte	0x2b
	.byte	0x12
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x5
	.4byte	.LASF50
	.byte	0x3a
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xf7
	.4byte	0x124d
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x20
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF54
	.byte	0x1
	.byte	0x1f
	.byte	0x6
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12da
	.uleb128 0x7
	.string	"c"
	.byte	0x1f
	.byte	0x13
	.4byte	0xf7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x6
	.string	"buf"
	.byte	0x21
	.byte	0xa
	.4byte	0x6eb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x5
	.4byte	.LASF24
	.byte	0x24
	.byte	0x5
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.string	"_a0"
	.byte	0x24
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x6
	.string	"_a1"
	.byte	0x24
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x6
	.string	"_a2"
	.byte	0x24
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x6
	.string	"_a7"
	.byte	0x24
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF55
	.byte	0x14
	.byte	0x7
	.4byte	0x70b
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x132d
	.uleb128 0x7
	.string	"s"
	.byte	0x14
	.byte	0x15
	.4byte	0x70b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.string	"t"
	.byte	0x14
	.byte	0x24
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x7
	.string	"n"
	.byte	0x14
	.byte	0x2b
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"os"
	.byte	0x15
	.byte	0x9
	.4byte	0x70b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF57
	.byte	0x1
	.byte	0xf
	.byte	0x14
	.4byte	0x710
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1369
	.uleb128 0x7
	.string	"s"
	.byte	0xf
	.byte	0x29
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.string	"ch"
	.byte	0xf
	.byte	0x30
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x20
	.4byte	.LASF58
	.byte	0x1
	.byte	0x7
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x7
	.string	"s1"
	.byte	0x7
	.byte	0x18
	.4byte	0x710
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.string	"s2"
	.byte	0x7
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
	.uleb128 0x6
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
	.uleb128 0x5
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
	.uleb128 0x12
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
	.uleb128 0x13
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
	.uleb128 0x20
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
	.uleb128 .LBB53-.Ltext0
	.uleb128 .LBE53-.Ltext0
	.byte	0x4
	.uleb128 .LBB68-.Ltext0
	.uleb128 .LBE68-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF59:
	.string	"GNU C17 14.2.0 -mcmodel=medany -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr -g -O0 -fno-omit-frame-pointer"
.LASF55:
	.string	"strncpy"
.LASF24:
	.string	"_ret"
.LASF16:
	.string	"redirect_file"
.LASF25:
	.string	"target"
.LASF3:
	.string	"short int"
.LASF36:
	.string	"abuf"
.LASF54:
	.string	"putchar"
.LASF32:
	.string	"main"
.LASF53:
	.string	"uval"
.LASF33:
	.string	"run_command"
.LASF12:
	.string	"va_list"
.LASF23:
	.string	"num_commands"
.LASF46:
	.string	"printlonglong"
.LASF61:
	.string	"sCommand"
.LASF4:
	.string	"long long int"
.LASF26:
	.string	"argi"
.LASF52:
	.string	"printint"
.LASF9:
	.string	"long int"
.LASF47:
	.string	"base"
.LASF42:
	.string	"printf"
.LASF41:
	.string	"result"
.LASF49:
	.string	"negative"
.LASF30:
	.string	"name"
.LASF22:
	.string	"commands"
.LASF5:
	.string	"unsigned char"
.LASF20:
	.string	"argc"
.LASF39:
	.string	"xisblank"
.LASF2:
	.string	"signed char"
.LASF8:
	.string	"long long unsigned int"
.LASF37:
	.string	"xisalnum"
.LASF7:
	.string	"unsigned int"
.LASF56:
	.string	"isdir"
.LASF45:
	.string	"puts"
.LASF14:
	.string	"argv"
.LASF6:
	.string	"short unsigned int"
.LASF21:
	.string	"status"
.LASF51:
	.string	"printlong"
.LASF18:
	.string	"char"
.LASF27:
	.string	"parents"
.LASF17:
	.string	"redirect_append"
.LASF38:
	.string	"xisdigit"
.LASF44:
	.string	"val_"
.LASF10:
	.string	"long unsigned int"
.LASF60:
	.string	"__builtin_va_list"
.LASF48:
	.string	"sign"
.LASF13:
	.string	"pid_t"
.LASF40:
	.string	"xisalpha"
.LASF58:
	.string	"strcmp"
.LASF28:
	.string	"path"
.LASF43:
	.string	"lcount"
.LASF15:
	.string	"num_arg"
.LASF11:
	.string	"__gnuc_va_list"
.LASF50:
	.string	"digit"
.LASF29:
	.string	"accum"
.LASF57:
	.string	"s_strchr"
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
