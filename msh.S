	.file	"msh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9" "msh.c"
	.align	1
	.type	exit, @function
exit:
.LFB0:
	.file 1 "minux.h"
	.loc 1 101 38
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
	.loc 1 102 5
	ld	a5,-24(s0)
 #APP
# 102 "minux.h" 1
	mv   a0, a5   
li   a7, 70   
ecall         

# 0 "" 2
 #NO_APP
.L2:
	.loc 1 111 10
	j	.L2
	.cfi_endproc
.LFE0:
	.size	exit, .-exit
	.align	1
	.globl	strncpy
	.type	strncpy, @function
strncpy:
.LFB1:
	.file 2 "msh.c"
	.loc 2 5 46
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
	.loc 2 8 6
	ld	a5,-40(s0)
	sd	a5,-24(s0)
	.loc 2 9 8
	nop
.L5:
	.loc 2 9 10 discriminator 2
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 2 9 17 discriminator 2
	ble	a5,zero,.L6
	.loc 2 9 30 discriminator 1
	ld	a4,-48(s0)
	addi	a5,a4,1
	sd	a5,-48(s0)
	.loc 2 9 23 discriminator 1
	ld	a5,-40(s0)
	addi	a3,a5,1
	sd	a3,-40(s0)
	.loc 2 9 28 discriminator 1
	lbu	a4,0(a4)
	.loc 2 9 26 discriminator 1
	sb	a4,0(a5)
	.loc 2 9 21 discriminator 1
	lbu	a5,0(a5)
	.loc 2 9 17 discriminator 1
	bne	a5,zero,.L5
	.loc 2 11 8
	j	.L6
.L7:
	.loc 2 12 7
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 2 12 10
	sb	zero,0(a5)
.L6:
	.loc 2 11 10
	lw	a5,-52(s0)
	addiw	a4,a5,-1
	sw	a4,-52(s0)
	.loc 2 11 13
	bgt	a5,zero,.L7
	.loc 2 13 10
	ld	a5,-24(s0)
	.loc 2 14 1
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
	.loc 2 17 1
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
	.loc 2 19 12
	lbu	a5,-33(s0)
	sb	a5,-32(s0)
	.loc 2 20 12
	sb	zero,-31(s0)
.LBB2:
	.loc 2 21 5
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
	.loc 2 22 1
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
	.loc 2 24 45
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
	.loc 2 26 9
	sw	zero,-20(s0)
	.loc 2 27 9
	sw	zero,-24(s0)
	.loc 2 30 8
	lw	a5,-92(s0)
	sext.w	a5,a5
	beq	a5,zero,.L11
	.loc 2 30 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L11
	.loc 2 31 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 32 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 2 32 14
	sw	a5,-28(s0)
	j	.L12
.L11:
	.loc 2 34 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L12:
	.loc 2 37 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L15
	.loc 2 38 9
	li	a0,48
	call	putchar
	j	.L10
.L18:
.LBB3:
	.loc 2 43 26
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 43 13
	sw	a5,-32(s0)
	.loc 2 44 18
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L16
	.loc 2 44 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 44 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L17
.L16:
	.loc 2 44 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 44 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L17:
	.loc 2 44 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 2 44 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-56(a4)
	.loc 2 45 14
	lw	a5,-88(s0)
	lw	a4,-28(s0)
	divuw	a5,a4,a5
	sw	a5,-28(s0)
.L15:
.LBE3:
	.loc 2 42 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L18
	.loc 2 48 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L20
	.loc 2 49 9
	li	a0,45
	call	putchar
	.loc 2 52 11
	j	.L20
.L21:
	.loc 2 53 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L20:
	.loc 2 52 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L21
.L10:
	.loc 2 55 1
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
	.loc 2 57 57
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
	.loc 2 59 9
	sw	zero,-20(s0)
	.loc 2 60 9
	sw	zero,-24(s0)
	.loc 2 62 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L23
	.loc 2 62 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 62 14 discriminator 1
	bge	a5,zero,.L23
	.loc 2 63 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 64 17
	ld	a5,-104(s0)
	.loc 2 64 16
	neg	a5,a5
	.loc 2 64 14
	sd	a5,-104(s0)
.L23:
	.loc 2 67 8
	ld	a5,-104(s0)
	bne	a5,zero,.L26
	.loc 2 68 9
	li	a0,48
	call	putchar
	j	.L22
.L29:
.LBB4:
	.loc 2 73 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 2 73 13
	sw	a5,-28(s0)
	.loc 2 74 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L27
	.loc 2 74 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 74 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L28
.L27:
	.loc 2 74 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 74 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L28:
	.loc 2 74 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 2 74 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 2 75 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L26:
.LBE4:
	.loc 2 72 17
	ld	a5,-104(s0)
	bne	a5,zero,.L29
	.loc 2 78 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L31
	.loc 2 79 9
	li	a0,45
	call	putchar
	.loc 2 82 11
	j	.L31
.L32:
	.loc 2 83 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L31:
	.loc 2 82 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L32
.L22:
	.loc 2 85 1
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
	.loc 2 87 66
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
	.loc 2 89 9
	sw	zero,-20(s0)
	.loc 2 90 9
	sw	zero,-24(s0)
	.loc 2 92 8
	lw	a5,-112(s0)
	sext.w	a5,a5
	beq	a5,zero,.L34
	.loc 2 92 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 92 14 discriminator 1
	bge	a5,zero,.L34
	.loc 2 93 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 94 17
	ld	a5,-104(s0)
	.loc 2 94 16
	neg	a5,a5
	.loc 2 94 14
	sd	a5,-104(s0)
.L34:
	.loc 2 97 8
	ld	a5,-104(s0)
	bne	a5,zero,.L37
	.loc 2 98 9
	li	a0,48
	call	putchar
	j	.L33
.L40:
.LBB5:
	.loc 2 103 26
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	remu	a5,a4,a5
	.loc 2 103 13
	sw	a5,-28(s0)
	.loc 2 104 18
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,9
	bgt	a4,a5,.L38
	.loc 2 104 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 104 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L39
.L38:
	.loc 2 104 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 104 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L39:
	.loc 2 104 14 discriminator 4
	lw	a4,-20(s0)
	addiw	a3,a4,1
	sw	a3,-20(s0)
	.loc 2 104 18 discriminator 4
	addi	a4,a4,-16
	add	a4,a4,s0
	sb	a5,-80(a4)
	.loc 2 105 14
	lw	a5,-108(s0)
	ld	a4,-104(s0)
	divu	a5,a4,a5
	sd	a5,-104(s0)
.L37:
.LBE5:
	.loc 2 102 17
	ld	a5,-104(s0)
	bne	a5,zero,.L40
	.loc 2 108 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L42
	.loc 2 109 9
	li	a0,45
	call	putchar
	.loc 2 112 11
	j	.L42
.L43:
	.loc 2 113 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L42:
	.loc 2 112 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L43
.L33:
	.loc 2 115 1
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
	.loc 2 117 34
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
	.loc 2 119 5
	addi	a5,s0,64
	sd	a5,-128(s0)
	ld	a5,-128(s0)
	addi	a5,a5,-56
	sd	a5,-104(s0)
	.loc 2 122 12
	ld	a5,-120(s0)
	sd	a5,-24(s0)
	.loc 2 122 5
	j	.L45
.L70:
	.loc 2 123 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 2 123 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L46
	.loc 2 124 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 125 13
	j	.L47
.L46:
	.loc 2 128 10
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 2 130 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 2 130 12
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L48
.LBB6:
	.loc 2 131 17
	li	a5,1
	sw	a5,-28(s0)
	.loc 2 132 20
	ld	a5,-24(s0)
	addi	a5,a5,1
	.loc 2 132 17
	lbu	a5,0(a5)
	.loc 2 132 16
	mv	a4,a5
	li	a5,108
	bne	a4,a5,.L49
	.loc 2 133 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 2 134 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L49:
	.loc 2 136 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 2 138 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 2 138 13
	li	a4,100
	beq	a5,a4,.L50
	li	a4,120
	bne	a5,a4,.L51
	.loc 2 140 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L52
.LBB7:
	.loc 2 141 39
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 2 142 25
	li	a2,0
	li	a1,16
	ld	a0,-80(s0)
	call	printlong
.LBE7:
	.loc 2 147 21
	j	.L47
.L52:
.LBB8:
	.loc 2 144 44
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-72(s0)
	.loc 2 145 25
	li	a2,0
	li	a1,16
	ld	a0,-72(s0)
	call	printlonglong
.LBE8:
	.loc 2 147 21
	j	.L47
.L50:
	.loc 2 150 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L55
.LBB9:
	.loc 2 151 30
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-96(s0)
	.loc 2 152 25
	ld	a5,-96(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlong
.LBE9:
	.loc 2 157 21
	j	.L47
.L55:
.LBB10:
	.loc 2 154 35
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-88(s0)
	.loc 2 155 25
	ld	a5,-88(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printlonglong
.LBE10:
	.loc 2 157 21
	j	.L47
.L51:
	.loc 2 160 21
	li	a0,37
	call	putchar
.LBB11:
	.loc 2 161 30
	sw	zero,-32(s0)
	.loc 2 161 21
	j	.L57
.L58:
	.loc 2 161 50 discriminator 3
	li	a0,108
	call	putchar
	.loc 2 161 46 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L57:
	.loc 2 161 36 discriminator 2
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L58
.LBE11:
	.loc 2 162 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 163 21
	j	.L47
.L48:
.LBE6:
	.loc 2 167 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 2 167 13
	li	a4,37
	beq	a5,a4,.L59
	li	a4,37
	blt	a5,a4,.L60
	li	a4,120
	bgt	a5,a4,.L60
	li	a4,99
	blt	a5,a4,.L60
	addiw	a5,a5,-99
	mv	a3,a5
	sext.w	a4,a3
	li	a5,21
	bgtu	a4,a5,.L60
	slli	a5,a3,32
	srli	a5,a5,32
	slli	a4,a5,2
	lla	a5,.L62
	add	a5,a4,a5
	lw	a5,0(a5)
	sext.w	a4,a5
	lla	a5,.L62
	add	a5,a4,a5
	jr	a5
	.section	.rodata
	.align	2
	.align	2
.L62:
	.word	.L66-.L62
	.word	.L65-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L64-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L63-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L60-.L62
	.word	.L61-.L62
	.text
.L65:
.LBB12:
	.loc 2 169 25
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-60(s0)
	.loc 2 170 21
	lw	a5,-60(s0)
	li	a2,1
	li	a1,10
	mv	a0,a5
	call	printint
	.loc 2 171 21
	j	.L47
.L61:
.LBE12:
.LBB13:
	.loc 2 174 34
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 2 175 21
	lw	a5,-44(s0)
	li	a2,0
	li	a1,16
	mv	a0,a5
	call	printint
	.loc 2 176 21
	j	.L47
.L64:
.LBE13:
.LBB14:
	.loc 2 179 57
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	.loc 2 179 35 discriminator 1
	sd	a5,-56(s0)
	.loc 2 180 21
	li	a0,48
	call	putchar
	.loc 2 180 35 discriminator 1
	li	a0,120
	call	putchar
	.loc 2 181 21
	li	a2,0
	li	a1,16
	ld	a0,-56(s0)
	call	printlong
	.loc 2 182 21
	j	.L47
.L63:
.LBE14:
.LBB15:
	.loc 2 185 33
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 2 186 24
	ld	a5,-40(s0)
	bne	a5,zero,.L68
	.loc 2 186 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 2 187 27
	j	.L68
.L69:
	.loc 2 187 42 discriminator 2
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 2 187 32 discriminator 2
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L68:
	.loc 2 187 28 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L69
	.loc 2 188 21
	j	.L47
.L66:
.LBE15:
.LBB16:
	.loc 2 191 36
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	lw	a5,0(a5)
	.loc 2 191 26 discriminator 1
	sb	a5,-61(s0)
	.loc 2 192 21
	lbu	a5,-61(s0)
	mv	a0,a5
	call	putchar
	.loc 2 193 21
	j	.L47
.L59:
.LBE16:
	.loc 2 196 21
	li	a0,37
	call	putchar
	.loc 2 197 21
	j	.L47
.L60:
	.loc 2 200 21
	li	a0,37
	call	putchar
	.loc 2 201 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 202 21
	nop
.L47:
	.loc 2 122 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L45:
	.loc 2 122 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L70
	.loc 2 209 12
	li	a5,0
	.loc 2 210 1
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
	.loc 2 214 26
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
	.loc 2 215 11
	j	.L73
.L74:
	.loc 2 216 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 2 216 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L73:
	.loc 2 215 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L74
	.loc 2 218 1
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
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB8:
	.loc 2 281 1
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
	.loc 2 282 9
	sw	zero,-48(s0)
	sw	zero,-44(s0)
	.loc 2 284 41
	lw	a4,-100(s0)
	li	a5,52
	mul	a5,a4,a5
	.loc 2 284 22
	ld	a4,-112(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 2 286 25
	lw	a5,-104(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 2 286 7
	lw	a4,-100(s0)
	sext.w	a4,a4
	bne	a4,a5,.L76
.LBB17:
	.loc 2 289 14
	sw	zero,-20(s0)
	.loc 2 289 9
	j	.L77
.L78:
	.loc 2 290 22
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a4,a4,a5
	.loc 2 290 20
	lw	a3,-20(s0)
	addi	a5,s0,-72
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 2 289 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L77:
	.loc 2 289 27 discriminator 1
	ld	a5,-32(s0)
	lw	a5,48(a5)
	.loc 2 289 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L78
	.loc 2 292 17
	lw	a4,-20(s0)
	addi	a5,s0,-72
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB18:
	.loc 2 294 9
	ld	a5,-72(s0)
	mv	a0,a5
	addi	a5,s0,-72
	mv	a1,a5
	li	a7,69
 #APP
# 294 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE18:
	.loc 2 295 9
	li	a0,127
	call	exit
.LBE17:
	j	.L79
.L76:
.LBB19:
.LBB20:
	.loc 2 298 9
	addi	a5,s0,-48
	mv	a0,a5
	li	a7,73
 #APP
# 298 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE20:
.LBB21:
	.loc 2 300 19
	li	a7,68
 #APP
# 300 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE21:
	.loc 2 300 13
	sw	a5,-36(s0)
	.loc 2 302 11
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L80
.LBB22:
	.loc 2 303 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 303 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE22:
.LBB23:
	.loc 2 304 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 304 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE23:
.LBB24:
	.loc 2 305 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 305 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
	.loc 2 306 13
	lw	a5,-100(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-104(s0)
	mv	a2,a4
	ld	a1,-112(s0)
	mv	a0,a5
	call	run_command
	j	.L79
.L80:
.LBB25:
.LBB26:
	.loc 2 309 13
	lw	a5,-48(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 309 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
.LBB27:
	.loc 2 310 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 310 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE27:
.LBB28:
	.loc 2 311 13
	lw	a5,-44(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 311 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE28:
	.loc 2 315 18
	sw	zero,-24(s0)
	.loc 2 315 13
	j	.L81
.L82:
	.loc 2 316 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a4,a4,a5
	.loc 2 316 24
	lw	a3,-24(s0)
	addi	a5,s0,-96
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 2 315 43 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L81:
	.loc 2 315 31 discriminator 1
	ld	a5,-32(s0)
	lw	a5,48(a5)
	.loc 2 315 23 discriminator 1
	lw	a4,-24(s0)
	sext.w	a4,a4
	blt	a4,a5,.L82
	.loc 2 318 21
	lw	a4,-24(s0)
	addi	a5,s0,-96
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB29:
	.loc 2 320 13
	ld	a5,-96(s0)
	mv	a0,a5
	addi	a5,s0,-96
	mv	a1,a5
	li	a7,69
 #APP
# 320 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
	.loc 2 321 13
	li	a0,127
	call	exit
.L79:
.LBE25:
.LBE19:
	.loc 2 325 12
	li	a5,1
	.loc 2 326 1
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
.LFE8:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC1:
	.string	"$ "
	.align	3
.LC2:
	.string	"\r\n"
	.align	3
.LC3:
	.string	"ERR MAX COMMAND"
	.align	3
.LC4:
	.string	"ARG NUM ERROR"
	.align	3
.LC5:
	.string	"ERR ARG NUM"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB9:
	.loc 2 328 16
	.cfi_startproc
	addi	sp,sp,-320
	.cfi_def_cfa_offset 320
	sd	ra,312(sp)
	sd	s0,304(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,320
	.cfi_def_cfa 8, 0
.L107:
.LBB30:
.LBB31:
	.loc 2 339 9
	li	a0,1
	lla	a5,.LC1
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 339 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-56(s0)
.LBE31:
	.loc 2 343 11
	sd	zero,-24(s0)
.L88:
.LBB32:
	.loc 2 345 13
	li	a0,0
	addi	a5,s0,-160
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 345 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-64(s0)
.LBE32:
.LBB33:
	.loc 2 346 13
	li	a0,1
	addi	a5,s0,-160
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 346 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-72(s0)
.LBE33:
	.loc 2 348 26
	lbu	a4,-160(s0)
	.loc 2 348 20
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-136(a5)
	.loc 2 349 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 2 351 20
	lbu	a5,-160(s0)
	.loc 2 351 15
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L108
	.loc 2 354 20
	lbu	a5,-160(s0)
	.loc 2 354 15
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L109
	.loc 2 345 13
	j	.L88
.L108:
	.loc 2 352 17
	nop
	j	.L86
.L109:
	.loc 2 355 17
	nop
.L86:
	.loc 2 359 14
	ld	a5,-24(s0)
	addi	a5,a5,-1
	.loc 2 359 18
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-136(a5)
.LBB34:
	.loc 2 360 9
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 360 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-80(s0)
.LBE34:
	.loc 2 362 15
	lbu	a5,-152(s0)
	.loc 2 362 11
	beq	a5,zero,.L110
	.loc 2 368 13
	sw	zero,-28(s0)
	.loc 2 369 13
	sw	zero,-32(s0)
	.loc 2 370 15
	addi	a5,s0,-152
	sd	a5,-40(s0)
	.loc 2 371 11
	sd	zero,-24(s0)
.L102:
	.loc 2 374 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 374 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L91
	.loc 2 375 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 2 376 22
	j	.L92
.L93:
	.loc 2 377 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L92:
	.loc 2 376 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 376 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L93
	.loc 2 376 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 376 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L93
	.loc 2 380 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-304(a5)
	.loc 2 381 48
	lw	a4,-28(s0)
	li	a5,52
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-256(a5)
	.loc 2 383 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 2 384 19
	sd	zero,-24(s0)
	.loc 2 385 25
	sw	zero,-32(s0)
	.loc 2 387 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L102
	.loc 2 388 21
	lla	a0,.LC3
	call	puts
	.loc 2 389 21
	j	.L95
.L91:
	.loc 2 392 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 392 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L98
	.loc 2 392 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 392 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L97
	.loc 2 393 22
	j	.L98
.L99:
	.loc 2 394 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L98:
	.loc 2 393 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 393 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L99
	.loc 2 393 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 393 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L99
	.loc 2 396 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-304(a5)
	.loc 2 397 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 2 398 19
	sd	zero,-24(s0)
	.loc 2 400 19
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L94
	.loc 2 401 21
	lla	a0,.LC4
	call	puts
	.loc 2 402 21
	j	.L95
.L97:
	.loc 2 405 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 405 20
	bne	a5,zero,.L101
	.loc 2 406 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 2 407 48
	lw	a4,-28(s0)
	li	a5,52
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-256(a5)
	.loc 2 408 57
	lw	a5,-32(s0)
	lw	a3,-28(s0)
	slli	a4,a5,4
	li	a5,52
	mul	a5,a3,a5
	add	a5,a4,a5
	addi	a5,a5,-16
	add	a4,a5,s0
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-304(a5)
	.loc 2 409 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 2 410 17
	j	.L95
.L101:
	.loc 2 413 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 2 413 57
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,4
	li	a5,52
	mul	a5,a2,a5
	add	a5,a3,a5
	addi	a5,a5,-16
	add	a3,a5,s0
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-304(a5)
	.loc 2 414 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 2 415 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 2 417 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L102
	.loc 2 418 21
	lla	a0,.LC5
	call	puts
	.loc 2 419 21
	j	.L95
.L94:
	.loc 2 374 15
	j	.L102
.L95:
.LBB35:
	.loc 2 424 21
	li	a7,68
 #APP
# 424 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE35:
	.loc 2 424 15
	sw	a5,-84(s0)
	.loc 2 426 11
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L103
	.loc 2 427 13
	lw	a4,-28(s0)
	addi	a5,s0,-320
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L107
.L103:
.LBB36:
	.loc 2 430 21
	sw	zero,-44(s0)
	.loc 2 430 13
	j	.L105
.L106:
.LBB37:
.LBB38:
	.loc 2 432 17
	addi	a5,s0,-164
	mv	a0,a5
	li	a7,71
 #APP
# 432 "msh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE38:
.LBE37:
	.loc 2 430 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L105:
	.loc 2 430 27 discriminator 1
	lw	a5,-44(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L106
	j	.L107
.L110:
.LBE36:
	.loc 2 363 13
	nop
.LBE30:
	.loc 2 336 14
	j	.L107
	.cfi_endproc
.LFE9:
	.size	main, .-main
.Letext0:
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xc38
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x13
	.4byte	.LASF42
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
	.uleb128 0x14
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
	.uleb128 0xd
	.4byte	.LASF11
	.byte	0x3
	.byte	0x28
	.byte	0x1b
	.4byte	0x80
	.uleb128 0x15
	.byte	0x8
	.4byte	.LASF43
	.uleb128 0xd
	.4byte	.LASF12
	.byte	0x3
	.byte	0x67
	.byte	0x18
	.4byte	0x74
	.uleb128 0xd
	.4byte	.LASF13
	.byte	0x1
	.byte	0x4
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x16
	.4byte	.LASF44
	.byte	0x34
	.byte	0x2
	.2byte	0x112
	.byte	0x8
	.4byte	0xc7
	.uleb128 0xf
	.4byte	.LASF14
	.2byte	0x114
	.byte	0xa
	.4byte	0xc7
	.byte	0
	.uleb128 0xf
	.4byte	.LASF15
	.2byte	0x115
	.byte	0x9
	.4byte	0x3c
	.byte	0x30
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0xdd
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x2
	.uleb128 0x9
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF16
	.uleb128 0x17
	.4byte	0xdd
	.uleb128 0x10
	.4byte	.LASF24
	.2byte	0x148
	.4byte	0x3c
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3cf
	.uleb128 0x1
	.string	"buf"
	.2byte	0x149
	.byte	0xa
	.4byte	0x3cf
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.string	"n"
	.2byte	0x14a
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF17
	.2byte	0x14b
	.byte	0xa
	.4byte	0x3df
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x18
	.string	"pid"
	.byte	0x2
	.2byte	0x14c
	.byte	0xb
	.4byte	0x92
	.uleb128 0x11
	.4byte	.LASF18
	.2byte	0x14d
	.4byte	0x3c
	.uleb128 0x11
	.4byte	.LASF19
	.2byte	0x14e
	.4byte	0x3c
	.uleb128 0x6
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.uleb128 0x3
	.4byte	.LASF20
	.2byte	0x16e
	.byte	0x19
	.4byte	0x3ef
	.uleb128 0x3
	.byte	0x91
	.sleb128 -320
	.uleb128 0x3
	.4byte	.LASF21
	.2byte	0x170
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF15
	.2byte	0x171
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x172
	.byte	0xf
	.4byte	0x3ff
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"pid"
	.2byte	0x1a8
	.byte	0xf
	.4byte	0x92
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x2
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.4byte	0x213
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x153
	.byte	0x9
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x153
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x153
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x153
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x153
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0x270
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x159
	.byte	0xd
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
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
	.string	"_a2"
	.2byte	0x159
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
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
	.4byte	0x2ce
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
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
	.string	"_a2"
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x15a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x32c
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x168
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x168
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x168
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.2byte	0x168
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x168
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0x35e
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x1a8
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x1a8
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x6
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x1
	.string	"k"
	.2byte	0x1ae
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x6
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.uleb128 0x3
	.4byte	.LASF19
	.2byte	0x1af
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x6
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x1b0
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x1b0
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
	.4byte	0xdd
	.4byte	0x3df
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0x3ef
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x9e
	.4byte	0x3ff
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x2
	.byte	0
	.uleb128 0xe
	.4byte	0xdd
	.uleb128 0x10
	.4byte	.LASF25
	.2byte	0x118
	.4byte	0x3c
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x716
	.uleb128 0x19
	.string	"n"
	.byte	0x2
	.2byte	0x118
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x12
	.4byte	.LASF20
	.byte	0x29
	.4byte	0x716
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x12
	.4byte	.LASF21
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x11a
	.byte	0x9
	.4byte	0x71b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF27
	.2byte	0x11c
	.byte	0x16
	.4byte	0x716
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x4dd
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x11f
	.byte	0xf
	.4byte	0x72b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.string	"j"
	.2byte	0x120
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x126
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x126
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x126
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x6
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x1
	.string	"pid"
	.2byte	0x12c
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x52f
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x12a
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x12a
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x561
	.uleb128 0x3
	.4byte	.LASF23
	.2byte	0x12c
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF22
	.2byte	0x12c
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x593
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x12f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x12f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x5d3
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x130
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x130
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x130
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x605
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x131
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x131
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x3
	.4byte	.LASF14
	.2byte	0x139
	.byte	0x13
	.4byte	0x72b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"j"
	.2byte	0x13a
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x665
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x135
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x135
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0x6a5
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x136
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x136
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x136
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0x6d7
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x137
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x137
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x140
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x140
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x140
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x9e
	.uleb128 0xa
	.4byte	0x3c
	.4byte	0x72b
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0xa
	.4byte	0x3ff
	.4byte	0x73b
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x2
	.byte	0
	.uleb128 0xc
	.4byte	.LASF31
	.byte	0xd6
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x764
	.uleb128 0xb
	.string	"s"
	.byte	0xd6
	.byte	0x17
	.4byte	0x764
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xe
	.4byte	0xe4
	.uleb128 0x1a
	.4byte	.LASF28
	.byte	0x2
	.byte	0x75
	.byte	0x5
	.4byte	0x3c
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x940
	.uleb128 0xb
	.string	"fmt"
	.byte	0x75
	.byte	0x18
	.4byte	0x764
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1b
	.uleb128 0x4
	.string	"ap"
	.byte	0x76
	.byte	0xd
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x4
	.string	"p"
	.byte	0x79
	.byte	0x11
	.4byte	0x764
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x88e
	.uleb128 0x5
	.4byte	.LASF29
	.byte	0x83
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x7ff
	.uleb128 0x5
	.4byte	.LASF30
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
	.4byte	0x824
	.uleb128 0x5
	.4byte	.LASF30
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
	.4byte	0x849
	.uleb128 0x5
	.4byte	.LASF30
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
	.4byte	0x86e
	.uleb128 0x5
	.4byte	.LASF30
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
	.uleb128 0x4
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
	.4byte	0x8b3
	.uleb128 0x5
	.4byte	.LASF30
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
	.4byte	0x8d8
	.uleb128 0x5
	.4byte	.LASF30
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
	.4byte	0x8fd
	.uleb128 0x5
	.4byte	.LASF30
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
	.4byte	0x920
	.uleb128 0x4
	.string	"s"
	.byte	0xb9
	.byte	0x21
	.4byte	0x764
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x6
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x4
	.string	"c"
	.byte	0xbf
	.byte	0x1a
	.4byte	0xdd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF32
	.byte	0x57
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x9d6
	.uleb128 0x8
	.4byte	.LASF30
	.byte	0x2
	.byte	0x57
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x8
	.4byte	.LASF33
	.byte	0x2
	.byte	0x57
	.byte	0x31
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x8
	.4byte	.LASF34
	.byte	0x2
	.byte	0x57
	.byte	0x3b
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"buf"
	.byte	0x58
	.byte	0xa
	.4byte	0x9d6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.string	"i"
	.byte	0x59
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x5a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x5
	.4byte	.LASF36
	.byte	0x67
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0x9e6
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x40
	.byte	0
	.uleb128 0xc
	.4byte	.LASF37
	.byte	0x39
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa7c
	.uleb128 0x8
	.4byte	.LASF30
	.byte	0x2
	.byte	0x39
	.byte	0x1e
	.4byte	0x6d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x8
	.4byte	.LASF33
	.byte	0x2
	.byte	0x39
	.byte	0x28
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x8
	.4byte	.LASF34
	.byte	0x2
	.byte	0x39
	.byte	0x32
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"buf"
	.byte	0x3a
	.byte	0xa
	.4byte	0x9d6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.string	"i"
	.byte	0x3b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x3c
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x5
	.4byte	.LASF36
	.byte	0x49
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF38
	.byte	0x18
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb20
	.uleb128 0x8
	.4byte	.LASF30
	.byte	0x2
	.byte	0x18
	.byte	0x13
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x8
	.4byte	.LASF33
	.byte	0x2
	.byte	0x18
	.byte	0x1d
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x8
	.4byte	.LASF34
	.byte	0x2
	.byte	0x18
	.byte	0x27
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x4
	.string	"buf"
	.byte	0x19
	.byte	0xa
	.4byte	0xb20
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.string	"i"
	.byte	0x1a
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x1b
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF39
	.byte	0x1c
	.byte	0x12
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x6
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x5
	.4byte	.LASF36
	.byte	0x2b
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0xdd
	.4byte	0xb30
	.uleb128 0x9
	.4byte	0x6d
	.byte	0x20
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF40
	.byte	0x2
	.byte	0x10
	.byte	0x6
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbbd
	.uleb128 0xb
	.string	"c"
	.byte	0x10
	.byte	0x13
	.4byte	0xdd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x4
	.string	"buf"
	.byte	0x12
	.byte	0xa
	.4byte	0x3df
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x6
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x5
	.4byte	.LASF22
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"_a0"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a1"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x4
	.string	"_a2"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x4
	.string	"_a7"
	.byte	0x15
	.byte	0x5
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF41
	.byte	0x2
	.byte	0x5
	.byte	0x7
	.4byte	0x3ff
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc11
	.uleb128 0xb
	.string	"s"
	.byte	0x5
	.byte	0x15
	.4byte	0x3ff
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xb
	.string	"t"
	.byte	0x5
	.byte	0x24
	.4byte	0x764
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xb
	.string	"n"
	.byte	0x5
	.byte	0x2b
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"os"
	.byte	0x6
	.byte	0x9
	.4byte	0x3ff
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF45
	.byte	0x1
	.byte	0x65
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x8
	.4byte	.LASF19
	.byte	0x1
	.byte	0x65
	.byte	0x1e
	.4byte	0x66
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
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0x5
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
	.uleb128 0x8
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
	.uleb128 0xc
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
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0xb
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
	.sleb128 2
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
	.uleb128 0x11
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
	.uleb128 0x21
	.sleb128 9
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 280
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x13
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
	.uleb128 0x14
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
	.uleb128 0x15
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x16
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
	.uleb128 0x17
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x34
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
	.byte	0
	.byte	0
	.uleb128 0x19
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
	.uleb128 0x1a
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
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1e
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
.LASF21:
	.string	"num_commands"
.LASF17:
	.string	"buf2"
.LASF44:
	.string	"sCommand"
.LASF43:
	.string	"__builtin_va_list"
.LASF23:
	.string	"_num"
.LASF15:
	.string	"num_arg"
.LASF27:
	.string	"command"
.LASF37:
	.string	"printlong"
.LASF13:
	.string	"pid_t"
.LASF11:
	.string	"__gnuc_va_list"
.LASF45:
	.string	"exit"
.LASF5:
	.string	"unsigned char"
.LASF42:
	.string	"GNU C17 14.2.0 -mcmodel=medany -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr -g -O0 -fno-omit-frame-pointer"
.LASF22:
	.string	"_ret"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF40:
	.string	"putchar"
.LASF12:
	.string	"va_list"
.LASF41:
	.string	"strncpy"
.LASF29:
	.string	"lcount"
.LASF24:
	.string	"main"
.LASF25:
	.string	"run_command"
.LASF26:
	.string	"pipes"
.LASF38:
	.string	"printint"
.LASF33:
	.string	"base"
.LASF7:
	.string	"unsigned int"
.LASF36:
	.string	"digit"
.LASF8:
	.string	"long long unsigned int"
.LASF39:
	.string	"uval"
.LASF18:
	.string	"argc"
.LASF4:
	.string	"long long int"
.LASF16:
	.string	"char"
.LASF28:
	.string	"printf"
.LASF3:
	.string	"short int"
.LASF32:
	.string	"printlonglong"
.LASF14:
	.string	"argv"
.LASF30:
	.string	"val_"
.LASF9:
	.string	"long int"
.LASF34:
	.string	"sign"
.LASF19:
	.string	"status"
.LASF31:
	.string	"puts"
.LASF2:
	.string	"signed char"
.LASF20:
	.string	"commands"
.LASF35:
	.string	"negative"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"msh.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
