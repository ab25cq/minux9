	.file	"sh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0_zmmul1p0_zaamo1p0_zalrsc1p0_zca1p0_zcd1p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.file 0 "/home/ab25cq/minux9" "sh.c"
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
	.loc 1 32 27 discriminator 3
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 32 24 discriminator 4
	beq	a5,zero,.L23
.L22:
	.loc 1 32 24 is_stmt 0 discriminator 5
	li	a5,1
	.loc 1 32 24
	j	.L24
.L23:
	.loc 1 32 24 discriminator 6
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
	.loc 1 59 1
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
	sw	a5,-564(s0)
	mv	a5,a2
	sw	a5,-568(s0)
	mv	a5,a3
	sw	a5,-580(s0)
	mv	a5,a4
	sw	a5,-584(s0)
	.loc 1 60 9
	sw	zero,-120(s0)
	sw	zero,-116(s0)
	.loc 1 62 41
	lw	a4,-564(s0)
	li	a5,1064
	mul	a5,a4,a5
	.loc 1 62 22
	ld	a4,-576(s0)
	add	a5,a4,a5
	sd	a5,-72(s0)
	.loc 1 64 25
	lw	a5,-568(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 64 7
	lw	a4,-564(s0)
	sext.w	a4,a4
	bne	a4,a5,.L30
.LBB4:
.LBB5:
	.loc 1 65 9
	li	a0,0
	lw	a5,-584(s0)
	mv	a1,a5
	li	a7,103
#APP
# 65 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-104(s0)
.LBE5:
	.loc 1 68 14
	sw	zero,-20(s0)
	.loc 1 68 9
	j	.L31
.L32:
	.loc 1 69 22
	lw	a5,-20(s0)
	slli	a5,a5,5
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 69 20
	lw	a3,-20(s0)
	addi	a5,s0,-408
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 68 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L31:
	.loc 1 68 27 discriminator 1
	ld	a5,-72(s0)
	lw	a5,1024(a5)
	.loc 1 68 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L32
	.loc 1 71 17
	lw	a4,-20(s0)
	addi	a5,s0,-408
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 74 13
	sw	zero,-24(s0)
	.loc 1 75 21
	lla	a5,.LC0
	sd	a5,-112(s0)
.LBB6:
	.loc 1 76 18
	sw	zero,-28(s0)
	.loc 1 76 9
	j	.L33
.L34:
	.loc 1 76 60 discriminator 3
	lw	a5,-28(s0)
	ld	a4,-112(s0)
	add	a4,a4,a5
	.loc 1 76 48 discriminator 3
	lw	a5,-24(s0)
	addiw	a3,a5,1
	sw	a3,-24(s0)
	.loc 1 76 60 discriminator 3
	lbu	a4,0(a4)
	.loc 1 76 52 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 76 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L33:
	.loc 1 76 29 discriminator 1
	lw	a5,-28(s0)
	ld	a4,-112(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 76 23 discriminator 1
	bne	a5,zero,.L34
.LBE6:
.LBB7:
	.loc 1 77 18
	sw	zero,-32(s0)
	.loc 1 77 9
	j	.L35
.L37:
	.loc 1 77 81 discriminator 4
	lw	a5,-24(s0)
	addiw	a4,a5,1
	sw	a4,-24(s0)
	.loc 1 77 96 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-32(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 77 85 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 77 68 discriminator 4
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L35:
	.loc 1 77 32 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-32(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 77 36 discriminator 1
	beq	a5,zero,.L36
	.loc 1 77 36 is_stmt 0 discriminator 3
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L37
.L36:
.LBE7:
	.loc 1 78 20 is_stmt 1
	lw	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-472(a5)
	.loc 1 79 32
	addi	a5,s0,-488
	sd	a5,-136(s0)
	.loc 1 79 50
	sd	zero,-128(s0)
	.loc 1 81 34
	ld	a5,-72(s0)
	lbu	a5,1028(a5)
	.loc 1 81 11
	beq	a5,zero,.L38
.LBB8:
	.loc 1 83 23
	ld	a5,-72(s0)
	lw	a5,1060(a5)
	.loc 1 83 15
	beq	a5,zero,.L39
.LBB9:
	.loc 1 84 22
	ld	a5,-72(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
#APP
# 84 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE9:
	.loc 1 84 20
	sw	a5,-36(s0)
	j	.L40
.L39:
.LBB10:
	.loc 1 87 22
	ld	a5,-72(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
#APP
# 87 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE10:
	.loc 1 87 20
	sw	a5,-36(s0)
.L40:
	.loc 1 90 15
	lw	a5,-36(s0)
	sext.w	a5,a5
	bge	a5,zero,.L41
	.loc 1 91 17
	lla	a0,.LC1
	call	puts
	.loc 1 92 17
	li	a0,1
	call	exit
.L41:
.LBB11:
	.loc 1 95 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
#APP
# 95 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE11:
.LBB12:
	.loc 1 96 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a7,67
#APP
# 96 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L38:
.LBE12:
.LBE8:
	.loc 1 100 11
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L42
.LBB13:
	.loc 1 101 13
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,199
#APP
# 101 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE13:
	j	.L43
.L42:
.LBB14:
	.loc 1 104 13
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
#APP
# 104 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L43:
.LBE14:
	.loc 1 106 17
	ld	a5,-408(s0)
	.loc 1 106 12
	beq	a5,zero,.L44
	.loc 1 106 28 discriminator 1
	ld	a5,-408(s0)
	.loc 1 106 31 discriminator 1
	lbu	a5,0(a5)
	.loc 1 106 21 discriminator 1
	beq	a5,zero,.L44
	.loc 1 106 52 discriminator 2
	ld	a5,-408(s0)
	.loc 1 106 39 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 106 35 discriminator 3
	bne	a5,zero,.L44
.LBB15:
	.loc 1 108 21
	li	a5,47
	sb	a5,-552(s0)
	.loc 1 109 17
	sw	zero,-40(s0)
	.loc 1 109 28
	j	.L45
.L47:
	.loc 1 109 86 discriminator 4
	ld	a4,-408(s0)
	.loc 1 109 89 discriminator 4
	lw	a5,-40(s0)
	add	a4,a4,a5
	.loc 1 109 76 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 109 89 discriminator 4
	lbu	a4,0(a4)
	.loc 1 109 80 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-536(a5)
	.loc 1 109 95 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L45:
	.loc 1 109 33 discriminator 1
	ld	a4,-408(s0)
	.loc 1 109 36 discriminator 1
	lw	a5,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 109 40 discriminator 1
	beq	a5,zero,.L46
	.loc 1 109 40 is_stmt 0 discriminator 3
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L47
.L46:
	.loc 1 110 19 is_stmt 1
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 110 23
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-536(a5)
	.loc 1 111 21
	addi	a5,s0,-552
	sd	a5,-408(s0)
	.loc 1 112 15
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L48
.LBB16:
	.loc 1 113 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,199
#APP
# 113 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE16:
	j	.L44
.L48:
.LBB17:
	.loc 1 116 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
#APP
# 116 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L44:
.LBE17:
.LBE15:
	.loc 1 119 9
	li	a0,126
	call	exit
.LBE4:
	j	.L50
.L30:
.LBB18:
.LBB19:
	.loc 1 122 9
	addi	a5,s0,-120
	mv	a0,a5
	li	a7,73
#APP
# 122 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE19:
.LBB20:
	.loc 1 124 19
	li	a7,68
#APP
# 124 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
.LBE20:
	.loc 1 124 13
	sw	a5,-76(s0)
	.loc 1 126 11
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L51
.LBB21:
	.loc 1 127 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a7,67
#APP
# 127 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE21:
.LBB22:
	.loc 1 128 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
#APP
# 128 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE22:
.LBB23:
	.loc 1 129 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a7,67
#APP
# 129 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE23:
	.loc 1 130 13
	lw	a5,-564(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-584(s0)
	lw	a3,-580(s0)
	lw	a2,-568(s0)
	ld	a1,-576(s0)
	mv	a0,a5
	call	run_command
	j	.L50
.L51:
.LBB24:
.LBB25:
	.loc 1 133 13
	li	a0,0
	lw	a5,-584(s0)
	mv	a1,a5
	li	a7,103
#APP
# 133 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-88(s0)
.LBE25:
.LBB26:
	.loc 1 134 13
	lw	a5,-120(s0)
	mv	a0,a5
	li	a7,67
#APP
# 134 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE26:
.LBB27:
	.loc 1 135 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
#APP
# 135 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE27:
.LBB28:
	.loc 1 136 13
	lw	a5,-116(s0)
	mv	a0,a5
	li	a7,67
#APP
# 136 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE28:
	.loc 1 140 18
	sw	zero,-44(s0)
	.loc 1 140 13
	j	.L52
.L53:
	.loc 1 141 26
	lw	a5,-44(s0)
	slli	a5,a5,5
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 141 24
	lw	a3,-44(s0)
	addi	a5,s0,-408
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 140 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L52:
	.loc 1 140 31 discriminator 1
	ld	a5,-72(s0)
	lw	a5,1024(a5)
	.loc 1 140 23 discriminator 1
	lw	a4,-44(s0)
	sext.w	a4,a4
	blt	a4,a5,.L53
	.loc 1 143 21
	lw	a4,-44(s0)
	addi	a5,s0,-408
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 146 17
	sw	zero,-48(s0)
	.loc 1 147 25
	lla	a5,.LC0
	sd	a5,-96(s0)
.LBB29:
	.loc 1 148 22
	sw	zero,-52(s0)
	.loc 1 148 13
	j	.L54
.L55:
	.loc 1 148 64 discriminator 3
	lw	a5,-52(s0)
	ld	a4,-96(s0)
	add	a4,a4,a5
	.loc 1 148 52 discriminator 3
	lw	a5,-48(s0)
	addiw	a3,a5,1
	sw	a3,-48(s0)
	.loc 1 148 64 discriminator 3
	lbu	a4,0(a4)
	.loc 1 148 56 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 148 39 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L54:
	.loc 1 148 33 discriminator 1
	lw	a5,-52(s0)
	ld	a4,-96(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 148 27 discriminator 1
	bne	a5,zero,.L55
.LBE29:
.LBB30:
	.loc 1 149 22
	sw	zero,-56(s0)
	.loc 1 149 13
	j	.L56
.L58:
	.loc 1 149 85 discriminator 4
	lw	a5,-48(s0)
	addiw	a4,a5,1
	sw	a4,-48(s0)
	.loc 1 149 100 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-56(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 149 89 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-472(a5)
	.loc 1 149 72 discriminator 4
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L56:
	.loc 1 149 36 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-56(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 149 40 discriminator 1
	beq	a5,zero,.L57
	.loc 1 149 40 is_stmt 0 discriminator 3
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L58
.L57:
.LBE30:
	.loc 1 150 24 is_stmt 1
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-472(a5)
	.loc 1 151 36
	addi	a5,s0,-488
	sd	a5,-152(s0)
	.loc 1 151 54
	sd	zero,-144(s0)
	.loc 1 153 15
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L59
.LBB31:
	.loc 1 154 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,199
#APP
# 154 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE31:
	j	.L60
.L59:
.LBB32:
	.loc 1 157 17
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,100
#APP
# 157 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L60:
.LBE32:
	.loc 1 159 21
	ld	a5,-408(s0)
	.loc 1 159 16
	beq	a5,zero,.L61
	.loc 1 159 32 discriminator 1
	ld	a5,-408(s0)
	.loc 1 159 35 discriminator 1
	lbu	a5,0(a5)
	.loc 1 159 25 discriminator 1
	beq	a5,zero,.L61
	.loc 1 159 56 discriminator 2
	ld	a5,-408(s0)
	.loc 1 159 43 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 159 39 discriminator 3
	bne	a5,zero,.L61
.LBB33:
	.loc 1 161 25
	li	a5,47
	sb	a5,-552(s0)
	.loc 1 162 21
	sw	zero,-60(s0)
	.loc 1 162 32
	j	.L62
.L64:
	.loc 1 162 90 discriminator 4
	ld	a4,-408(s0)
	.loc 1 162 93 discriminator 4
	lw	a5,-60(s0)
	add	a4,a4,a5
	.loc 1 162 80 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 162 93 discriminator 4
	lbu	a4,0(a4)
	.loc 1 162 84 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-536(a5)
	.loc 1 162 99 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sw	a5,-60(s0)
.L62:
	.loc 1 162 37 discriminator 1
	ld	a4,-408(s0)
	.loc 1 162 40 discriminator 1
	lw	a5,-60(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 162 44 discriminator 1
	beq	a5,zero,.L63
	.loc 1 162 44 is_stmt 0 discriminator 3
	lw	a5,-60(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L64
.L63:
	.loc 1 163 23 is_stmt 1
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 163 27
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-536(a5)
	.loc 1 164 25
	addi	a5,s0,-552
	sd	a5,-408(s0)
	.loc 1 165 19
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L65
.LBB34:
	.loc 1 166 21
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,199
#APP
# 166 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE34:
	j	.L61
.L65:
.LBB35:
	.loc 1 169 21
	ld	a5,-408(s0)
	mv	a0,a5
	addi	a5,s0,-408
	mv	a1,a5
	addi	a5,s0,-152
	mv	a2,a5
	li	a7,100
#APP
# 169 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L61:
.LBE35:
.LBE33:
	.loc 1 172 13
	li	a0,126
	call	exit
.L50:
.LBE24:
.LBE18:
	.loc 1 176 12
	li	a5,1
	.loc 1 177 1
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
	.string	"r"
	.align	3
.LC5:
	.string	"sh: can't open %s\r\n"
	.align	3
.LC6:
	.string	"$ "
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
	.align	3
.LC14:
	.string	"=> %d\r\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB7:
	.loc 1 179 33
	.cfi_startproc
	addi	sp,sp,-976
	.cfi_def_cfa_offset 976
	sd	ra,968(sp)
	sd	s0,960(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,976
	.cfi_def_cfa 8, 0
	li	t0,-16384
	add	sp,sp,t0
	mv	a4,a0
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sd	a1,-960(a5)
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	a4,-948(a5)
	.loc 1 192 9
	sw	zero,-128(s0)
	.loc 1 195 12
	sb	zero,-240(s0)
	.loc 1 197 9
	sw	zero,-48(s0)
	.loc 1 198 17
	sd	zero,-56(s0)
	.loc 1 199 11
	sd	zero,-64(s0)
	.loc 1 200 9
	sw	zero,-68(s0)
	.loc 1 201 10
	li	a5,1
	sw	a5,-44(s0)
	.loc 1 201 5
	j	.L69
.L73:
	.loc 1 202 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-960(a4)
	add	a5,a4,a5
	.loc 1 202 12
	ld	a5,0(a5)
	lla	a1,.LC2
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 202 11 discriminator 1
	bne	a5,zero,.L70
	.loc 1 203 22
	li	a5,1
	sw	a5,-48(s0)
	j	.L71
.L70:
	.loc 1 205 16
	lw	a5,-48(s0)
	sext.w	a5,a5
	beq	a5,zero,.L72
	.loc 1 206 30
	lw	a5,-44(s0)
	slli	a5,a5,3
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-960(a4)
	add	a5,a4,a5
	.loc 1 206 13
	ld	a4,0(a5)
	addi	a5,s0,-240
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncat
	.loc 1 207 13
	addi	a5,s0,-240
	li	a2,64
	lla	a1,.LC3
	mv	a0,a5
	call	strncat
	j	.L71
.L72:
	.loc 1 209 16
	ld	a5,-56(s0)
	bne	a5,zero,.L71
	.loc 1 210 31
	lw	a5,-44(s0)
	slli	a5,a5,3
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-960(a4)
	add	a5,a4,a5
	.loc 1 210 25
	ld	a5,0(a5)
	sd	a5,-56(s0)
.L71:
	.loc 1 201 23 discriminator 2
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L69:
	.loc 1 201 15 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-44(s0)
	lw	a5,-948(a5)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L73
	.loc 1 214 7
	ld	a5,-56(s0)
	beq	a5,zero,.L133
	.loc 1 215 21
	lla	a1,.LC4
	ld	a0,-56(s0)
	call	fopen
	sd	a0,-64(s0)
	.loc 1 216 11
	ld	a5,-64(s0)
	bne	a5,zero,.L133
	.loc 1 217 13
	ld	a1,-56(s0)
	lla	a0,.LC5
	call	printf
	.loc 1 218 13
	li	a0,1
	call	exit
.L133:
.LBB36:
	.loc 1 223 15
	sd	zero,-80(s0)
	.loc 1 224 16
	sw	zero,-68(s0)
	.loc 1 226 11
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L75
	.loc 1 226 26 discriminator 1
	ld	a5,-64(s0)
	bne	a5,zero,.L75
	.loc 1 227 23
	lla	a0,.LC6
	call	readline
	sd	a0,-80(s0)
	.loc 1 228 15
	ld	a5,-80(s0)
	bne	a5,zero,.L76
	.loc 1 229 17
	li	a0,0
	call	exit
.L76:
	.loc 1 232 23
	ld	a5,-80(s0)
	lbu	a5,0(a5)
	.loc 1 232 15
	mv	a4,a5
	li	a5,33
	bne	a4,a5,.L77
	.loc 1 233 24
	li	a5,1
	sw	a5,-68(s0)
	.loc 1 234 38
	ld	a5,-80(s0)
	addi	a4,a5,1
	.loc 1 234 17
	addi	a5,s0,-240
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 232 15
	j	.L79
.L77:
	.loc 1 237 17
	addi	a5,s0,-240
	li	a2,64
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 232 15
	j	.L79
.L75:
	.loc 1 240 16
	ld	a5,-64(s0)
	beq	a5,zero,.L79
.LBB37:
	.loc 1 241 16
	addi	a5,s0,-304
	ld	a2,-64(s0)
	li	a1,64
	mv	a0,a5
	call	fgets
	mv	a5,a0
	.loc 1 241 15 discriminator 1
	bne	a5,zero,.L80
	.loc 1 242 17
	ld	a0,-64(s0)
	call	fclose
	.loc 1 243 17
	li	a0,0
	call	exit
.L80:
	.loc 1 246 13
	addi	a4,s0,-304
	addi	a5,s0,-240
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 248 23
	addi	a5,s0,-240
	mv	a0,a5
	call	strlen
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 249 18
	j	.L81
.L83:
	.loc 1 250 28
	lw	a5,-84(s0)
	addiw	a5,a5,-1
	sw	a5,-84(s0)
	lw	a5,-84(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-224(a5)
.L81:
	.loc 1 249 27
	lw	a5,-84(s0)
	sext.w	a5,a5
	ble	a5,zero,.L82
	.loc 1 249 38 discriminator 1
	lw	a5,-84(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 249 34 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-224(a5)
	.loc 1 249 27 discriminator 1
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L83
	.loc 1 249 60 discriminator 2
	lw	a5,-84(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 249 56 discriminator 2
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-224(a5)
	.loc 1 249 50 discriminator 2
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L83
.L82:
	.loc 1 253 19
	addi	a5,s0,-240
	sd	a5,-96(s0)
	.loc 1 254 18
	j	.L84
.L85:
	.loc 1 255 21
	ld	a5,-96(s0)
	addi	a5,a5,1
	sd	a5,-96(s0)
.L84:
	.loc 1 254 19
	ld	a5,-96(s0)
	lbu	a5,0(a5)
	.loc 1 254 32
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L85
	.loc 1 254 35 discriminator 1
	ld	a5,-96(s0)
	lbu	a5,0(a5)
	.loc 1 254 32 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L85
	.loc 1 257 16
	ld	a5,-96(s0)
	lbu	a5,0(a5)
	.loc 1 257 15
	mv	a4,a5
	li	a5,35
	bne	a4,a5,.L86
	.loc 1 258 24
	sb	zero,-240(s0)
	j	.L79
.L86:
	.loc 1 260 20
	addi	a5,s0,-240
	ld	a4,-96(s0)
	beq	a4,a5,.L79
	.loc 1 261 36
	ld	a0,-96(s0)
	call	strlen
	mv	a5,a0
	.loc 1 261 49 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 261 17 discriminator 1
	mv	a4,a5
	addi	a5,s0,-240
	mv	a2,a4
	ld	a1,-96(s0)
	mv	a0,a5
	call	memmove
.L79:
.LBE37:
	.loc 1 266 13
	sw	zero,-100(s0)
	.loc 1 266 27
	j	.L87
.L89:
	.loc 1 266 77 discriminator 5
	lw	a5,-100(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a4,-224(a5)
	.loc 1 266 72 discriminator 5
	lla	a3,g_cmdline
	lw	a5,-100(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 266 85 discriminator 5
	lw	a5,-100(s0)
	addiw	a5,a5,1
	sw	a5,-100(s0)
.L87:
	.loc 1 266 31 discriminator 1
	lw	a5,-100(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-224(a5)
	.loc 1 266 36 discriminator 1
	beq	a5,zero,.L88
	.loc 1 266 36 is_stmt 0 discriminator 3
	lw	a5,-100(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L89
.L88:
	.loc 1 266 105 is_stmt 1 discriminator 6
	lla	a4,g_cmdline
	lw	a5,-100(s0)
	add	a5,a4,a5
	sb	zero,0(a5)
	.loc 1 268 15
	lbu	a5,-240(s0)
	.loc 1 268 11
	bne	a5,zero,.L90
	.loc 1 269 15
	ld	a5,-80(s0)
	beq	a5,zero,.L134
	.loc 1 270 17
	ld	a0,-80(s0)
	call	free
	.loc 1 272 13
	j	.L134
.L90:
	.loc 1 275 22
	sw	zero,-28(s0)
	.loc 1 276 17
	sw	zero,-32(s0)
	.loc 1 277 11
	addi	a5,s0,-240
	sd	a5,-40(s0)
	.loc 1 278 11
	sd	zero,-24(s0)
	.loc 1 280 49
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,92(a5)
.L124:
	.loc 1 283 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 283 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L93
	.loc 1 285 19
	ld	a5,-24(s0)
	ble	a5,zero,.L94
	.loc 1 286 61
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
	sb	zero,-936(a5)
	.loc 1 287 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 288 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L94
	.loc 1 289 25
	lla	a0,.LC7
	call	puts
	.loc 1 290 25
	j	.L95
.L94:
	.loc 1 293 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 294 22
	j	.L96
.L97:
	.loc 1 295 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L96:
	.loc 1 294 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 294 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L97
	.loc 1 294 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 294 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L97
	.loc 1 297 48
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,88(a5)
	.loc 1 299 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 300 19
	sd	zero,-24(s0)
	.loc 1 301 25
	sw	zero,-32(s0)
	.loc 1 303 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,92(a5)
	.loc 1 305 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L124
	.loc 1 306 21
	lla	a0,.LC8
	call	puts
	.loc 1 307 21
	j	.L95
.L93:
	.loc 1 310 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 310 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L99
	.loc 1 310 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 310 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 310 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L99
.LBB38:
	.loc 1 312 19
	ld	a5,-24(s0)
	ble	a5,zero,.L100
	.loc 1 313 61
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
	sb	zero,-936(a5)
	.loc 1 314 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 315 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L101
	.loc 1 316 25
	lla	a0,.LC7
	call	puts
	.loc 1 317 25
	j	.L95
.L101:
	.loc 1 319 23
	sd	zero,-24(s0)
.L100:
	.loc 1 321 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 322 22
	j	.L102
.L103:
	.loc 1 323 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L102:
	.loc 1 322 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 322 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L103
	.loc 1 322 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 322 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L103
	.loc 1 326 21
	sw	zero,-104(s0)
	.loc 1 328 22
	j	.L104
.L105:
	.loc 1 329 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 329 59
	lw	a4,-104(s0)
	addiw	a3,a4,1
	sw	a3,-104(s0)
	.loc 1 329 65
	lbu	a3,0(a5)
	.loc 1 329 63
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,92(a5)
	.loc 1 331 23
	lw	a5,-104(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L104
	.loc 1 332 25
	lla	a0,.LC9
	call	puts
	.loc 1 333 25
	li	a0,2
	call	exit
.L104:
	.loc 1 328 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 328 75 discriminator 1
	bne	a5,zero,.L105
	.loc 1 328 39 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 328 36 discriminator 2
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L105
	.loc 1 328 52 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 328 49 discriminator 3
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L105
	.loc 1 328 65 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 328 62 discriminator 4
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L105
	.loc 1 328 78 discriminator 5
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 328 75 discriminator 5
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L105
	.loc 1 336 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-104(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,92(a5)
	.loc 1 337 56
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sw	zero,124(a5)
	.loc 1 339 22
	j	.L106
.L107:
	.loc 1 340 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L106:
	.loc 1 339 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 339 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L107
	.loc 1 339 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 339 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L107
.LBE38:
	.loc 1 310 49
	j	.L98
.L99:
	.loc 1 343 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 343 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L108
	.loc 1 343 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 343 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 343 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L108
.LBB39:
	.loc 1 345 19
	ld	a5,-24(s0)
	ble	a5,zero,.L109
	.loc 1 346 61
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
	sb	zero,-936(a5)
	.loc 1 347 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 348 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L110
	.loc 1 349 25
	lla	a0,.LC7
	call	puts
	.loc 1 350 25
	j	.L95
.L110:
	.loc 1 352 23
	sd	zero,-24(s0)
.L109:
	.loc 1 355 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 356 22
	j	.L111
.L112:
	.loc 1 357 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L111:
	.loc 1 356 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 356 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L112
	.loc 1 356 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 356 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L112
	.loc 1 360 21
	sw	zero,-108(s0)
	.loc 1 362 22
	j	.L113
.L114:
	.loc 1 363 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 363 59
	lw	a4,-108(s0)
	addiw	a3,a4,1
	sw	a3,-108(s0)
	.loc 1 363 65
	lbu	a3,0(a5)
	.loc 1 363 63
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,92(a5)
	.loc 1 365 23
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L113
	.loc 1 366 25
	lla	a0,.LC9
	call	puts
	.loc 1 367 25
	li	a0,2
	call	exit
.L113:
	.loc 1 362 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 362 75 discriminator 1
	bne	a5,zero,.L114
	.loc 1 362 39 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 362 36 discriminator 2
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L114
	.loc 1 362 52 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 362 49 discriminator 3
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L114
	.loc 1 362 65 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 362 62 discriminator 4
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L114
	.loc 1 362 78 discriminator 5
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 362 75 discriminator 5
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L114
	.loc 1 370 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-108(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,92(a5)
	.loc 1 371 56
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	li	a4,1
	sw	a4,124(a5)
	.loc 1 373 22
	j	.L115
.L116:
	.loc 1 374 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L115:
	.loc 1 373 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 373 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L116
	.loc 1 373 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 373 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L116
.LBE39:
	.loc 1 343 49
	j	.L98
.L108:
	.loc 1 377 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 377 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L119
	.loc 1 377 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 377 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L118
	.loc 1 378 22
	j	.L119
.L120:
	.loc 1 379 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L119:
	.loc 1 378 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 378 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L120
	.loc 1 378 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 378 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L120
	.loc 1 381 19
	ld	a5,-24(s0)
	ble	a5,zero,.L135
	.loc 1 382 61
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
	sb	zero,-936(a5)
	.loc 1 383 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 384 23
	sd	zero,-24(s0)
	.loc 1 385 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L135
	.loc 1 386 25
	lla	a0,.LC7
	call	puts
	.loc 1 387 25
	j	.L95
.L118:
	.loc 1 392 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 392 20
	bne	a5,zero,.L122
	.loc 1 394 20
	ld	a5,-24(s0)
	ble	a5,zero,.L123
	.loc 1 395 61
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
	sb	zero,-936(a5)
	.loc 1 396 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 397 23
	sd	zero,-24(s0)
.L123:
	.loc 1 400 48
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,88(a5)
	.loc 1 401 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 402 17
	j	.L95
.L122:
	.loc 1 405 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 405 57
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
	sb	a4,-936(a5)
	.loc 1 406 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 407 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 409 19
	ld	a4,-24(s0)
	li	a5,31
	ble	a4,a5,.L124
	.loc 1 410 21
	lla	a0,.LC10
	call	puts
	.loc 1 411 21
	j	.L95
.L135:
	.loc 1 381 19
	nop
.L98:
	.loc 1 283 15
	j	.L124
.L95:
	.loc 1 417 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L125
	.loc 1 417 45 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,88(a5)
	.loc 1 417 31 discriminator 1
	ble	a5,zero,.L125
	.loc 1 417 62 discriminator 2
	li	a5,-16384
	addi	a5,a5,-936
	addi	a5,a5,-16
	add	a5,a5,s0
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 417 59 discriminator 3
	bne	a5,zero,.L125
.LBB40:
	.loc 1 418 25
	lla	a5,.LC12
	sd	a5,-120(s0)
	.loc 1 419 28
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,88(a5)
	.loc 1 419 16
	li	a5,1
	ble	a4,a5,.L126
	.loc 1 419 64 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-904(a5)
	.loc 1 419 42 discriminator 1
	beq	a5,zero,.L126
	.loc 1 420 24
	li	a5,-16384
	addi	a5,a5,-936
	addi	a5,a5,-16
	add	a5,a5,s0
	addi	a5,a5,32
	sd	a5,-120(s0)
.L126:
.LBB41:
	.loc 1 422 22
	ld	a5,-120(s0)
	mv	a0,a5
	li	a7,80
#APP
# 422 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE41:
	.loc 1 422 17
	sw	a5,-132(s0)
	.loc 1 423 16
	lw	a5,-132(s0)
	sext.w	a5,a5
	bge	a5,zero,.L136
	.loc 1 424 17
	lla	a0,.LC13
	call	puts
	.loc 1 426 13
	j	.L136
.L125:
.LBE40:
.LBB42:
	.loc 1 429 26
	li	a7,105
#APP
# 429 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a5,-144(s0)
	ld	a5,-144(s0)
.LBE42:
	.loc 1 429 13
	sw	a5,-148(s0)
.LBB43:
	.loc 1 430 9
	li	a0,0
	lw	a5,-148(s0)
	mv	a1,a5
	li	a7,103
#APP
# 430 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-160(s0)
.LBE43:
.LBB44:
	.loc 1 432 15
	li	a7,68
#APP
# 432 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
.LBE44:
	.loc 1 432 13
	sw	a5,-164(s0)
	.loc 1 434 11
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L128
.LBB45:
	.loc 1 435 13
	li	a0,0
	lw	a5,-148(s0)
	mv	a1,a5
	li	a7,103
#APP
# 435 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-176(s0)
.LBE45:
	.loc 1 436 13
	lw	a4,-148(s0)
	lw	a3,-68(s0)
	lw	a2,-28(s0)
	li	a5,-16384
	addi	a5,a5,-936
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L129
.L128:
.LBB46:
	.loc 1 439 21
	sw	zero,-124(s0)
	.loc 1 439 13
	j	.L130
.L131:
.LBB47:
.LBB48:
	.loc 1 441 17
	li	a5,-16384
	addi	a5,a5,-940
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a0,a5
	li	a7,71
#APP
# 441 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE48:
	.loc 1 442 17
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,-940(a5)
	mv	a1,a5
	lla	a0,.LC14
	call	printf
.LBE47:
	.loc 1 439 43 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L130:
	.loc 1 439 27 discriminator 1
	lw	a5,-124(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L131
.L129:
.LBE46:
	.loc 1 446 11
	ld	a5,-80(s0)
	beq	a5,zero,.L132
	.loc 1 447 13
	ld	a0,-80(s0)
	call	free
.L132:
	.loc 1 450 11
	lw	a5,-48(s0)
	sext.w	a5,a5
	beq	a5,zero,.L133
	.loc 1 451 13
	li	a0,0
	call	exit
	j	.L133
.L134:
	.loc 1 272 13
	nop
	j	.L133
.L136:
.LBB49:
	.loc 1 426 13
	nop
.LBE49:
.LBE36:
	.loc 1 222 14
	j	.L133
	.cfi_endproc
.LFE7:
	.size	main, .-main
.Letext0:
	.file 2 "minux.h"
	.file 3 "./stddef.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x10e2
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x16
	.4byte	.LASF74
	.byte	0x1d
	.byte	0x3
	.4byte	0x31647
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
	.uleb128 0x17
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
	.uleb128 0x11
	.4byte	.LASF21
	.byte	0x3
	.byte	0xe5
	.byte	0x17
	.4byte	0x64
	.uleb128 0x7
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x7
	.byte	0x10
	.byte	0x4
	.4byte	.LASF10
	.uleb128 0x7
	.byte	0x1
	.byte	0x8
	.4byte	.LASF11
	.uleb128 0x18
	.4byte	0x85
	.uleb128 0x19
	.4byte	.LASF24
	.byte	0x50
	.byte	0x2
	.byte	0x8d
	.byte	0x10
	.4byte	0x143
	.uleb128 0x10
	.string	"fd"
	.byte	0x8e
	.byte	0x7
	.4byte	0x41
	.byte	0
	.uleb128 0x8
	.4byte	.LASF12
	.byte	0x2
	.byte	0x8f
	.byte	0x7
	.4byte	0x41
	.byte	0x4
	.uleb128 0x10
	.string	"pos"
	.byte	0x90
	.byte	0x8
	.4byte	0x48
	.byte	0x8
	.uleb128 0x10
	.string	"eof"
	.byte	0x91
	.byte	0x7
	.4byte	0x41
	.byte	0x10
	.uleb128 0x10
	.string	"err"
	.byte	0x92
	.byte	0x7
	.4byte	0x41
	.byte	0x14
	.uleb128 0x8
	.4byte	.LASF13
	.byte	0x2
	.byte	0x93
	.byte	0x7
	.4byte	0x41
	.byte	0x18
	.uleb128 0x8
	.4byte	.LASF14
	.byte	0x2
	.byte	0x94
	.byte	0x11
	.4byte	0x4f
	.byte	0x1c
	.uleb128 0x8
	.4byte	.LASF15
	.byte	0x2
	.byte	0x96
	.byte	0x7
	.4byte	0x41
	.byte	0x20
	.uleb128 0x8
	.4byte	.LASF16
	.byte	0x2
	.byte	0x97
	.byte	0xa
	.4byte	0x143
	.byte	0x28
	.uleb128 0x8
	.4byte	.LASF17
	.byte	0x2
	.byte	0x98
	.byte	0xb
	.4byte	0x14d
	.byte	0x30
	.uleb128 0x8
	.4byte	.LASF18
	.byte	0x2
	.byte	0x99
	.byte	0x9
	.4byte	0x148
	.byte	0x38
	.uleb128 0x8
	.4byte	.LASF19
	.byte	0x2
	.byte	0x9a
	.byte	0xa
	.4byte	0x6b
	.byte	0x40
	.uleb128 0x8
	.4byte	.LASF20
	.byte	0x2
	.byte	0x9b
	.byte	0xa
	.4byte	0x6b
	.byte	0x48
	.byte	0
	.uleb128 0xd
	.4byte	0x148
	.uleb128 0xd
	.4byte	0x85
	.uleb128 0xd
	.4byte	0x6b
	.uleb128 0x11
	.4byte	.LASF22
	.byte	0x2
	.byte	0x9c
	.byte	0x3
	.4byte	0x91
	.uleb128 0xd
	.4byte	0x152
	.uleb128 0x11
	.4byte	.LASF23
	.byte	0x2
	.byte	0xa9
	.byte	0xd
	.4byte	0x41
	.uleb128 0xd
	.4byte	0x8c
	.uleb128 0xb
	.4byte	0x85
	.4byte	0x184
	.uleb128 0x9
	.4byte	0x64
	.byte	0x3f
	.byte	0
	.uleb128 0x3
	.4byte	.LASF44
	.byte	0xc
	.byte	0xd
	.4byte	0x174
	.uleb128 0x9
	.byte	0x3
	.8byte	g_cmdline
	.uleb128 0x1a
	.4byte	.LASF25
	.2byte	0x428
	.byte	0x1
	.byte	0x32
	.byte	0x8
	.4byte	0x1dc
	.uleb128 0x8
	.4byte	.LASF26
	.byte	0x1
	.byte	0x34
	.byte	0xa
	.4byte	0x1dc
	.byte	0
	.uleb128 0x12
	.4byte	.LASF27
	.byte	0x35
	.byte	0x9
	.4byte	0x41
	.2byte	0x400
	.uleb128 0x12
	.4byte	.LASF28
	.byte	0x36
	.byte	0xa
	.4byte	0x1f2
	.2byte	0x404
	.uleb128 0x12
	.4byte	.LASF29
	.byte	0x37
	.byte	0x9
	.4byte	0x41
	.2byte	0x424
	.byte	0
	.uleb128 0xb
	.4byte	0x85
	.4byte	0x1f2
	.uleb128 0x9
	.4byte	0x64
	.byte	0x1f
	.uleb128 0x9
	.4byte	0x64
	.byte	0x1f
	.byte	0
	.uleb128 0xb
	.4byte	0x85
	.4byte	0x202
	.uleb128 0x9
	.4byte	0x64
	.byte	0x1f
	.byte	0
	.uleb128 0x13
	.4byte	.LASF40
	.2byte	0x348
	.4byte	0x213
	.uleb128 0x4
	.4byte	0x213
	.byte	0
	.uleb128 0x1b
	.byte	0x8
	.uleb128 0xa
	.4byte	.LASF30
	.2byte	0x340
	.byte	0x7
	.4byte	0x213
	.4byte	0x235
	.uleb128 0x4
	.4byte	0x213
	.uleb128 0x4
	.4byte	0x235
	.uleb128 0x4
	.4byte	0x5d
	.byte	0
	.uleb128 0xd
	.4byte	0x23a
	.uleb128 0x1c
	.uleb128 0xa
	.4byte	.LASF31
	.2byte	0x33c
	.byte	0x5
	.4byte	0x41
	.4byte	0x251
	.uleb128 0x4
	.4byte	0x16f
	.byte	0
	.uleb128 0xa
	.4byte	.LASF32
	.2byte	0x327
	.byte	0x5
	.4byte	0x41
	.4byte	0x267
	.uleb128 0x4
	.4byte	0x15e
	.byte	0
	.uleb128 0xa
	.4byte	.LASF33
	.2byte	0x320
	.byte	0x7
	.4byte	0x148
	.4byte	0x287
	.uleb128 0x4
	.4byte	0x148
	.uleb128 0x4
	.4byte	0x41
	.uleb128 0x4
	.4byte	0x15e
	.byte	0
	.uleb128 0xa
	.4byte	.LASF34
	.2byte	0x33d
	.byte	0x7
	.4byte	0x148
	.4byte	0x2a7
	.uleb128 0x4
	.4byte	0x148
	.uleb128 0x4
	.4byte	0x16f
	.uleb128 0x4
	.4byte	0x41
	.byte	0
	.uleb128 0xa
	.4byte	.LASF35
	.2byte	0x359
	.byte	0x7
	.4byte	0x148
	.4byte	0x2bd
	.uleb128 0x4
	.4byte	0x16f
	.byte	0
	.uleb128 0xa
	.4byte	.LASF36
	.2byte	0x317
	.byte	0x5
	.4byte	0x41
	.4byte	0x2d4
	.uleb128 0x4
	.4byte	0x16f
	.uleb128 0x1d
	.byte	0
	.uleb128 0xa
	.4byte	.LASF37
	.2byte	0x328
	.byte	0x7
	.4byte	0x15e
	.4byte	0x2ef
	.uleb128 0x4
	.4byte	0x16f
	.uleb128 0x4
	.4byte	0x16f
	.byte	0
	.uleb128 0xa
	.4byte	.LASF38
	.2byte	0x32e
	.byte	0x7
	.4byte	0x148
	.4byte	0x30f
	.uleb128 0x4
	.4byte	0x148
	.uleb128 0x4
	.4byte	0x16f
	.uleb128 0x4
	.4byte	0x6b
	.byte	0
	.uleb128 0xa
	.4byte	.LASF39
	.2byte	0x344
	.byte	0x5
	.4byte	0x41
	.4byte	0x32a
	.uleb128 0x4
	.4byte	0x16f
	.uleb128 0x4
	.4byte	0x16f
	.byte	0
	.uleb128 0x13
	.4byte	.LASF41
	.2byte	0x23d
	.4byte	0x33b
	.uleb128 0x4
	.4byte	0x41
	.byte	0
	.uleb128 0x13
	.4byte	.LASF42
	.2byte	0x32f
	.4byte	0x34c
	.uleb128 0x4
	.4byte	0x16f
	.byte	0
	.uleb128 0x14
	.4byte	.LASF60
	.byte	0xb3
	.4byte	0x41
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6f5
	.uleb128 0xe
	.4byte	.LASF43
	.byte	0xb3
	.byte	0xe
	.4byte	0x41
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17348
	.uleb128 0xe
	.4byte	.LASF26
	.byte	0xb3
	.byte	0x1b
	.4byte	0x143
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17360
	.uleb128 0x1
	.string	"buf"
	.byte	0xb4
	.byte	0xa
	.4byte	0x174
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x3
	.4byte	.LASF45
	.byte	0xb5
	.byte	0xa
	.4byte	0x174
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x1
	.string	"n"
	.byte	0xb7
	.byte	0xa
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF46
	.byte	0xb8
	.byte	0xa
	.4byte	0x6f5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x1
	.string	"pid"
	.byte	0xb9
	.byte	0xb
	.4byte	0x163
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x1e
	.4byte	.LASF59
	.byte	0x1
	.byte	0xba
	.byte	0x9
	.4byte	0x41
	.uleb128 0x3
	.4byte	.LASF47
	.byte	0xbc
	.byte	0x15
	.4byte	0x705
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17336
	.uleb128 0x3
	.4byte	.LASF48
	.byte	0xbd
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0xbe
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.byte	0xbf
	.byte	0xb
	.4byte	0x148
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"m"
	.byte	0xc0
	.byte	0x9
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"i"
	.byte	0xc1
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF49
	.byte	0xc5
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF50
	.byte	0xc6
	.byte	0x11
	.4byte	0x16f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF51
	.byte	0xc7
	.byte	0xb
	.4byte	0x15e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF52
	.byte	0xc8
	.byte	0x9
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x6
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x3
	.4byte	.LASF53
	.byte	0xdf
	.byte	0xf
	.4byte	0x148
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x5
	.string	"gi"
	.2byte	0x10a
	.byte	0xd
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0xc
	.4byte	.LASF54
	.2byte	0x1ad
	.byte	0xd
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0x4dd
	.uleb128 0x1
	.string	"len"
	.byte	0xf8
	.byte	0x11
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x3
	.4byte	.LASF55
	.byte	0xfd
	.byte	0x13
	.4byte	0x148
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x501
	.uleb128 0x5
	.string	"i"
	.2byte	0x146
	.byte	0x15
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.byte	0
	.uleb128 0x2
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.4byte	0x525
	.uleb128 0x5
	.string	"i"
	.2byte	0x168
	.byte	0x15
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x1f
	.4byte	.LLRL0
	.4byte	0x57c
	.uleb128 0xc
	.4byte	.LASF56
	.2byte	0x1a2
	.byte	0x19
	.4byte	0x16f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x5
	.string	"rc"
	.2byte	0x1a6
	.byte	0x11
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.uleb128 0x6
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x1a6
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x1a6
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x5b0
	.uleb128 0xc
	.4byte	.LASF57
	.2byte	0x1ad
	.byte	0x1a
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x1ad
	.byte	0x1a
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.4byte	0x600
	.uleb128 0xc
	.4byte	.LASF57
	.2byte	0x1ae
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x1ae
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a1"
	.2byte	0x1ae
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x1ae
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0x632
	.uleb128 0xc
	.4byte	.LASF58
	.2byte	0x1b0
	.byte	0xf
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.uleb128 0xc
	.4byte	.LASF57
	.2byte	0x1b0
	.byte	0xf
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.4byte	0x682
	.uleb128 0xc
	.4byte	.LASF57
	.2byte	0x1b3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x1b3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a1"
	.2byte	0x1b3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x1b3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.uleb128 0x5
	.string	"k"
	.2byte	0x1b7
	.byte	0x15
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x6
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.uleb128 0xc
	.4byte	.LASF59
	.2byte	0x1b8
	.byte	0x15
	.4byte	0x41
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17340
	.uleb128 0x6
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x1b9
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x1b9
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x85
	.4byte	0x705
	.uleb128 0x9
	.4byte	0x64
	.byte	0x1
	.byte	0
	.uleb128 0xb
	.4byte	0x199
	.4byte	0x715
	.uleb128 0x9
	.4byte	0x64
	.byte	0xf
	.byte	0
	.uleb128 0x14
	.4byte	.LASF61
	.byte	0x3a
	.4byte	0x41
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf0c
	.uleb128 0xf
	.string	"n"
	.byte	0x3a
	.byte	0x15
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0xe
	.4byte	.LASF47
	.byte	0x3a
	.byte	0x29
	.4byte	0xf0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0xe
	.4byte	.LASF48
	.byte	0x3a
	.byte	0x37
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0xe
	.4byte	.LASF52
	.byte	0x3a
	.byte	0x49
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -580
	.uleb128 0xe
	.4byte	.LASF54
	.byte	0x3a
	.byte	0x55
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -584
	.uleb128 0x3
	.4byte	.LASF62
	.byte	0x3c
	.byte	0x9
	.4byte	0xf11
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.4byte	.LASF63
	.byte	0x3e
	.byte	0x16
	.4byte	0xf0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0xb08
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0x42
	.byte	0xf
	.4byte	0xf21
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x1
	.string	"j"
	.byte	0x43
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.4byte	.LASF64
	.byte	0x49
	.byte	0xe
	.4byte	0xf31
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"ei"
	.byte	0x4a
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF65
	.byte	0x4b
	.byte	0x15
	.4byte	0x16f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.4byte	.LASF66
	.byte	0x4f
	.byte	0xf
	.4byte	0xf41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x2
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.4byte	0x852
	.uleb128 0x3
	.4byte	.LASF57
	.byte	0x41
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.byte	0x41
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x41
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x41
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x874
	.uleb128 0x1
	.string	"k"
	.byte	0x4c
	.byte	0x12
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x896
	.uleb128 0x1
	.string	"k"
	.byte	0x4d
	.byte	0x12
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x9b6
	.uleb128 0x1
	.string	"fd"
	.byte	0x52
	.byte	0x11
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x902
	.uleb128 0x1
	.string	"_a0"
	.byte	0x54
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x54
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x54
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x54
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x94c
	.uleb128 0x1
	.string	"_a0"
	.byte	0x57
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x57
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x57
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x57
	.byte	0x16
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x989
	.uleb128 0x1
	.string	"_a0"
	.byte	0x5f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x5f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x5f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"_a0"
	.byte	0x60
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x60
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0xa00
	.uleb128 0x1
	.string	"_a0"
	.byte	0x65
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x65
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x65
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x65
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0xa4a
	.uleb128 0x1
	.string	"_a0"
	.byte	0x68
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x68
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x68
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x68
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x3
	.4byte	.LASF67
	.byte	0x6b
	.byte	0x12
	.4byte	0x174
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"i"
	.byte	0x6d
	.byte	0x11
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.4byte	0xac0
	.uleb128 0x1
	.string	"_a0"
	.byte	0x71
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x71
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x71
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x71
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x1
	.string	"_a0"
	.byte	0x74
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x74
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x74
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x74
	.byte	0x11
	.4byte	0x48
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
	.byte	0x7c
	.byte	0xd
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0xb58
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7a
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7a
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0xb88
	.uleb128 0x3
	.4byte	.LASF58
	.byte	0x7c
	.byte	0x13
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF57
	.byte	0x7c
	.byte	0x13
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0xbb8
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0xbf5
	.uleb128 0x1
	.string	"_a0"
	.byte	0x80
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x80
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x80
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0xc25
	.uleb128 0x1
	.string	"_a0"
	.byte	0x81
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x81
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0x8a
	.byte	0x13
	.4byte	0xf21
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x1
	.string	"j"
	.byte	0x8b
	.byte	0x11
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF64
	.byte	0x91
	.byte	0x12
	.4byte	0xf31
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"ei"
	.byte	0x92
	.byte	0x11
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF65
	.byte	0x93
	.byte	0x19
	.4byte	0x16f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.4byte	.LASF66
	.byte	0x97
	.byte	0x13
	.4byte	0xf41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0xcd7
	.uleb128 0x3
	.4byte	.LASF57
	.byte	0x85
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.byte	0x85
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x85
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x85
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0xd07
	.uleb128 0x1
	.string	"_a0"
	.byte	0x86
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x86
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0xd44
	.uleb128 0x1
	.string	"_a0"
	.byte	0x87
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x87
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x87
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0xd74
	.uleb128 0x1
	.string	"_a0"
	.byte	0x88
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x88
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0xd96
	.uleb128 0x1
	.string	"k"
	.byte	0x94
	.byte	0x16
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0xdb8
	.uleb128 0x1
	.string	"k"
	.byte	0x95
	.byte	0x16
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0x2
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.4byte	0xe02
	.uleb128 0x1
	.string	"_a0"
	.byte	0x9a
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x9a
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x9a
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x9a
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0xe4c
	.uleb128 0x1
	.string	"_a0"
	.byte	0x9d
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x9d
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x9d
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x9d
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x3
	.4byte	.LASF67
	.byte	0xa0
	.byte	0x16
	.4byte	0x174
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"i"
	.byte	0xa2
	.byte	0x15
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0xec2
	.uleb128 0x1
	.string	"_a0"
	.byte	0xa6
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xa6
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xa6
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xa6
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x6
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x1
	.string	"_a0"
	.byte	0xa9
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xa9
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xa9
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xa9
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x199
	.uleb128 0xb
	.4byte	0x41
	.4byte	0xf21
	.uleb128 0x9
	.4byte	0x64
	.byte	0x1
	.byte	0
	.uleb128 0xb
	.4byte	0x148
	.4byte	0xf31
	.uleb128 0x9
	.4byte	0x64
	.byte	0x1f
	.byte	0
	.uleb128 0xb
	.4byte	0x85
	.4byte	0xf41
	.uleb128 0x9
	.4byte	0x64
	.byte	0x4f
	.byte	0
	.uleb128 0xb
	.4byte	0x148
	.4byte	0xf51
	.uleb128 0x9
	.4byte	0x64
	.byte	0x1
	.byte	0
	.uleb128 0x20
	.4byte	.LASF75
	.byte	0x1
	.byte	0x24
	.byte	0xc
	.4byte	0x41
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfeb
	.uleb128 0xe
	.4byte	.LASF68
	.byte	0x24
	.byte	0x1e
	.4byte	0x16f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"fd"
	.byte	0x25
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.4byte	0xfbe
	.uleb128 0x1
	.string	"_a0"
	.byte	0x25
	.byte	0xe
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x25
	.byte	0xe
	.4byte	0x48
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
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x26
	.byte	0x14
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF69
	.byte	0x1e
	.4byte	0x41
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1018
	.uleb128 0xf
	.string	"c"
	.byte	0x1e
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x15
	.4byte	.LASF70
	.byte	0x19
	.4byte	0x41
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1045
	.uleb128 0xf
	.string	"c"
	.byte	0x19
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x15
	.4byte	.LASF71
	.byte	0x14
	.4byte	0x41
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1072
	.uleb128 0xf
	.string	"c"
	.byte	0x14
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x15
	.4byte	.LASF72
	.byte	0xe
	.4byte	0x41
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10ad
	.uleb128 0xf
	.string	"c"
	.byte	0xe
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x3
	.4byte	.LASF73
	.byte	0x10
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x21
	.4byte	.LASF76
	.byte	0x1
	.byte	0x5
	.byte	0x14
	.4byte	0x16f
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xf
	.string	"s"
	.byte	0x5
	.byte	0x29
	.4byte	0x16f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xf
	.string	"ch"
	.byte	0x5
	.byte	0x30
	.4byte	0x41
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
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x5
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
	.uleb128 0xb
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
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
	.uleb128 0xd
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
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
	.uleb128 0xf
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
	.uleb128 0x10
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x11
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
	.uleb128 0x12
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
	.uleb128 0x13
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
	.sleb128 6
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
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
	.uleb128 0x16
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
	.uleb128 0x17
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
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
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
	.uleb128 0x1b
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1e
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
	.uleb128 0x1f
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x20
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
	.uleb128 0x21
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
	.uleb128 .LBB40-.Ltext0
	.uleb128 .LBE40-.Ltext0
	.byte	0x4
	.uleb128 .LBB49-.Ltext0
	.uleb128 .LBE49-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF39:
	.string	"strcmp"
.LASF21:
	.string	"size_t"
.LASF52:
	.string	"debug_"
.LASF46:
	.string	"buf2"
.LASF72:
	.string	"xisalpha"
.LASF34:
	.string	"strncpy"
.LASF68:
	.string	"path"
.LASF36:
	.string	"printf"
.LASF38:
	.string	"strncat"
.LASF29:
	.string	"redirect_append"
.LASF64:
	.string	"envbuf"
.LASF13:
	.string	"have_push"
.LASF40:
	.string	"free"
.LASF9:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF44:
	.string	"g_cmdline"
.LASF35:
	.string	"readline"
.LASF4:
	.string	"long int"
.LASF61:
	.string	"run_command"
.LASF66:
	.string	"envp"
.LASF60:
	.string	"main"
.LASF7:
	.string	"unsigned int"
.LASF31:
	.string	"strlen"
.LASF63:
	.string	"command"
.LASF16:
	.string	"ms_bufp"
.LASF8:
	.string	"long unsigned int"
.LASF18:
	.string	"ms_buf"
.LASF6:
	.string	"short unsigned int"
.LASF51:
	.string	"script_fp"
.LASF56:
	.string	"target"
.LASF33:
	.string	"fgets"
.LASF20:
	.string	"ms_len"
.LASF65:
	.string	"prefix"
.LASF70:
	.string	"xisdigit"
.LASF42:
	.string	"puts"
.LASF48:
	.string	"num_commands"
.LASF15:
	.string	"is_mem"
.LASF10:
	.string	"long double"
.LASF62:
	.string	"pipes"
.LASF69:
	.string	"xisalnum"
.LASF19:
	.string	"ms_cap"
.LASF47:
	.string	"commands"
.LASF37:
	.string	"fopen"
.LASF71:
	.string	"xisblank"
.LASF50:
	.string	"script_path"
.LASF54:
	.string	"shell_pgrp"
.LASF5:
	.string	"unsigned char"
.LASF24:
	.string	"__minux_FILE"
.LASF25:
	.string	"sCommand"
.LASF3:
	.string	"short int"
.LASF49:
	.string	"run_once"
.LASF67:
	.string	"abuf"
.LASF22:
	.string	"FILE"
.LASF41:
	.string	"exit"
.LASF27:
	.string	"num_arg"
.LASF55:
	.string	"head"
.LASF28:
	.string	"redirect_file"
.LASF58:
	.string	"_num"
.LASF75:
	.string	"isdir"
.LASF11:
	.string	"char"
.LASF74:
	.ascii	"GNU C23 15.2.1 20250808"
	.string	" (Red Hat Cross 15.2.1-1) -mcmodel=medany -mcmodel=medany -mno-small-data-limit=0 -mabi=lp64 -misa-spec=20191213 -mtls-dialect=trad -march=rv64imafdc_zicsr_zifencei_zmmul_zaamo_zalrsc_zca_zcd -g -O0 -ffreestanding -fno-stack-protector -fno-builtin -fno-pie"
.LASF32:
	.string	"fclose"
.LASF53:
	.string	"cmdline"
.LASF76:
	.string	"s_strchr"
.LASF17:
	.string	"ms_sizep"
.LASF59:
	.string	"status"
.LASF30:
	.string	"memmove"
.LASF12:
	.string	"flags"
.LASF14:
	.string	"push_ch"
.LASF57:
	.string	"_ret"
.LASF43:
	.string	"argc"
.LASF23:
	.string	"pid_t"
.LASF26:
	.string	"argv"
.LASF45:
	.string	"linebuf"
.LASF73:
	.string	"result"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/home/ab25cq/minux9"
	.ident	"GCC: (GNU) 15.2.1 20250808 (Red Hat Cross 15.2.1-1)"
	.section	.note.GNU-stack,"",@progbits
