	.file	"sh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9" "sh.c"
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
	.local	g_cmdline
	.comm	g_cmdline,64,8
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB8:
	.loc 1 231 26
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
	.loc 1 232 11
	j	.L81
.L82:
	.loc 1 233 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 1 233 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L81:
	.loc 1 232 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L82
	.loc 1 235 1
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
	.loc 1 238 1
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
	.loc 1 239 41
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,96
	bleu	a4,a5,.L84
	.loc 1 239 28 discriminator 1
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,122
	bleu	a4,a5,.L85
.L84:
	.loc 1 239 41 discriminator 4
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,64
	bleu	a4,a5,.L86
	.loc 1 239 54 discriminator 5
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,90
	bgtu	a4,a5,.L86
.L85:
	.loc 1 239 41 discriminator 7
	li	a5,1
	.loc 1 239 41 is_stmt 0
	j	.L87
.L86:
	.loc 1 239 41 discriminator 8
	li	a5,0
.L87:
	.loc 1 239 9 is_stmt 1 discriminator 10
	sw	a5,-20(s0)
	.loc 1 240 12
	lw	a5,-20(s0)
	.loc 1 241 1
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
	.loc 1 244 1
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
	.loc 1 245 21
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,32
	beq	a4,a5,.L90
	.loc 1 245 21 is_stmt 0 discriminator 2
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,9
	bne	a4,a5,.L91
.L90:
	.loc 1 245 21 discriminator 3
	li	a5,1
	.loc 1 245 21
	j	.L92
.L91:
	.loc 1 245 21 discriminator 4
	li	a5,0
.L92:
	.loc 1 246 1 is_stmt 1
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
	.loc 1 249 1
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
	.loc 1 250 22
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,47
	bleu	a4,a5,.L95
	.loc 1 250 22 is_stmt 0 discriminator 1
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,57
	bgtu	a4,a5,.L95
	.loc 1 250 22 discriminator 3
	li	a5,1
	.loc 1 250 22
	j	.L96
.L95:
	.loc 1 250 22 discriminator 4
	li	a5,0
.L96:
	.loc 1 251 1 is_stmt 1
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
	.loc 1 254 1
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
	.loc 1 255 12
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisalpha
	mv	a5,a0
	.loc 1 255 24 discriminator 1
	bne	a5,zero,.L99
	.loc 1 255 27 discriminator 2
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 255 24 discriminator 1
	beq	a5,zero,.L100
.L99:
	.loc 1 255 24 is_stmt 0 discriminator 3
	li	a5,1
	.loc 1 255 24
	j	.L101
.L100:
	.loc 1 255 24 discriminator 4
	li	a5,0
.L101:
	.loc 1 256 1 is_stmt 1
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
	.loc 1 259 36
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
	.loc 1 260 14
	ld	a5,-40(s0)
	mv	a0,a5
	li	a7,76
 #APP
# 260 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE17:
	.loc 1 260 9
	sw	a5,-20(s0)
	.loc 1 261 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L104
.LBB18:
	.loc 1 261 20 discriminator 1
	lw	a5,-20(s0)
	mv	a0,a5
	li	a7,78
 #APP
# 261 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE18:
	.loc 1 261 41 discriminator 1
	li	a5,1
	.loc 1 261 41 is_stmt 0
	j	.L105
.L104:
	.loc 1 262 12 is_stmt 1
	li	a5,0
.L105:
	.loc 1 263 1
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
	.loc 1 282 1
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
	.loc 1 283 9
	sw	zero,-56(s0)
	sw	zero,-52(s0)
	.loc 1 285 41
	lw	a4,-116(s0)
	li	a5,88
	mul	a5,a4,a5
	.loc 1 285 22
	ld	a4,-128(s0)
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 287 25
	lw	a5,-120(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 287 7
	lw	a4,-116(s0)
	sext.w	a4,a4
	bne	a4,a5,.L107
.LBB19:
	.loc 1 290 14
	sw	zero,-20(s0)
	.loc 1 290 9
	j	.L108
.L109:
	.loc 1 291 22
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-40(s0)
	add	a4,a4,a5
	.loc 1 291 20
	lw	a3,-20(s0)
	addi	a5,s0,-80
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 290 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L108:
	.loc 1 290 27 discriminator 1
	ld	a5,-40(s0)
	lw	a5,48(a5)
	.loc 1 290 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L109
	.loc 1 293 17
	lw	a4,-20(s0)
	addi	a5,s0,-80
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 305 34
	ld	a5,-40(s0)
	lbu	a5,52(a5)
	.loc 1 305 11
	beq	a5,zero,.L110
.LBB20:
	.loc 1 307 23
	ld	a5,-40(s0)
	lw	a5,84(a5)
	.loc 1 307 15
	beq	a5,zero,.L111
.LBB21:
	.loc 1 308 22
	ld	a5,-40(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 308 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE21:
	.loc 1 308 20
	sw	a5,-24(s0)
	j	.L112
.L111:
.LBB22:
	.loc 1 311 22
	ld	a5,-40(s0)
	addi	a5,a5,52
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
 #APP
# 311 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE22:
	.loc 1 311 20
	sw	a5,-24(s0)
.L112:
	.loc 1 314 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L113
	.loc 1 315 17
	lla	a0,.LC1
	call	puts
.LBB23:
	.loc 1 316 17
	li	a0,1
	li	a7,70
 #APP
# 316 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L114:
	j	.L114
.L113:
.LBE23:
.LBB24:
	.loc 1 319 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 319 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 320 13
	lw	a5,-24(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 320 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L110:
.LBE25:
.LBE20:
.LBB26:
	.loc 1 325 9
	ld	a5,-80(s0)
	mv	a0,a5
	addi	a5,s0,-80
	mv	a1,a5
	li	a7,69
 #APP
# 325 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
.LBB27:
	.loc 1 336 9
	li	a0,127
	li	a7,70
 #APP
# 336 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L115:
	j	.L115
.L107:
.LBE27:
.LBE19:
.LBB28:
.LBB29:
	.loc 1 339 9
	addi	a5,s0,-56
	mv	a0,a5
	li	a7,73
 #APP
# 339 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
.LBB30:
	.loc 1 341 19
	li	a7,68
 #APP
# 341 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE30:
	.loc 1 341 13
	sw	a5,-44(s0)
	.loc 1 343 11
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L116
.LBB31:
	.loc 1 344 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 344 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE31:
.LBB32:
	.loc 1 345 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 345 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE32:
.LBB33:
	.loc 1 346 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 346 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE33:
	.loc 1 347 13
	lw	a5,-116(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-120(s0)
	mv	a2,a4
	ld	a1,-128(s0)
	mv	a0,a5
	call	run_command
	j	.L122
.L116:
.LBB34:
.LBB35:
	.loc 1 350 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 350 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE35:
.LBB36:
	.loc 1 351 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 351 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE36:
.LBB37:
	.loc 1 352 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 352 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE37:
	.loc 1 356 18
	sw	zero,-28(s0)
	.loc 1 356 13
	j	.L118
.L119:
	.loc 1 357 26
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-40(s0)
	add	a4,a4,a5
	.loc 1 357 24
	lw	a3,-28(s0)
	addi	a5,s0,-104
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 356 43 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L118:
	.loc 1 356 31 discriminator 1
	ld	a5,-40(s0)
	lw	a5,48(a5)
	.loc 1 356 23 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L119
	.loc 1 359 21
	lw	a4,-28(s0)
	addi	a5,s0,-104
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB38:
	.loc 1 372 13
	ld	a5,-104(s0)
	mv	a0,a5
	addi	a5,s0,-104
	mv	a1,a5
	li	a7,69
 #APP
# 372 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE38:
.LBB39:
	.loc 1 383 13
	li	a0,127
	li	a7,70
 #APP
# 383 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L120:
	j	.L120
.L122:
.LBE39:
.LBE34:
.LBE28:
	.loc 1 387 12
	li	a5,1
	.loc 1 388 1
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
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB15:
	.loc 1 390 16
	.cfi_startproc
	addi	sp,sp,-640
	.cfi_def_cfa_offset 640
	sd	ra,632(sp)
	sd	s0,624(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,640
	.cfi_def_cfa 8, 0
.L176:
.LBB40:
.LBB41:
	.loc 1 406 9
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 406 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-80(s0)
.LBE41:
	.loc 1 409 11
	sd	zero,-24(s0)
.L130:
.LBB42:
	.loc 1 411 13
	li	a0,0
	addi	a5,s0,-192
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 411 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE42:
.LBB43:
	.loc 1 412 13
	li	a0,1
	addi	a5,s0,-192
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 412 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-96(s0)
.LBE43:
	.loc 1 415 22
	lbu	a5,-192(s0)
	.loc 1 415 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L124
	.loc 1 415 41 discriminator 2
	lbu	a5,-192(s0)
	.loc 1 415 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L125
.L124:
	.loc 1 415 53 discriminator 3
	ld	a5,-24(s0)
	ble	a5,zero,.L125
	.loc 1 417 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 418 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
.LBB44:
	.loc 1 420 17
	li	a0,1
	lla	a5,.LC3
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 420 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-104(s0)
.LBE44:
	j	.L126
.L125:
	.loc 1 422 25
	lbu	a5,-192(s0)
	.loc 1 422 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L177
	.loc 1 425 25
	lbu	a5,-192(s0)
	.loc 1 425 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L178
	.loc 1 429 30
	lbu	a4,-192(s0)
	.loc 1 429 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-168(a5)
	.loc 1 430 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L126:
	.loc 1 411 13
	j	.L130
.L177:
	.loc 1 423 17
	nop
	j	.L128
.L178:
	.loc 1 426 17
	nop
.L128:
	.loc 1 433 16
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
.LBB45:
	.loc 1 437 9
	li	a0,1
	lla	a5,.LC4
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 437 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-112(s0)
.LBE45:
	.loc 1 439 13
	sw	zero,-44(s0)
	.loc 1 439 27
	j	.L131
.L133:
	.loc 1 439 77 discriminator 5
	lw	a5,-44(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a4,-168(a5)
	.loc 1 439 72 discriminator 5
	lla	a3,g_cmdline
	lw	a5,-44(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 439 85 discriminator 5
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L131:
	.loc 1 439 31 discriminator 1
	lw	a5,-44(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-168(a5)
	.loc 1 439 36 discriminator 1
	beq	a5,zero,.L132
	.loc 1 439 36 is_stmt 0 discriminator 3
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L133
.L132:
	.loc 1 439 105 is_stmt 1 discriminator 6
	lla	a4,g_cmdline
	lw	a5,-44(s0)
	add	a5,a4,a5
	sb	zero,0(a5)
	.loc 1 441 15
	lbu	a5,-184(s0)
	.loc 1 441 11
	beq	a5,zero,.L179
	.loc 1 445 22
	sw	zero,-28(s0)
	.loc 1 446 17
	sw	zero,-32(s0)
	.loc 1 447 11
	addi	a5,s0,-184
	sd	a5,-40(s0)
	.loc 1 448 11
	sd	zero,-24(s0)
	.loc 1 450 49
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-564(a5)
.L169:
	.loc 1 453 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 453 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L136
	.loc 1 455 19
	ld	a5,-24(s0)
	ble	a5,zero,.L137
	.loc 1 456 61
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
	sb	zero,-616(a5)
	.loc 1 457 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 458 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L137
	.loc 1 459 25
	lla	a0,.LC5
	call	puts
	.loc 1 460 25
	j	.L138
.L137:
	.loc 1 463 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 464 22
	j	.L139
.L140:
	.loc 1 465 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L139:
	.loc 1 464 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 464 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L140
	.loc 1 464 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 464 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L140
	.loc 1 467 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-568(a5)
	.loc 1 469 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 470 19
	sd	zero,-24(s0)
	.loc 1 471 25
	sw	zero,-32(s0)
	.loc 1 473 57
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-564(a5)
	.loc 1 475 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L169
	.loc 1 476 21
	lla	a0,.LC6
	call	puts
	.loc 1 477 21
	j	.L138
.L136:
	.loc 1 480 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 480 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L142
	.loc 1 480 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 480 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 480 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L142
.LBB46:
	.loc 1 482 19
	ld	a5,-24(s0)
	ble	a5,zero,.L143
	.loc 1 483 61
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
	sb	zero,-616(a5)
	.loc 1 484 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 485 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L144
	.loc 1 486 25
	lla	a0,.LC5
	call	puts
	.loc 1 487 25
	j	.L138
.L144:
	.loc 1 489 23
	sd	zero,-24(s0)
.L143:
	.loc 1 491 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 492 22
	j	.L145
.L146:
	.loc 1 493 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L145:
	.loc 1 492 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 492 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L146
	.loc 1 492 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 492 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L146
	.loc 1 496 21
	sw	zero,-48(s0)
	.loc 1 498 22
	j	.L147
.L149:
	.loc 1 499 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 499 59
	lw	a4,-48(s0)
	addiw	a3,a4,1
	sw	a3,-48(s0)
	.loc 1 499 65
	lbu	a3,0(a5)
	.loc 1 499 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-564(a5)
	.loc 1 501 23
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L147
	.loc 1 502 25
	lla	a0,.LC7
	call	puts
.LBB47:
	.loc 1 503 25
	li	a0,2
	li	a7,70
 #APP
# 503 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L148:
	j	.L148
.L147:
.LBE47:
	.loc 1 498 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 498 75 discriminator 1
	bne	a5,zero,.L149
	.loc 1 498 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 498 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L149
	.loc 1 498 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 498 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L149
	.loc 1 498 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 498 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L149
	.loc 1 498 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 498 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L149
	.loc 1 506 57
	lw	a4,-48(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-564(a5)
	.loc 1 507 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	zero,-532(a5)
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
.LBE46:
	.loc 1 480 49
	j	.L141
.L142:
	.loc 1 513 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 513 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L152
	.loc 1 513 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 513 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 513 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L152
.LBB48:
	.loc 1 515 19
	ld	a5,-24(s0)
	ble	a5,zero,.L153
	.loc 1 516 61
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
	sb	zero,-616(a5)
	.loc 1 517 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 518 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L154
	.loc 1 519 25
	lla	a0,.LC5
	call	puts
	.loc 1 520 25
	j	.L138
.L154:
	.loc 1 522 23
	sd	zero,-24(s0)
.L153:
	.loc 1 525 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
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
	.loc 1 530 21
	sw	zero,-52(s0)
	.loc 1 532 22
	j	.L157
.L159:
	.loc 1 533 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 533 59
	lw	a4,-52(s0)
	addiw	a3,a4,1
	sw	a3,-52(s0)
	.loc 1 533 65
	lbu	a3,0(a5)
	.loc 1 533 63
	lw	a2,-28(s0)
	li	a5,88
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-564(a5)
	.loc 1 535 23
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L157
	.loc 1 536 25
	lla	a0,.LC7
	call	puts
.LBB49:
	.loc 1 537 25
	li	a0,2
	li	a7,70
 #APP
# 537 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L158:
	j	.L158
.L157:
.LBE49:
	.loc 1 532 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 532 75 discriminator 1
	bne	a5,zero,.L159
	.loc 1 532 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 532 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L159
	.loc 1 532 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 532 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L159
	.loc 1 532 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 532 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L159
	.loc 1 532 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 532 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L159
	.loc 1 540 57
	lw	a4,-52(s0)
	lw	a3,-28(s0)
	li	a5,88
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-564(a5)
	.loc 1 541 56
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,1
	sw	a4,-532(a5)
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
.LBE48:
	.loc 1 513 49
	j	.L141
.L152:
	.loc 1 547 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 547 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L164
	.loc 1 547 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 547 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L163
	.loc 1 548 22
	j	.L164
.L165:
	.loc 1 549 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L164:
	.loc 1 548 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 548 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L165
	.loc 1 548 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 548 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L165
	.loc 1 551 19
	ld	a5,-24(s0)
	ble	a5,zero,.L180
	.loc 1 552 61
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
	sb	zero,-616(a5)
	.loc 1 553 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 554 23
	sd	zero,-24(s0)
	.loc 1 555 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L180
	.loc 1 556 25
	lla	a0,.LC5
	call	puts
	.loc 1 557 25
	j	.L138
.L163:
	.loc 1 562 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 562 20
	bne	a5,zero,.L167
	.loc 1 564 20
	ld	a5,-24(s0)
	ble	a5,zero,.L168
	.loc 1 565 61
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
	sb	zero,-616(a5)
	.loc 1 566 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 567 23
	sd	zero,-24(s0)
.L168:
	.loc 1 570 48
	lw	a4,-28(s0)
	li	a5,88
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-568(a5)
	.loc 1 571 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 572 17
	j	.L138
.L167:
	.loc 1 575 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 575 57
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
	sb	a4,-616(a5)
	.loc 1 576 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 577 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 579 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L169
	.loc 1 580 21
	lla	a0,.LC8
	call	puts
	.loc 1 581 21
	j	.L138
.L180:
	.loc 1 551 19
	nop
.L141:
	.loc 1 453 15
	j	.L169
.L138:
	.loc 1 587 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L170
	.loc 1 587 45 discriminator 1
	lw	a5,-584(s0)
	.loc 1 587 31 discriminator 1
	ble	a5,zero,.L170
	.loc 1 587 62 discriminator 2
	addi	a5,s0,-632
	lla	a1,.LC9
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 587 59 discriminator 1
	bne	a5,zero,.L170
.LBB50:
	.loc 1 588 25
	lla	a5,.LC10
	sd	a5,-64(s0)
	.loc 1 589 28
	lw	a4,-584(s0)
	.loc 1 589 16
	li	a5,1
	ble	a4,a5,.L171
	.loc 1 589 64 discriminator 1
	lbu	a5,-616(s0)
	.loc 1 589 42 discriminator 1
	beq	a5,zero,.L171
	.loc 1 590 24
	addi	a5,s0,-632
	addi	a5,a5,16
	sd	a5,-64(s0)
.L171:
.LBB51:
	.loc 1 592 22
	ld	a5,-64(s0)
	mv	a0,a5
	li	a7,80
 #APP
# 592 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE51:
	.loc 1 592 17
	sw	a5,-116(s0)
	.loc 1 593 16
	lw	a5,-116(s0)
	sext.w	a5,a5
	bge	a5,zero,.L181
	.loc 1 594 17
	lla	a0,.LC11
	call	puts
	.loc 1 596 13
	j	.L181
.L170:
.LBE50:
.LBB52:
	.loc 1 599 15
	li	a7,68
 #APP
# 599 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE52:
	.loc 1 599 13
	sw	a5,-120(s0)
	.loc 1 601 11
	lw	a5,-120(s0)
	sext.w	a5,a5
	bne	a5,zero,.L173
	.loc 1 602 13
	lw	a4,-28(s0)
	addi	a5,s0,-632
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L176
.L173:
.LBB53:
	.loc 1 605 21
	sw	zero,-68(s0)
	.loc 1 605 13
	j	.L174
.L175:
.LBB54:
.LBB55:
	.loc 1 607 17
	addi	a5,s0,-636
	mv	a0,a5
	li	a7,71
 #APP
# 607 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE55:
.LBE54:
	.loc 1 605 43 discriminator 3
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L174:
	.loc 1 605 27 discriminator 1
	lw	a5,-68(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L175
	j	.L176
.L179:
.LBE53:
	.loc 1 442 13
	nop
	j	.L176
.L181:
.LBB56:
	.loc 1 596 13
	nop
.LBE56:
.LBE40:
	.loc 1 403 14
	j	.L176
	.cfi_endproc
.LFE15:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x113e
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x15
	.4byte	.LASF55
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x8
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x8
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x16
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x8
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x8
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x8
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x8
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x8
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x8
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x8
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
	.4byte	.LASF56
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
	.uleb128 0xa
	.4byte	0xae
	.4byte	0xae
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0x8
	.byte	0x1
	.byte	0x8
	.4byte	.LASF14
	.uleb128 0x18
	.4byte	0xae
	.uleb128 0x5
	.4byte	.LASF19
	.byte	0xe5
	.byte	0xd
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	g_cmdline
	.uleb128 0x19
	.4byte	.LASF57
	.byte	0x58
	.byte	0x1
	.2byte	0x111
	.byte	0x8
	.4byte	0x112
	.uleb128 0xc
	.4byte	.LASF15
	.2byte	0x113
	.byte	0xa
	.4byte	0x112
	.byte	0
	.uleb128 0xc
	.4byte	.LASF16
	.2byte	0x114
	.byte	0x9
	.4byte	0x3c
	.byte	0x30
	.uleb128 0xc
	.4byte	.LASF17
	.2byte	0x115
	.byte	0xa
	.4byte	0x128
	.byte	0x34
	.uleb128 0xc
	.4byte	.LASF18
	.2byte	0x116
	.byte	0x9
	.4byte	0x3c
	.byte	0x54
	.byte	0
	.uleb128 0xa
	.4byte	0xae
	.4byte	0x128
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x2
	.uleb128 0x9
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0xa
	.4byte	0xae
	.4byte	0x138
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x12
	.4byte	.LASF28
	.2byte	0x186
	.4byte	0x3c
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x578
	.uleb128 0x1
	.string	"buf"
	.2byte	0x187
	.byte	0xa
	.4byte	0x9e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"n"
	.2byte	0x188
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF20
	.2byte	0x189
	.byte	0xa
	.4byte	0x578
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"pid"
	.2byte	0x18a
	.byte	0xb
	.4byte	0x92
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x13
	.4byte	.LASF21
	.2byte	0x18b
	.4byte	0x3c
	.uleb128 0x13
	.4byte	.LASF22
	.2byte	0x18c
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x18e
	.byte	0x15
	.4byte	0x588
	.uleb128 0x3
	.byte	0x91
	.sleb128 -632
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x18f
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF16
	.2byte	0x190
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x191
	.byte	0xb
	.4byte	0x598
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.uleb128 0x1
	.string	"gi"
	.2byte	0x1b7
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.4byte	0x264
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x196
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x196
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x196
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x196
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x196
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x2c2
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x19b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x19b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x19b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x19b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x19b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.4byte	0x320
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x19c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x19c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x19c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x19c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x19c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0x37e
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x1a4
	.byte	0x11
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1a4
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1a4
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1a4
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1a4
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.4byte	0x3dc
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x1b5
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1b5
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1b5
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1b5
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1b5
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.4byte	0x42d
	.uleb128 0x1
	.string	"i"
	.2byte	0x1f0
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1f7
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1f7
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.4byte	0x47e
	.uleb128 0x1
	.string	"i"
	.2byte	0x212
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x219
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x219
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x1a
	.4byte	.LLRL0
	.4byte	0x4d4
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x24c
	.byte	0x19
	.4byte	0x59d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.string	"rc"
	.2byte	0x250
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x4
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x250
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x250
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.4byte	0x506
	.uleb128 0x3
	.4byte	.LASF27
	.2byte	0x257
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x257
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x4
	.8byte	.LBB53
	.8byte	.LBE53-.LBB53
	.uleb128 0x1
	.string	"k"
	.2byte	0x25d
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x25e
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -636
	.uleb128 0x4
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x25f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x25f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xae
	.4byte	0x588
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0xcf
	.4byte	0x598
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x4
	.byte	0
	.uleb128 0x10
	.4byte	0xae
	.uleb128 0x10
	.4byte	0xb5
	.uleb128 0x12
	.4byte	.LASF29
	.2byte	0x119
	.4byte	0x3c
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa7c
	.uleb128 0x1b
	.string	"n"
	.byte	0x1
	.2byte	0x119
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x11
	.4byte	.LASF23
	.2byte	0x119
	.byte	0x29
	.4byte	0xa7c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x11
	.4byte	.LASF24
	.2byte	0x119
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x11b
	.byte	0x9
	.4byte	0xa81
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x11d
	.byte	0x16
	.4byte	0xa7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x811
	.uleb128 0x3
	.4byte	.LASF15
	.2byte	0x120
	.byte	0xf
	.4byte	0xa91
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"j"
	.2byte	0x121
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x7a2
	.uleb128 0x1
	.string	"fd"
	.2byte	0x132
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x6b3
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x134
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x134
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x134
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x134
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x701
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x137
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x137
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x137
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x137
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x733
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x13c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x13c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x773
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x13f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x13f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x13f
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
	.2byte	0x140
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x140
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x7e2
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x145
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x145
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x145
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
	.2byte	0x150
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x150
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
	.2byte	0x155
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x863
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x153
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x153
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x895
	.uleb128 0x3
	.4byte	.LASF27
	.2byte	0x155
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x155
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.4byte	0x8d5
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x158
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x158
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x158
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0x907
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x159
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x159
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0x939
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
	.uleb128 0x4
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.uleb128 0x3
	.4byte	.LASF15
	.2byte	0x162
	.byte	0x13
	.4byte	0xa91
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"j"
	.2byte	0x163
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0x999
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0x9d9
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x15f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0xa0b
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x160
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x160
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0xa4b
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x174
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x174
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x174
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
	.2byte	0x17f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x17f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	0xcf
	.uleb128 0xa
	.4byte	0x3c
	.4byte	0xa91
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x598
	.4byte	0xaa1
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x2
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF52
	.byte	0x1
	.2byte	0x103
	.byte	0xc
	.4byte	0x3c
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb42
	.uleb128 0x11
	.4byte	.LASF32
	.2byte	0x103
	.byte	0x1e
	.4byte	0x59d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"fd"
	.2byte	0x104
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0xb13
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x104
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x104
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
	.2byte	0x105
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x105
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF33
	.byte	0xfd
	.4byte	0x3c
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb6f
	.uleb128 0x7
	.string	"c"
	.byte	0xfd
	.byte	0x13
	.4byte	0xae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF34
	.byte	0xf8
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb9d
	.uleb128 0x7
	.string	"c"
	.byte	0xf8
	.byte	0x13
	.4byte	0xae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF35
	.byte	0xf3
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbcb
	.uleb128 0x7
	.string	"c"
	.byte	0xf3
	.byte	0x13
	.4byte	0xae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF36
	.byte	0xed
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc07
	.uleb128 0x7
	.string	"c"
	.byte	0xed
	.byte	0x13
	.4byte	0xae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0xef
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xe
	.4byte	.LASF41
	.byte	0xe7
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc30
	.uleb128 0x7
	.string	"s"
	.byte	0xe7
	.byte	0x17
	.4byte	0x59d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF38
	.byte	0x84
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe05
	.uleb128 0x7
	.string	"fmt"
	.byte	0x84
	.byte	0x18
	.4byte	0x59d
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
	.4byte	0x59d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0xd53
	.uleb128 0x5
	.4byte	.LASF39
	.byte	0x92
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0xcc4
	.uleb128 0x5
	.4byte	.LASF40
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
	.4byte	0xce9
	.uleb128 0x5
	.4byte	.LASF40
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
	.4byte	0xd0e
	.uleb128 0x5
	.4byte	.LASF40
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
	.4byte	0xd33
	.uleb128 0x5
	.4byte	.LASF40
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
	.4byte	0xd78
	.uleb128 0x5
	.4byte	.LASF40
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
	.4byte	0xd9d
	.uleb128 0x5
	.4byte	.LASF40
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
	.4byte	0xdc2
	.uleb128 0x5
	.4byte	.LASF40
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
	.4byte	0xde5
	.uleb128 0x6
	.string	"s"
	.byte	0xc8
	.byte	0x21
	.4byte	0x59d
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
	.4byte	0xae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF42
	.byte	0x66
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe98
	.uleb128 0xb
	.4byte	.LASF40
	.byte	0x66
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF43
	.byte	0x66
	.byte	0x31
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF44
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
	.4byte	0xe98
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
	.4byte	.LASF45
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
	.4byte	.LASF46
	.byte	0x76
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xae
	.4byte	0xea8
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x40
	.byte	0
	.uleb128 0xe
	.4byte	.LASF47
	.byte	0x48
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf3b
	.uleb128 0xb
	.4byte	.LASF40
	.byte	0x48
	.byte	0x1e
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF43
	.byte	0x48
	.byte	0x28
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF44
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
	.4byte	0xe98
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
	.4byte	.LASF45
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
	.4byte	.LASF46
	.byte	0x58
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF48
	.byte	0x27
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfdc
	.uleb128 0xb
	.4byte	.LASF40
	.byte	0x27
	.byte	0x13
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0xb
	.4byte	.LASF43
	.byte	0x27
	.byte	0x1d
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xb
	.4byte	.LASF44
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
	.4byte	0xfdc
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
	.4byte	.LASF45
	.byte	0x2a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF49
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
	.4byte	.LASF46
	.byte	0x3a
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xae
	.4byte	0xfec
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x20
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF50
	.byte	0x1
	.byte	0x1f
	.byte	0x6
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1079
	.uleb128 0x7
	.string	"c"
	.byte	0x1f
	.byte	0x13
	.4byte	0xae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x6
	.string	"buf"
	.byte	0x21
	.byte	0xa
	.4byte	0x578
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x5
	.4byte	.LASF25
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
	.4byte	.LASF51
	.byte	0x14
	.byte	0x7
	.4byte	0x598
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10cc
	.uleb128 0x7
	.string	"s"
	.byte	0x14
	.byte	0x15
	.4byte	0x598
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.string	"t"
	.byte	0x14
	.byte	0x24
	.4byte	0x59d
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
	.4byte	0x598
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF53
	.byte	0x1
	.byte	0xf
	.byte	0x14
	.4byte	0x59d
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1108
	.uleb128 0x7
	.string	"s"
	.byte	0xf
	.byte	0x29
	.4byte	0x59d
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
	.4byte	.LASF54
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
	.4byte	0x59d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.string	"s2"
	.byte	0x7
	.byte	0x28
	.4byte	0x59d
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
	.uleb128 0x9
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
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
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x19
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
	.uleb128 .LBB50-.Ltext0
	.uleb128 .LBE50-.Ltext0
	.byte	0x4
	.uleb128 .LBB56-.Ltext0
	.uleb128 .LBE56-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF37:
	.string	"result"
.LASF51:
	.string	"strncpy"
.LASF25:
	.string	"_ret"
.LASF17:
	.string	"redirect_file"
.LASF26:
	.string	"target"
.LASF3:
	.string	"short int"
.LASF50:
	.string	"putchar"
.LASF28:
	.string	"main"
.LASF49:
	.string	"uval"
.LASF12:
	.string	"va_list"
.LASF29:
	.string	"run_command"
.LASF24:
	.string	"num_commands"
.LASF42:
	.string	"printlonglong"
.LASF57:
	.string	"sCommand"
.LASF4:
	.string	"long long int"
.LASF48:
	.string	"printint"
.LASF9:
	.string	"long int"
.LASF43:
	.string	"base"
.LASF38:
	.string	"printf"
.LASF36:
	.string	"xisalpha"
.LASF45:
	.string	"negative"
.LASF34:
	.string	"xisdigit"
.LASF23:
	.string	"commands"
.LASF5:
	.string	"unsigned char"
.LASF21:
	.string	"argc"
.LASF35:
	.string	"xisblank"
.LASF2:
	.string	"signed char"
.LASF8:
	.string	"long long unsigned int"
.LASF33:
	.string	"xisalnum"
.LASF7:
	.string	"unsigned int"
.LASF52:
	.string	"isdir"
.LASF41:
	.string	"puts"
.LASF15:
	.string	"argv"
.LASF19:
	.string	"g_cmdline"
.LASF6:
	.string	"short unsigned int"
.LASF22:
	.string	"status"
.LASF47:
	.string	"printlong"
.LASF14:
	.string	"char"
.LASF18:
	.string	"redirect_append"
.LASF40:
	.string	"val_"
.LASF10:
	.string	"long unsigned int"
.LASF56:
	.string	"__builtin_va_list"
.LASF44:
	.string	"sign"
.LASF13:
	.string	"pid_t"
.LASF54:
	.string	"strcmp"
.LASF32:
	.string	"path"
.LASF39:
	.string	"lcount"
.LASF16:
	.string	"num_arg"
.LASF11:
	.string	"__gnuc_va_list"
.LASF46:
	.string	"digit"
.LASF55:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -O0 -fno-omit-frame-pointer"
.LASF53:
	.string	"s_strchr"
.LASF27:
	.string	"_num"
.LASF20:
	.string	"buf2"
.LASF31:
	.string	"command"
.LASF30:
	.string	"pipes"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/Users/ab25cq/minux9"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
