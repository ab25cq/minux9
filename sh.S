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
	.string	"MINUX_CMDLINE="
	.align	3
.LC2:
	.string	"REDIRECT WRITE FILE CAN'T BE OPENED"
	.text
	.align	1
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB14:
	.loc 1 282 1
	.cfi_startproc
	addi	sp,sp,-352
	.cfi_def_cfa_offset 352
	sd	ra,344(sp)
	sd	s0,336(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,352
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-352(s0)
	mv	a4,a2
	sw	a5,-340(s0)
	mv	a5,a4
	sw	a5,-344(s0)
	.loc 1 283 9
	sw	zero,-104(s0)
	sw	zero,-100(s0)
	.loc 1 285 41
	lw	a4,-340(s0)
	li	a5,152
	mul	a5,a4,a5
	.loc 1 285 22
	ld	a4,-352(s0)
	add	a5,a4,a5
	sd	a5,-72(s0)
	.loc 1 287 25
	lw	a5,-344(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 287 7
	lw	a4,-340(s0)
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
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 291 20
	lw	a3,-20(s0)
	addi	a5,s0,-336
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 290 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L108:
	.loc 1 290 27 discriminator 1
	ld	a5,-72(s0)
	lw	a5,112(a5)
	.loc 1 290 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L109
	.loc 1 293 17
	lw	a4,-20(s0)
	addi	a5,s0,-336
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 296 13
	sw	zero,-24(s0)
	.loc 1 297 21
	lla	a5,.LC1
	sd	a5,-96(s0)
.LBB20:
	.loc 1 298 18
	sw	zero,-28(s0)
	.loc 1 298 9
	j	.L110
.L111:
	.loc 1 298 60 discriminator 3
	lw	a5,-28(s0)
	ld	a4,-96(s0)
	add	a4,a4,a5
	.loc 1 298 48 discriminator 3
	lw	a5,-24(s0)
	addiw	a3,a5,1
	sw	a3,-24(s0)
	.loc 1 298 60 discriminator 3
	lbu	a4,0(a4)
	.loc 1 298 52 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 298 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L110:
	.loc 1 298 29 discriminator 1
	lw	a5,-28(s0)
	ld	a4,-96(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 298 23 discriminator 1
	bne	a5,zero,.L111
.LBE20:
.LBB21:
	.loc 1 299 18
	sw	zero,-32(s0)
	.loc 1 299 9
	j	.L112
.L114:
	.loc 1 299 81 discriminator 4
	lw	a5,-24(s0)
	addiw	a4,a5,1
	sw	a4,-24(s0)
	.loc 1 299 96 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-32(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 299 85 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 299 68 discriminator 4
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L112:
	.loc 1 299 32 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-32(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 299 36 discriminator 1
	beq	a5,zero,.L113
	.loc 1 299 36 is_stmt 0 discriminator 3
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L114
.L113:
.LBE21:
	.loc 1 300 20 is_stmt 1
	lw	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-200(a5)
	.loc 1 301 32
	addi	a5,s0,-216
	sd	a5,-120(s0)
	.loc 1 301 50
	sd	zero,-112(s0)
	.loc 1 303 34
	ld	a5,-72(s0)
	lbu	a5,116(a5)
	.loc 1 303 11
	beq	a5,zero,.L115
.LBB22:
	.loc 1 305 23
	ld	a5,-72(s0)
	lw	a5,148(a5)
	.loc 1 305 15
	beq	a5,zero,.L116
.LBB23:
	.loc 1 306 22
	ld	a5,-72(s0)
	addi	a5,a5,116
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 306 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE23:
	.loc 1 306 20
	sw	a5,-36(s0)
	j	.L117
.L116:
.LBB24:
	.loc 1 309 22
	ld	a5,-72(s0)
	addi	a5,a5,116
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
 #APP
# 309 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE24:
	.loc 1 309 20
	sw	a5,-36(s0)
.L117:
	.loc 1 312 15
	lw	a5,-36(s0)
	sext.w	a5,a5
	bge	a5,zero,.L118
	.loc 1 313 17
	lla	a0,.LC2
	call	puts
.LBB25:
	.loc 1 314 17
	li	a0,1
	li	a7,70
 #APP
# 314 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L119:
	j	.L119
.L118:
.LBE25:
.LBB26:
	.loc 1 317 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 317 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
.LBB27:
	.loc 1 318 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 318 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L115:
.LBE27:
.LBE22:
.LBB28:
	.loc 1 322 9
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-120
	mv	a2,a5
	li	a7,100
 #APP
# 322 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE28:
	.loc 1 323 17
	ld	a5,-336(s0)
	.loc 1 323 12
	beq	a5,zero,.L120
	.loc 1 323 28 discriminator 1
	ld	a5,-336(s0)
	.loc 1 323 31 discriminator 1
	lbu	a5,0(a5)
	.loc 1 323 21 discriminator 1
	beq	a5,zero,.L120
	.loc 1 323 52 discriminator 2
	ld	a5,-336(s0)
	.loc 1 323 39 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 323 35 discriminator 1
	bne	a5,zero,.L120
.LBB29:
	.loc 1 325 21
	li	a5,47
	sb	a5,-280(s0)
	.loc 1 326 17
	sw	zero,-40(s0)
	.loc 1 326 28
	j	.L121
.L123:
	.loc 1 326 86 discriminator 4
	ld	a4,-336(s0)
	.loc 1 326 89 discriminator 4
	lw	a5,-40(s0)
	add	a4,a4,a5
	.loc 1 326 76 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 326 89 discriminator 4
	lbu	a4,0(a4)
	.loc 1 326 80 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-264(a5)
	.loc 1 326 95 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L121:
	.loc 1 326 33 discriminator 1
	ld	a4,-336(s0)
	.loc 1 326 36 discriminator 1
	lw	a5,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 326 40 discriminator 1
	beq	a5,zero,.L122
	.loc 1 326 40 is_stmt 0 discriminator 3
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L123
.L122:
	.loc 1 327 19 is_stmt 1
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 327 23
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-264(a5)
	.loc 1 328 21
	addi	a5,s0,-280
	sd	a5,-336(s0)
.LBB30:
	.loc 1 329 13
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-120
	mv	a2,a5
	li	a7,100
 #APP
# 329 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L120:
.LBE30:
.LBE29:
.LBB31:
	.loc 1 331 9
	li	a0,127
	li	a7,70
 #APP
# 331 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L124:
	j	.L124
.L107:
.LBE31:
.LBE19:
.LBB32:
.LBB33:
	.loc 1 334 9
	addi	a5,s0,-104
	mv	a0,a5
	li	a7,73
 #APP
# 334 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE33:
.LBB34:
	.loc 1 336 19
	li	a7,68
 #APP
# 336 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE34:
	.loc 1 336 13
	sw	a5,-76(s0)
	.loc 1 338 11
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L125
.LBB35:
	.loc 1 339 13
	lw	a5,-104(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 339 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE35:
.LBB36:
	.loc 1 340 13
	lw	a5,-104(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 340 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE36:
.LBB37:
	.loc 1 341 13
	lw	a5,-100(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 341 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE37:
	.loc 1 342 13
	lw	a5,-340(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-344(s0)
	mv	a2,a4
	ld	a1,-352(s0)
	mv	a0,a5
	call	run_command
	j	.L140
.L125:
.LBB38:
.LBB39:
	.loc 1 345 13
	lw	a5,-104(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 345 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE39:
.LBB40:
	.loc 1 346 13
	lw	a5,-100(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 346 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE40:
.LBB41:
	.loc 1 347 13
	lw	a5,-100(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 347 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE41:
	.loc 1 351 18
	sw	zero,-44(s0)
	.loc 1 351 13
	j	.L127
.L128:
	.loc 1 352 26
	lw	a5,-44(s0)
	slli	a5,a5,4
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 352 24
	lw	a3,-44(s0)
	addi	a5,s0,-336
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 351 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L127:
	.loc 1 351 31 discriminator 1
	ld	a5,-72(s0)
	lw	a5,112(a5)
	.loc 1 351 23 discriminator 1
	lw	a4,-44(s0)
	sext.w	a4,a4
	blt	a4,a5,.L128
	.loc 1 354 21
	lw	a4,-44(s0)
	addi	a5,s0,-336
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 357 17
	sw	zero,-48(s0)
	.loc 1 358 25
	lla	a5,.LC1
	sd	a5,-88(s0)
.LBB42:
	.loc 1 359 22
	sw	zero,-52(s0)
	.loc 1 359 13
	j	.L129
.L130:
	.loc 1 359 64 discriminator 3
	lw	a5,-52(s0)
	ld	a4,-88(s0)
	add	a4,a4,a5
	.loc 1 359 52 discriminator 3
	lw	a5,-48(s0)
	addiw	a3,a5,1
	sw	a3,-48(s0)
	.loc 1 359 64 discriminator 3
	lbu	a4,0(a4)
	.loc 1 359 56 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 359 39 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L129:
	.loc 1 359 33 discriminator 1
	lw	a5,-52(s0)
	ld	a4,-88(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 359 27 discriminator 1
	bne	a5,zero,.L130
.LBE42:
.LBB43:
	.loc 1 360 22
	sw	zero,-56(s0)
	.loc 1 360 13
	j	.L131
.L133:
	.loc 1 360 85 discriminator 4
	lw	a5,-48(s0)
	addiw	a4,a5,1
	sw	a4,-48(s0)
	.loc 1 360 100 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-56(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 360 89 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 360 72 discriminator 4
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L131:
	.loc 1 360 36 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-56(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 360 40 discriminator 1
	beq	a5,zero,.L132
	.loc 1 360 40 is_stmt 0 discriminator 3
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L133
.L132:
.LBE43:
	.loc 1 361 24 is_stmt 1
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-200(a5)
	.loc 1 362 36
	addi	a5,s0,-216
	sd	a5,-136(s0)
	.loc 1 362 54
	sd	zero,-128(s0)
.LBB44:
	.loc 1 364 13
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 364 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE44:
	.loc 1 365 21
	ld	a5,-336(s0)
	.loc 1 365 16
	beq	a5,zero,.L134
	.loc 1 365 32 discriminator 1
	ld	a5,-336(s0)
	.loc 1 365 35 discriminator 1
	lbu	a5,0(a5)
	.loc 1 365 25 discriminator 1
	beq	a5,zero,.L134
	.loc 1 365 56 discriminator 2
	ld	a5,-336(s0)
	.loc 1 365 43 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 365 39 discriminator 1
	bne	a5,zero,.L134
.LBB45:
	.loc 1 367 25
	li	a5,47
	sb	a5,-280(s0)
	.loc 1 368 21
	sw	zero,-60(s0)
	.loc 1 368 32
	j	.L135
.L137:
	.loc 1 368 90 discriminator 4
	ld	a4,-336(s0)
	.loc 1 368 93 discriminator 4
	lw	a5,-60(s0)
	add	a4,a4,a5
	.loc 1 368 80 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 368 93 discriminator 4
	lbu	a4,0(a4)
	.loc 1 368 84 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-264(a5)
	.loc 1 368 99 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sw	a5,-60(s0)
.L135:
	.loc 1 368 37 discriminator 1
	ld	a4,-336(s0)
	.loc 1 368 40 discriminator 1
	lw	a5,-60(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 368 44 discriminator 1
	beq	a5,zero,.L136
	.loc 1 368 44 is_stmt 0 discriminator 3
	lw	a5,-60(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L137
.L136:
	.loc 1 369 23 is_stmt 1
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 369 27
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-264(a5)
	.loc 1 370 25
	addi	a5,s0,-280
	sd	a5,-336(s0)
.LBB46:
	.loc 1 371 17
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 371 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L134:
.LBE46:
.LBE45:
.LBB47:
	.loc 1 373 13
	li	a0,127
	li	a7,70
 #APP
# 373 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L138:
	j	.L138
.L140:
.LBE47:
.LBE38:
.LBE32:
	.loc 1 377 12
	li	a5,1
	.loc 1 378 1
	mv	a0,a5
	ld	ra,344(sp)
	.cfi_restore 1
	ld	s0,336(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 352
	addi	sp,sp,352
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE14:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC3:
	.string	"$ "
	.align	3
.LC4:
	.string	"cc -o b.s -S b.c"
	.align	3
.LC5:
	.string	"\b \b"
	.align	3
.LC6:
	.string	"\r\n"
	.align	3
.LC7:
	.string	"ARG NUM ERROR"
	.align	3
.LC8:
	.string	"ERR MAX COMMAND"
	.align	3
.LC9:
	.string	"FILE NAME IS TOO LONG"
	.align	3
.LC10:
	.string	"ERR ARG NUM"
	.align	3
.LC11:
	.string	"cd"
	.align	3
.LC12:
	.string	"/"
	.align	3
.LC13:
	.string	"cd: failed\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB15:
	.loc 1 380 16
	.cfi_startproc
	addi	sp,sp,-960
	.cfi_def_cfa_offset 960
	sd	ra,952(sp)
	sd	s0,944(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,960
	.cfi_def_cfa 8, 0
	.loc 1 392 9
	sw	zero,-44(s0)
.L196:
.LBB48:
.LBB49:
	.loc 1 397 9
	li	a0,1
	lla	a5,.LC3
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 397 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-80(s0)
.LBE49:
	.loc 1 399 10
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
	.loc 1 400 11
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L142
	.loc 1 401 13
	addi	a5,s0,-184
	li	a2,64
	lla	a1,.LC4
	mv	a0,a5
	call	strncpy
	j	.L143
.L142:
	.loc 1 407 11
	sd	zero,-24(s0)
.L150:
.LBB50:
	.loc 1 409 13
	li	a0,0
	addi	a5,s0,-192
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 409 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE50:
.LBB51:
	.loc 1 410 13
	li	a0,1
	addi	a5,s0,-192
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 410 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-96(s0)
.LBE51:
	.loc 1 413 22
	lbu	a5,-192(s0)
	.loc 1 413 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L144
	.loc 1 413 41 discriminator 2
	lbu	a5,-192(s0)
	.loc 1 413 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L145
.L144:
	.loc 1 413 53 discriminator 3
	ld	a5,-24(s0)
	ble	a5,zero,.L145
	.loc 1 415 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 416 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
.LBB52:
	.loc 1 418 17
	li	a0,1
	lla	a5,.LC5
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 418 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-104(s0)
.LBE52:
	j	.L146
.L145:
	.loc 1 420 25
	lbu	a5,-192(s0)
	.loc 1 420 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L197
	.loc 1 423 25
	lbu	a5,-192(s0)
	.loc 1 423 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L198
	.loc 1 427 30
	lbu	a4,-192(s0)
	.loc 1 427 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-168(a5)
	.loc 1 428 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L146:
	.loc 1 409 13
	j	.L150
.L197:
	.loc 1 421 17
	nop
	j	.L148
.L198:
	.loc 1 424 17
	nop
.L148:
	.loc 1 431 16
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
.L143:
.LBB53:
	.loc 1 435 9
	li	a0,1
	lla	a5,.LC6
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 435 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-112(s0)
.LBE53:
	.loc 1 437 13
	sw	zero,-48(s0)
	.loc 1 437 27
	j	.L151
.L153:
	.loc 1 437 77 discriminator 5
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a4,-168(a5)
	.loc 1 437 72 discriminator 5
	lla	a3,g_cmdline
	lw	a5,-48(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 437 85 discriminator 5
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sw	a5,-48(s0)
.L151:
	.loc 1 437 31 discriminator 1
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-168(a5)
	.loc 1 437 36 discriminator 1
	beq	a5,zero,.L152
	.loc 1 437 36 is_stmt 0 discriminator 3
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L153
.L152:
	.loc 1 437 105 is_stmt 1 discriminator 6
	lla	a4,g_cmdline
	lw	a5,-48(s0)
	add	a5,a4,a5
	sb	zero,0(a5)
	.loc 1 439 15
	lbu	a5,-184(s0)
	.loc 1 439 11
	beq	a5,zero,.L199
	.loc 1 443 22
	sw	zero,-28(s0)
	.loc 1 444 17
	sw	zero,-32(s0)
	.loc 1 445 11
	addi	a5,s0,-184
	sd	a5,-40(s0)
	.loc 1 446 11
	sd	zero,-24(s0)
	.loc 1 448 49
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-820(a5)
.L189:
	.loc 1 451 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 451 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L156
	.loc 1 453 19
	ld	a5,-24(s0)
	ble	a5,zero,.L157
	.loc 1 454 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,152
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-936(a5)
	.loc 1 455 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 456 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L157
	.loc 1 457 25
	lla	a0,.LC7
	call	puts
	.loc 1 458 25
	j	.L158
.L157:
	.loc 1 461 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 462 22
	j	.L159
.L160:
	.loc 1 463 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L159:
	.loc 1 462 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 462 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L160
	.loc 1 462 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 462 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L160
	.loc 1 465 48
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-824(a5)
	.loc 1 467 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 468 19
	sd	zero,-24(s0)
	.loc 1 469 25
	sw	zero,-32(s0)
	.loc 1 471 57
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-820(a5)
	.loc 1 473 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L189
	.loc 1 474 21
	lla	a0,.LC8
	call	puts
	.loc 1 475 21
	j	.L158
.L156:
	.loc 1 478 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 478 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L162
	.loc 1 478 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 478 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 478 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L162
.LBB54:
	.loc 1 480 19
	ld	a5,-24(s0)
	ble	a5,zero,.L163
	.loc 1 481 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,152
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-936(a5)
	.loc 1 482 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 483 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L164
	.loc 1 484 25
	lla	a0,.LC7
	call	puts
	.loc 1 485 25
	j	.L158
.L164:
	.loc 1 487 23
	sd	zero,-24(s0)
.L163:
	.loc 1 489 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 490 22
	j	.L165
.L166:
	.loc 1 491 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L165:
	.loc 1 490 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 490 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L166
	.loc 1 490 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 490 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L166
	.loc 1 494 21
	sw	zero,-52(s0)
	.loc 1 496 22
	j	.L167
.L169:
	.loc 1 497 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 497 59
	lw	a4,-52(s0)
	addiw	a3,a4,1
	sw	a3,-52(s0)
	.loc 1 497 65
	lbu	a3,0(a5)
	.loc 1 497 63
	lw	a2,-28(s0)
	li	a5,152
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-820(a5)
	.loc 1 499 23
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L167
	.loc 1 500 25
	lla	a0,.LC9
	call	puts
.LBB55:
	.loc 1 501 25
	li	a0,2
	li	a7,70
 #APP
# 501 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L168:
	j	.L168
.L167:
.LBE55:
	.loc 1 496 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 496 75 discriminator 1
	bne	a5,zero,.L169
	.loc 1 496 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 496 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L169
	.loc 1 496 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 496 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L169
	.loc 1 496 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 496 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L169
	.loc 1 496 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 496 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L169
	.loc 1 504 57
	lw	a4,-52(s0)
	lw	a3,-28(s0)
	li	a5,152
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-820(a5)
	.loc 1 505 56
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	zero,-788(a5)
	.loc 1 507 22
	j	.L170
.L171:
	.loc 1 508 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L170:
	.loc 1 507 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 507 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L171
	.loc 1 507 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 507 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L171
.LBE54:
	.loc 1 478 49
	j	.L161
.L162:
	.loc 1 511 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 511 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L172
	.loc 1 511 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 511 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 511 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L172
.LBB56:
	.loc 1 513 19
	ld	a5,-24(s0)
	ble	a5,zero,.L173
	.loc 1 514 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,152
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-936(a5)
	.loc 1 515 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 516 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L174
	.loc 1 517 25
	lla	a0,.LC7
	call	puts
	.loc 1 518 25
	j	.L158
.L174:
	.loc 1 520 23
	sd	zero,-24(s0)
.L173:
	.loc 1 523 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 524 22
	j	.L175
.L176:
	.loc 1 525 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L175:
	.loc 1 524 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 524 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L176
	.loc 1 524 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 524 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L176
	.loc 1 528 21
	sw	zero,-56(s0)
	.loc 1 530 22
	j	.L177
.L179:
	.loc 1 531 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 531 59
	lw	a4,-56(s0)
	addiw	a3,a4,1
	sw	a3,-56(s0)
	.loc 1 531 65
	lbu	a3,0(a5)
	.loc 1 531 63
	lw	a2,-28(s0)
	li	a5,152
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-820(a5)
	.loc 1 533 23
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L177
	.loc 1 534 25
	lla	a0,.LC9
	call	puts
.LBB57:
	.loc 1 535 25
	li	a0,2
	li	a7,70
 #APP
# 535 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L178:
	j	.L178
.L177:
.LBE57:
	.loc 1 530 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 530 75 discriminator 1
	bne	a5,zero,.L179
	.loc 1 530 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 530 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L179
	.loc 1 530 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 530 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L179
	.loc 1 530 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 530 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L179
	.loc 1 530 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 530 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L179
	.loc 1 538 57
	lw	a4,-56(s0)
	lw	a3,-28(s0)
	li	a5,152
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-820(a5)
	.loc 1 539 56
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,1
	sw	a4,-788(a5)
	.loc 1 541 22
	j	.L180
.L181:
	.loc 1 542 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L180:
	.loc 1 541 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 541 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L181
	.loc 1 541 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 541 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L181
.LBE56:
	.loc 1 511 49
	j	.L161
.L172:
	.loc 1 545 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 545 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L184
	.loc 1 545 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 545 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L183
	.loc 1 546 22
	j	.L184
.L185:
	.loc 1 547 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L184:
	.loc 1 546 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 546 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L185
	.loc 1 546 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 546 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L185
	.loc 1 549 19
	ld	a5,-24(s0)
	ble	a5,zero,.L200
	.loc 1 550 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,152
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-936(a5)
	.loc 1 551 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 552 23
	sd	zero,-24(s0)
	.loc 1 553 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L200
	.loc 1 554 25
	lla	a0,.LC7
	call	puts
	.loc 1 555 25
	j	.L158
.L183:
	.loc 1 560 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 560 20
	bne	a5,zero,.L187
	.loc 1 562 20
	ld	a5,-24(s0)
	ble	a5,zero,.L188
	.loc 1 563 61
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,152
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-936(a5)
	.loc 1 564 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 565 23
	sd	zero,-24(s0)
.L188:
	.loc 1 568 48
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-824(a5)
	.loc 1 569 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 570 17
	j	.L158
.L187:
	.loc 1 573 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 573 57
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,4
	li	a5,152
	mul	a5,a2,a5
	add	a5,a3,a5
	addi	a5,a5,-16
	add	a3,a5,s0
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-936(a5)
	.loc 1 574 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 575 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 577 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L189
	.loc 1 578 21
	lla	a0,.LC10
	call	puts
	.loc 1 579 21
	j	.L158
.L200:
	.loc 1 549 19
	nop
.L161:
	.loc 1 451 15
	j	.L189
.L158:
	.loc 1 585 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L190
	.loc 1 585 45 discriminator 1
	lw	a5,-840(s0)
	.loc 1 585 31 discriminator 1
	ble	a5,zero,.L190
	.loc 1 585 62 discriminator 2
	addi	a5,s0,-952
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 585 59 discriminator 1
	bne	a5,zero,.L190
.LBB58:
	.loc 1 586 25
	lla	a5,.LC12
	sd	a5,-64(s0)
	.loc 1 587 28
	lw	a4,-840(s0)
	.loc 1 587 16
	li	a5,1
	ble	a4,a5,.L191
	.loc 1 587 64 discriminator 1
	lbu	a5,-936(s0)
	.loc 1 587 42 discriminator 1
	beq	a5,zero,.L191
	.loc 1 588 24
	addi	a5,s0,-952
	addi	a5,a5,16
	sd	a5,-64(s0)
.L191:
.LBB59:
	.loc 1 590 22
	ld	a5,-64(s0)
	mv	a0,a5
	li	a7,80
 #APP
# 590 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE59:
	.loc 1 590 17
	sw	a5,-116(s0)
	.loc 1 591 16
	lw	a5,-116(s0)
	sext.w	a5,a5
	bge	a5,zero,.L201
	.loc 1 592 17
	lla	a0,.LC13
	call	puts
	.loc 1 594 13
	j	.L201
.L190:
.LBE58:
.LBB60:
	.loc 1 597 15
	li	a7,68
 #APP
# 597 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE60:
	.loc 1 597 13
	sw	a5,-120(s0)
	.loc 1 599 11
	lw	a5,-120(s0)
	sext.w	a5,a5
	bne	a5,zero,.L193
	.loc 1 600 13
	lw	a4,-28(s0)
	addi	a5,s0,-952
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L196
.L193:
.LBB61:
	.loc 1 603 21
	sw	zero,-68(s0)
	.loc 1 603 13
	j	.L194
.L195:
.LBB62:
.LBB63:
	.loc 1 605 17
	addi	a5,s0,-956
	mv	a0,a5
	li	a7,71
 #APP
# 605 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE63:
.LBE62:
	.loc 1 603 43 discriminator 3
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L194:
	.loc 1 603 27 discriminator 1
	lw	a5,-68(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L195
	j	.L196
.L199:
.LBE61:
	.loc 1 440 13
	nop
	j	.L196
.L201:
.LBB64:
	.loc 1 594 13
	nop
.LBE64:
.LBE48:
	.loc 1 394 14
	j	.L196
	.cfi_endproc
.LFE15:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x1393
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x15
	.4byte	.LASF60
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
	.4byte	.LASF61
	.uleb128 0xf
	.4byte	.LASF12
	.byte	0x2
	.byte	0x67
	.byte	0x18
	.4byte	0x74
	.uleb128 0x9
	.byte	0x10
	.byte	0x4
	.4byte	.LASF13
	.uleb128 0x9
	.byte	0x1
	.byte	0x8
	.4byte	.LASF14
	.uleb128 0x18
	.4byte	0x99
	.uleb128 0x10
	.4byte	0x99
	.uleb128 0xf
	.4byte	.LASF15
	.byte	0x3
	.byte	0x2a
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x10
	.4byte	0xa0
	.uleb128 0xa
	.4byte	0x99
	.4byte	0xcb
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0x5
	.4byte	.LASF20
	.byte	0xe5
	.byte	0xd
	.4byte	0xbb
	.uleb128 0x9
	.byte	0x3
	.8byte	g_cmdline
	.uleb128 0x19
	.4byte	.LASF62
	.byte	0x98
	.byte	0x1
	.2byte	0x111
	.byte	0x8
	.4byte	0x123
	.uleb128 0xc
	.4byte	.LASF16
	.2byte	0x113
	.byte	0xa
	.4byte	0x123
	.byte	0
	.uleb128 0xc
	.4byte	.LASF17
	.2byte	0x114
	.byte	0x9
	.4byte	0x3c
	.byte	0x70
	.uleb128 0xc
	.4byte	.LASF18
	.2byte	0x115
	.byte	0xa
	.4byte	0x139
	.byte	0x74
	.uleb128 0xc
	.4byte	.LASF19
	.2byte	0x116
	.byte	0x9
	.4byte	0x3c
	.byte	0x94
	.byte	0
	.uleb128 0xa
	.4byte	0x99
	.4byte	0x139
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x6
	.uleb128 0x8
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0xa
	.4byte	0x99
	.4byte	0x149
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x12
	.4byte	.LASF29
	.2byte	0x17c
	.4byte	0x3c
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x596
	.uleb128 0x1
	.string	"buf"
	.2byte	0x17d
	.byte	0xa
	.4byte	0xbb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"n"
	.2byte	0x17e
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF21
	.2byte	0x17f
	.byte	0xa
	.4byte	0x596
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"pid"
	.2byte	0x180
	.byte	0xb
	.4byte	0xaa
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x13
	.4byte	.LASF22
	.2byte	0x181
	.4byte	0x3c
	.uleb128 0x13
	.4byte	.LASF23
	.2byte	0x182
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x184
	.byte	0x15
	.4byte	0x5a6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -952
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x185
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF17
	.2byte	0x186
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x187
	.byte	0xb
	.4byte	0xa5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"m"
	.2byte	0x188
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x1
	.string	"gi"
	.2byte	0x1b5
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.4byte	0x282
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x18d
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x18d
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x18d
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x18d
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x18d
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.4byte	0x2e0
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x199
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x199
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x199
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x199
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x199
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x33e
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x19a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x19a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x19a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x19a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x19a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.4byte	0x39c
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x1a2
	.byte	0x11
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1a2
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1a2
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1a2
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1a2
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB53
	.8byte	.LBE53-.LBB53
	.4byte	0x3fa
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x1b3
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1b3
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x1b3
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x1b3
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1b3
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.4byte	0x44b
	.uleb128 0x1
	.string	"i"
	.2byte	0x1ee
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1f5
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1f5
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB56
	.8byte	.LBE56-.LBB56
	.4byte	0x49c
	.uleb128 0x1
	.string	"i"
	.2byte	0x210
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x217
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x217
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x1a
	.4byte	.LLRL0
	.4byte	0x4f2
	.uleb128 0x3
	.4byte	.LASF27
	.2byte	0x24a
	.byte	0x19
	.4byte	0xb6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.string	"rc"
	.2byte	0x24e
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x4
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x24e
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x24e
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.4byte	0x524
	.uleb128 0x3
	.4byte	.LASF28
	.2byte	0x255
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x255
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
	.2byte	0x25b
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB62
	.8byte	.LBE62-.LBB62
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x25c
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -956
	.uleb128 0x4
	.8byte	.LBB63
	.8byte	.LBE63-.LBB63
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x25d
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x25d
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
	.4byte	0x99
	.4byte	0x5a6
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0xe0
	.4byte	0x5b6
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x4
	.byte	0
	.uleb128 0x12
	.4byte	.LASF30
	.2byte	0x119
	.4byte	0x3c
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcb1
	.uleb128 0x1b
	.string	"n"
	.byte	0x1
	.2byte	0x119
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -340
	.uleb128 0x11
	.4byte	.LASF24
	.2byte	0x119
	.byte	0x29
	.4byte	0xcb1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x11
	.4byte	.LASF25
	.2byte	0x119
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -344
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x11b
	.byte	0x9
	.4byte	0xcb6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.4byte	.LASF32
	.2byte	0x11d
	.byte	0x16
	.4byte	0xcb1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x936
	.uleb128 0x3
	.4byte	.LASF16
	.2byte	0x120
	.byte	0xf
	.4byte	0xcc6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x1
	.string	"j"
	.2byte	0x121
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x127
	.byte	0xe
	.4byte	0xcd6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.string	"ei"
	.2byte	0x128
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF34
	.2byte	0x129
	.byte	0x15
	.4byte	0xb6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.4byte	.LASF35
	.2byte	0x12d
	.byte	0xf
	.4byte	0xce6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x6b9
	.uleb128 0x1
	.string	"k"
	.2byte	0x12a
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x6dc
	.uleb128 0x1
	.string	"k"
	.2byte	0x12b
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x83c
	.uleb128 0x1
	.string	"fd"
	.2byte	0x130
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x74d
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x132
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x132
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x132
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x132
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x79b
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x135
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x135
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x135
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x135
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0x7cd
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x13a
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x13a
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x80d
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x13d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x13d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x13d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x13e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x13e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0x88a
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x142
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x142
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x142
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x142
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x907
	.uleb128 0x3
	.4byte	.LASF36
	.2byte	0x144
	.byte	0x12
	.4byte	0xbb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x1
	.string	"i"
	.2byte	0x146
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x149
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x149
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x149
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x149
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x14b
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x14b
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x1
	.string	"pid"
	.2byte	0x150
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0x989
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x14e
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x14e
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x9bb
	.uleb128 0x3
	.4byte	.LASF28
	.2byte	0x150
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x150
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0x9fb
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x153
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x153
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x153
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0xa2d
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x154
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x154
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0xa5f
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x155
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x155
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.uleb128 0x3
	.4byte	.LASF16
	.2byte	0x15d
	.byte	0x13
	.4byte	0xcc6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x1
	.string	"j"
	.2byte	0x15e
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x164
	.byte	0x12
	.4byte	0xcd6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.string	"ei"
	.2byte	0x165
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF34
	.2byte	0x166
	.byte	0x19
	.4byte	0xb6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.4byte	.LASF35
	.2byte	0x16a
	.byte	0x13
	.4byte	0xce6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x2
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.4byte	0xafd
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
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.4byte	0xb3d
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.4byte	0xb6f
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
	.uleb128 0x2
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0xb92
	.uleb128 0x1
	.string	"k"
	.2byte	0x167
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x2
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.4byte	0xbb5
	.uleb128 0x1
	.string	"k"
	.2byte	0x168
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0x2
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0xc03
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x16c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.4byte	0xc80
	.uleb128 0x3
	.4byte	.LASF36
	.2byte	0x16e
	.byte	0x16
	.4byte	0xbb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x1
	.string	"i"
	.2byte	0x170
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x173
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x173
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x173
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x173
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x175
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x175
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	0xe0
	.uleb128 0xa
	.4byte	0x3c
	.4byte	0xcc6
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0xa5
	.4byte	0xcd6
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x6
	.byte	0
	.uleb128 0xa
	.4byte	0x99
	.4byte	0xce6
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x4f
	.byte	0
	.uleb128 0xa
	.4byte	0xa5
	.4byte	0xcf6
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF57
	.byte	0x1
	.2byte	0x103
	.byte	0xc
	.4byte	0x3c
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd97
	.uleb128 0x11
	.4byte	.LASF37
	.2byte	0x103
	.byte	0x1e
	.4byte	0xb6
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
	.4byte	0xd68
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
	.4byte	.LASF38
	.byte	0xfd
	.4byte	0x3c
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdc4
	.uleb128 0x7
	.string	"c"
	.byte	0xfd
	.byte	0x13
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF39
	.byte	0xf8
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdf2
	.uleb128 0x7
	.string	"c"
	.byte	0xf8
	.byte	0x13
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF40
	.byte	0xf3
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe20
	.uleb128 0x7
	.string	"c"
	.byte	0xf3
	.byte	0x13
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0xd
	.4byte	.LASF41
	.byte	0xed
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe5c
	.uleb128 0x7
	.string	"c"
	.byte	0xed
	.byte	0x13
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x5
	.4byte	.LASF42
	.byte	0xef
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xe
	.4byte	.LASF46
	.byte	0xe7
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe85
	.uleb128 0x7
	.string	"s"
	.byte	0xe7
	.byte	0x17
	.4byte	0xb6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF43
	.byte	0x84
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x105a
	.uleb128 0x7
	.string	"fmt"
	.byte	0x84
	.byte	0x18
	.4byte	0xb6
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
	.4byte	0xb6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0xfa8
	.uleb128 0x5
	.4byte	.LASF44
	.byte	0x92
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0xf19
	.uleb128 0x5
	.4byte	.LASF45
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
	.4byte	0xf3e
	.uleb128 0x5
	.4byte	.LASF45
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
	.4byte	0xf63
	.uleb128 0x5
	.4byte	.LASF45
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
	.4byte	0xf88
	.uleb128 0x5
	.4byte	.LASF45
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
	.4byte	0xfcd
	.uleb128 0x5
	.4byte	.LASF45
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
	.4byte	0xff2
	.uleb128 0x5
	.4byte	.LASF45
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
	.4byte	0x1017
	.uleb128 0x5
	.4byte	.LASF45
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
	.4byte	0x103a
	.uleb128 0x6
	.string	"s"
	.byte	0xc8
	.byte	0x21
	.4byte	0xb6
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
	.4byte	0x99
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF47
	.byte	0x66
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10ed
	.uleb128 0xb
	.4byte	.LASF45
	.byte	0x66
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF48
	.byte	0x66
	.byte	0x31
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF49
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
	.4byte	0x10ed
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
	.4byte	.LASF50
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
	.4byte	.LASF51
	.byte	0x76
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x99
	.4byte	0x10fd
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x40
	.byte	0
	.uleb128 0xe
	.4byte	.LASF52
	.byte	0x48
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1190
	.uleb128 0xb
	.4byte	.LASF45
	.byte	0x48
	.byte	0x1e
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0xb
	.4byte	.LASF48
	.byte	0x48
	.byte	0x28
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xb
	.4byte	.LASF49
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
	.4byte	0x10ed
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
	.4byte	.LASF50
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
	.4byte	.LASF51
	.byte	0x58
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF53
	.byte	0x27
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1231
	.uleb128 0xb
	.4byte	.LASF45
	.byte	0x27
	.byte	0x13
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0xb
	.4byte	.LASF48
	.byte	0x27
	.byte	0x1d
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xb
	.4byte	.LASF49
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
	.4byte	0x1231
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
	.4byte	.LASF50
	.byte	0x2a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF54
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
	.4byte	.LASF51
	.byte	0x3a
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x99
	.4byte	0x1241
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x20
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF55
	.byte	0x1
	.byte	0x1f
	.byte	0x6
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12ce
	.uleb128 0x7
	.string	"c"
	.byte	0x1f
	.byte	0x13
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x6
	.string	"buf"
	.byte	0x21
	.byte	0xa
	.4byte	0x596
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x5
	.4byte	.LASF26
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
	.4byte	.LASF56
	.byte	0x14
	.byte	0x7
	.4byte	0xa5
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1321
	.uleb128 0x7
	.string	"s"
	.byte	0x14
	.byte	0x15
	.4byte	0xa5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.string	"t"
	.byte	0x14
	.byte	0x24
	.4byte	0xb6
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
	.4byte	0xa5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF58
	.byte	0x1
	.byte	0xf
	.byte	0x14
	.4byte	0xb6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x135d
	.uleb128 0x7
	.string	"s"
	.byte	0xf
	.byte	0x29
	.4byte	0xb6
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
	.4byte	.LASF59
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
	.4byte	0xb6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.string	"s2"
	.byte	0x7
	.byte	0x28
	.4byte	0xb6
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
	.uleb128 .LBB58-.Ltext0
	.uleb128 .LBE58-.Ltext0
	.byte	0x4
	.uleb128 .LBB64-.Ltext0
	.uleb128 .LBE64-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF18:
	.string	"redirect_file"
.LASF59:
	.string	"strcmp"
.LASF21:
	.string	"buf2"
.LASF12:
	.string	"va_list"
.LASF56:
	.string	"strncpy"
.LASF37:
	.string	"path"
.LASF43:
	.string	"printf"
.LASF8:
	.string	"long long unsigned int"
.LASF44:
	.string	"lcount"
.LASF19:
	.string	"redirect_append"
.LASF33:
	.string	"envbuf"
.LASF4:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF20:
	.string	"g_cmdline"
.LASF9:
	.string	"long int"
.LASF30:
	.string	"run_command"
.LASF61:
	.string	"__builtin_va_list"
.LASF35:
	.string	"envp"
.LASF29:
	.string	"main"
.LASF51:
	.string	"digit"
.LASF7:
	.string	"unsigned int"
.LASF32:
	.string	"command"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF55:
	.string	"putchar"
.LASF60:
	.string	"GNU C17 14.2.0 -mno-small-data-limit=0 -mcmodel=medany -mcmodel=medany -mno-small-data-limit=0 -mabi=lp64 -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -O0 -ffreestanding -fno-stack-protector -fno-builtin -fno-pie"
.LASF27:
	.string	"target"
.LASF41:
	.string	"xisalpha"
.LASF34:
	.string	"prefix"
.LASF39:
	.string	"xisdigit"
.LASF48:
	.string	"base"
.LASF46:
	.string	"puts"
.LASF25:
	.string	"num_commands"
.LASF13:
	.string	"long double"
.LASF11:
	.string	"__gnuc_va_list"
.LASF54:
	.string	"uval"
.LASF31:
	.string	"pipes"
.LASF38:
	.string	"xisalnum"
.LASF24:
	.string	"commands"
.LASF40:
	.string	"xisblank"
.LASF5:
	.string	"unsigned char"
.LASF45:
	.string	"val_"
.LASF62:
	.string	"sCommand"
.LASF3:
	.string	"short int"
.LASF36:
	.string	"abuf"
.LASF17:
	.string	"num_arg"
.LASF28:
	.string	"_num"
.LASF57:
	.string	"isdir"
.LASF14:
	.string	"char"
.LASF53:
	.string	"printint"
.LASF47:
	.string	"printlonglong"
.LASF52:
	.string	"printlong"
.LASF58:
	.string	"s_strchr"
.LASF23:
	.string	"status"
.LASF49:
	.string	"sign"
.LASF50:
	.string	"negative"
.LASF26:
	.string	"_ret"
.LASF22:
	.string	"argc"
.LASF15:
	.string	"pid_t"
.LASF16:
	.string	"argv"
.LASF42:
	.string	"result"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/Users/ab25cq/minux9"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
