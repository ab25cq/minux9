	.file	"sh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9-dev" "sh.c"
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
	.loc 1 60 9
	sw	zero,-104(s0)
	sw	zero,-100(s0)
	.loc 1 62 41
	lw	a4,-340(s0)
	li	a5,152
	mul	a5,a4,a5
	.loc 1 62 22
	ld	a4,-352(s0)
	add	a5,a4,a5
	sd	a5,-72(s0)
	.loc 1 64 25
	lw	a5,-344(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 64 7
	lw	a4,-340(s0)
	sext.w	a4,a4
	bne	a4,a5,.L30
.LBB4:
	.loc 1 67 14
	sw	zero,-20(s0)
	.loc 1 67 9
	j	.L31
.L32:
	.loc 1 68 22
	lw	a5,-20(s0)
	slli	a5,a5,4
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 68 20
	lw	a3,-20(s0)
	addi	a5,s0,-336
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 67 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L31:
	.loc 1 67 27 discriminator 1
	ld	a5,-72(s0)
	lw	a5,112(a5)
	.loc 1 67 19 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L32
	.loc 1 70 17
	lw	a4,-20(s0)
	addi	a5,s0,-336
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 73 13
	sw	zero,-24(s0)
	.loc 1 74 21
	lla	a5,.LC0
	sd	a5,-96(s0)
.LBB5:
	.loc 1 75 18
	sw	zero,-28(s0)
	.loc 1 75 9
	j	.L33
.L34:
	.loc 1 75 60 discriminator 3
	lw	a5,-28(s0)
	ld	a4,-96(s0)
	add	a4,a4,a5
	.loc 1 75 48 discriminator 3
	lw	a5,-24(s0)
	addiw	a3,a5,1
	sw	a3,-24(s0)
	.loc 1 75 60 discriminator 3
	lbu	a4,0(a4)
	.loc 1 75 52 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 75 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L33:
	.loc 1 75 29 discriminator 1
	lw	a5,-28(s0)
	ld	a4,-96(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 75 23 discriminator 1
	bne	a5,zero,.L34
.LBE5:
.LBB6:
	.loc 1 76 18
	sw	zero,-32(s0)
	.loc 1 76 9
	j	.L35
.L37:
	.loc 1 76 81 discriminator 4
	lw	a5,-24(s0)
	addiw	a4,a5,1
	sw	a4,-24(s0)
	.loc 1 76 96 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-32(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 76 85 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 76 68 discriminator 4
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L35:
	.loc 1 76 32 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-32(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 76 36 discriminator 1
	beq	a5,zero,.L36
	.loc 1 76 36 is_stmt 0 discriminator 3
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L37
.L36:
.LBE6:
	.loc 1 77 20 is_stmt 1
	lw	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-200(a5)
	.loc 1 78 32
	addi	a5,s0,-216
	sd	a5,-120(s0)
	.loc 1 78 50
	sd	zero,-112(s0)
	.loc 1 80 34
	ld	a5,-72(s0)
	lbu	a5,116(a5)
	.loc 1 80 11
	beq	a5,zero,.L38
.LBB7:
	.loc 1 82 23
	ld	a5,-72(s0)
	lw	a5,148(a5)
	.loc 1 82 15
	beq	a5,zero,.L39
.LBB8:
	.loc 1 83 22
	ld	a5,-72(s0)
	addi	a5,a5,116
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
 #APP
# 83 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE8:
	.loc 1 83 20
	sw	a5,-36(s0)
	j	.L40
.L39:
.LBB9:
	.loc 1 86 22
	ld	a5,-72(s0)
	addi	a5,a5,116
	mv	a0,a5
	li	a1,1537
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
.L40:
	.loc 1 89 15
	lw	a5,-36(s0)
	sext.w	a5,a5
	bge	a5,zero,.L41
	.loc 1 90 17
	lla	a0,.LC1
	call	puts
.LBB10:
	.loc 1 91 17
	li	a0,1
	li	a7,70
 #APP
# 91 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L42:
	j	.L42
.L41:
.LBE10:
.LBB11:
	.loc 1 94 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 94 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE11:
.LBB12:
	.loc 1 95 13
	lw	a5,-36(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 95 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L38:
.LBE12:
.LBE7:
.LBB13:
	.loc 1 99 9
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-120
	mv	a2,a5
	li	a7,100
 #APP
# 99 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE13:
	.loc 1 100 17
	ld	a5,-336(s0)
	.loc 1 100 12
	beq	a5,zero,.L43
	.loc 1 100 28 discriminator 1
	ld	a5,-336(s0)
	.loc 1 100 31 discriminator 1
	lbu	a5,0(a5)
	.loc 1 100 21 discriminator 1
	beq	a5,zero,.L43
	.loc 1 100 52 discriminator 2
	ld	a5,-336(s0)
	.loc 1 100 39 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 100 35 discriminator 1
	bne	a5,zero,.L43
.LBB14:
	.loc 1 102 21
	li	a5,47
	sb	a5,-280(s0)
	.loc 1 103 17
	sw	zero,-40(s0)
	.loc 1 103 28
	j	.L44
.L46:
	.loc 1 103 86 discriminator 4
	ld	a4,-336(s0)
	.loc 1 103 89 discriminator 4
	lw	a5,-40(s0)
	add	a4,a4,a5
	.loc 1 103 76 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 103 89 discriminator 4
	lbu	a4,0(a4)
	.loc 1 103 80 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-264(a5)
	.loc 1 103 95 discriminator 4
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L44:
	.loc 1 103 33 discriminator 1
	ld	a4,-336(s0)
	.loc 1 103 36 discriminator 1
	lw	a5,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 103 40 discriminator 1
	beq	a5,zero,.L45
	.loc 1 103 40 is_stmt 0 discriminator 3
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L46
.L45:
	.loc 1 104 19 is_stmt 1
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 104 23
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-264(a5)
	.loc 1 105 21
	addi	a5,s0,-280
	sd	a5,-336(s0)
.LBB15:
	.loc 1 106 13
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-120
	mv	a2,a5
	li	a7,100
 #APP
# 106 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L43:
.LBE15:
.LBE14:
.LBB16:
	.loc 1 108 9
	li	a0,127
	li	a7,70
 #APP
# 108 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L47:
	j	.L47
.L30:
.LBE16:
.LBE4:
.LBB17:
.LBB18:
	.loc 1 111 9
	addi	a5,s0,-104
	mv	a0,a5
	li	a7,73
 #APP
# 111 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE18:
.LBB19:
	.loc 1 113 19
	li	a7,68
 #APP
# 113 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE19:
	.loc 1 113 13
	sw	a5,-76(s0)
	.loc 1 115 11
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L48
.LBB20:
	.loc 1 116 13
	lw	a5,-104(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
 #APP
# 116 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE20:
.LBB21:
	.loc 1 117 13
	lw	a5,-104(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 117 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE21:
.LBB22:
	.loc 1 118 13
	lw	a5,-100(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 118 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE22:
	.loc 1 119 13
	lw	a5,-340(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-344(s0)
	mv	a2,a4
	ld	a1,-352(s0)
	mv	a0,a5
	call	run_command
	j	.L63
.L48:
.LBB23:
.LBB24:
	.loc 1 122 13
	lw	a5,-104(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 122 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE24:
.LBB25:
	.loc 1 123 13
	lw	a5,-100(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
 #APP
# 123 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE25:
.LBB26:
	.loc 1 124 13
	lw	a5,-100(s0)
	mv	a0,a5
	li	a7,67
 #APP
# 124 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE26:
	.loc 1 128 18
	sw	zero,-44(s0)
	.loc 1 128 13
	j	.L50
.L51:
	.loc 1 129 26
	lw	a5,-44(s0)
	slli	a5,a5,4
	ld	a4,-72(s0)
	add	a4,a4,a5
	.loc 1 129 24
	lw	a3,-44(s0)
	addi	a5,s0,-336
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 128 43 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L50:
	.loc 1 128 31 discriminator 1
	ld	a5,-72(s0)
	lw	a5,112(a5)
	.loc 1 128 23 discriminator 1
	lw	a4,-44(s0)
	sext.w	a4,a4
	blt	a4,a5,.L51
	.loc 1 131 21
	lw	a4,-44(s0)
	addi	a5,s0,-336
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
	.loc 1 134 17
	sw	zero,-48(s0)
	.loc 1 135 25
	lla	a5,.LC0
	sd	a5,-88(s0)
.LBB27:
	.loc 1 136 22
	sw	zero,-52(s0)
	.loc 1 136 13
	j	.L52
.L53:
	.loc 1 136 64 discriminator 3
	lw	a5,-52(s0)
	ld	a4,-88(s0)
	add	a4,a4,a5
	.loc 1 136 52 discriminator 3
	lw	a5,-48(s0)
	addiw	a3,a5,1
	sw	a3,-48(s0)
	.loc 1 136 64 discriminator 3
	lbu	a4,0(a4)
	.loc 1 136 56 discriminator 3
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 136 39 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L52:
	.loc 1 136 33 discriminator 1
	lw	a5,-52(s0)
	ld	a4,-88(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 136 27 discriminator 1
	bne	a5,zero,.L53
.LBE27:
.LBB28:
	.loc 1 137 22
	sw	zero,-56(s0)
	.loc 1 137 13
	j	.L54
.L56:
	.loc 1 137 85 discriminator 4
	lw	a5,-48(s0)
	addiw	a4,a5,1
	sw	a4,-48(s0)
	.loc 1 137 100 discriminator 4
	lla	a3,g_cmdline
	lw	a4,-56(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 137 89 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-200(a5)
	.loc 1 137 72 discriminator 4
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L54:
	.loc 1 137 36 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-56(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 137 40 discriminator 1
	beq	a5,zero,.L55
	.loc 1 137 40 is_stmt 0 discriminator 3
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L56
.L55:
.LBE28:
	.loc 1 138 24 is_stmt 1
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-200(a5)
	.loc 1 139 36
	addi	a5,s0,-216
	sd	a5,-136(s0)
	.loc 1 139 54
	sd	zero,-128(s0)
.LBB29:
	.loc 1 141 13
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 141 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE29:
	.loc 1 142 21
	ld	a5,-336(s0)
	.loc 1 142 16
	beq	a5,zero,.L57
	.loc 1 142 32 discriminator 1
	ld	a5,-336(s0)
	.loc 1 142 35 discriminator 1
	lbu	a5,0(a5)
	.loc 1 142 25 discriminator 1
	beq	a5,zero,.L57
	.loc 1 142 56 discriminator 2
	ld	a5,-336(s0)
	.loc 1 142 43 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 142 39 discriminator 1
	bne	a5,zero,.L57
.LBB30:
	.loc 1 144 25
	li	a5,47
	sb	a5,-280(s0)
	.loc 1 145 21
	sw	zero,-60(s0)
	.loc 1 145 32
	j	.L58
.L60:
	.loc 1 145 90 discriminator 4
	ld	a4,-336(s0)
	.loc 1 145 93 discriminator 4
	lw	a5,-60(s0)
	add	a4,a4,a5
	.loc 1 145 80 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 145 93 discriminator 4
	lbu	a4,0(a4)
	.loc 1 145 84 discriminator 4
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-264(a5)
	.loc 1 145 99 discriminator 4
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sw	a5,-60(s0)
.L58:
	.loc 1 145 37 discriminator 1
	ld	a4,-336(s0)
	.loc 1 145 40 discriminator 1
	lw	a5,-60(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 145 44 discriminator 1
	beq	a5,zero,.L59
	.loc 1 145 44 is_stmt 0 discriminator 3
	lw	a5,-60(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L60
.L59:
	.loc 1 146 23 is_stmt 1
	lw	a5,-60(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 146 27
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-264(a5)
	.loc 1 147 25
	addi	a5,s0,-280
	sd	a5,-336(s0)
.LBB31:
	.loc 1 148 17
	ld	a5,-336(s0)
	mv	a0,a5
	addi	a5,s0,-336
	mv	a1,a5
	addi	a5,s0,-136
	mv	a2,a5
	li	a7,100
 #APP
# 148 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L57:
.LBE31:
.LBE30:
.LBB32:
	.loc 1 150 13
	li	a0,127
	li	a7,70
 #APP
# 150 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L61:
	j	.L61
.L63:
.LBE32:
.LBE23:
.LBE17:
	.loc 1 154 12
	li	a5,1
	.loc 1 155 1
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
.LFE6:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC2:
	.string	"$ "
	.align	3
.LC3:
	.string	"cc -o b.s -S b.c"
	.align	3
.LC4:
	.string	"\b \b"
	.align	3
.LC5:
	.string	"\r\n"
	.align	3
.LC6:
	.string	"ARG NUM ERROR"
	.align	3
.LC7:
	.string	"ERR MAX COMMAND"
	.align	3
.LC8:
	.string	"FILE NAME IS TOO LONG"
	.align	3
.LC9:
	.string	"ERR ARG NUM"
	.align	3
.LC10:
	.string	"cd"
	.align	3
.LC11:
	.string	"/"
	.align	3
.LC12:
	.string	"cd: failed\n"
	.align	3
.LC13:
	.string	"=> %d\r\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB7:
	.loc 1 157 16
	.cfi_startproc
	addi	sp,sp,-960
	.cfi_def_cfa_offset 960
	sd	ra,952(sp)
	sd	s0,944(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,960
	.cfi_def_cfa 8, 0
	.loc 1 169 9
	sw	zero,-44(s0)
.L119:
.LBB33:
.LBB34:
	.loc 1 174 9
	li	a0,1
	lla	a5,.LC2
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 174 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-80(s0)
.LBE34:
	.loc 1 176 10
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
	.loc 1 177 11
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L65
	.loc 1 178 13
	addi	a5,s0,-184
	li	a2,64
	lla	a1,.LC3
	mv	a0,a5
	call	strncpy
	j	.L66
.L65:
	.loc 1 184 11
	sd	zero,-24(s0)
.L73:
.LBB35:
	.loc 1 186 13
	li	a0,0
	addi	a5,s0,-192
	mv	a1,a5
	li	a2,1
	li	a7,65
 #APP
# 186 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-88(s0)
.LBE35:
.LBB36:
	.loc 1 187 13
	li	a0,1
	addi	a5,s0,-192
	mv	a1,a5
	li	a2,1
	li	a7,64
 #APP
# 187 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-96(s0)
.LBE36:
	.loc 1 190 22
	lbu	a5,-192(s0)
	.loc 1 190 16
	mv	a4,a5
	li	a5,8
	beq	a4,a5,.L67
	.loc 1 190 41 discriminator 2
	lbu	a5,-192(s0)
	.loc 1 190 34 discriminator 2
	mv	a4,a5
	li	a5,127
	bne	a4,a5,.L68
.L67:
	.loc 1 190 53 discriminator 3
	ld	a5,-24(s0)
	ble	a5,zero,.L68
	.loc 1 192 18
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
	.loc 1 193 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
.LBB37:
	.loc 1 195 17
	li	a0,1
	lla	a5,.LC4
	mv	a1,a5
	li	a2,3
	li	a7,64
 #APP
# 195 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-104(s0)
.LBE37:
	j	.L69
.L68:
	.loc 1 197 25
	lbu	a5,-192(s0)
	.loc 1 197 20
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L120
	.loc 1 200 25
	lbu	a5,-192(s0)
	.loc 1 200 20
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L121
	.loc 1 204 30
	lbu	a4,-192(s0)
	.loc 1 204 24
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-168(a5)
	.loc 1 205 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L69:
	.loc 1 186 13
	j	.L73
.L120:
	.loc 1 198 17
	nop
	j	.L71
.L121:
	.loc 1 201 17
	nop
.L71:
	.loc 1 208 16
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
.L66:
.LBB38:
	.loc 1 212 9
	li	a0,1
	lla	a5,.LC5
	mv	a1,a5
	li	a2,2
	li	a7,64
 #APP
# 212 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	sd	a0,-112(s0)
.LBE38:
	.loc 1 214 13
	sw	zero,-48(s0)
	.loc 1 214 27
	j	.L74
.L76:
	.loc 1 214 77 discriminator 5
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a4,-168(a5)
	.loc 1 214 72 discriminator 5
	lla	a3,g_cmdline
	lw	a5,-48(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 214 85 discriminator 5
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sw	a5,-48(s0)
.L74:
	.loc 1 214 31 discriminator 1
	lw	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-168(a5)
	.loc 1 214 36 discriminator 1
	beq	a5,zero,.L75
	.loc 1 214 36 is_stmt 0 discriminator 3
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L76
.L75:
	.loc 1 214 105 is_stmt 1 discriminator 6
	lla	a4,g_cmdline
	lw	a5,-48(s0)
	add	a5,a4,a5
	sb	zero,0(a5)
	.loc 1 216 15
	lbu	a5,-184(s0)
	.loc 1 216 11
	beq	a5,zero,.L122
	.loc 1 220 22
	sw	zero,-28(s0)
	.loc 1 221 17
	sw	zero,-32(s0)
	.loc 1 222 11
	addi	a5,s0,-184
	sd	a5,-40(s0)
	.loc 1 223 11
	sd	zero,-24(s0)
	.loc 1 225 49
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-820(a5)
.L112:
	.loc 1 228 16
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 228 15
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L79
	.loc 1 230 19
	ld	a5,-24(s0)
	ble	a5,zero,.L80
	.loc 1 231 61
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
	.loc 1 232 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 233 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L80
	.loc 1 234 25
	lla	a0,.LC6
	call	puts
	.loc 1 235 25
	j	.L81
.L80:
	.loc 1 238 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 239 22
	j	.L82
.L83:
	.loc 1 240 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L82:
	.loc 1 239 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 239 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L83
	.loc 1 239 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 239 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L83
	.loc 1 242 48
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-824(a5)
	.loc 1 244 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 245 19
	sd	zero,-24(s0)
	.loc 1 246 25
	sw	zero,-32(s0)
	.loc 1 248 57
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-820(a5)
	.loc 1 250 19
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L112
	.loc 1 251 21
	lla	a0,.LC7
	call	puts
	.loc 1 252 21
	j	.L81
.L79:
	.loc 1 255 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 255 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L85
	.loc 1 255 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 255 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 255 31 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L85
.LBB39:
	.loc 1 257 19
	ld	a5,-24(s0)
	ble	a5,zero,.L86
	.loc 1 258 61
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
	.loc 1 259 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 260 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L87
	.loc 1 261 25
	lla	a0,.LC6
	call	puts
	.loc 1 262 25
	j	.L81
.L87:
	.loc 1 264 23
	sd	zero,-24(s0)
.L86:
	.loc 1 266 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 267 22
	j	.L88
.L89:
	.loc 1 268 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L88:
	.loc 1 267 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 267 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L89
	.loc 1 267 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 267 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L89
	.loc 1 271 21
	sw	zero,-52(s0)
	.loc 1 273 22
	j	.L90
.L92:
	.loc 1 274 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 274 59
	lw	a4,-52(s0)
	addiw	a3,a4,1
	sw	a3,-52(s0)
	.loc 1 274 65
	lbu	a3,0(a5)
	.loc 1 274 63
	lw	a2,-28(s0)
	li	a5,152
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-820(a5)
	.loc 1 276 23
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L90
	.loc 1 277 25
	lla	a0,.LC8
	call	puts
.LBB40:
	.loc 1 278 25
	li	a0,2
	li	a7,70
 #APP
# 278 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L91:
	j	.L91
.L90:
.LBE40:
	.loc 1 273 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 273 75 discriminator 1
	bne	a5,zero,.L92
	.loc 1 273 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 273 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L92
	.loc 1 273 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 273 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L92
	.loc 1 273 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 273 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L92
	.loc 1 273 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 273 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L92
	.loc 1 281 57
	lw	a4,-52(s0)
	lw	a3,-28(s0)
	li	a5,152
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-820(a5)
	.loc 1 282 56
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	zero,-788(a5)
	.loc 1 284 22
	j	.L93
.L94:
	.loc 1 285 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L93:
	.loc 1 284 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 284 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L94
	.loc 1 284 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 284 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L94
.LBE39:
	.loc 1 255 49
	j	.L84
.L85:
	.loc 1 288 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 288 20
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L95
	.loc 1 288 37 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 288 34 discriminator 1
	lbu	a5,0(a5)
	.loc 1 288 31 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L95
.LBB41:
	.loc 1 290 19
	ld	a5,-24(s0)
	ble	a5,zero,.L96
	.loc 1 291 61
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
	.loc 1 292 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 293 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L97
	.loc 1 294 25
	lla	a0,.LC6
	call	puts
	.loc 1 295 25
	j	.L81
.L97:
	.loc 1 297 23
	sd	zero,-24(s0)
.L96:
	.loc 1 300 19
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 301 22
	j	.L98
.L99:
	.loc 1 302 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L98:
	.loc 1 301 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 301 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L99
	.loc 1 301 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 301 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L99
	.loc 1 305 21
	sw	zero,-56(s0)
	.loc 1 307 22
	j	.L100
.L102:
	.loc 1 308 67
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 308 59
	lw	a4,-56(s0)
	addiw	a3,a4,1
	sw	a3,-56(s0)
	.loc 1 308 65
	lbu	a3,0(a5)
	.loc 1 308 63
	lw	a2,-28(s0)
	li	a5,152
	mul	a5,a2,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	a3,-820(a5)
	.loc 1 310 23
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L100
	.loc 1 311 25
	lla	a0,.LC8
	call	puts
.LBB42:
	.loc 1 312 25
	li	a0,2
	li	a7,70
 #APP
# 312 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.L101:
	j	.L101
.L100:
.LBE42:
	.loc 1 307 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 307 75 discriminator 1
	bne	a5,zero,.L102
	.loc 1 307 39 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 307 36 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L102
	.loc 1 307 52 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 307 49 discriminator 2
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L102
	.loc 1 307 65 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 307 62 discriminator 3
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L102
	.loc 1 307 78 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 307 75 discriminator 4
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L102
	.loc 1 315 57
	lw	a4,-56(s0)
	lw	a3,-28(s0)
	li	a5,152
	mul	a5,a3,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	add	a5,a5,a4
	sb	zero,-820(a5)
	.loc 1 316 56
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	li	a4,1
	sw	a4,-788(a5)
	.loc 1 318 22
	j	.L103
.L104:
	.loc 1 319 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L103:
	.loc 1 318 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 318 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L104
	.loc 1 318 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 318 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L104
.LBE41:
	.loc 1 288 49
	j	.L84
.L95:
	.loc 1 322 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 322 20
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L107
	.loc 1 322 34 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 322 31 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L106
	.loc 1 323 22
	j	.L107
.L108:
	.loc 1 324 22
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L107:
	.loc 1 323 23
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 323 33
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L108
	.loc 1 323 36 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 323 33 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L108
	.loc 1 326 19
	ld	a5,-24(s0)
	ble	a5,zero,.L123
	.loc 1 327 61
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
	.loc 1 328 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 329 23
	sd	zero,-24(s0)
	.loc 1 330 23
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,6
	ble	a4,a5,.L123
	.loc 1 331 25
	lla	a0,.LC6
	call	puts
	.loc 1 332 25
	j	.L81
.L106:
	.loc 1 337 21
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 337 20
	bne	a5,zero,.L110
	.loc 1 339 20
	ld	a5,-24(s0)
	ble	a5,zero,.L111
	.loc 1 340 61
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
	.loc 1 341 28
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 342 23
	sd	zero,-24(s0)
.L111:
	.loc 1 345 48
	lw	a4,-28(s0)
	li	a5,152
	mul	a5,a4,a5
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-32(s0)
	sw	a4,-824(a5)
	.loc 1 346 29
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 347 17
	j	.L81
.L110:
	.loc 1 350 59
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 350 57
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
	.loc 1 351 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 352 18
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 354 19
	ld	a4,-24(s0)
	li	a5,15
	ble	a4,a5,.L112
	.loc 1 355 21
	lla	a0,.LC9
	call	puts
	.loc 1 356 21
	j	.L81
.L123:
	.loc 1 326 19
	nop
.L84:
	.loc 1 228 15
	j	.L112
.L81:
	.loc 1 362 12
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L113
	.loc 1 362 45 discriminator 1
	lw	a5,-840(s0)
	.loc 1 362 31 discriminator 1
	ble	a5,zero,.L113
	.loc 1 362 62 discriminator 2
	addi	a5,s0,-952
	lla	a1,.LC10
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 362 59 discriminator 1
	bne	a5,zero,.L113
.LBB43:
	.loc 1 363 25
	lla	a5,.LC11
	sd	a5,-64(s0)
	.loc 1 364 28
	lw	a4,-840(s0)
	.loc 1 364 16
	li	a5,1
	ble	a4,a5,.L114
	.loc 1 364 64 discriminator 1
	lbu	a5,-936(s0)
	.loc 1 364 42 discriminator 1
	beq	a5,zero,.L114
	.loc 1 365 24
	addi	a5,s0,-952
	addi	a5,a5,16
	sd	a5,-64(s0)
.L114:
.LBB44:
	.loc 1 367 22
	ld	a5,-64(s0)
	mv	a0,a5
	li	a7,80
 #APP
# 367 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE44:
	.loc 1 367 17
	sw	a5,-116(s0)
	.loc 1 368 16
	lw	a5,-116(s0)
	sext.w	a5,a5
	bge	a5,zero,.L124
	.loc 1 369 17
	lla	a0,.LC12
	call	puts
	.loc 1 371 13
	j	.L124
.L113:
.LBE43:
.LBB45:
	.loc 1 374 15
	li	a7,68
 #APP
# 374 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
	mv	a5,a0
.LBE45:
	.loc 1 374 13
	sw	a5,-120(s0)
	.loc 1 376 11
	lw	a5,-120(s0)
	sext.w	a5,a5
	bne	a5,zero,.L116
	.loc 1 377 13
	lw	a4,-28(s0)
	addi	a5,s0,-952
	mv	a2,a4
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L119
.L116:
.LBB46:
	.loc 1 380 21
	sw	zero,-68(s0)
	.loc 1 380 13
	j	.L117
.L118:
.LBB47:
.LBB48:
	.loc 1 382 17
	addi	a5,s0,-956
	mv	a0,a5
	li	a7,71
 #APP
# 382 "sh.c" 1
	ecall
# 0 "" 2
 #NO_APP
.LBE48:
	.loc 1 383 17
	lw	a5,-956(s0)
	mv	a1,a5
	lla	a0,.LC13
	call	printf
.LBE47:
	.loc 1 380 43 discriminator 3
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L117:
	.loc 1 380 27 discriminator 1
	lw	a5,-68(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L118
	j	.L119
.L122:
.LBE46:
	.loc 1 217 13
	nop
	j	.L119
.L124:
.LBB49:
	.loc 1 371 13
	nop
.LBE49:
.LBE33:
	.loc 1 171 14
	j	.L119
	.cfi_endproc
.LFE7:
	.size	main, .-main
.Letext0:
	.file 2 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0xe51
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x13
	.4byte	.LASF43
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x6
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x6
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x14
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x6
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x6
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x6
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x6
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x6
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x6
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x6
	.byte	0x8
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0x6
	.byte	0x10
	.byte	0x4
	.4byte	.LASF11
	.uleb128 0x6
	.byte	0x1
	.byte	0x8
	.4byte	.LASF12
	.uleb128 0x15
	.4byte	0x7b
	.uleb128 0xd
	.4byte	0x7b
	.uleb128 0x16
	.4byte	.LASF44
	.byte	0x2
	.byte	0x2a
	.byte	0xd
	.4byte	0x3c
	.uleb128 0xd
	.4byte	0x82
	.uleb128 0x8
	.4byte	0x7b
	.4byte	0xad
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x3f
	.byte	0
	.uleb128 0x3
	.4byte	.LASF20
	.byte	0xc
	.byte	0xd
	.4byte	0x9d
	.uleb128 0x9
	.byte	0x3
	.8byte	g_cmdline
	.uleb128 0x17
	.4byte	.LASF45
	.byte	0x98
	.byte	0x1
	.byte	0x32
	.byte	0x8
	.4byte	0x100
	.uleb128 0xb
	.4byte	.LASF13
	.byte	0x34
	.byte	0xa
	.4byte	0x100
	.byte	0
	.uleb128 0xb
	.4byte	.LASF14
	.byte	0x35
	.byte	0x9
	.4byte	0x3c
	.byte	0x70
	.uleb128 0xb
	.4byte	.LASF15
	.byte	0x36
	.byte	0xa
	.4byte	0x116
	.byte	0x74
	.uleb128 0xb
	.4byte	.LASF16
	.byte	0x37
	.byte	0x9
	.4byte	0x3c
	.byte	0x94
	.byte	0
	.uleb128 0x8
	.4byte	0x7b
	.4byte	0x116
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x6
	.uleb128 0x7
	.4byte	0x6d
	.byte	0xf
	.byte	0
	.uleb128 0x8
	.4byte	0x7b
	.4byte	0x126
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x1f
	.byte	0
	.uleb128 0xe
	.4byte	.LASF17
	.2byte	0x282
	.byte	0x5
	.4byte	0x3c
	.4byte	0x13d
	.uleb128 0x9
	.4byte	0x98
	.uleb128 0x18
	.byte	0
	.uleb128 0xe
	.4byte	.LASF18
	.2byte	0x2ac
	.byte	0x5
	.4byte	0x3c
	.4byte	0x158
	.uleb128 0x9
	.4byte	0x98
	.uleb128 0x9
	.4byte	0x98
	.byte	0
	.uleb128 0xe
	.4byte	.LASF19
	.2byte	0x2a5
	.byte	0x7
	.4byte	0x87
	.4byte	0x178
	.uleb128 0x9
	.4byte	0x87
	.uleb128 0x9
	.4byte	0x98
	.uleb128 0x9
	.4byte	0x3c
	.byte	0
	.uleb128 0x19
	.4byte	.LASF46
	.byte	0x2
	.2byte	0x297
	.byte	0x6
	.4byte	0x18b
	.uleb128 0x9
	.4byte	0x98
	.byte	0
	.uleb128 0xf
	.4byte	.LASF29
	.byte	0x9d
	.4byte	0x3c
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x5b2
	.uleb128 0x1
	.string	"buf"
	.byte	0x9e
	.byte	0xa
	.4byte	0x9d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"n"
	.byte	0x9f
	.byte	0xa
	.4byte	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0xa0
	.byte	0xa
	.4byte	0x5b2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"pid"
	.byte	0xa1
	.byte	0xb
	.4byte	0x8c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x12
	.4byte	.LASF22
	.byte	0xa2
	.4byte	0x3c
	.uleb128 0x12
	.4byte	.LASF23
	.byte	0xa3
	.4byte	0x3c
	.uleb128 0x3
	.4byte	.LASF24
	.byte	0xa5
	.byte	0x15
	.4byte	0x5c2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -952
	.uleb128 0x3
	.4byte	.LASF25
	.byte	0xa6
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.4byte	.LASF14
	.byte	0xa7
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.byte	0xa8
	.byte	0xb
	.4byte	0x87
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"m"
	.byte	0xa9
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x1
	.string	"gi"
	.byte	0xd6
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x2b2
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0xae
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"_a0"
	.byte	0xae
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xae
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xae
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xae
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.4byte	0x30b
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0xba
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"_a0"
	.byte	0xba
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xba
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xba
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xba
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0x364
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0xbb
	.byte	0xd
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.string	"_a0"
	.byte	0xbb
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xbb
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xbb
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xbb
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0x3bd
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0xc3
	.byte	0x11
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"_a0"
	.byte	0xc3
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xc3
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xc3
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xc3
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x416
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0xd4
	.byte	0x9
	.4byte	0x66
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"_a0"
	.byte	0xd4
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xd4
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xd4
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xd4
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.4byte	0x467
	.uleb128 0x5
	.string	"i"
	.2byte	0x10f
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x116
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x116
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.4byte	0x4b8
	.uleb128 0x5
	.string	"i"
	.2byte	0x131
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x138
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x138
	.byte	0x19
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x1a
	.4byte	.LLRL0
	.4byte	0x50e
	.uleb128 0xc
	.4byte	.LASF27
	.2byte	0x16b
	.byte	0x19
	.4byte	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.string	"rc"
	.2byte	0x16f
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x4
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x16f
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x16f
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.4byte	0x540
	.uleb128 0xc
	.4byte	.LASF28
	.2byte	0x176
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0xc
	.4byte	.LASF26
	.2byte	0x176
	.byte	0xf
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x4
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.uleb128 0x5
	.string	"k"
	.2byte	0x17c
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.uleb128 0xc
	.4byte	.LASF23
	.2byte	0x17d
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -956
	.uleb128 0x4
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x5
	.string	"_a0"
	.2byte	0x17e
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x5
	.string	"_a7"
	.2byte	0x17e
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x8
	.4byte	0x7b
	.4byte	0x5c2
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x8
	.4byte	0xc2
	.4byte	0x5d2
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x4
	.byte	0
	.uleb128 0xf
	.4byte	.LASF30
	.byte	0x3a
	.4byte	0x3c
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc7b
	.uleb128 0xa
	.string	"n"
	.byte	0x3a
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -340
	.uleb128 0x10
	.4byte	.LASF24
	.byte	0x3a
	.byte	0x29
	.4byte	0xc7b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x10
	.4byte	.LASF25
	.byte	0x3a
	.byte	0x37
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -344
	.uleb128 0x3
	.4byte	.LASF31
	.byte	0x3c
	.byte	0x9
	.4byte	0xc80
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.4byte	.LASF32
	.byte	0x3e
	.byte	0x16
	.4byte	0xc7b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0x927
	.uleb128 0x3
	.4byte	.LASF13
	.byte	0x41
	.byte	0xf
	.4byte	0xc90
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x1
	.string	"j"
	.byte	0x42
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x48
	.byte	0xe
	.4byte	0xca0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.string	"ei"
	.byte	0x49
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF34
	.byte	0x4a
	.byte	0x15
	.4byte	0x98
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.4byte	.LASF35
	.byte	0x4e
	.byte	0xf
	.4byte	0xcb0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x2
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.4byte	0x6c7
	.uleb128 0x1
	.string	"k"
	.byte	0x4b
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x2
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x6e9
	.uleb128 0x1
	.string	"k"
	.byte	0x4c
	.byte	0x12
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x839
	.uleb128 0x1
	.string	"fd"
	.byte	0x51
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x755
	.uleb128 0x1
	.string	"_a0"
	.byte	0x53
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x53
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x53
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x53
	.byte	0x16
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x79f
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
	.4byte	0x7cf
	.uleb128 0x1
	.string	"_a0"
	.byte	0x5b
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x5b
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x80c
	.uleb128 0x1
	.string	"_a0"
	.byte	0x5e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x5e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x5e
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"_a0"
	.byte	0x5f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x5f
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x883
	.uleb128 0x1
	.string	"_a0"
	.byte	0x63
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x63
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x63
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x63
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0x8fa
	.uleb128 0x3
	.4byte	.LASF36
	.byte	0x65
	.byte	0x12
	.4byte	0x9d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x1
	.string	"i"
	.byte	0x67
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
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
	.byte	0
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.string	"_a0"
	.byte	0x6c
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x6c
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x1
	.string	"pid"
	.byte	0x71
	.byte	0xd
	.4byte	0x3c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x977
	.uleb128 0x1
	.string	"_a0"
	.byte	0x6f
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x6f
	.byte	0x9
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x9a7
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0x71
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x3
	.4byte	.LASF26
	.byte	0x71
	.byte	0x13
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x9e4
	.uleb128 0x1
	.string	"_a0"
	.byte	0x74
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x74
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x74
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0xa14
	.uleb128 0x1
	.string	"_a0"
	.byte	0x75
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x75
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0xa44
	.uleb128 0x1
	.string	"_a0"
	.byte	0x76
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x76
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x4
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.uleb128 0x3
	.4byte	.LASF13
	.byte	0x7e
	.byte	0x13
	.4byte	0xc90
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x1
	.string	"j"
	.byte	0x7f
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x85
	.byte	0x12
	.4byte	0xca0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.string	"ei"
	.byte	0x86
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF34
	.byte	0x87
	.byte	0x19
	.4byte	0x98
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.4byte	.LASF35
	.byte	0x8b
	.byte	0x13
	.4byte	0xcb0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0xada
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7a
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0xb17
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x7b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7b
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0xb47
	.uleb128 0x1
	.string	"_a0"
	.byte	0x7c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x7c
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0xb69
	.uleb128 0x1
	.string	"k"
	.byte	0x88
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0xb8b
	.uleb128 0x1
	.string	"k"
	.byte	0x89
	.byte	0x16
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0xbd5
	.uleb128 0x1
	.string	"_a0"
	.byte	0x8d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x8d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x8d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x8d
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0xc4c
	.uleb128 0x3
	.4byte	.LASF36
	.byte	0x8f
	.byte	0x16
	.4byte	0x9d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x1
	.string	"i"
	.byte	0x91
	.byte	0x15
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x1
	.string	"_a0"
	.byte	0x94
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x94
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x94
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x94
	.byte	0x11
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x1
	.string	"_a0"
	.byte	0x96
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x96
	.byte	0xd
	.4byte	0x66
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0xc2
	.uleb128 0x8
	.4byte	0x3c
	.4byte	0xc90
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x8
	.4byte	0x87
	.4byte	0xca0
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x6
	.byte	0
	.uleb128 0x8
	.4byte	0x7b
	.4byte	0xcb0
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x4f
	.byte	0
	.uleb128 0x8
	.4byte	0x87
	.4byte	0xcc0
	.uleb128 0x7
	.4byte	0x6d
	.byte	0x1
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF47
	.byte	0x1
	.byte	0x24
	.byte	0xc
	.4byte	0x3c
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd5a
	.uleb128 0x10
	.4byte	.LASF37
	.byte	0x24
	.byte	0x1e
	.4byte	0x98
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
	.4byte	0xd2d
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
	.uleb128 0x4
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
	.uleb128 0xf
	.4byte	.LASF38
	.byte	0x1e
	.4byte	0x3c
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd87
	.uleb128 0xa
	.string	"c"
	.byte	0x1e
	.byte	0x13
	.4byte	0x7b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x11
	.4byte	.LASF39
	.byte	0x19
	.4byte	0x3c
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdb4
	.uleb128 0xa
	.string	"c"
	.byte	0x19
	.byte	0x13
	.4byte	0x7b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x11
	.4byte	.LASF40
	.byte	0x14
	.4byte	0x3c
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xde1
	.uleb128 0xa
	.string	"c"
	.byte	0x14
	.byte	0x13
	.4byte	0x7b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x11
	.4byte	.LASF41
	.byte	0xe
	.4byte	0x3c
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe1c
	.uleb128 0xa
	.string	"c"
	.byte	0xe
	.byte	0x13
	.4byte	0x7b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x3
	.4byte	.LASF42
	.byte	0x10
	.byte	0x9
	.4byte	0x3c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF48
	.byte	0x1
	.byte	0x5
	.byte	0x14
	.4byte	0x98
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xa
	.string	"s"
	.byte	0x5
	.byte	0x29
	.4byte	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
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
	.uleb128 0x7
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
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
	.uleb128 0xb
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
	.uleb128 0xb
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
	.uleb128 0xf
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
	.uleb128 0x10
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
	.uleb128 0x7a
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
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 9
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x16
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
	.uleb128 0x17
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
	.uleb128 0x18
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x19
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
	.uleb128 0x3c
	.uleb128 0x19
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
	.uleb128 .LBB43-.Ltext0
	.uleb128 .LBE43-.Ltext0
	.byte	0x4
	.uleb128 .LBB49-.Ltext0
	.uleb128 .LBE49-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF15:
	.string	"redirect_file"
.LASF18:
	.string	"strcmp"
.LASF21:
	.string	"buf2"
.LASF19:
	.string	"strncpy"
.LASF37:
	.string	"path"
.LASF17:
	.string	"printf"
.LASF8:
	.string	"long long unsigned int"
.LASF16:
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
.LASF35:
	.string	"envp"
.LASF29:
	.string	"main"
.LASF7:
	.string	"unsigned int"
.LASF32:
	.string	"command"
.LASF10:
	.string	"long unsigned int"
.LASF6:
	.string	"short unsigned int"
.LASF43:
	.string	"GNU C17 14.2.0 -mno-small-data-limit=0 -mcmodel=medany -mcmodel=medany -mno-small-data-limit=0 -mabi=lp64 -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -O0 -ffreestanding -fno-stack-protector -fno-builtin -fno-pie"
.LASF27:
	.string	"target"
.LASF41:
	.string	"xisalpha"
.LASF34:
	.string	"prefix"
.LASF39:
	.string	"xisdigit"
.LASF46:
	.string	"puts"
.LASF25:
	.string	"num_commands"
.LASF11:
	.string	"long double"
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
	.string	"sCommand"
.LASF3:
	.string	"short int"
.LASF36:
	.string	"abuf"
.LASF14:
	.string	"num_arg"
.LASF28:
	.string	"_num"
.LASF47:
	.string	"isdir"
.LASF12:
	.string	"char"
.LASF48:
	.string	"s_strchr"
.LASF23:
	.string	"status"
.LASF26:
	.string	"_ret"
.LASF22:
	.string	"argc"
.LASF44:
	.string	"pid_t"
.LASF13:
	.string	"argv"
.LASF42:
	.string	"result"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/Users/ab25cq/minux9-dev"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
