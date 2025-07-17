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
	.type	write, @function
write:
.LFB0:
	.file 1 "minux.h"
	.loc 1 18 63
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	a0,24(sp)
	sd	a1,16(sp)
	sd	a2,8(sp)
	.loc 1 20 5
	ld	a5,24(sp)
	ld	a4,16(sp)
	ld	a3,8(sp)
 #APP
# 20 "minux.h" 1
	mv   a0, a5    
mv   a1, a4    
mv   a2, a3    
li   a7, 64    
ecall          
mv   a5, a0    

# 0 "" 2
 #NO_APP
	sd	a5,40(sp)
	.loc 1 34 12
	ld	a5,40(sp)
	.loc 1 35 1
	mv	a0,a5
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	write, .-write
	.align	1
	.type	execv, @function
execv:
.LFB4:
	.loc 1 94 60
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	a0,24(sp)
	sd	a1,16(sp)
	mv	a5,a2
	sw	a5,12(sp)
	.loc 1 96 5
	ld	a5,24(sp)
	ld	a4,16(sp)
	lw	a3,12(sp)
 #APP
# 96 "minux.h" 1
	mv   a0, a5    
mv   a1, a4    
mv   a2, a3    
li   a7, 69    
ecall          
mv   a5, a0    

# 0 "" 2
 #NO_APP
	sw	a5,44(sp)
	.loc 1 110 12
	lw	a5,44(sp)
	.loc 1 111 1
	mv	a0,a5
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	execv, .-execv
	.align	1
	.type	exit, @function
exit:
.LFB5:
	.loc 1 113 38
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	a0,8(sp)
	.loc 1 114 5
	ld	a5,8(sp)
 #APP
# 114 "minux.h" 1
	mv   a0, a5   
li   a7, 70   
ecall         

# 0 "" 2
 #NO_APP
.L6:
	.loc 1 123 10
	j	.L6
	.cfi_endproc
.LFE5:
	.size	exit, .-exit
	.align	1
	.type	wait, @function
wait:
.LFB6:
	.loc 1 127 39
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	a0,8(sp)
	.loc 1 129 5
	ld	a5,8(sp)
 #APP
# 129 "minux.h" 1
	mv   a0, a5    
li   a7, 71    
ecall          
mv   a5, a0    

# 0 "" 2
 #NO_APP
	sw	a5,28(sp)
	.loc 1 139 12
	lw	a5,28(sp)
	.loc 1 140 1
	mv	a0,a5
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	wait, .-wait
	.align	1
	.type	dup2, @function
dup2:
.LFB7:
	.loc 1 143 46
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	mv	a5,a0
	mv	a4,a1
	sw	a5,12(sp)
	mv	a5,a4
	sw	a5,8(sp)
	.loc 1 145 5
	lw	a5,12(sp)
	lw	a4,8(sp)
 #APP
# 145 "minux.h" 1
	mv   a0, a5    
mv   a1, a4    
li   a7, 72    
ecall          
mv   a5, a0    

# 0 "" 2
 #NO_APP
	sw	a5,28(sp)
	.loc 1 157 12
	lw	a5,28(sp)
	.loc 1 158 1
	mv	a0,a5
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	dup2, .-dup2
	.align	1
	.type	pipe, @function
pipe:
.LFB8:
	.loc 1 179 34
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	a0,8(sp)
	.loc 1 181 5
	ld	a5,8(sp)
 #APP
# 181 "minux.h" 1
	mv   a0, a5    
li   a7, 73    
ecall          
mv   a5, a0    

# 0 "" 2
 #NO_APP
	sw	a5,28(sp)
	.loc 1 191 12
	lw	a5,28(sp)
	.loc 1 192 1
	mv	a0,a5
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	pipe, .-pipe
	.align	1
	.globl	putchar
	.type	putchar, @function
putchar:
.LFB9:
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
	sb	a5,-24(s0)
	.loc 2 9 12
	sb	zero,-23(s0)
	.loc 2 10 5
	addi	a5,s0,-24
	li	a2,1
	mv	a1,a5
	li	a0,1
	call	write
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
.LFE9:
	.size	putchar, .-putchar
	.align	1
	.globl	printint
	.type	printint, @function
printint:
.LFB10:
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
	beq	a5,zero,.L15
	.loc 2 19 14 discriminator 1
	lw	a5,-84(s0)
	sext.w	a5,a5
	bge	a5,zero,.L15
	.loc 2 20 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 21 16
	lw	a5,-84(s0)
	negw	a5,a5
	sext.w	a5,a5
	.loc 2 21 14
	sw	a5,-28(s0)
	j	.L16
.L15:
	.loc 2 23 14
	lw	a5,-84(s0)
	sw	a5,-28(s0)
.L16:
	.loc 2 26 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L19
	.loc 2 27 9
	li	a0,48
	call	putchar
	j	.L14
.L22:
.LBB2:
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
	bgt	a4,a5,.L20
	.loc 2 33 37 discriminator 1
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 33 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L21
.L20:
	.loc 2 33 51 discriminator 2
	lw	a5,-32(s0)
	andi	a5,a5,0xff
	.loc 2 33 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L21:
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
.L19:
.LBE2:
	.loc 2 31 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L22
	.loc 2 37 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L24
	.loc 2 38 9
	li	a0,45
	call	putchar
	.loc 2 41 11
	j	.L24
.L25:
	.loc 2 42 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-56(a5)
	mv	a0,a5
	call	putchar
.L24:
	.loc 2 41 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L25
.L14:
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
.LFE10:
	.size	printint, .-printint
	.align	1
	.globl	printlong
	.type	printlong, @function
printlong:
.LFB11:
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
	beq	a5,zero,.L27
	.loc 2 51 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 51 14 discriminator 1
	bge	a5,zero,.L27
	.loc 2 52 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 53 17
	ld	a5,-104(s0)
	.loc 2 53 16
	neg	a5,a5
	.loc 2 53 14
	sd	a5,-104(s0)
.L27:
	.loc 2 56 8
	ld	a5,-104(s0)
	bne	a5,zero,.L30
	.loc 2 57 9
	li	a0,48
	call	putchar
	j	.L26
.L33:
.LBB3:
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
	bgt	a4,a5,.L31
	.loc 2 63 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 63 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L32
.L31:
	.loc 2 63 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 63 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L32:
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
.L30:
.LBE3:
	.loc 2 61 17
	ld	a5,-104(s0)
	bne	a5,zero,.L33
	.loc 2 67 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L35
	.loc 2 68 9
	li	a0,45
	call	putchar
	.loc 2 71 11
	j	.L35
.L36:
	.loc 2 72 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L35:
	.loc 2 71 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L36
.L26:
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
.LFE11:
	.size	printlong, .-printlong
	.align	1
	.globl	printlonglong
	.type	printlonglong, @function
printlonglong:
.LFB12:
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
	beq	a5,zero,.L38
	.loc 2 81 17 discriminator 1
	ld	a5,-104(s0)
	.loc 2 81 14 discriminator 1
	bge	a5,zero,.L38
	.loc 2 82 18
	li	a5,1
	sw	a5,-24(s0)
	.loc 2 83 17
	ld	a5,-104(s0)
	.loc 2 83 16
	neg	a5,a5
	.loc 2 83 14
	sd	a5,-104(s0)
.L38:
	.loc 2 86 8
	ld	a5,-104(s0)
	bne	a5,zero,.L41
	.loc 2 87 9
	li	a0,48
	call	putchar
	j	.L37
.L44:
.LBB4:
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
	bgt	a4,a5,.L42
	.loc 2 93 37 discriminator 1
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 93 18 discriminator 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	j	.L43
.L42:
	.loc 2 93 51 discriminator 2
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 2 93 18 discriminator 2
	addiw	a5,a5,87
	andi	a5,a5,0xff
.L43:
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
.L41:
.LBE4:
	.loc 2 91 17
	ld	a5,-104(s0)
	bne	a5,zero,.L44
	.loc 2 97 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L46
	.loc 2 98 9
	li	a0,45
	call	putchar
	.loc 2 101 11
	j	.L46
.L47:
	.loc 2 102 9
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-80(a5)
	mv	a0,a5
	call	putchar
.L46:
	.loc 2 101 16
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L47
.L37:
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
.LFE12:
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
.LFB13:
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
	j	.L49
.L74:
	.loc 2 112 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	.loc 2 112 12
	mv	a4,a5
	li	a5,37
	beq	a4,a5,.L50
	.loc 2 113 13
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 114 13
	j	.L51
.L50:
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
	bne	a4,a5,.L52
.LBB5:
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
	bne	a4,a5,.L53
	.loc 2 122 24
	li	a5,2
	sw	a5,-28(s0)
	.loc 2 123 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L53:
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
	beq	a5,a4,.L54
	li	a4,120
	bne	a5,a4,.L55
	.loc 2 129 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L56
.LBB6:
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
.LBE6:
	.loc 2 136 21
	j	.L51
.L56:
.LBB7:
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
.LBE7:
	.loc 2 136 21
	j	.L51
.L54:
	.loc 2 139 24
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L59
.LBB8:
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
.LBE8:
	.loc 2 146 21
	j	.L51
.L59:
.LBB9:
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
.LBE9:
	.loc 2 146 21
	j	.L51
.L55:
	.loc 2 149 21
	li	a0,37
	call	putchar
.LBB10:
	.loc 2 150 30
	sw	zero,-32(s0)
	.loc 2 150 21
	j	.L61
.L62:
	.loc 2 150 50 discriminator 3
	li	a0,108
	call	putchar
	.loc 2 150 46 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L61:
	.loc 2 150 36 discriminator 2
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L62
.LBE10:
	.loc 2 151 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
	.loc 2 152 21
	j	.L51
.L52:
.LBE5:
	.loc 2 156 21
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	sext.w	a5,a5
	.loc 2 156 13
	li	a4,37
	beq	a5,a4,.L63
	li	a4,37
	blt	a5,a4,.L64
	li	a4,120
	bgt	a5,a4,.L64
	li	a4,99
	blt	a5,a4,.L64
	addiw	a5,a5,-99
	mv	a3,a5
	sext.w	a4,a3
	li	a5,21
	bgtu	a4,a5,.L64
	slli	a5,a3,32
	srli	a5,a5,32
	slli	a4,a5,2
	lla	a5,.L66
	add	a5,a4,a5
	lw	a5,0(a5)
	sext.w	a4,a5
	lla	a5,.L66
	add	a5,a4,a5
	jr	a5
	.section	.rodata
	.align	2
	.align	2
.L66:
	.word	.L70-.L66
	.word	.L69-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L68-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L67-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L64-.L66
	.word	.L65-.L66
	.text
.L69:
.LBB11:
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
	j	.L51
.L65:
.LBE11:
.LBB12:
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
	j	.L51
.L68:
.LBE12:
.LBB13:
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
	j	.L51
.L67:
.LBE13:
.LBB14:
	.loc 2 174 33
	ld	a5,-104(s0)
	addi	a4,a5,8
	sd	a4,-104(s0)
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 2 175 24
	ld	a5,-40(s0)
	bne	a5,zero,.L72
	.loc 2 175 31 discriminator 1
	lla	a5,.LC0
	sd	a5,-40(s0)
	.loc 2 176 27
	j	.L72
.L73:
	.loc 2 176 42 discriminator 2
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 2 176 32 discriminator 2
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L72:
	.loc 2 176 28 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L73
	.loc 2 177 21
	j	.L51
.L70:
.LBE14:
.LBB15:
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
	j	.L51
.L63:
.LBE15:
	.loc 2 185 21
	li	a0,37
	call	putchar
	.loc 2 186 21
	j	.L51
.L64:
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
.L51:
	.loc 2 111 24 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L49:
	.loc 2 111 19 discriminator 1
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L74
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
.LFE13:
	.size	printf, .-printf
	.align	1
	.globl	puts
	.type	puts, @function
puts:
.LFB14:
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
	j	.L77
.L78:
	.loc 2 205 19
	ld	a5,-24(s0)
	addi	a4,a5,1
	sd	a4,-24(s0)
	.loc 2 205 9
	lbu	a5,0(a5)
	mv	a0,a5
	call	putchar
.L77:
	.loc 2 204 12
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L78
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
.LFE14:
	.size	puts, .-puts
	.section	.rodata
	.align	3
.LC1:
	.string	"/hello.elf"
	.align	3
.LC2:
	.string	"END"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB15:
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
	.loc 2 269 5
	addi	a5,s0,-32
	mv	a0,a5
	call	pipe
.LBB16:
	.loc 2 271 12
	li	a7,68
 #APP
# 271 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE16:
	.loc 2 271 10
	sw	a5,-20(s0)
	.loc 2 272 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L80
	.loc 2 274 9
	lw	a5,-28(s0)
	li	a1,1
	mv	a0,a5
	call	dup2
	.loc 2 278 9
	li	a2,0
	li	a1,0
	lla	a0,.LC1
	call	execv
	.loc 2 279 9
	li	a0,6
	call	exit
.L80:
	.loc 2 281 12
	sw	zero,-44(s0)
	.loc 2 282 5
	addi	a5,s0,-44
	mv	a0,a5
	call	wait
.LBB17:
	.loc 2 285 12
	li	a7,68
 #APP
# 285 "child.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE17:
	.loc 2 285 10
	sw	a5,-24(s0)
	.loc 2 286 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L81
	.loc 2 287 1
	li	a0,89
	call	putchar
	.loc 2 288 1
	lw	a5,-24(s0)
	andi	a5,a5,0xff
	addiw	a5,a5,48
	andi	a5,a5,0xff
	mv	a0,a5
	call	putchar
	.loc 2 289 1
	li	a0,89
	call	putchar
	.loc 2 290 1
	li	a0,88
	call	putchar
	.loc 2 291 17
	lw	a5,-32(s0)
	.loc 2 291 9
	andi	a5,a5,0xff
	.loc 2 291 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	mv	a0,a5
	call	putchar
	.loc 2 292 1
	li	a0,88
	call	putchar
	.loc 2 294 9
	lw	a5,-32(s0)
	li	a1,0
	mv	a0,a5
	call	dup2
	.loc 2 298 9
	li	a0,6
	call	exit
.L81:
	.loc 2 301 12
	sw	zero,-44(s0)
	.loc 2 302 5
	addi	a5,s0,-44
	mv	a0,a5
	call	wait
	.loc 2 303 1
	li	a0,89
	call	putchar
	.loc 2 304 1
	lw	a5,-24(s0)
	andi	a5,a5,0xff
	addiw	a5,a5,48
	andi	a5,a5,0xff
	mv	a0,a5
	call	putchar
	.loc 2 305 1
	li	a0,89
	call	putchar
	.loc 2 306 1
	li	a0,88
	call	putchar
	.loc 2 307 17
	lw	a5,-32(s0)
	.loc 2 307 9
	andi	a5,a5,0xff
	.loc 2 307 1
	addiw	a5,a5,48
	andi	a5,a5,0xff
	mv	a0,a5
	call	putchar
	.loc 2 308 1
	li	a0,88
	call	putchar
	.loc 2 313 1
	lla	a0,.LC2
	call	puts
.L82:
	.loc 2 314 10
	j	.L82
	.cfi_endproc
.LFE15:
	.size	main, .-main
.Letext0:
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdarg.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x7ad
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x10
	.4byte	.LASF45
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x4
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x4
	.byte	0x1
	.byte	0x8
	.4byte	.LASF3
	.uleb128 0x4
	.byte	0x2
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x4
	.byte	0x2
	.byte	0x7
	.4byte	.LASF5
	.uleb128 0x11
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x4
	.byte	0x4
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x4
	.byte	0x8
	.byte	0x5
	.4byte	.LASF7
	.uleb128 0x4
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0xe
	.4byte	.LASF9
	.byte	0x3
	.byte	0x28
	.byte	0x1b
	.4byte	0x72
	.uleb128 0x12
	.byte	0x8
	.4byte	.LASF46
	.uleb128 0xe
	.4byte	.LASF10
	.byte	0x3
	.byte	0x67
	.byte	0x18
	.4byte	0x66
	.uleb128 0xe
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
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15e
	.uleb128 0xf
	.string	"fd"
	.2byte	0x108
	.byte	0x9
	.4byte	0x15e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x6
	.4byte	.LASF12
	.2byte	0x109
	.byte	0xb
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.4byte	.LASF13
	.2byte	0x109
	.byte	0x11
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xf
	.string	"buf"
	.2byte	0x10a
	.byte	0xa
	.4byte	0x16e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.4byte	.LASF14
	.2byte	0x10b
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x5
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.4byte	0x12f
	.uleb128 0x6
	.4byte	.LASF15
	.2byte	0x10f
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x6
	.4byte	.LASF16
	.2byte	0x10f
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x7
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x6
	.4byte	.LASF15
	.2byte	0x11d
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x6
	.4byte	.LASF16
	.2byte	0x11d
	.byte	0xc
	.4byte	0x58
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x4a
	.4byte	0x16e
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x1
	.byte	0
	.uleb128 0x9
	.4byte	0x17e
	.4byte	0x17e
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x3
	.byte	0
	.uleb128 0x4
	.byte	0x1
	.byte	0x8
	.4byte	.LASF17
	.uleb128 0x14
	.4byte	0x17e
	.uleb128 0xb
	.4byte	.LASF24
	.byte	0xcb
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b4
	.uleb128 0x8
	.string	"s"
	.byte	0x2
	.byte	0xcb
	.byte	0x17
	.4byte	0x1b4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xc
	.4byte	0x185
	.uleb128 0x15
	.4byte	.LASF19
	.byte	0x2
	.byte	0x6a
	.byte	0x5
	.4byte	0x4a
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x396
	.uleb128 0x8
	.string	"fmt"
	.byte	0x2
	.byte	0x6a
	.byte	0x18
	.4byte	0x1b4
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
	.4byte	0x1b4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x5
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.4byte	0x2e2
	.uleb128 0x3
	.4byte	.LASF20
	.byte	0x78
	.byte	0x11
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x5
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x252
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x82
	.byte	0x27
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0x5
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x277
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x85
	.byte	0x2c
	.4byte	0x396
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.byte	0
	.uleb128 0x5
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x29c
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x8c
	.byte	0x1e
	.4byte	0x58
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.uleb128 0x5
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x2c1
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x8f
	.byte	0x23
	.4byte	0x39d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.byte	0
	.uleb128 0x7
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
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
	.uleb128 0x5
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x307
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x9e
	.byte	0x19
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.uleb128 0x5
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0x32c
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0xa3
	.byte	0x22
	.4byte	0x51
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x5
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x351
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0xa8
	.byte	0x23
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.byte	0
	.uleb128 0x5
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0x375
	.uleb128 0x1
	.string	"s"
	.byte	0x2
	.byte	0xae
	.byte	0x21
	.4byte	0x1b4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x7
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x1
	.string	"c"
	.byte	0x2
	.byte	0xb4
	.byte	0x1a
	.4byte	0x17e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -125
	.byte	0
	.byte	0
	.uleb128 0x4
	.byte	0x8
	.byte	0x7
	.4byte	.LASF22
	.uleb128 0x4
	.byte	0x8
	.byte	0x5
	.4byte	.LASF23
	.uleb128 0xb
	.4byte	.LASF25
	.byte	0x4c
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x43c
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x2
	.byte	0x4c
	.byte	0x27
	.4byte	0x396
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF26
	.byte	0x2
	.byte	0x4c
	.byte	0x31
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x2
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
	.4byte	0x43c
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
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0x4f
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x3
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
	.4byte	0x17e
	.4byte	0x44c
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x40
	.byte	0
	.uleb128 0xb
	.4byte	.LASF30
	.byte	0x2e
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4e4
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x2
	.byte	0x2e
	.byte	0x1e
	.4byte	0x5f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF26
	.byte	0x2
	.byte	0x2e
	.byte	0x28
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x2
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
	.4byte	0x43c
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
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0x31
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x3
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
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x58a
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x2
	.byte	0xd
	.byte	0x13
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x2
	.4byte	.LASF26
	.byte	0x2
	.byte	0xd
	.byte	0x1d
	.4byte	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
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
	.4byte	0x58a
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
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0x10
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF32
	.byte	0x11
	.byte	0x12
	.4byte	0x51
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x7
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x3
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
	.4byte	0x17e
	.4byte	0x59a
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x20
	.byte	0
	.uleb128 0xb
	.4byte	.LASF33
	.byte	0x5
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x5d3
	.uleb128 0x8
	.string	"c"
	.byte	0x2
	.byte	0x5
	.byte	0x13
	.4byte	0x17e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x1
	.string	"buf"
	.byte	0x2
	.byte	0x7
	.byte	0xa
	.4byte	0x5d3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	0x17e
	.4byte	0x5e3
	.uleb128 0xa
	.4byte	0x5f
	.byte	0x1
	.byte	0
	.uleb128 0xd
	.4byte	.LASF34
	.byte	0xb3
	.byte	0x13
	.4byte	0x4a
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x623
	.uleb128 0x8
	.string	"pip"
	.byte	0x1
	.byte	0xb3
	.byte	0x1d
	.4byte	0x623
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ret"
	.byte	0x1
	.byte	0xb4
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0xc
	.4byte	0x4a
	.uleb128 0xd
	.4byte	.LASF35
	.byte	0x8f
	.byte	0x13
	.4byte	0x4a
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x677
	.uleb128 0x2
	.4byte	.LASF36
	.byte	0x1
	.byte	0x8f
	.byte	0x1c
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF37
	.byte	0x1
	.byte	0x8f
	.byte	0x27
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ret"
	.byte	0x1
	.byte	0x90
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0xd
	.4byte	.LASF38
	.byte	0x7f
	.byte	0x15
	.4byte	0x84
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6b7
	.uleb128 0x2
	.4byte	.LASF14
	.byte	0x1
	.byte	0x7f
	.byte	0x1f
	.4byte	0x623
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ret"
	.byte	0x1
	.byte	0x80
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0x17
	.4byte	.LASF47
	.byte	0x1
	.byte	0x71
	.byte	0x14
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6e5
	.uleb128 0x2
	.4byte	.LASF14
	.byte	0x1
	.byte	0x71
	.byte	0x1e
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.byte	0
	.uleb128 0xd
	.4byte	.LASF39
	.byte	0x5e
	.byte	0x13
	.4byte	0x4a
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x743
	.uleb128 0x2
	.4byte	.LASF40
	.byte	0x1
	.byte	0x5e
	.byte	0x1f
	.4byte	0x743
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF41
	.byte	0x1
	.byte	0x5e
	.byte	0x2c
	.4byte	0x748
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF42
	.byte	0x1
	.byte	0x5e
	.byte	0x36
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.string	"ret"
	.byte	0x1
	.byte	0x5f
	.byte	0x9
	.4byte	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0xc
	.4byte	0x17e
	.uleb128 0xc
	.4byte	0x743
	.uleb128 0xd
	.4byte	.LASF43
	.byte	0x12
	.byte	0x14
	.4byte	0x58
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x7aa
	.uleb128 0x8
	.string	"fd"
	.byte	0x1
	.byte	0x12
	.byte	0x1f
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x8
	.string	"buf"
	.byte	0x1
	.byte	0x12
	.byte	0x2f
	.4byte	0x7aa
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF44
	.byte	0x1
	.byte	0x12
	.byte	0x39
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ret"
	.byte	0x1
	.byte	0x13
	.byte	0xa
	.4byte	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.byte	0
	.uleb128 0xc
	.4byte	0x7af
	.uleb128 0x18
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
	.uleb128 0x3
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
	.uleb128 0x4
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
	.uleb128 0x5
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
	.uleb128 0x6
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
	.uleb128 0x7
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x8
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
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
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
	.uleb128 0x26
	.byte	0
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
.LASF43:
	.string	"write"
.LASF16:
	.string	"_ret"
.LASF4:
	.string	"short int"
.LASF33:
	.string	"putchar"
.LASF35:
	.string	"dup2"
.LASF18:
	.string	"main"
.LASF32:
	.string	"uval"
.LASF10:
	.string	"va_list"
.LASF15:
	.string	"_num"
.LASF25:
	.string	"printlonglong"
.LASF45:
	.string	"GNU C17 14.2.0 -mcmodel=medany -momit-leaf-frame-pointer -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafdc_zicsr -g -O0 -fno-omit-frame-pointer"
.LASF38:
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
.LASF47:
	.string	"exit"
.LASF36:
	.string	"oldfd"
.LASF3:
	.string	"unsigned char"
.LASF42:
	.string	"argc"
.LASF2:
	.string	"signed char"
.LASF22:
	.string	"long long unsigned int"
.LASF6:
	.string	"unsigned int"
.LASF24:
	.string	"puts"
.LASF41:
	.string	"argv"
.LASF5:
	.string	"short unsigned int"
.LASF14:
	.string	"status"
.LASF30:
	.string	"printlong"
.LASF17:
	.string	"char"
.LASF37:
	.string	"newfd"
.LASF21:
	.string	"val_"
.LASF8:
	.string	"long unsigned int"
.LASF46:
	.string	"__builtin_va_list"
.LASF27:
	.string	"sign"
.LASF39:
	.string	"execv"
.LASF11:
	.string	"pid_t"
.LASF44:
	.string	"size"
.LASF34:
	.string	"pipe"
.LASF40:
	.string	"path"
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
