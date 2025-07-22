	.file	"child.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0_zmmul1p0_zaamo1p0_zalrsc1p0_zca1p0_zcd1p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.file 0 "/root/minux9" "child.c"
	.align	1
	.type	exit, @function
exit:
.LFB0:
	.file 1 "minux.h"
	.loc 1 111 38
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
	.loc 1 112 5
	ld	a5,-24(s0)
#APP
# 112 "minux.h" 1
	mv   a0, a5   
li   a7, 70   
ecall         

# 0 "" 2
#NO_APP
.L2:
	.loc 1 121 10
	j	.L2
	.cfi_endproc
.LFE0:
	.size	exit, .-exit
	.align	1
	.globl	putchar
	.type	putchar, @function
putchar:
.LFB1:
	.file 2 "child.c"
	.loc 2 6 1
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
	.loc 2 8 12
	lbu	a5,-33(s0)
	sb	a5,-32(s0)
	.loc 2 9 12
	sb	zero,-31(s0)
.LBB2:
	.loc 2 10 5
	li	a0,1
	addi	a5,s0,-32
	mv	a1,a5
	li	a2,1
	li	a7,64
#APP
# 10 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-24(s0)
.LBE2:
	.loc 2 11 1
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
	beq	a5,zero,.L5
	.loc 2 19 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L5
	.loc 2 20 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 21 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 2 21 14
	sw	a5,-28(s0)
	j	.L6
.L5:
	.loc 2 23 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L6:
	.loc 2 26 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L9
	.loc 2 27 9
	li	a0,48
	call	putchar
	j	.L4
.L12:
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
	bgt	a4,a5,.L10
	.loc 2 33 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 33 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L11
.L10:
	.loc 2 33 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 33 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L11:
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
.L9:
.LBE3:
	.loc 2 31 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L12
	.loc 2 37 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L14
	.loc 2 38 9
	li	a0,45
	call	putchar
	.loc 2 41 11
	j	.L14
.L15:
	.loc 2 42 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L14:
	.loc 2 41 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L15
.L4:
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
.LFE2:
	.size	printint, .-printint
	.align	1
	.globl	printlong
	.type	printlong, @function
printlong:
.LFB3:
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
	beq	a5,zero,.L17
	.loc 2 51 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 51 14 discriminator 1
	bge	a5,zero,.L17
	.loc 2 52 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 53 17
	ld	a5,-104(s0)
	.loc 2 53 16
	neg	a5,a5
	.loc 2 53 14
	sd	a5,-104(s0)
.L17:
	.loc 2 56 8
	ld	a5,-104(s0)
	bne	a5,zero,.L20
	.loc 2 57 9
	li	a0,48
	call	putchar
	j	.L16
.L23:
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
	bgt	a4,a5,.L21
	.loc 2 63 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 63 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L22
.L21:
	.loc 2 63 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 63 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L22:
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
.L20:
.LBE4:
	.loc 2 61 17
	ld	a5,-104(s0)
	bne	a5,zero,.L23
	.loc 2 67 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L25
	.loc 2 68 9
	li	a0,45
	call	putchar
	.loc 2 71 11
	j	.L25
.L26:
	.loc 2 72 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L25:
	.loc 2 71 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L26
.L16:
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
.LFE3:
	.size	printlong, .-printlong
	.align	1
	.globl	printlonglong
	.type	printlonglong, @function
printlonglong:
.LFB4:
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
	beq	a5,zero,.L28
	.loc 2 81 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 81 14 discriminator 1
	bge	a5,zero,.L28
	.loc 2 82 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 83 17
	ld	a5,-104(s0)
	.loc 2 83 16
	neg	a5,a5
	.loc 2 83 14
	sd	a5,-104(s0)
.L28:
	.loc 2 86 8
	ld	a5,-104(s0)
	bne	a5,zero,.L31
	.loc 2 87 9
	li	a0,48
	call	putchar
	j	.L27
.L34:
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
	bgt	a4,a5,.L32
	.loc 2 93 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 93 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L33
.L32:
	.loc 2 93 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 93 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L33:
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
.L31:
.LBE5:
	.loc 2 91 17
	ld	a5,-104(s0)
	bne	a5,zero,.L34
	.loc 2 97 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L36
	.loc 2 98 9
	li	a0,45
	call	putchar
	.loc 2 101 11
	j	.L36
.L37:
	.loc 2 102 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L36:
	.loc 2 101 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L37
.L27:
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
	j	.L39
.L63:
	.loc 2 112 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 2 112 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L40
	.loc 2 113 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 114 13
	j	.L41
.L40:
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
	bne	a4,a5,.L42
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
	bne	a4,a5,.L43
	.loc 2 122 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 2 123 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L43:
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
	beq	a5,a4,.L44
	li	a4,120
	bne	a5,a4,.L45
	.loc 2 129 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L46
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
	j	.L41
.L46:
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
	j	.L41
.L44:
	.loc 2 139 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L49
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
	j	.L41
.L49:
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
	j	.L41
.L45:
	.loc 2 149 21
	li	a0,37
	call	putchar
.LBB11:
	.loc 2 150 30
	sw	zero,-32(s0)
	.loc 2 150 21
	j	.L51
.L52:
	.loc 2 150 50 discriminator 4
	li	a0,108
	call	putchar
	.loc 2 150 46 discriminator 4
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L51:
	.loc 2 150 36 discriminator 3
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L52
.LBE11:
	.loc 2 151 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 152 21
	j	.L41
.L42:
.LBE6:
	.loc 2 156 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 2 156 13
	li	a4,120
	beq	a5,a4,.L53
	li	a4,120
	bgt	a5,a4,.L54
	li	a4,115
	beq	a5,a4,.L55
	li	a4,115
	bgt	a5,a4,.L54
	li	a4,112
	beq	a5,a4,.L56
	li	a4,112
	bgt	a5,a4,.L54
	li	a4,100
	beq	a5,a4,.L57
	li	a4,100
	bgt	a5,a4,.L54
	li	a4,37
	beq	a5,a4,.L58
	li	a4,99
	beq	a5,a4,.L59
	j	.L54
.L57:
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
	j	.L41
.L53:
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
	j	.L41
.L56:
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
	j	.L41
.L55:
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
	bne	a5,zero,.L61
	.loc 2 175 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 2 176 27
	j	.L61
.L62:
	.loc 2 176 42 discriminator 3
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 2 176 32 discriminator 3
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L61:
	.loc 2 176 28 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L62
	.loc 2 177 21
	j	.L41
.L59:
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
	j	.L41
.L58:
.LBE16:
	.loc 2 185 21
	li	a0,37
	call	putchar
	.loc 2 186 21
	j	.L41
.L54:
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
.L41:
	.loc 2 111 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L39:
	.loc 2 111 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L63
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
.LFE5:
	.size	printf, .-printf
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB6:
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
	j	.L66
.L67:
	.loc 2 205 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 2 205 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L66:
	.loc 2 204 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L67
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
.LFE6:
	.size	puts, .-puts
	.section	.rodata
	.align	3
.LC1:
	.string	"/hello.elf"
	.align	3
.LC2:
	.string	"/hello2.elf"
	.align	3
.LC3:
	.string	"END"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB7:
	.loc 2 263 16
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
.LBB17:
	.loc 2 269 5
	addi	a5,s0,-32
	mv	a0,a5
	li	a7,73
#APP
# 269 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE17:
.LBB18:
	.loc 2 271 12
	li	a7,68
#APP
# 271 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
.LBE18:
	.loc 2 271 10
	sw	a5,-20(s0)
	.loc 2 272 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L69
.LBB19:
	.loc 2 274 9
	lw	a5,-28(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
#APP
# 274 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE19:
.LBB20:
	.loc 2 278 9
	lla	a5,.LC1
	mv	a0,a5
	li	a1,0
	li	a7,69
#APP
# 278 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE20:
	.loc 2 279 9
	li	a0,6
	call	exit
.L69:
	.loc 2 281 12
	sw	zero,-44(s0)
.LBB21:
	.loc 2 282 5
	addi	a5,s0,-44
	mv	a0,a5
	li	a7,71
#APP
# 282 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE21:
.LBB22:
	.loc 2 284 12
	li	a7,68
#APP
# 284 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
.LBE22:
	.loc 2 284 10
	sw	a5,-24(s0)
	.loc 2 285 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L70
.LBB23:
	.loc 2 286 9
	lw	a5,-32(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
#APP
# 286 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE23:
.LBB24:
	.loc 2 292 9
	lla	a5,.LC2
	mv	a0,a5
	li	a1,0
	li	a7,69
#APP
# 292 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE24:
	.loc 2 293 9
	li	a0,6
	call	exit
.L70:
	.loc 2 296 12
	sw	zero,-44(s0)
.LBB25:
	.loc 2 297 5
	addi	a5,s0,-44
	mv	a0,a5
	li	a7,71
#APP
# 297 "child.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE25:
	.loc 2 302 1
	lla	a0,.LC3
	call	puts
.L71:
	.loc 2 303 10
	j	.L71
	.cfi_endproc
.LFE7:
	.size	main, .-main
.Letext0:
	.file 3 "/usr/lib/gcc/riscv64-linux-gnu/15/include/stdarg.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x7ed
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0xe
	.4byte	.LASF34
	.byte	0x1d
	.byte	0x3
	.4byte	0x31647
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x5
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x5
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0xf
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x5
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x5
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x5
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x5
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x5
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x5
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x5
	.byte	0x8
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0xc
	.4byte	.LASF11
	.byte	0x3
	.byte	0x28
	.byte	0x1b
	.4byte	0x85
	.uleb128 0x10
	.byte	0x8
	.4byte	.LASF35
	.uleb128 0xc
	.4byte	.LASF12
	.byte	0x3
	.byte	0x67
	.byte	0x18
	.4byte	0x79
	.uleb128 0xc
	.4byte	.LASF13
	.byte	0x1
	.byte	0x4
	.byte	0xd
	.4byte	0x41
	.uleb128 0x11
	.4byte	.LASF20
	.byte	0x2
	.2byte	0x107
	.byte	0x5
	.4byte	0x41
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x307
	.uleb128 0x1
	.string	"fd"
	.2byte	0x108
	.byte	0x9
	.4byte	0x307
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.4byte	.LASF14
	.2byte	0x109
	.byte	0xb
	.4byte	0x97
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.4byte	.LASF15
	.2byte	0x109
	.byte	0x11
	.4byte	0x97
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"buf"
	.2byte	0x10a
	.byte	0xa
	.4byte	0x317
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.4byte	.LASF16
	.2byte	0x10b
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x142
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x10d
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x10d
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x174
	.uleb128 0x7
	.4byte	.LASF17
	.2byte	0x10f
	.byte	0xc
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x7
	.4byte	.LASF18
	.2byte	0x10f
	.byte	0xc
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x1b4
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x112
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x112
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x112
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x1f4
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x116
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x116
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x116
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x226
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x11a
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x11a
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x258
	.uleb128 0x7
	.4byte	.LASF17
	.2byte	0x11c
	.byte	0xc
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x7
	.4byte	.LASF18
	.2byte	0x11c
	.byte	0xc
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x298
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x11e
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x11e
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x11e
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x2d8
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x124
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.2byte	0x124
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x124
	.byte	0x9
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x8
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x1
	.string	"_a0"
	.2byte	0x129
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.2byte	0x129
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x41
	.4byte	0x317
	.uleb128 0xa
	.4byte	0x72
	.byte	0x1
	.byte	0
	.uleb128 0x9
	.4byte	0x327
	.4byte	0x327
	.uleb128 0xa
	.4byte	0x72
	.byte	0x3
	.byte	0
	.uleb128 0x5
	.byte	0x1
	.byte	0x8
	.4byte	.LASF19
	.uleb128 0x12
	.4byte	0x327
	.uleb128 0xb
	.4byte	.LASF24
	.byte	0xcb
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x35c
	.uleb128 0xd
	.string	"s"
	.byte	0xcb
	.byte	0x17
	.4byte	0x35c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.byte	0x8
	.4byte	0x32e
	.uleb128 0x14
	.4byte	.LASF21
	.byte	0x2
	.byte	0x6a
	.byte	0x5
	.4byte	0x41
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x539
	.uleb128 0xd
	.string	"fmt"
	.byte	0x6a
	.byte	0x18
	.4byte	0x35c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x15
	.uleb128 0x3
	.string	"ap"
	.byte	0x6b
	.byte	0xd
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x3
	.string	"p"
	.byte	0x6e
	.byte	0x11
	.4byte	0x35c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x487
	.uleb128 0x4
	.4byte	.LASF22
	.byte	0x78
	.byte	0x11
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x3f8
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0x82
	.byte	0x27
	.4byte	0x72
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x41d
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0x85
	.byte	0x2c
	.4byte	0x64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.byte	0
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x442
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0x8c
	.byte	0x1e
	.4byte	0x6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x467
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0x8f
	.byte	0x23
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.byte	0
	.uleb128 0x8
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x3
	.string	"i"
	.byte	0x96
	.byte	0x1e
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0x4ac
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0x9e
	.byte	0x19
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x4d1
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0xa3
	.byte	0x22
	.4byte	0x5d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0x4f6
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0xa8
	.byte	0x23
	.4byte	0x72
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.byte	0
	.uleb128 0x2
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0x519
	.uleb128 0x3
	.string	"s"
	.byte	0xae
	.byte	0x21
	.4byte	0x35c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x8
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x3
	.string	"c"
	.byte	0xb4
	.byte	0x1a
	.4byte	0x327
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	.LASF25
	.byte	0x4c
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x5cf
	.uleb128 0x6
	.4byte	.LASF23
	.byte	0x2
	.byte	0x4c
	.byte	0x27
	.4byte	0x64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x6
	.4byte	.LASF26
	.byte	0x2
	.byte	0x4c
	.byte	0x31
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x6
	.4byte	.LASF27
	.byte	0x2
	.byte	0x4c
	.byte	0x3b
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.string	"buf"
	.byte	0x4d
	.byte	0xa
	.4byte	0x5cf
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.string	"i"
	.byte	0x4e
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF28
	.byte	0x4f
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x8
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x4
	.4byte	.LASF29
	.byte	0x5c
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x327
	.4byte	0x5df
	.uleb128 0xa
	.4byte	0x72
	.byte	0x40
	.byte	0
	.uleb128 0xb
	.4byte	.LASF30
	.byte	0x2e
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x675
	.uleb128 0x6
	.4byte	.LASF23
	.byte	0x2
	.byte	0x2e
	.byte	0x1e
	.4byte	0x72
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x6
	.4byte	.LASF26
	.byte	0x2
	.byte	0x2e
	.byte	0x28
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x6
	.4byte	.LASF27
	.byte	0x2
	.byte	0x2e
	.byte	0x32
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.string	"buf"
	.byte	0x2f
	.byte	0xa
	.4byte	0x5cf
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.string	"i"
	.byte	0x30
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF28
	.byte	0x31
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x8
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x4
	.4byte	.LASF29
	.byte	0x3e
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	.LASF31
	.byte	0xd
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x719
	.uleb128 0x6
	.4byte	.LASF23
	.byte	0x2
	.byte	0xd
	.byte	0x13
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x6
	.4byte	.LASF26
	.byte	0x2
	.byte	0xd
	.byte	0x1d
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.4byte	.LASF27
	.byte	0x2
	.byte	0xd
	.byte	0x27
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x3
	.string	"buf"
	.byte	0xe
	.byte	0xa
	.4byte	0x719
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.string	"i"
	.byte	0xf
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF28
	.byte	0x10
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF32
	.byte	0x11
	.byte	0x12
	.4byte	0x5d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x8
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x4
	.4byte	.LASF29
	.byte	0x20
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x327
	.4byte	0x729
	.uleb128 0xa
	.4byte	0x72
	.byte	0x20
	.byte	0
	.uleb128 0x16
	.4byte	.LASF33
	.byte	0x2
	.byte	0x5
	.byte	0x6
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x7b6
	.uleb128 0xd
	.string	"c"
	.byte	0x5
	.byte	0x13
	.4byte	0x327
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x3
	.string	"buf"
	.byte	0x7
	.byte	0xa
	.4byte	0x7b6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x8
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x4
	.4byte	.LASF18
	.byte	0xa
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"_a0"
	.byte	0xa
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a1"
	.byte	0xa
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x3
	.string	"_a2"
	.byte	0xa
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x3
	.string	"_a7"
	.byte	0xa
	.byte	0x5
	.4byte	0x6b
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x327
	.4byte	0x7c6
	.uleb128 0xa
	.4byte	0x72
	.byte	0x1
	.byte	0
	.uleb128 0x17
	.4byte	.LASF36
	.byte	0x1
	.byte	0x6f
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF16
	.byte	0x1
	.byte	0x6f
	.byte	0x1e
	.4byte	0x6b
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
	.uleb128 0x4
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
	.uleb128 0x5
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
	.uleb128 0x6
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
	.uleb128 0xd
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
	.uleb128 0xe
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x90
	.uleb128 0xb
	.uleb128 0x91
	.uleb128 0x6
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
	.uleb128 0xf
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
	.uleb128 0x10
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
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
	.uleb128 0x12
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
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
	.uleb128 0x15
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x16
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
	.uleb128 0x17
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
.LASF16:
	.string	"status"
.LASF35:
	.string	"__builtin_va_list"
.LASF32:
	.string	"uval"
.LASF30:
	.string	"printlong"
.LASF13:
	.string	"pid_t"
.LASF11:
	.string	"__gnuc_va_list"
.LASF36:
	.string	"exit"
.LASF5:
	.string	"unsigned char"
.LASF34:
	.string	"GNU C23 15.1.1 20250425 (Red Hat Cross 15.1.1-1) -mcmodel=medany -mabi=lp64d -misa-spec=20191213 -mtls-dialect=trad -march=rv64imafdc_zicsr_zifencei_zmmul_zaamo_zalrsc_zca_zcd -g -O0 -fno-omit-frame-pointer"
.LASF17:
	.string	"_num"
.LASF18:
	.string	"_ret"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF31:
	.string	"printint"
.LASF33:
	.string	"putchar"
.LASF12:
	.string	"va_list"
.LASF22:
	.string	"lcount"
.LASF20:
	.string	"main"
.LASF26:
	.string	"base"
.LASF7:
	.string	"unsigned int"
.LASF29:
	.string	"digit"
.LASF8:
	.string	"long long unsigned int"
.LASF4:
	.string	"long long int"
.LASF19:
	.string	"char"
.LASF21:
	.string	"printf"
.LASF14:
	.string	"pid1"
.LASF15:
	.string	"pid2"
.LASF3:
	.string	"short int"
.LASF25:
	.string	"printlonglong"
.LASF23:
	.string	"val_"
.LASF9:
	.string	"long int"
.LASF27:
	.string	"sign"
.LASF24:
	.string	"puts"
.LASF2:
	.string	"signed char"
.LASF28:
	.string	"negative"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/root/minux9"
.LASF0:
	.string	"child.c"
	.ident	"GCC: (GNU) 15.1.1 20250425 (Red Hat Cross 15.1.1-1)"
	.section	.note.GNU-stack,"",@progbits
