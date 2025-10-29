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
	.type	s_strchr, @function
s_strchr:
.LFB0:
	.file 1 "sh.c"
	.loc 1 5 52
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
	.loc 1 6 11
	j	.L2
.L5:
	.loc 1 6 22 discriminator 4
	ld	a5,-24(s0)
	lbu	a4,0(a5)
	.loc 1 6 25 discriminator 4
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 6 21 discriminator 4
	bne	a4,a5,.L3
	.loc 1 6 45 discriminator 1
	ld	a5,-24(s0)
	.loc 1 6 45 is_stmt 0
	j	.L4
.L3:
	.loc 1 6 49 is_stmt 1 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L2:
	.loc 1 6 12 discriminator 3
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L5
	.loc 1 7 12
	li	a5,0
.L4:
	.loc 1 8 1
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
	.size	s_strchr, .-s_strchr
	.local	g_cmdline
	.comm	g_cmdline,64,8
	.align	1
	.globl	xisalpha
	.type	xisalpha, @function
xisalpha:
.LFB1:
	.loc 1 15 1
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
	.loc 1 16 41
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,96
	bleu	a4,a5,.L7
	.loc 1 16 28 discriminator 1
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,122
	bleu	a4,a5,.L8
.L7:
	.loc 1 16 41 discriminator 4
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,64
	bleu	a4,a5,.L9
	.loc 1 16 54 discriminator 5
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,90
	bgtu	a4,a5,.L9
.L8:
	.loc 1 16 41 discriminator 7
	li	a5,1
	.loc 1 16 41 is_stmt 0
	j	.L10
.L9:
	.loc 1 16 41 discriminator 8
	li	a5,0
.L10:
	.loc 1 16 9 is_stmt 1 discriminator 10
	sw	a5,-20(s0)
	.loc 1 17 12
	lw	a5,-20(s0)
	.loc 1 18 1
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
.LFE1:
	.size	xisalpha, .-xisalpha
	.align	1
	.globl	xisblank
	.type	xisblank, @function
xisblank:
.LFB2:
	.loc 1 21 1
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
	.loc 1 22 21
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,32
	beq	a4,a5,.L13
	.loc 1 22 21 is_stmt 0 discriminator 2
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,9
	bne	a4,a5,.L14
.L13:
	.loc 1 22 21 discriminator 3
	li	a5,1
	.loc 1 22 21
	j	.L15
.L14:
	.loc 1 22 21 discriminator 4
	li	a5,0
.L15:
	.loc 1 23 1 is_stmt 1
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
.LFE2:
	.size	xisblank, .-xisblank
	.align	1
	.globl	xisdigit
	.type	xisdigit, @function
xisdigit:
.LFB3:
	.loc 1 26 1
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
	.loc 1 27 22
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,47
	bleu	a4,a5,.L18
	.loc 1 27 22 is_stmt 0 discriminator 1
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,57
	bgtu	a4,a5,.L18
	.loc 1 27 22 discriminator 3
	li	a5,1
	.loc 1 27 22
	j	.L19
.L18:
	.loc 1 27 22 discriminator 4
	li	a5,0
.L19:
	.loc 1 28 1 is_stmt 1
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
.LFE3:
	.size	xisdigit, .-xisdigit
	.align	1
	.globl	xisalnum
	.type	xisalnum, @function
xisalnum:
.LFB4:
	.loc 1 31 1
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
	.loc 1 32 12
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisalpha
	mv	a5,a0
	.loc 1 32 24 discriminator 1
	bne	a5,zero,.L22
	.loc 1 32 27 discriminator 2
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 32 24 discriminator 1
	beq	a5,zero,.L23
.L22:
	.loc 1 32 24 is_stmt 0 discriminator 3
	li	a5,1
	.loc 1 32 24
	j	.L24
.L23:
	.loc 1 32 24 discriminator 4
	li	a5,0
.L24:
	.loc 1 33 1 is_stmt 1
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
.LFE4:
	.size	xisalnum, .-xisalnum
	.align	1
	.type	isdir, @function
isdir:
.LFB5:
	.loc 1 36 36
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
.LBB2:
	.loc 1 37 14
	ld	a5,-40(s0)
	mv	a0,a5
	li	a7,76
 #APP
# 37 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE2:
	.loc 1 37 9
	sw	a5,-20(s0)
	.loc 1 38 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L27
.LBB3:
	.loc 1 38 20 discriminator 1
	lw	a5,-20(s0)
	mv	a0,a5
	li	a7,78
 #APP
# 38 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE3:
	.loc 1 38 41 discriminator 1
	li	a5,1
	.loc 1 38 41 is_stmt 0
	j	.L28
.L27:
	.loc 1 39 12 is_stmt 1
	li	a5,0
.L28:
	.loc 1 40 1
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
.LFE5:
	.size	isdir, .-isdir
	.globl	shell_pgrp
	.bss
	.align	2
	.type	shell_pgrp, @object
	.size	shell_pgrp, 4
shell_pgrp:
	.zero	4
	.section	.rodata
	.align	3
.LC0:
	.string	"MINUX_CMDLINE="
	.align	3
.LC1:
	.string	"REDIRECT WRITE FILE CAN'T BE OPENED"
	.text
	.align	1
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB6:
	.loc 1 61 1
	.cfi_startproc
	addi	sp,sp,-592
	.cfi_def_cfa_offset 592
	sd	ra,584(sp)
	sd	s0,576(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,592
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-576(s0)
	mv	a4,a3
	sw	a5,-564(s0)
	mv	a5,a2
	sw	a5,-568(s0)
	mv	a5,a4
	sw	a5,-580(s0)
	.loc 1 62 9
	sw	zero,-120(s0)
	sw	zero,-116(s0)
	.loc 1 64 41
	lw	a4,-564(s0)
	li	a5,1064
	mul	a5,a4,a5
	.loc 1 64 22
	ld	a4,-576(s0)
	add	a5,a4,a5
	sd	a5,-72(s0)
	.loc 1 66 25
	lw	a5,-568(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 66 7
	lw	a4,-564(s0)
	sext.w	a4,a4
	bne	a4,a5,.L30
.LBB4:
.LBB5:
	.loc 1 67 9
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 67 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-104(s0)
.LBE5:
	.loc 1 70 14
	sw	zero,-20(s0)
	.loc 1 70 9
	j	.L31
.L32:
	.loc 1 71 22
	lw	a5,-20(s0)
	slli	a5,a5,5
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 71 20
	lw	a3,-20(s0)
	addi	a5,s0,-408
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 70 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L31:
	.loc 1 70 27 discriminator 1
	ld	a5,-72(s0)
	lw	a5,1024(a5)
	.loc 1 70 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L32
	.loc 1 73 17
	lw	a4,-20(s0)
	addi	a5,s0,-408
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 76 13
	sw	zero,-24(s0)
	.loc 1 77 21
	lla	a5,.LC0
	sd	a5,-112(s0)
.LBB6:
	.loc 1 78 18
	sw	zero,-28(s0)
	.loc 1 78 9
	j	.L33
.L34:
	.loc 1 78 60 discriminator 3
	lw	a5,-28(s0)
	ld	a4,-112(s0)
	add	a4,a4,a5
	.loc 1 78 48 discriminator 3
	lw	a5,-24(s0)
	addiw	a3,a5,1
	sw	a3,-24(s0)
	.loc 1 78 60 discriminator 3
	lbu	a4,0(a4)
	.loc 1 78 52 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 78 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L33:
	.loc 1 78 29 discriminator 1
	lw	a5,-28(s0)
	ld	a4,-112(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 78 23 discriminator 1
	bne	a5,zero,.L34
.LBE6:
.LBB7:
	.loc 1 79 18
	sw	zero,-32(s0)
	.loc 1 79 9
	j	.L35
.L37:
	.loc 1 79 81 discriminator 4
	lw	a5,-24(s0)
	addiw	a4,a5,1
	sw	a4,-24(s0)
	.loc 1 79 96 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-32(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 79 85 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 79 68 discriminator 4
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L35:
	.loc 1 79 32 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-32(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 79 36 discriminator 1
	beq	a5,zero,.L36
	.loc 1 79 36 is_stmt 0 discriminator 3
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L37
.L36:
.LBE7:
	.loc 1 80 20 is_stmt 1
	lw	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-472(a5)
	.loc 1 81 32
	addi	a5,s0,-488
	sd	a5,-136(s0)
	.loc 1 81 50
	sd	zero,-128(s0)
	.loc 1 83 34
	ld	a5,-72(s0)
	lbu	a5,1028(a5)
	.loc 1 83 11
	beq	a5,zero,.L38
.LBB8:
	.loc 1 85 23
	ld	a5,-72(s0)
	lw	a5,1060(a5)
	.loc 1 85 15
	beq	a5,zero,.L39
.LBB9:
	.loc 1 86 22
	ld	a5,-72(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 86 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE9:
	.loc 1 86 20
	sw	a5,-36(s0)
	j	.L40
.L39:
.LBB10:
	.loc 1 89 22
	ld	a5,-72(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
 #APP
# 89 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE10:
	.loc 1 89 20
	sw	a5,-36(s0)
.L40:
	.loc 1 92 15
	lw	a5,-36(s0)
	sext.w	a5,a5
	bge	a5,zero,.L41
	.loc 1 93 17
	lla	a0,.LC1
	call	puts
	.loc 1 94 17
	li	a0,1
	call	exit
.L41:
.LBB11:
	.loc 1 97 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 97 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE11:
.LBB12:
	.loc 1 98 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 98 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L38:
.LBE12:
.LBE8:
	.loc 1 102 11
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L42
.LBB13:
	.loc 1 103 13
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,199
 #APP
# 103 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE13:
	j	.L43
.L42:
.LBB14:
	.loc 1 106 13
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 106 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L43:
.LBE14:
	.loc 1 108 17
	ld	a5,-408(s0)
	.loc 1 108 12
	beq	a5,zero,.L44
	.loc 1 108 28 discriminator 1
	ld	a5,-408(s0)
	.loc 1 108 31 discriminator 1
	lbu	a5,0(a5)
	.loc 1 108 21 discriminator 1
	beq	a5,zero,.L44
	.loc 1 108 52 discriminator 2
	ld	a5,-408(s0)
	.loc 1 108 39 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 108 35 discriminator 1
	bne	a5,zero,.L44
.LBB15:
	.loc 1 110 21
	li	a5,47
	sb	a5,-552(s0)
	.loc 1 111 17
	sw	zero,-40(s0)
	.loc 1 111 28
	j	.L45
.L47:
	.loc 1 111 86 discriminator 4
	ld	a4,-408(s0)
	.loc 1 111 89 discriminator 4
	lw	a5,-40(s0)
	add	a4,a4,a5
	.loc 1 111 76 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 111 89 discriminator 4
	lbu	a4,0(a4)
	.loc 1 111 80 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-536(a5)
	.loc 1 111 95 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L45:
	.loc 1 111 33 discriminator 1
	ld	a4,-408(s0)
	.loc 1 111 36 discriminator 1
	lw	a5,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 111 40 discriminator 1
	beq	a5,zero,.L46
	.loc 1 111 40 is_stmt 0 discriminator 3
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L47
.L46:
	.loc 1 112 19 is_stmt 1
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 112 23
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-536(a5)
	.loc 1 113 21
	addi	a5,s0,-552
	sd	a5,-408(s0)
	.loc 1 114 15
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L48
.LBB16:
	.loc 1 115 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,199
 #APP
# 115 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE16:
	j	.L44
.L48:
.LBB17:
	.loc 1 118 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 118 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L44:
.LBE17:
.LBE15:
	.loc 1 121 9
	li	a0,126
	call	exit
.LBE4:
	j	.L50
.L30:
.LBB18:
.LBB19:
	.loc 1 124 9
	addi	a5,s0,-120
	mv	a0,a5
	li	a7,73
 #APP
# 124 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE19:
.LBB20:
	.loc 1 126 19
	li	a7,68
 #APP
# 126 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE20:
	.loc 1 126 13
	sw	a5,-76(s0)
	.loc 1 128 11
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L51
.LBB21:
	.loc 1 129 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 129 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE21:
.LBB22:
	.loc 1 130 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 130 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE22:
.LBB23:
	.loc 1 131 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 131 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE23:
	.loc 1 132 13
	lw	a5,-564(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a3,-580(s0)
	lw	a4,-568(s0)
	mv	a2,a4
	ld	a1,-576(s0)
	mv	a0,a5
	call	run_command
	j	.L50
.L51:
.LBB24:
.LBB25:
	.loc 1 135 13
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 135 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE25:
.LBB26:
	.loc 1 136 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 136 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
.LBB27:
	.loc 1 137 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 137 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE27:
.LBB28:
	.loc 1 138 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 138 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE28:
	.loc 1 142 18
	sw	zero,-44(s0)
	.loc 1 142 13
	j	.L52
.L53:
	.loc 1 143 26
	lw	a5,-44(s0)
	slli	a5,a5,5
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 143 24
	lw	a3,-44(s0)
	addi	a5,s0,-408
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 142 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L52:
	.loc 1 142 31 discriminator 1
	ld	a5,-72(s0)
	lw	a5,1024(a5)
	.loc 1 142 23 discriminator 1
	lw	a4,-44(s0)
	sext.w	a4,a4
	blt	a4,a5,.L53
	.loc 1 145 21
	lw	a4,-44(s0)
	addi	a5,s0,-408
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 148 17
	sw	zero,-48(s0)
	.loc 1 149 25
	lla	a5,.LC0
	sd	a5,-96(s0)
.LBB29:
	.loc 1 150 22
	sw	zero,-52(s0)
	.loc 1 150 13
	j	.L54
.L55:
	.loc 1 150 64 discriminator 3
	lw	a5,-52(s0)
	ld	a4,-96(s0)
	add	a4,a4,a5
	.loc 1 150 52 discriminator 3
	lw	a5,-48(s0)
	addiw	a3,a5,1
	sw	a3,-48(s0)
	.loc 1 150 64 discriminator 3
	lbu	a4,0(a4)
	.loc 1 150 56 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 150 39 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L54:
	.loc 1 150 33 discriminator 1
	lw	a5,-52(s0)
	ld	a4,-96(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 150 27 discriminator 1
	bne	a5,zero,.L55
.LBE29:
.LBB30:
	.loc 1 151 22
	sw	zero,-56(s0)
	.loc 1 151 13
	j	.L56
.L58:
	.loc 1 151 85 discriminator 4
	lw	a5,-48(s0)
	addiw	a4,a5,1
	sw	a4,-48(s0)
	.loc 1 151 100 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-56(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 151 89 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 151 72 discriminator 4
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L56:
	.loc 1 151 36 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-56(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 151 40 discriminator 1
	beq	a5,zero,.L57
	.loc 1 151 40 is_stmt 0 discriminator 3
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L58
.L57:
.LBE30:
	.loc 1 152 24 is_stmt 1
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-472(a5)
	.loc 1 153 36
	addi	a5,s0,-488
	sd	a5,-152(s0)
	.loc 1 153 54
	sd	zero,-144(s0)
	.loc 1 155 15
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L59
.LBB31:
	.loc 1 156 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,199
 #APP
# 156 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE31:
	j	.L60
.L59:
.LBB32:
	.loc 1 159 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,100
 #APP
# 159 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L60:
.LBE32:
	.loc 1 161 21
	ld	a5,-408(s0)
	.loc 1 161 16
	beq	a5,zero,.L61
	.loc 1 161 32 discriminator 1
	ld	a5,-408(s0)
	.loc 1 161 35 discriminator 1
	lbu	a5,0(a5)
	.loc 1 161 25 discriminator 1
	beq	a5,zero,.L61
	.loc 1 161 56 discriminator 2
	ld	a5,-408(s0)
	.loc 1 161 43 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 161 39 discriminator 1
	bne	a5,zero,.L61
.LBB33:
	.loc 1 163 25
	li	a5,47
	sb	a5,-552(s0)
	.loc 1 164 21
	sw	zero,-60(s0)
	.loc 1 164 32
	j	.L62
.L64:
	.loc 1 164 90 discriminator 4
	ld	a4,-408(s0)
	.loc 1 164 93 discriminator 4
	lw	a5,-60(s0)
	add	a4,a4,a5
	.loc 1 164 80 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 164 93 discriminator 4
	lbu	a4,0(a4)
	.loc 1 164 84 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-536(a5)
	.loc 1 164 99 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sw	a5,-60(s0)
.L62:
	.loc 1 164 37 discriminator 1
	ld	a4,-408(s0)
	.loc 1 164 40 discriminator 1
	lw	a5,-60(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 164 44 discriminator 1
	beq	a5,zero,.L63
	.loc 1 164 44 is_stmt 0 discriminator 3
	lw	a5,-60(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L64
.L63:
	.loc 1 165 23 is_stmt 1
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 165 27
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-536(a5)
	.loc 1 166 25
	addi	a5,s0,-552
	sd	a5,-408(s0)
	.loc 1 167 19
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L65
.LBB34:
	.loc 1 168 21
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,199
 #APP
# 168 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE34:
	j	.L61
.L65:
.LBB35:
	.loc 1 171 21
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,100
 #APP
# 171 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L61:
.LBE35:
.LBE33:
	.loc 1 174 13
	li	a0,126
	call	exit
.L50:
.LBE24:
.LBE18:
	.loc 1 178 12
	li	a5,1
	.loc 1 179 1
	mv	a0,a5
	ld	ra,584(sp)
	.cfi_restore 1
	ld	s0,576(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 592
	addi	sp,sp,592
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC2:
	.string	"-c"
	.align	3
.LC3:
	.string	" "
	.align	3
.LC4:
	.string	"$ "
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
	.string	"=> %d\r\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB7:
	.loc 1 181 33
	.cfi_startproc
	addi	sp,sp,-880
	.cfi_def_cfa_offset 880
	sd	ra,872(sp)
	sd	s0,864(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,880
	.cfi_def_cfa 8, 0
	li	t0,-16384
	add	sp,sp,t0
	mv	a4,a0
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sd	a1,-864(a5)
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	a4,-852(a5)
	.loc 1 193 9
	sw	zero,-96(s0)
	.loc 1 196 12
	sb	zero,-200(s0)
	.loc 1 198 9
	sw	zero,-48(s0)
	.loc 1 199 9
	sw	zero,-52(s0)
	.loc 1 200 10
	li	a5,1
	sw	a5,-44(s0)
	.loc 1 200 5
	j	.L69
.L72:
	.loc 1 201 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-864(a4)
	add	a5,a4,a5
	.loc 1 201 12
	ld	a5,0(a5)
	lla	a1,.LC2
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 201 11 discriminator 1
	bne	a5,zero,.L70
	.loc 1 202 22
	li	a5,1
	sw	a5,-48(s0)
	j	.L71
.L70:
	.loc 1 204 16
	lw	a5,-48(s0)
	sext.w	a5,a5
	beq	a5,zero,.L71
	.loc 1 205 30
	lw	a5,-44(s0)
	slli	a5,a5,3
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-864(a4)
	add	a5,a4,a5
	.loc 1 205 13
	ld	a4,0(a5)
	addi	a5,s0,-200
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncat
	.loc 1 206 13
	addi	a5,s0,-200
	li	a2,64
	lla	a1,.LC3
	mv	a0,a5
	call	strncat
.L71:
	.loc 1 200 23 discriminator 2
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L69:
	.loc 1 200 15 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-44(s0)
	lw	a5,-852(a5)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L72
.L120:
.LBB36:
	.loc 1 211 15
	sd	zero,-64(s0)
	.loc 1 212 11
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L73
	.loc 1 213 23
	lla	a0,.LC4
	call	readline
	sd	a0,-64(s0)
	.loc 1 215 23
	ld	a5,-64(s0)
	lbu	a5,0(a5)
	.loc 1 215 15
	mv	a4,a5
	li	a5,33
	bne	a4,a5,.L74
	.loc 1 216 24
	li	a5,1
	sw	a5,-52(s0)
	.loc 1 217 38
	ld	a5,-64(s0)
	addi	a4,a5,1
	.loc 1 217 17
	addi	a5,s0,-200
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L73
.L74:
	.loc 1 220 17
	addi	a5,s0,-200
	li	a2,64
	ld	a1,-64(s0)
	mv	a0,a5
	call	strncpy
.L73:
	.loc 1 225 13
	sw	zero,-68(s0)
	.loc 1 225 27
	j	.L75
.L77:
	.loc 1 225 77 discriminator 5
	lw	a5,-68(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a4,-184(a5)
	.loc 1 225 72 discriminator 5
	lla	a3,g_cmdline
	lw	a5,-68(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 225 85 discriminator 5
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L75:
	.loc 1 225 31 discriminator 1
	lw	a5,-68(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-184(a5)
	.loc 1 225 36 discriminator 1
	beq	a5,zero,.L76
	.loc 1 225 36 is_stmt 0 discriminator 3
	lw	a5,-68(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L77
.L76:
	.loc 1 225 105 is_stmt 1 discriminator 6
	lla	a4,g_cmdline
	lw	a5,-68(s0)
	add	a5,a4,a5
	sb	zero,0(a5)
	.loc 1 227 15
	lbu	a5,-200(s0)
	.loc 1 227 11
	beq	a5,zero,.L121
	.loc 1 231 22
	sw	zero,-28(s0)
	.loc 1 232 17
	sw	zero,-32(s0)
	.loc 1 233 11
	addi	a5,s0,-200
	sd	a5,-40(s0)
	.loc 1 234 11
	sd	zero,-24(s0)
	.loc 1 236 49
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,196(a5)
.L111:
	.loc 1 239 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 239 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L80
	.loc 1 241 19
	ld	a5,-24(s0)
	ble	a5,zero,.L81
	.loc 1 242 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-832(a5)
	.loc 1 243 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 244 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L81
	.loc 1 245 25
	lla	a0,.LC5
	call	puts
	.loc 1 246 25
	j	.L82
.L81:
	.loc 1 249 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 250 22
	j	.L83
.L84:
	.loc 1 251 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L83:
	.loc 1 250 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 250 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L84
	.loc 1 250 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 250 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L84
	.loc 1 253 48
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,192(a5)
	.loc 1 255 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 256 19
	sd	zero,-24(s0)
	.loc 1 257 25
	sw	zero,-32(s0)
	.loc 1 259 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,196(a5)
	.loc 1 261 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L111
	.loc 1 262 21
	lla	a0,.LC6
	call	puts
	.loc 1 263 21
	j	.L82
.L80:
	.loc 1 266 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 266 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L86
	.loc 1 266 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 266 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 266 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L86
.LBB37:
	.loc 1 268 19
	ld	a5,-24(s0)
	ble	a5,zero,.L87
	.loc 1 269 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-832(a5)
	.loc 1 270 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 271 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L88
	.loc 1 272 25
	lla	a0,.LC5
	call	puts
	.loc 1 273 25
	j	.L82
.L88:
	.loc 1 275 23
	sd	zero,-24(s0)
.L87:
	.loc 1 277 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 278 22
	j	.L89
.L90:
	.loc 1 279 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L89:
	.loc 1 278 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 278 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L90
	.loc 1 278 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 278 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L90
	.loc 1 282 21
	sw	zero,-72(s0)
	.loc 1 284 22
	j	.L91
.L92:
	.loc 1 285 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 285 59
	lw	a4,-72(s0)
	addiw	a3,a4,1
	sw	a3,-72(s0)
	.loc 1 285 65
	lbu	a3,0(a5)
	.loc 1 285 63
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,196(a5)
	.loc 1 287 23
	lw	a5,-72(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L91
	.loc 1 288 25
	lla	a0,.LC7
	call	puts
	.loc 1 289 25
	li	a0,2
	call	exit
.L91:
	.loc 1 284 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 284 75 discriminator 1
	bne	a5,zero,.L92
	.loc 1 284 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 284 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L92
	.loc 1 284 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 284 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L92
	.loc 1 284 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 284 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L92
	.loc 1 284 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 284 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L92
	.loc 1 292 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-72(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,196(a5)
	.loc 1 293 56
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sw	zero,228(a5)
	.loc 1 295 22
	j	.L93
.L94:
	.loc 1 296 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L93:
	.loc 1 295 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 295 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L94
	.loc 1 295 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 295 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L94
.LBE37:
	.loc 1 266 49
	j	.L85
.L86:
	.loc 1 299 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 299 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L95
	.loc 1 299 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 299 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 299 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L95
.LBB38:
	.loc 1 301 19
	ld	a5,-24(s0)
	ble	a5,zero,.L96
	.loc 1 302 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-832(a5)
	.loc 1 303 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 304 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L97
	.loc 1 305 25
	lla	a0,.LC5
	call	puts
	.loc 1 306 25
	j	.L82
.L97:
	.loc 1 308 23
	sd	zero,-24(s0)
.L96:
	.loc 1 311 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 312 22
	j	.L98
.L99:
	.loc 1 313 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L98:
	.loc 1 312 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 312 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L99
	.loc 1 312 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 312 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L99
	.loc 1 316 21
	sw	zero,-76(s0)
	.loc 1 318 22
	j	.L100
.L101:
	.loc 1 319 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 319 59
	lw	a4,-76(s0)
	addiw	a3,a4,1
	sw	a3,-76(s0)
	.loc 1 319 65
	lbu	a3,0(a5)
	.loc 1 319 63
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,196(a5)
	.loc 1 321 23
	lw	a5,-76(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L100
	.loc 1 322 25
	lla	a0,.LC7
	call	puts
	.loc 1 323 25
	li	a0,2
	call	exit
.L100:
	.loc 1 318 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 318 75 discriminator 1
	bne	a5,zero,.L101
	.loc 1 318 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 318 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L101
	.loc 1 318 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 318 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L101
	.loc 1 318 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 318 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L101
	.loc 1 318 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 318 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L101
	.loc 1 326 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-76(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,196(a5)
	.loc 1 327 56
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	li	a4,1
	sw	a4,228(a5)
	.loc 1 329 22
	j	.L102
.L103:
	.loc 1 330 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L102:
	.loc 1 329 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 329 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L103
	.loc 1 329 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 329 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L103
.LBE38:
	.loc 1 299 49
	j	.L85
.L95:
	.loc 1 333 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 333 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L106
	.loc 1 333 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 333 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L105
	.loc 1 334 22
	j	.L106
.L107:
	.loc 1 335 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L106:
	.loc 1 334 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 334 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L107
	.loc 1 334 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 334 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L107
	.loc 1 337 19
	ld	a5,-24(s0)
	ble	a5,zero,.L122
	.loc 1 338 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-832(a5)
	.loc 1 339 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 340 23
	sd	zero,-24(s0)
	.loc 1 341 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L122
	.loc 1 342 25
	lla	a0,.LC5
	call	puts
	.loc 1 343 25
	j	.L82
.L105:
	.loc 1 348 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 348 20
	bne	a5,zero,.L109
	.loc 1 350 20
	ld	a5,-24(s0)
	ble	a5,zero,.L110
	.loc 1 351 61
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-832(a5)
	.loc 1 352 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 353 23
	sd	zero,-24(s0)
.L110:
	.loc 1 356 48
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,192(a5)
	.loc 1 357 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 358 17
	j	.L82
.L109:
	.loc 1 361 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 361 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a5,-32(s0)
	lw	a1,-28(s0)
	slli	a2,a5,5
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a3,a3,a5
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-832(a5)
	.loc 1 362 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 363 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 365 19
	ld	a4,-24(s0)
	li	a5,31
	ble	a4,a5,.L111
	.loc 1 366 21
	lla	a0,.LC8
	call	puts
	.loc 1 367 21
	j	.L82
.L122:
	.loc 1 337 19
	nop
.L85:
	.loc 1 239 15
	j	.L111
.L82:
	.loc 1 373 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L112
	.loc 1 373 45 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,192(a5)
	.loc 1 373 31 discriminator 1
	ble	a5,zero,.L112
	.loc 1 373 62 discriminator 2
	li	a5,-16384
	addi	a5,a5,-832
	addi	a5,a5,-16
	add	a5,a5,s0
	lla	a1,.LC9
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 373 59 discriminator 1
	bne	a5,zero,.L112
.LBB39:
	.loc 1 374 25
	lla	a5,.LC10
	sd	a5,-88(s0)
	.loc 1 375 28
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,192(a5)
	.loc 1 375 16
	li	a5,1
	ble	a4,a5,.L113
	.loc 1 375 64 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-800(a5)
	.loc 1 375 42 discriminator 1
	beq	a5,zero,.L113
	.loc 1 376 24
	li	a5,-16384
	addi	a5,a5,-832
	addi	a5,a5,-16
	add	a5,a5,s0
	addi	a5,a5,32
	sd	a5,-88(s0)
.L113:
.LBB40:
	.loc 1 378 22
	ld	a5,-88(s0)
	mv	a0,a5
	li	a7,80
 #APP
# 378 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE40:
	.loc 1 378 17
	sw	a5,-100(s0)
	.loc 1 379 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bge	a5,zero,.L123
	.loc 1 380 17
	lla	a0,.LC11
	call	puts
	.loc 1 382 13
	j	.L123
.L112:
.LBE39:
.LBB41:
	.loc 1 385 22
	li	a7,105
 #APP
# 385 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a5,-112(s0)
	ld	a5,-112(s0)
.LBE41:
	.loc 1 385 20
	sext.w	a4,a5
	lla	a5,shell_pgrp
	sw	a4,0(a5)
.LBB42:
	.loc 1 386 9
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 386 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-120(s0)
.LBE42:
.LBB43:
	.loc 1 388 15
	li	a7,68
 #APP
# 388 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE43:
	.loc 1 388 13
	sw	a5,-124(s0)
	.loc 1 390 11
	lw	a5,-124(s0)
	sext.w	a5,a5
	bne	a5,zero,.L115
.LBB44:
	.loc 1 391 13
	li	a0,0
	lla	a5,shell_pgrp
	lw	a5,0(a5)
	mv	a1,a5
	li	a7,103
 #APP
# 391 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-136(s0)
.LBE44:
	.loc 1 392 13
	lw	a3,-52(s0)
	lw	a4,-28(s0)
	li	a5,-16384
	addi	a5,a5,-832
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L116
.L115:
.LBB45:
	.loc 1 395 21
	sw	zero,-92(s0)
	.loc 1 395 13
	j	.L117
.L118:
.LBB46:
.LBB47:
	.loc 1 397 17
	li	a5,-16384
	addi	a5,a5,-836
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a0,a5
	li	a7,71
 #APP
# 397 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE47:
	.loc 1 398 17
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,-836(a5)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.LBE46:
	.loc 1 395 43 discriminator 3
	lw	a5,-92(s0)
	addiw	a5,a5,1
	sw	a5,-92(s0)
.L117:
	.loc 1 395 27 discriminator 1
	lw	a5,-92(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L118
.L116:
.LBE45:
	.loc 1 402 11
	ld	a5,-64(s0)
	beq	a5,zero,.L119
	.loc 1 403 13
	ld	a0,-64(s0)
	call	free
.L119:
	.loc 1 406 11
	lw	a5,-48(s0)
	sext.w	a5,a5
	beq	a5,zero,.L120
	.loc 1 407 13
	li	a0,0
	call	exit
	j	.L120
.L121:
	.loc 1 228 13
	nop
	j	.L120
.L123:
.LBB48:
	.loc 1 382 13
	nop
.LBE48:
.LBE36:
	.loc 1 210 14
	j	.L120
	.cfi_endproc
.LFE7:
	.size	main, .-main
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xf24
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x14
	.4byte	.LASF53
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
	.uleb128 0x15
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
	.uleb128 0x13
	.4byte	.LASF13
	.byte	0x2
	.byte	0xd6
	.byte	0x17
	.4byte	0x6d
	.uleb128 0x7
	.byte	0x10
	.byte	0x4
	.4byte	.LASF11
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF12
	.uleb128 0x16
	.4byte	0x87
	.uleb128 0xe
	.4byte	0x98
	.uleb128 0xe
	.4byte	0x87
	.uleb128 0x13
	.4byte	.LASF14
	.byte	0x3
	.byte	0xa9
	.byte	0xd
	.4byte	0x3c
	.uleb128 0xe
	.4byte	0x8e
	.uleb128 0x9
	.4byte	0x87
	.4byte	0xbe
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0xc
	.byte	0xd
	.4byte	0xae
	.uleb128 0x9
	.byte	0x3
	.8byte	g_cmdline
	.uleb128 0x17
	.4byte	.LASF54
	.2byte	0x428
	.byte	0x1
	.byte	0x32
	.byte	0x8
	.4byte	0x116
	.uleb128 0x18
	.4byte	.LASF15
	.byte	0x1
	.byte	0x34
	.byte	0xa
	.4byte	0x116
	.byte	0
	.uleb128 0xf
	.4byte	.LASF16
	.byte	0x35
	.byte	0x9
	.4byte	0x3c
	.2byte	0x400
	.uleb128 0xf
	.4byte	.LASF17
	.byte	0x36
	.byte	0xa
	.4byte	0x12c
	.2byte	0x404
	.uleb128 0xf
	.4byte	.LASF18
	.byte	0x37
	.byte	0x9
	.4byte	0x3c
	.2byte	0x424
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0x12c
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0x13c
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x19
	.4byte	.LASF55
	.byte	0x1
	.byte	0x3a
	.byte	0x5
	.4byte	0x3c
	.uleb128 0x9
	.byte	0x3
	.8byte	shell_pgrp
	.uleb128 0x10
	.4byte	.LASF24
	.2byte	0x348
	.4byte	0x163
	.uleb128 0x5
	.4byte	0x163
	.byte	0
	.uleb128 0x1a
	.byte	0x8
	.uleb128 0xd
	.4byte	.LASF19
	.2byte	0x317
	.byte	0x5
	.4byte	0x3c
	.4byte	0x17c
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x1b
	.byte	0
	.uleb128 0xd
	.4byte	.LASF20
	.2byte	0x33d
	.byte	0x7
	.4byte	0x98
	.4byte	0x19c
	.uleb128 0x5
	.4byte	0x98
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x5
	.4byte	0x3c
	.byte	0
	.uleb128 0xd
	.4byte	.LASF21
	.2byte	0x359
	.byte	0x7
	.4byte	0x98
	.4byte	0x1b2
	.uleb128 0x5
	.4byte	0xa9
	.byte	0
	.uleb128 0xd
	.4byte	.LASF22
	.2byte	0x32e
	.byte	0x7
	.4byte	0x98
	.4byte	0x1d2
	.uleb128 0x5
	.4byte	0x98
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x5
	.4byte	0x74
	.byte	0
	.uleb128 0xd
	.4byte	.LASF23
	.2byte	0x344
	.byte	0x5
	.4byte	0x3c
	.4byte	0x1ed
	.uleb128 0x5
	.4byte	0xa9
	.uleb128 0x5
	.4byte	0xa9
	.byte	0
	.uleb128 0x10
	.4byte	.LASF25
	.2byte	0x23d
	.4byte	0x1fe
	.uleb128 0x5
	.4byte	0x3c
	.byte	0
	.uleb128 0x10
	.4byte	.LASF26
	.2byte	0x32f
	.4byte	0x20f
	.uleb128 0x5
	.4byte	0xa9
	.byte	0
	.uleb128 0x11
	.4byte	.LASF39
	.byte	0xb5
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x546
	.uleb128 0xc
	.4byte	.LASF27
	.byte	0xb5
	.byte	0xe
	.4byte	0x3c
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17252
	.uleb128 0xc
	.4byte	.LASF15
	.byte	0xb5
	.byte	0x1b
	.4byte	0x93
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17264
	.uleb128 0x1
	.string	"buf"
	.byte	0xb6
	.byte	0xa
	.4byte	0xae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.string	"n"
	.byte	0xb8
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF29
	.byte	0xb9
	.byte	0xa
	.4byte	0x546
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x1
	.string	"pid"
	.byte	0xba
	.byte	0xb
	.4byte	0x9d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x1c
	.4byte	.LASF38
	.byte	0x1
	.byte	0xbb
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF30
	.byte	0xbd
	.byte	0x15
	.4byte	0x556
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17232
	.uleb128 0x3
	.4byte	.LASF31
	.byte	0xbe
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF16
	.byte	0xbf
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.byte	0xc0
	.byte	0xb
	.4byte	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"m"
	.byte	0xc1
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"i"
	.byte	0xc2
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF32
	.byte	0xc6
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0xc7
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x3
	.4byte	.LASF34
	.byte	0xd3
	.byte	0xf
	.4byte	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.string	"gi"
	.byte	0xe1
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0x352
	.uleb128 0x4
	.string	"i"
	.2byte	0x11a
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x376
	.uleb128 0x4
	.string	"i"
	.2byte	0x13c
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.uleb128 0x1d
	.4byte	.LLRL0
	.4byte	0x3cd
	.uleb128 0xa
	.4byte	.LASF35
	.2byte	0x176
	.byte	0x19
	.4byte	0xa9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.string	"rc"
	.2byte	0x17a
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x6
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x17a
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x17a
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.4byte	0x401
	.uleb128 0xa
	.4byte	.LASF36
	.2byte	0x181
	.byte	0x16
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x181
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x451
	.uleb128 0xa
	.4byte	.LASF36
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a1"
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x182
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.4byte	0x483
	.uleb128 0xa
	.4byte	.LASF37
	.2byte	0x184
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0xa
	.4byte	.LASF36
	.2byte	0x184
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0x4d3
	.uleb128 0xa
	.4byte	.LASF36
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a1"
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x187
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.uleb128 0x4
	.string	"k"
	.2byte	0x18b
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x6
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.uleb128 0xa
	.4byte	.LASF38
	.2byte	0x18c
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17236
	.uleb128 0x6
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.uleb128 0x4
	.string	"_a0"
	.2byte	0x18d
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x4
	.string	"_a7"
	.2byte	0x18d
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0x556
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x9
	.4byte	0xd3
	.4byte	0x566
	.uleb128 0x8
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0x11
	.4byte	.LASF40
	.byte	0x3c
	.4byte	0x3c
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd4e
	.uleb128 0xb
	.string	"n"
	.byte	0x3c
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0xc
	.4byte	.LASF30
	.byte	0x3c
	.byte	0x29
	.4byte	0xd4e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0xc
	.4byte	.LASF31
	.byte	0x3c
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0xc
	.4byte	.LASF33
	.byte	0x3c
	.byte	0x49
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -580
	.uleb128 0x3
	.4byte	.LASF41
	.byte	0x3e
	.byte	0x9
	.4byte	0xd53
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.4byte	.LASF42
	.byte	0x40
	.byte	0x16
	.4byte	0xd4e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0x94a
	.uleb128 0x3
	.4byte	.LASF15
	.byte	0x44
	.byte	0xf
	.4byte	0xd63
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x1
	.string	"j"
	.byte	0x45
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.4byte	.LASF43
	.byte	0x4b
	.byte	0xe
	.4byte	0xd73
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"ei"
	.byte	0x4c
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF44
	.byte	0x4d
	.byte	0x15
	.4byte	0xa9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.4byte	.LASF45
	.byte	0x51
	.byte	0xf
	.4byte	0xd83
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x2
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.4byte	0x694
	.uleb128 0x3
	.4byte	.LASF36
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x43
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x6b6
	.uleb128 0x1
	.string	"k"
	.byte	0x4e
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x6d8
	.uleb128 0x1
	.string	"k"
	.byte	0x4f
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x7f8
	.uleb128 0x1
	.string	"fd"
	.byte	0x54
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x744
	.uleb128 0x1
	.string	"_a0"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x56
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x78e
	.uleb128 0x1
	.string	"_a0"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x59
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x7cb
	.uleb128 0x1
	.string	"_a0"
	.byte	0x61
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x61
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x61
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"_a0"
	.byte	0x62
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x62
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x842
	.uleb128 0x1
	.string	"_a0"
	.byte	0x67
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x67
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x67
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x67
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0x88c
	.uleb128 0x1
	.string	"_a0"
	.byte	0x6a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x6a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x6a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x6a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x3
	.4byte	.LASF46
	.byte	0x6d
	.byte	0x12
	.4byte	0xae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"i"
	.byte	0x6f
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.4byte	0x902
	.uleb128 0x1
	.string	"_a0"
	.byte	0x73
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x73
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x73
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x73
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x1
	.string	"_a0"
	.byte	0x76
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x76
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x76
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x76
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x6
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"pid"
	.byte	0x7e
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x99a
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7c
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7c
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x9ca
	.uleb128 0x3
	.4byte	.LASF37
	.byte	0x7e
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF36
	.byte	0x7e
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x9fa
	.uleb128 0x1
	.string	"_a0"
	.byte	0x81
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x81
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0xa37
	.uleb128 0x1
	.string	"_a0"
	.byte	0x82
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x82
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x82
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0xa67
	.uleb128 0x1
	.string	"_a0"
	.byte	0x83
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x83
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x3
	.4byte	.LASF15
	.byte	0x8c
	.byte	0x13
	.4byte	0xd63
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x1
	.string	"j"
	.byte	0x8d
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF43
	.byte	0x93
	.byte	0x12
	.4byte	0xd73
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"ei"
	.byte	0x94
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF44
	.byte	0x95
	.byte	0x19
	.4byte	0xa9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.4byte	.LASF45
	.byte	0x99
	.byte	0x13
	.4byte	0xd83
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0xb19
	.uleb128 0x3
	.4byte	.LASF36
	.byte	0x87
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.byte	0x87
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x87
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x87
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0xb49
	.uleb128 0x1
	.string	"_a0"
	.byte	0x88
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x88
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0xb86
	.uleb128 0x1
	.string	"_a0"
	.byte	0x89
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x89
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x89
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0xbb6
	.uleb128 0x1
	.string	"_a0"
	.byte	0x8a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x8a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0xbd8
	.uleb128 0x1
	.string	"k"
	.byte	0x96
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0xbfa
	.uleb128 0x1
	.string	"k"
	.byte	0x97
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0x2
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.4byte	0xc44
	.uleb128 0x1
	.string	"_a0"
	.byte	0x9c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x9c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x9c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x9c
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0xc8e
	.uleb128 0x1
	.string	"_a0"
	.byte	0x9f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x9f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x9f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x9f
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x3
	.4byte	.LASF46
	.byte	0xa2
	.byte	0x16
	.4byte	0xae
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"i"
	.byte	0xa4
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0xd04
	.uleb128 0x1
	.string	"_a0"
	.byte	0xa8
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xa8
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xa8
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xa8
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x1
	.string	"_a0"
	.byte	0xab
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xab
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xab
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xab
	.byte	0x15
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0xd3
	.uleb128 0x9
	.4byte	0x3c
	.4byte	0xd63
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x9
	.4byte	0x98
	.4byte	0xd73
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0x9
	.4byte	0x87
	.4byte	0xd83
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x4f
	.byte	0
	.uleb128 0x9
	.4byte	0x98
	.4byte	0xd93
	.uleb128 0x8
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF56
	.byte	0x1
	.byte	0x24
	.byte	0xc
	.4byte	0x3c
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe2d
	.uleb128 0xc
	.4byte	.LASF47
	.byte	0x24
	.byte	0x1e
	.4byte	0xa9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"fd"
	.byte	0x25
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.4byte	0xe00
	.uleb128 0x1
	.string	"_a0"
	.byte	0x25
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x25
	.byte	0xe
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x1
	.string	"_a0"
	.byte	0x26
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x26
	.byte	0x14
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x11
	.4byte	.LASF48
	.byte	0x1e
	.4byte	0x3c
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe5a
	.uleb128 0xb
	.string	"c"
	.byte	0x1e
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x12
	.4byte	.LASF49
	.byte	0x19
	.4byte	0x3c
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe87
	.uleb128 0xb
	.string	"c"
	.byte	0x19
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x12
	.4byte	.LASF50
	.byte	0x14
	.4byte	0x3c
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xeb4
	.uleb128 0xb
	.string	"c"
	.byte	0x14
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x12
	.4byte	.LASF51
	.byte	0xe
	.4byte	0x3c
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xeef
	.uleb128 0xb
	.string	"c"
	.byte	0xe
	.byte	0x13
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x3
	.4byte	.LASF52
	.byte	0x10
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF57
	.byte	0x1
	.byte	0x5
	.byte	0x14
	.4byte	0xa9
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xb
	.string	"s"
	.byte	0x5
	.byte	0x29
	.4byte	0xa9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xb
	.string	"ch"
	.byte	0x5
	.byte	0x30
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
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
	.uleb128 0x5
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
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
	.uleb128 0xb
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
	.uleb128 0xc
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
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
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
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0x5
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
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
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
	.uleb128 0x13
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
	.uleb128 0x14
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
	.uleb128 0x15
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
	.uleb128 0x16
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x34
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x34
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
	.uleb128 0x1d
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
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
	.uleb128 .LBB39-.Ltext0
	.uleb128 .LBE39-.Ltext0
	.byte	0x4
	.uleb128 .LBB48-.Ltext0
	.uleb128 .LBE48-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF17:
	.string	"redirect_file"
.LASF23:
	.string	"strcmp"
.LASF13:
	.string	"size_t"
.LASF33:
	.string	"debug_"
.LASF29:
	.string	"buf2"
.LASF20:
	.string	"strncpy"
.LASF47:
	.string	"path"
.LASF19:
	.string	"printf"
.LASF22:
	.string	"strncat"
.LASF8:
	.string	"long long unsigned int"
.LASF18:
	.string	"redirect_append"
.LASF43:
	.string	"envbuf"
.LASF24:
	.string	"free"
.LASF4:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF28:
	.string	"g_cmdline"
.LASF21:
	.string	"readline"
.LASF9:
	.string	"long int"
.LASF40:
	.string	"run_command"
.LASF45:
	.string	"envp"
.LASF39:
	.string	"main"
.LASF7:
	.string	"unsigned int"
.LASF42:
	.string	"command"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF53:
	.string	"GNU C17 14.2.0 -mno-small-data-limit=0 -mcmodel=medany -mcmodel=medany -mno-small-data-limit=0 -mabi=lp64 -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -O0 -ffreestanding -fno-stack-protector -fno-builtin -fno-pie"
.LASF35:
	.string	"target"
.LASF51:
	.string	"xisalpha"
.LASF44:
	.string	"prefix"
.LASF49:
	.string	"xisdigit"
.LASF26:
	.string	"puts"
.LASF31:
	.string	"num_commands"
.LASF11:
	.string	"long double"
.LASF41:
	.string	"pipes"
.LASF48:
	.string	"xisalnum"
.LASF30:
	.string	"commands"
.LASF50:
	.string	"xisblank"
.LASF55:
	.string	"shell_pgrp"
.LASF5:
	.string	"unsigned char"
.LASF54:
	.string	"sCommand"
.LASF3:
	.string	"short int"
.LASF32:
	.string	"run_once"
.LASF46:
	.string	"abuf"
.LASF25:
	.string	"exit"
.LASF16:
	.string	"num_arg"
.LASF37:
	.string	"_num"
.LASF56:
	.string	"isdir"
.LASF12:
	.string	"char"
.LASF34:
	.string	"cmdline"
.LASF57:
	.string	"s_strchr"
.LASF38:
	.string	"status"
.LASF36:
	.string	"_ret"
.LASF27:
	.string	"argc"
.LASF14:
	.string	"pid_t"
.LASF15:
	.string	"argv"
.LASF52:
	.string	"result"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/Users/ab25cq/minux9"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
