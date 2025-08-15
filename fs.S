	.file	"fs.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9" "fs.c"
	.local	vbase
	.comm	vbase,8,8
	.local	Q
	.comm	Q,4,4
	.local	desc
	.comm	desc,8,8
	.local	avail
	.comm	avail,8,8
	.local	used
	.comm	used,8,8
	.local	vq_area
	.comm	vq_area,8,8
	.local	aidx
	.comm	aidx,2,2
	.local	status_byte
	.comm	status_byte,1,4
	.local	dma_buf
	.comm	dma_buf,512,512
	.align	1
	.type	mw32, @function
mw32:
.LFB0:
	.file 1 "fs.c"
	.loc 1 105 59
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
	mv	a4,a2
	sw	a5,-28(s0)
	mv	a5,a4
	sw	a5,-32(s0)
	.loc 1 105 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 105 62
	mv	a4,a5
	.loc 1 105 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 105 91
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
.LFE0:
	.size	mw32, .-mw32
	.align	1
	.type	mr32, @function
mr32:
.LFB1:
	.loc 1 106 60
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
	.loc 1 106 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 106 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 106 97
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
	.size	mr32, .-mr32
	.section	.rodata
	.align	3
.LC0:
	.string	"virtio-blk not found\n"
	.align	3
.LC1:
	.string	"not legacy mmio\n"
	.align	3
.LC2:
	.string	"FEATURES_OK rejected\n"
	.align	3
.LC3:
	.string	"unsupported queue size\n"
	.align	3
.LC4:
	.string	"kalloc_pages failed\n"
	.text
	.align	1
	.globl	virtio_blk_init
	.type	virtio_blk_init, @function
virtio_blk_init:
.LFB2:
	.loc 1 109 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
.LBB2:
	.loc 1 110 13
	sw	zero,-20(s0)
	.loc 1 110 5
	j	.L5
.L9:
.LBB3:
	.loc 1 111 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 111 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 112 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 112 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 113 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 113 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 113 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 113 58
	j	.L8
.L22:
	.loc 1 112 47
	nop
.L7:
.LBE3:
	.loc 1 110 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 110 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 115 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 115 7
	bne	a5,zero,.L10
	.loc 1 115 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 115 54
	j	.L11
.L10:
	.loc 1 116 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 116 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 116 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 116 70
	j	.L13
.L12:
	.loc 1 118 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 119 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 121 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 123 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 125 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 125 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 126 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 127 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 127 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 127 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 128 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 128 46
	j	.L15
.L14:
	.loc 1 131 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 132 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 133 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 134 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 135 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 136 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 137 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 137 7
	beq	a5,zero,.L17
	.loc 1 137 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 137 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 137 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 137 65
	j	.L19
.L18:
	.loc 1 139 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 139 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 140 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 140 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 141 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 141 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 142 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 142 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 143 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 143 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 145 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 145 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 146 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 146 8
	bne	a5,zero,.L20
	.loc 1 146 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 146 57
	j	.L21
.L20:
	.loc 1 147 5
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-88(s0)
	sext.w	a5,a5
	slliw	a5,a5,12
	sext.w	a5,a5
	mv	a2,a5
	li	a1,0
	mv	a0,a4
	call	memset
	.loc 1 149 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 150 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 150 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 151 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 151 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 153 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 153 14
	sd	a5,-96(s0)
	.loc 1 154 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 155 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 155 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 155 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 157 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 158 1
	nop
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
	.size	virtio_blk_init, .-virtio_blk_init
	.align	1
	.type	set_flags, @function
set_flags:
.LFB3:
	.loc 1 160 66
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
	mv	a3,a1
	mv	a4,a2
	sh	a5,-18(s0)
	mv	a5,a3
	sh	a5,-20(s0)
	mv	a5,a4
	sh	a5,-22(s0)
	.loc 1 161 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 161 19
	lhu	a4,-18(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-18(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 162 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 162 19
	lhu	a4,-20(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-20(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 163 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 163 19
	lhu	a4,-22(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-22(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 164 1
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
.LFE3:
	.size	set_flags, .-set_flags
	.local	req
	.comm	req,16,8
	.align	1
	.type	virtio_blk_read, @function
virtio_blk_read:
.LFB4:
	.loc 1 169 1
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
	.loc 1 170 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 171 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 172 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 173 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 175 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 175 20
	lla	a4,req
	.loc 1 175 18
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 175 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 175 51
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,16
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 175 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 175 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 176 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 176 20
	lla	a4,dma_buf
	.loc 1 176 18
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 176 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 176 51
	lbu	a4,8(a5)
	andi	a4,a4,0
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 176 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 176 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 177 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 177 20
	lla	a4,status_byte
	.loc 1 177 18
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 177 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 177 57
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 179 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 181 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 181 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 181 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 182 5
	fence	rw,rw
	.loc 1 183 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 183 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 183 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 183 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 185 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 187 10
	j	.L25
.L26:
	.loc 1 188 9
	fence	rw,rw
.L25:
	.loc 1 187 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 190 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 191 1
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
.LFE4:
	.size	virtio_blk_read, .-virtio_blk_read
	.align	1
	.globl	read_block
	.type	read_block, @function
read_block:
.LFB5:
	.loc 1 194 1
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
	sd	a1,-32(s0)
	sw	a5,-20(s0)
	.loc 1 195 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
	.loc 1 196 1
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
.LFE5:
	.size	read_block, .-read_block
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB6:
	.loc 1 205 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 206 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 207 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 208 1
	nop
	ld	ra,8(sp)
	.cfi_restore 1
	ld	s0,0(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB7:
	.loc 1 210 53
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	sw	a5,-52(s0)
	.loc 1 211 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L30
	.loc 1 211 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 211 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L31
.L30:
	.loc 1 212 9
	li	a2,68
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 213 9
	j	.L29
.L31:
	.loc 1 217 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 219 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 219 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 219 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 219 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 221 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 221 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 221 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 223 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 224 26
	lwu	a4,-28(s0)
	.loc 1 224 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 225 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L29:
	.loc 1 226 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	read_inode, .-read_inode
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB8:
	.loc 1 228 64
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	sd	a0,-88(s0)
	mv	a5,a1
	sw	a5,-92(s0)
	.loc 1 229 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L34
	.loc 1 231 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L35
.L34:
	.loc 1 232 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L36
.LBB4:
	.loc 1 234 18
	ld	a5,-88(s0)
	lw	a5,60(a5)
	sw	a5,-60(s0)
	.loc 1 235 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L37
	.loc 1 235 39 discriminator 1
	li	a5,0
	.loc 1 235 39 is_stmt 0
	j	.L35
.L37:
	.loc 1 236 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 237 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 238 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 238 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L35
.L36:
.LBE4:
.LBB5:
	.loc 1 241 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 242 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 243 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 245 18
	ld	a5,-88(s0)
	lw	a5,64(a5)
	sw	a5,-28(s0)
	.loc 1 246 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L38
	.loc 1 246 40 discriminator 1
	li	a5,0
	.loc 1 246 40 is_stmt 0
	j	.L35
.L38:
	.loc 1 248 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 249 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 250 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 250 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 251 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L39
	.loc 1 251 36 discriminator 1
	li	a5,0
	.loc 1 251 36 is_stmt 0
	j	.L35
.L39:
	.loc 1 254 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 255 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 256 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L35:
.LBE5:
	.loc 1 258 1
	mv	a0,a5
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB9:
	.loc 1 260 81
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	mv	a5,a1
	sd	a2,-72(s0)
	mv	a4,a3
	sw	a5,-60(s0)
	mv	a5,a4
	sw	a5,-64(s0)
	.loc 1 261 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 262 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 263 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 265 11
	j	.L41
.L45:
.LBB6:
	.loc 1 266 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 267 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 268 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 269 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L42
	.loc 1 269 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L42:
	.loc 1 271 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 272 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L43
	.loc 1 273 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L44
.L43:
	.loc 1 275 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 276 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L44:
	.loc 1 278 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 279 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 280 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L41:
.LBE6:
	.loc 1 265 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L45
	.loc 1 282 1
	nop
	nop
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE9:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB10:
	.loc 1 284 62
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	sd	a1,-80(s0)
	.loc 1 285 14
	sw	zero,-20(s0)
	.loc 1 288 11
	j	.L47
.L53:
.LBB7:
	.loc 1 289 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 290 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 291 13
	li	a5,32
	sw	a5,-36(s0)
.LBB8:
	.loc 1 292 18
	sw	zero,-24(s0)
	.loc 1 292 9
	j	.L48
.L52:
	.loc 1 293 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 293 22
	lhu	a5,0(a5)
	.loc 1 293 16
	beq	a5,zero,.L55
	.loc 1 294 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 294 34
	addi	a4,a5,2
	.loc 1 294 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 295 29
	sb	zero,-42(s0)
	.loc 1 296 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 296 16 discriminator 1
	bne	a5,zero,.L50
	.loc 1 297 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 297 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L54
.L55:
	.loc 1 293 34
	nop
.L50:
	.loc 1 292 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L48:
	.loc 1 292 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L52
.LBE8:
	.loc 1 300 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L47:
.LBE7:
	.loc 1 288 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 288 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L53
	.loc 1 302 12
	li	a5,0
.L54:
	.loc 1 303 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE10:
	.size	dir_lookup, .-dir_lookup
	.section	.rodata
	.align	3
.LC5:
	.string	"/"
	.text
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB11:
	.loc 1 305 40
	.cfi_startproc
	addi	sp,sp,-224
	.cfi_def_cfa_offset 224
	sd	ra,216(sp)
	sd	s0,208(sp)
	sd	s1,200(sp)
	sd	s2,192(sp)
	sd	s3,184(sp)
	sd	s4,176(sp)
	sd	s5,168(sp)
	sd	s6,160(sp)
	sd	s7,152(sp)
	sd	s8,144(sp)
	sd	s9,136(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	.cfi_offset 18, -32
	.cfi_offset 19, -40
	.cfi_offset 20, -48
	.cfi_offset 21, -56
	.cfi_offset 22, -64
	.cfi_offset 23, -72
	.cfi_offset 24, -80
	.cfi_offset 25, -88
	addi	s0,sp,224
	.cfi_def_cfa 8, 0
	sd	a0,-216(s0)
	.loc 1 305 40
	mv	a5,sp
	mv	s1,a5
	.loc 1 306 13
	ld	a5,-216(s0)
	lbu	a5,0(a5)
	.loc 1 306 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L57
	.loc 1 306 32 discriminator 1
	li	a5,0
	.loc 1 306 32 is_stmt 0
	j	.L58
.L57:
	.loc 1 307 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-216(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 307 8 discriminator 1
	bne	a5,zero,.L59
	.loc 1 308 16
	li	a5,1
	j	.L58
.L59:
	.loc 1 312 5
	addi	a5,s0,-200
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 313 12
	lhu	a5,-200(s0)
	.loc 1 313 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L60
	.loc 1 313 35 discriminator 1
	li	a5,0
	.loc 1 313 35 is_stmt 0
	j	.L58
.L60:
	.loc 1 315 15 is_stmt 1
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 315 27 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 315 10 discriminator 1
	addi	a4,a4,-1
	sd	a4,-120(s0)
	mv	a4,a5
	mv	s8,a4
	li	s9,0
	srli	a4,s8,61
	slli	s5,s9,3
	or	s5,a4,s5
	slli	s4,s8,3
	mv	a4,a5
	mv	s6,a4
	li	s7,0
	srli	a4,s6,61
	slli	s3,s7,3
	or	s3,a4,s3
	slli	s2,s6,3
	addi	a5,a5,15
	srli	a5,a5,4
	slli	a5,a5,4
	sub	sp,sp,a5
	mv	a5,sp
	sd	a5,-128(s0)
	.loc 1 316 25
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 316 5 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a2,a5
	ld	a1,-216(s0)
	ld	a0,-128(s0)
	call	strncpy
	.loc 1 317 19
	lla	a1,.LC5
	ld	a0,-128(s0)
	call	strtok
	sd	a0,-104(s0)
	.loc 1 318 14
	li	a5,1
	sw	a5,-108(s0)
	.loc 1 320 11
	j	.L61
.L64:
.LBB9:
	.loc 1 321 16
	lhu	a5,-200(s0)
	.loc 1 321 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L62
	.loc 1 321 39 discriminator 1
	li	a5,0
	.loc 1 321 39 is_stmt 0
	j	.L58
.L62:
	.loc 1 322 30 is_stmt 1
	addi	a5,s0,-200
	ld	a1,-104(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-132(s0)
	.loc 1 323 12
	lw	a5,-132(s0)
	sext.w	a5,a5
	bne	a5,zero,.L63
	.loc 1 323 36 discriminator 1
	li	a5,0
	.loc 1 323 36 is_stmt 0
	j	.L58
.L63:
	.loc 1 324 9 is_stmt 1
	addi	a4,s0,-200
	lw	a5,-132(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 325 22
	lw	a5,-132(s0)
	sw	a5,-108(s0)
	.loc 1 326 17
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-104(s0)
.L61:
.LBE9:
	.loc 1 320 18
	ld	a5,-104(s0)
	bne	a5,zero,.L64
	.loc 1 328 12
	lw	a5,-108(s0)
.L58:
	mv	sp,s1
	.loc 1 329 1
	mv	a0,a5
	addi	sp,s0,-224
	.cfi_def_cfa 2, 224
	ld	ra,216(sp)
	.cfi_restore 1
	ld	s0,208(sp)
	.cfi_restore 8
	ld	s1,200(sp)
	.cfi_restore 9
	ld	s2,192(sp)
	.cfi_restore 18
	ld	s3,184(sp)
	.cfi_restore 19
	ld	s4,176(sp)
	.cfi_restore 20
	ld	s5,168(sp)
	.cfi_restore 21
	ld	s6,160(sp)
	.cfi_restore 22
	ld	s7,152(sp)
	.cfi_restore 23
	ld	s8,144(sp)
	.cfi_restore 24
	ld	s9,136(sp)
	.cfi_restore 25
	addi	sp,sp,224
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE11:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC6:
	.string	"== i-node %u ==\n"
	.align	3
.LC7:
	.string	"  type  = %u\n"
	.align	3
.LC8:
	.string	"  size  = %u\n"
	.align	3
.LC9:
	.string	"  addrs ="
	.align	3
.LC10:
	.string	" %u"
	.align	3
.LC11:
	.string	" [indirect %u]"
	.align	3
.LC12:
	.string	" [double-indirect %u]"
	.align	3
.LC13:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB12:
	.loc 1 331 32
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
	sw	a5,-100(s0)
	.loc 1 333 5
	addi	a4,s0,-88
	lw	a5,-100(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 334 5
	lw	a5,-100(s0)
	mv	a1,a5
	lla	a0,.LC6
	call	printf
	.loc 1 335 32
	lhu	a5,-88(s0)
	.loc 1 335 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 336 5
	lw	a5,-80(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 337 5
	lla	a0,.LC9
	call	printf
.LBB10:
	.loc 1 338 14
	sw	zero,-20(s0)
	.loc 1 338 5
	j	.L67
.L69:
	.loc 1 339 21
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 339 12
	beq	a5,zero,.L68
	.loc 1 339 31 discriminator 1
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
.L68:
	.loc 1 338 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L67:
	.loc 1 338 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L69
.LBE10:
	.loc 1 341 17
	lw	a5,-28(s0)
	.loc 1 341 8
	beq	a5,zero,.L70
	.loc 1 342 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
.L70:
	.loc 1 344 17
	lw	a5,-24(s0)
	.loc 1 344 8
	beq	a5,zero,.L71
	.loc 1 345 9
	lw	a5,-24(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L71:
	.loc 1 347 5
	lla	a0,.LC13
	call	printf
	.loc 1 348 1
	nop
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
	.size	dump_inode, .-dump_inode
	.globl	gPipes
	.bss
	.align	3
	.type	gPipes, @object
	.size	gPipes, 13056
gPipes:
	.zero	13056
	.globl	gFiles
	.align	3
	.type	gFiles, @object
	.size	gFiles, 18432
gFiles:
	.zero	18432
	.globl	gFreePipes
	.section	.sbss,"aw",@nobits
	.align	3
	.type	gFreePipes, @object
	.size	gFreePipes, 8
gFreePipes:
	.zero	8
	.globl	gFreeFiles
	.align	3
	.type	gFreeFiles, @object
	.size	gFreeFiles, 8
gFreeFiles:
	.zero	8
	.text
	.align	1
	.globl	file_system_init
	.type	file_system_init, @function
file_system_init:
.LFB13:
	.loc 1 365 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 366 5
	li	a5,12288
	addi	a2,a5,768
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 367 5
	li	a5,20480
	addi	a2,a5,-2048
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB11:
	.loc 1 369 13
	sw	zero,-20(s0)
	.loc 1 369 5
	j	.L73
.L74:
.LBB12:
	.loc 1 370 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 372 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 373 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE12:
	.loc 1 369 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L73:
	.loc 1 369 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L74
.LBE11:
.LBB13:
	.loc 1 376 13
	sw	zero,-24(s0)
	.loc 1 376 5
	j	.L75
.L76:
.LBB14:
	.loc 1 377 22
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,3
	add	a5,a5,a4
	slli	a5,a5,7
	lla	a4,gFiles
	add	a5,a5,a4
	sd	a5,-32(s0)
	.loc 1 379 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,112(a5)
	.loc 1 380 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE14:
	.loc 1 376 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L75:
	.loc 1 376 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L76
.LBE13:
	.loc 1 382 1
	nop
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
.LFE13:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB14:
	.loc 1 385 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 386 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 388 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 388 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 390 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 392 12
	ld	a5,-24(s0)
	.loc 1 393 1
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
.LFE14:
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB15:
	.loc 1 396 1
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
	.loc 1 397 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 398 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 399 1
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
.LFE15:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB16:
	.loc 1 402 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 403 18
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 405 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,112(a5)
	.loc 1 405 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 407 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 409 12
	ld	a5,-24(s0)
	.loc 1 410 1
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
.LFE16:
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB17:
	.loc 1 413 1
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
	.loc 1 414 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,112(a5)
	.loc 1 415 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 416 1
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
.LFE17:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB18:
	.loc 1 422 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 423 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 425 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 426 8
	ld	a5,-24(s0)
	bne	a5,zero,.L84
	.loc 1 427 16
	li	a5,0
	j	.L85
.L84:
	.loc 1 428 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 429 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 430 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 431 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 432 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 433 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 435 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 436 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 438 12
	ld	a5,-24(s0)
.L85:
	.loc 1 439 1
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
.LFE18:
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB19:
	.loc 1 444 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 445 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 447 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 449 39
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 449 32
	ld	a5,-24(s0)
	sd	a4,120(a5)
	.loc 1 450 11
	ld	a5,-24(s0)
	lw	a5,1144(a5)
	.loc 1 450 30
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-24(s0)
	sw	a4,1144(a5)
	.loc 1 452 12
	ld	a5,-24(s0)
	.loc 1 453 1
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
.LFE19:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB20:
	.loc 1 456 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	sd	s1,24(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	.loc 1 457 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 459 21
	call	new_file_table
	mv	a4,a0
	.loc 1 459 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 461 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 461 25
	sw	zero,0(a5)
	.loc 1 462 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 462 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 464 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 464 21
	call	new_file_table
	mv	a5,a0
	.loc 1 464 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 466 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 466 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 467 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 467 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 469 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 469 21
	call	new_file_table
	mv	a5,a0
	.loc 1 469 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 471 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 471 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 472 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 472 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 473 1
	nop
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	ld	s1,24(sp)
	.cfi_restore 9
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE20:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB21:
	.loc 1 476 1
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
	sw	a5,-36(s0)
	.loc 1 477 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 479 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 479 8
	beq	a5,zero,.L90
	.loc 1 479 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 479 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 479 24 discriminator 1
	beq	a5,zero,.L90
	.loc 1 480 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 480 26
	ld	a5,88(a5)
	.loc 1 480 11
	beq	a5,zero,.L90
	.loc 1 481 20
	li	a5,1
	j	.L91
.L90:
	.loc 1 485 12
	li	a5,0
.L91:
	.loc 1 486 1
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
.LFE21:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB22:
	.loc 1 489 1
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
	sw	a5,-36(s0)
	.loc 1 490 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 491 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 491 8
	beq	a5,zero,.L93
	.loc 1 491 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 491 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 491 24 discriminator 1
	beq	a5,zero,.L93
	.loc 1 492 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 492 26
	lw	a5,0(a5)
	.loc 1 492 11
	bne	a5,zero,.L93
	.loc 1 493 20
	li	a5,1
	j	.L94
.L93:
	.loc 1 497 12
	li	a5,0
.L94:
	.loc 1 498 1
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
.LFE22:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB23:
	.loc 1 501 1
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
	sw	a5,-36(s0)
	.loc 1 502 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 504 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 504 8
	beq	a5,zero,.L96
	.loc 1 504 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 504 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 504 24 discriminator 1
	beq	a5,zero,.L96
	.loc 1 505 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 505 26
	lw	a4,0(a5)
	.loc 1 505 11
	li	a5,1
	bne	a4,a5,.L96
	.loc 1 506 20
	li	a5,1
	j	.L97
.L96:
	.loc 1 510 12
	li	a5,0
.L97:
	.loc 1 511 1
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
.LFE23:
	.size	is_stdout, .-is_stdout
	.section	.rodata
	.align	3
.LC14:
	.string	"PIPE LINKED MAX"
	.text
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB24:
	.loc 1 513 36
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	sd	s1,56(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	sd	a1,-80(s0)
	.loc 1 514 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 516 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB15:
	.loc 1 518 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 518 5
	j	.L99
.L104:
	.loc 1 519 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 519 12
	bne	a5,zero,.L100
	.loc 1 520 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 520 29
	call	new_file_table
	mv	a5,a0
	.loc 1 520 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 522 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 522 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 523 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 523 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 524 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 524 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 525 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 525 34
	sw	zero,76(a5)
	.loc 1 526 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 526 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 527 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 527 38
	li	a4,1
	sw	a4,100(a5)
	.loc 1 528 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 528 41
	sw	zero,104(a5)
	.loc 1 529 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 531 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 531 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 532 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 532 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 532 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 532 66
	ld	a4,0(a4)
	.loc 1 532 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 533 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 533 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 535 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 535 15
	li	a5,31
	ble	a4,a5,.L111
	.loc 1 536 17
	lla	a0,.LC14
	call	puts
.L102:
	.loc 1 537 22
	j	.L102
.L100:
	.loc 1 518 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L99:
	.loc 1 518 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L104
	j	.L103
.L111:
	.loc 1 541 13
	nop
.L103:
.LBE15:
.LBB16:
	.loc 1 544 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 544 5
	j	.L105
.L110:
	.loc 1 545 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 545 12
	bne	a5,zero,.L106
	.loc 1 546 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 546 29
	call	new_file_table
	mv	a5,a0
	.loc 1 546 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 548 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 548 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 549 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 549 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 550 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 550 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 552 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 552 34
	sw	zero,76(a5)
	.loc 1 553 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 553 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 554 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 554 39
	li	a4,1
	sw	a4,104(a5)
	.loc 1 555 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 555 38
	sw	zero,100(a5)
	.loc 1 556 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 558 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 558 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 559 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 559 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 559 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 559 66
	ld	a4,0(a4)
	.loc 1 559 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 560 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 560 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 562 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 562 15
	li	a5,31
	ble	a4,a5,.L112
	.loc 1 563 17
	lla	a0,.LC14
	call	puts
.L108:
	.loc 1 564 22
	j	.L108
.L106:
	.loc 1 544 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L105:
	.loc 1 544 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L110
.LBE16:
	.loc 1 571 1
	j	.L113
.L112:
.LBB17:
	.loc 1 568 13
	nop
.L113:
.LBE17:
	.loc 1 571 1
	nop
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	ld	s1,56(sp)
	.cfi_restore 9
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE24:
	.size	pipe_open, .-pipe_open
	.section	.rodata
	.align	3
.LC15:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB25:
	.loc 1 581 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	mv	a4,a2
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 1 582 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 584 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 584 8
	bne	a5,zero,.L115
	.loc 1 585 9
	lla	a0,.LC15
	call	panic
.L115:
	.loc 1 588 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L116
	.loc 1 588 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L117
.L116:
	.loc 1 589 9
	lla	a0,.LC15
	call	panic
.L117:
	.loc 1 591 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 591 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 593 7
	ld	a5,-32(s0)
	bne	a5,zero,.L119
	.loc 1 594 9
	lla	a0,.LC15
	call	panic
	.loc 1 597 11
	j	.L119
.L121:
	.loc 1 598 8
	call	yield
.L119:
	.loc 1 597 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 597 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 597 34
	bne	a4,a5,.L120
	.loc 1 597 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 597 34 discriminator 1
	bne	a5,zero,.L121
.L120:
	.loc 1 601 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 601 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 601 8
	bne	a4,a5,.L122
	.loc 1 601 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 601 31 discriminator 1
	bne	a5,zero,.L122
	.loc 1 602 16
	li	a5,0
	j	.L123
.L122:
	.loc 1 606 18
	sw	zero,-36(s0)
.LBB18:
	.loc 1 607 23
	sw	zero,-40(s0)
	.loc 1 607 5
	j	.L124
.L127:
	.loc 1 609 12
	call	yield
.L125:
	.loc 1 608 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 608 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 608 38
	bne	a4,a5,.L126
	.loc 1 608 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 608 38 discriminator 1
	bne	a5,zero,.L127
.L126:
	.loc 1 613 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 613 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 613 12
	bne	a4,a5,.L128
	.loc 1 613 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 613 35 discriminator 1
	beq	a5,zero,.L131
.L128:
	.loc 1 617 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 617 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 617 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 617 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 617 17
	sb	a4,0(a5)
	.loc 1 618 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 618 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 621 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 607 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L124:
	.loc 1 607 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 607 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L129
	.loc 1 607 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 607 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 607 36 discriminator 3
	bltu	a4,a5,.L125
	j	.L129
.L131:
	.loc 1 614 13
	nop
.L129:
.LBE18:
	.loc 1 625 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L123:
	.loc 1 626 1
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
.LFE25:
	.size	piperead, .-piperead
	.section	.rodata
	.align	3
.LC16:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB26:
	.loc 1 631 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	mv	a4,a2
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 1 632 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 634 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 634 8
	bne	a5,zero,.L133
	.loc 1 635 9
	lla	a0,.LC16
	call	panic
.L133:
	.loc 1 638 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L134
	.loc 1 638 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L135
.L134:
	.loc 1 639 9
	lla	a0,.LC16
	call	panic
.L135:
	.loc 1 641 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 641 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 643 7
	ld	a5,-32(s0)
	bne	a5,zero,.L136
	.loc 1 644 9
	lla	a0,.LC16
	call	panic
.L136:
.LBB19:
	.loc 1 647 23
	sw	zero,-36(s0)
	.loc 1 647 5
	j	.L137
.L140:
	.loc 1 650 11
	call	yield
.L138:
	.loc 1 649 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 649 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 649 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 649 48
	li	a5,512
	bne	a4,a5,.L139
	.loc 1 649 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 649 48 discriminator 1
	bne	a5,zero,.L140
.L139:
	.loc 1 653 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 653 10
	bne	a5,zero,.L141
	.loc 1 655 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 655 30
	ble	a5,zero,.L142
	.loc 1 655 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 655 30
	j	.L144
.L142:
	.loc 1 655 30 discriminator 2
	li	a5,-1
	.loc 1 655 30
	j	.L144
.L141:
	.loc 1 657 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 657 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 657 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 657 44
	lbu	a4,0(a5)
	.loc 1 657 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 658 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 658 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 647 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L137:
	.loc 1 647 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L138
.LBE19:
	.loc 1 665 12
	lw	a5,-56(s0)
.L144:
	.loc 1 666 1
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
.LFE26:
	.size	pipewrite, .-pipewrite
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB27:
	.loc 1 673 31
	.cfi_startproc
	addi	sp,sp,-176
	.cfi_def_cfa_offset 176
	sd	ra,168(sp)
	sd	s0,160(sp)
	sd	s1,152(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,176
	.cfi_def_cfa 8, 0
	sd	a0,-168(s0)
	.loc 1 674 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 678 12
	ld	a5,-168(s0)
	lbu	a5,0(a5)
	.loc 1 678 7
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L147
	.loc 1 679 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncpy
	j	.L148
.L147:
	.loc 1 682 9
	addi	a5,s0,-88
	li	a2,32
	lla	a1,.LC5
	mv	a0,a5
	call	strncpy
	.loc 1 683 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncat
.L148:
	.loc 1 686 21
	addi	a5,s0,-88
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 687 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L149
	.loc 1 688 16
	li	a5,-1
	j	.L155
.L149:
	.loc 1 692 5
	addi	a4,s0,-160
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 693 11
	lhu	a5,-160(s0)
	.loc 1 693 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L151
	.loc 1 693 32 discriminator 1
	lhu	a5,-160(s0)
	.loc 1 693 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L151
	.loc 1 693 55 discriminator 2
	li	a5,-1
	.loc 1 693 55 is_stmt 0
	j	.L155
.L151:
.LBB20:
	.loc 1 695 14 is_stmt 1
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 695 5
	j	.L152
.L154:
	.loc 1 696 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 696 12
	bne	a5,zero,.L153
	.loc 1 697 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 697 29
	call	new_file_table
	mv	a5,a0
	.loc 1 697 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 699 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 699 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 700 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 700 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 701 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 701 34
	lw	a4,-52(s0)
	sw	a4,4(a5)
	.loc 1 702 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 702 34
	ld	t1,-160(s0)
	ld	a7,-152(s0)
	ld	a6,-144(s0)
	ld	a0,-136(s0)
	ld	a1,-128(s0)
	ld	a2,-120(s0)
	ld	a3,-112(s0)
	ld	a4,-104(s0)
	sd	t1,8(a5)
	sd	a7,16(a5)
	sd	a6,24(a5)
	sd	a0,32(a5)
	sd	a1,40(a5)
	sd	a2,48(a5)
	sd	a3,56(a5)
	sd	a4,64(a5)
	lw	a4,-96(s0)
	sw	a4,72(a5)
	.loc 1 703 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 703 34
	sw	zero,76(a5)
	.loc 1 704 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 704 40
	sw	zero,100(a5)
	.loc 1 705 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 705 41
	sw	zero,104(a5)
	.loc 1 706 20
	lw	a5,-36(s0)
	j	.L155
.L153:
	.loc 1 695 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L152:
	.loc 1 695 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L154
.LBE20:
	.loc 1 709 12
	li	a5,-1
.L155:
	.loc 1 710 1
	mv	a0,a5
	ld	ra,168(sp)
	.cfi_restore 1
	ld	s0,160(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 176
	ld	s1,152(sp)
	.cfi_restore 9
	addi	sp,sp,176
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE27:
	.size	fs_open, .-fs_open
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB28:
	.loc 1 714 50
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	sd	a2,-72(s0)
	sw	a5,-52(s0)
	.loc 1 715 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 717 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 717 7
	bne	a5,zero,.L157
	.loc 1 718 16
	li	a5,-1
	j	.L158
.L157:
	.loc 1 721 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 722 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L159
	.loc 1 722 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L160
.L159:
	.loc 1 723 16
	li	a5,-1
	j	.L158
.L160:
	.loc 1 725 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 725 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 726 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 726 41
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 726 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 727 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L161
	.loc 1 727 32 discriminator 1
	li	a5,0
	.loc 1 727 32 is_stmt 0
	j	.L158
.L161:
	.loc 1 729 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L162
	mv	a5,a4
.L162:
	.loc 1 729 14
	sw	a5,-48(s0)
	.loc 1 730 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,76(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 731 6
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 731 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,76(a5)
	.loc 1 732 12
	lw	a5,-48(s0)
.L158:
	.loc 1 733 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE28:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB29:
	.loc 1 735 25
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 736 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 738 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 738 7
	bne	a5,zero,.L164
	.loc 1 739 16
	li	a5,-1
	j	.L165
.L164:
	.loc 1 742 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 743 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L166
	.loc 1 743 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L166
	.loc 1 743 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 743 61 discriminator 2
	lw	a5,80(a5)
	.loc 1 743 42 discriminator 2
	bne	a5,zero,.L167
.L166:
	.loc 1 744 16
	li	a5,-1
	j	.L165
.L167:
	.loc 1 746 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 746 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 747 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L165:
	.loc 1 748 1
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
.LFE29:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB30:
	.loc 1 753 36
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	mv	a5,a1
	sw	a5,-60(s0)
	.loc 1 754 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 756 8
	ld	a5,-56(s0)
	blt	a5,zero,.L169
	.loc 1 756 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,15
	ble	a4,a5,.L170
.L169:
	.loc 1 756 48 discriminator 3
	li	a5,-1
	.loc 1 756 48 is_stmt 0
	j	.L171
.L170:
	.loc 1 757 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 757 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 758 8
	ld	a5,-40(s0)
	bne	a5,zero,.L172
	.loc 1 758 27 discriminator 1
	li	a5,-1
	.loc 1 758 27 is_stmt 0
	j	.L171
.L172:
	.loc 1 761 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 761 12
	sd	zero,0(a5)
	.loc 1 764 6
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 764 12
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,80(a5)
	.loc 1 767 10
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 767 8
	ble	a5,zero,.L173
	.loc 1 768 16
	li	a5,0
	j	.L171
.L173:
	.loc 1 773 19
	ld	a5,-40(s0)
	ld	a5,88(a5)
	sd	a5,-48(s0)
	.loc 1 774 8
	ld	a5,-48(s0)
	beq	a5,zero,.L174
	.loc 1 775 14
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 775 12
	beq	a5,zero,.L175
	.loc 1 775 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 775 27 discriminator 1
	ble	a5,zero,.L175
	.loc 1 775 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 775 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 775 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 775 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 775 51 discriminator 2
	bne	a5,zero,.L175
	.loc 1 775 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L175:
	.loc 1 776 14
	ld	a5,-40(s0)
	lw	a5,104(a5)
	.loc 1 776 12
	beq	a5,zero,.L176
	.loc 1 776 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 776 27 discriminator 1
	ble	a5,zero,.L176
	.loc 1 776 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 776 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 776 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 776 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 776 51 discriminator 2
	bne	a5,zero,.L176
	.loc 1 776 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L176:
	.loc 1 779 16
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 779 13
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 779 12
	ld	a5,-48(s0)
	sw	a4,536(a5)
	.loc 1 779 16
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 779 12
	bne	a5,zero,.L174
.LBB21:
	.loc 1 781 22
	sw	zero,-20(s0)
	.loc 1 781 13
	j	.L177
.L179:
	.loc 1 782 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 782 20
	beq	a5,zero,.L178
	.loc 1 782 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 782 64 discriminator 1
	sd	zero,88(a5)
.L178:
	.loc 1 781 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L177:
	.loc 1 781 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 781 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L179
.LBE21:
	.loc 1 784 13
	ld	a0,-48(s0)
	call	free_pipe
.L174:
	.loc 1 789 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 790 12
	li	a5,0
.L171:
	.loc 1 791 1
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
.LFE30:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_close_pipe
	.type	fs_close_pipe, @function
fs_close_pipe:
.LFB31:
	.loc 1 906 28
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	.loc 1 907 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 909 18
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 909 7
	bne	a5,zero,.L181
	.loc 1 910 16
	li	a5,-1
	j	.L182
.L181:
	.loc 1 913 10
	ld	a5,-56(s0)
	sd	a5,-32(s0)
	.loc 1 914 8
	ld	a5,-32(s0)
	blt	a5,zero,.L183
	.loc 1 914 17 discriminator 1
	ld	a4,-32(s0)
	li	a5,15
	ble	a4,a5,.L184
.L183:
	.loc 1 915 16
	li	a5,-1
	j	.L182
.L184:
	.loc 1 917 33
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 917 19
	ld	a5,88(a5)
	sd	a5,-40(s0)
	.loc 1 919 19
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 919 24
	lw	a5,100(a5)
	.loc 1 919 8
	beq	a5,zero,.L185
	.loc 1 920 14
	ld	a5,-40(s0)
	lw	a5,528(a5)
	.loc 1 920 12
	ble	a5,zero,.L186
	.loc 1 920 30 discriminator 1
	ld	a5,-40(s0)
	lw	a5,528(a5)
	.loc 1 920 39 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,528(a5)
.L186:
	.loc 1 921 14
	ld	a5,-40(s0)
	lw	a5,528(a5)
	.loc 1 921 12
	bne	a5,zero,.L185
	.loc 1 921 43 discriminator 1
	ld	a5,-40(s0)
	sw	zero,520(a5)
.L185:
	.loc 1 923 19
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 923 24
	lw	a5,104(a5)
	.loc 1 923 8
	beq	a5,zero,.L187
	.loc 1 924 14
	ld	a5,-40(s0)
	lw	a5,532(a5)
	.loc 1 924 12
	ble	a5,zero,.L188
	.loc 1 924 30 discriminator 1
	ld	a5,-40(s0)
	lw	a5,532(a5)
	.loc 1 924 39 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,532(a5)
.L188:
	.loc 1 925 14
	ld	a5,-40(s0)
	lw	a5,532(a5)
	.loc 1 925 12
	bne	a5,zero,.L187
	.loc 1 925 44 discriminator 1
	ld	a5,-40(s0)
	sw	zero,524(a5)
.L187:
	.loc 1 929 12
	li	a5,0
.L182:
	.loc 1 930 1
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
.LFE31:
	.size	fs_close_pipe, .-fs_close_pipe
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB32:
	.loc 1 933 1
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
.LBB22:
	.loc 1 939 13
	sw	zero,-20(s0)
	.loc 1 939 5
	j	.L190
.L191:
	.loc 1 940 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 939 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L190:
	.loc 1 939 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L191
.LBE22:
	.loc 1 942 1
	nop
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
.LFE32:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB33:
	.loc 1 945 1
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
	sd	a2,-56(s0)
.LBB23:
	.loc 1 947 13
	sw	zero,-20(s0)
	.loc 1 947 5
	j	.L193
.L195:
	.loc 1 948 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 948 11
	beq	a5,zero,.L194
	.loc 1 949 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 949 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 949 29
	ld	a4,0(a4)
	.loc 1 949 23
	sd	a4,0(a5)
	.loc 1 950 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 950 22
	lw	a4,80(a5)
	.loc 1 950 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 952 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a3,0(a5)
	.loc 1 952 46
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 952 49
	lw	a5,1144(a4)
	.loc 1 952 68
	addiw	a2,a5,1
	sext.w	a2,a2
	sw	a2,1144(a4)
	.loc 1 952 72
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a3,a5
	ld	a4,-40(s0)
	sd	a4,8(a5)
.L194:
	.loc 1 947 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L193:
	.loc 1 947 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L195
.LBE23:
	.loc 1 978 1
	nop
	nop
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE33:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB34:
	.loc 1 981 1
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
	.loc 1 998 1
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
.LFE34:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB35:
	.loc 1 1000 36
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
	mv	a4,a1
	sw	a5,-36(s0)
	mv	a5,a4
	sw	a5,-40(s0)
	.loc 1 1001 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1003 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L206
	.loc 1 1003 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L206
	.loc 1 1004 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L207
	.loc 1 1004 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L207
	.loc 1 1005 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1005 8
	beq	a5,zero,.L208
	.loc 1 1006 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L209
	.loc 1 1008 19
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1008 8
	beq	a5,zero,.L205
	.loc 1 1009 9
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L205:
	.loc 1 1013 35
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 1013 15
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 1013 35
	ld	a4,0(a4)
	.loc 1 1013 23
	sd	a4,0(a5)
	.loc 1 1014 15
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1014 22
	lw	a4,80(a5)
	.loc 1 1014 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	j	.L197
.L206:
	.loc 1 1003 47
	nop
	j	.L197
.L207:
	.loc 1 1004 47
	nop
	j	.L197
.L208:
	.loc 1 1005 36
	nop
	j	.L197
.L209:
	.loc 1 1006 25
	nop
.L197:
	.loc 1 1015 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE35:
	.size	fs_dup2, .-fs_dup2
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.file 5 "common.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x18df
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x24
	.4byte	.LASF195
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0xf
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0xf
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x10
	.4byte	.LASF5
	.byte	0x2
	.byte	0x28
	.byte	0x18
	.4byte	0x48
	.uleb128 0x25
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1a
	.4byte	0x48
	.uleb128 0xf
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x10
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2e
	.byte	0x18
	.4byte	0x6c
	.uleb128 0x1a
	.4byte	0x5b
	.uleb128 0xf
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0x10
	.4byte	.LASF8
	.byte	0x2
	.byte	0x31
	.byte	0x19
	.4byte	0x7f
	.uleb128 0xf
	.byte	0x2
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0x10
	.4byte	.LASF10
	.byte	0x2
	.byte	0x34
	.byte	0x19
	.4byte	0x92
	.uleb128 0xf
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0x10
	.4byte	.LASF12
	.byte	0x2
	.byte	0x37
	.byte	0x19
	.4byte	0xa5
	.uleb128 0xf
	.byte	0x8
	.byte	0x7
	.4byte	.LASF13
	.uleb128 0x10
	.4byte	.LASF14
	.byte	0x2
	.byte	0x56
	.byte	0x1a
	.4byte	0xa5
	.uleb128 0x10
	.4byte	.LASF15
	.byte	0x3
	.byte	0xd6
	.byte	0x17
	.4byte	0xa5
	.uleb128 0xf
	.byte	0x8
	.byte	0x5
	.4byte	.LASF16
	.uleb128 0xf
	.byte	0x10
	.byte	0x4
	.4byte	.LASF17
	.uleb128 0x13
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x19
	.4byte	0x13a
	.uleb128 0x3
	.4byte	.LASF18
	.byte	0x4
	.byte	0x1a
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x3
	.4byte	.LASF19
	.byte	0x4
	.byte	0x1b
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF20
	.byte	0x4
	.byte	0x1c
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x4
	.byte	0x1d
	.byte	0xe
	.4byte	0x86
	.byte	0xc
	.uleb128 0x3
	.4byte	.LASF22
	.byte	0x4
	.byte	0x1e
	.byte	0xe
	.4byte	0x86
	.byte	0x10
	.uleb128 0x3
	.4byte	.LASF23
	.byte	0x4
	.byte	0x1f
	.byte	0xe
	.4byte	0x86
	.byte	0x14
	.uleb128 0x3
	.4byte	.LASF24
	.byte	0x4
	.byte	0x20
	.byte	0xe
	.4byte	0x86
	.byte	0x18
	.byte	0
	.uleb128 0x13
	.4byte	.LASF26
	.byte	0x44
	.byte	0x4
	.byte	0x24
	.4byte	0x195
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0x4
	.byte	0x25
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0x4
	.byte	0x26
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF29
	.byte	0x4
	.byte	0x27
	.byte	0xe
	.4byte	0x73
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF30
	.byte	0x4
	.byte	0x28
	.byte	0xe
	.4byte	0x73
	.byte	0x6
	.uleb128 0x3
	.4byte	.LASF18
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF31
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x195
	.byte	0xc
	.byte	0
	.uleb128 0xb
	.4byte	0x86
	.4byte	0x1a5
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0x13
	.4byte	.LASF32
	.byte	0x10
	.byte	0x4
	.byte	0x2f
	.4byte	0x1cc
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x4
	.byte	0x30
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x3
	.4byte	.LASF34
	.byte	0x4
	.byte	0x31
	.byte	0xe
	.4byte	0x1cc
	.byte	0x2
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x1dc
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0xf
	.byte	0x1
	.byte	0x8
	.4byte	.LASF35
	.uleb128 0x26
	.4byte	0x1dc
	.uleb128 0x10
	.4byte	.LASF36
	.byte	0x4
	.byte	0x5c
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x10
	.4byte	.LASF37
	.byte	0x5
	.byte	0x6
	.byte	0x12
	.4byte	0x99
	.uleb128 0x10
	.4byte	.LASF38
	.byte	0x5
	.byte	0x8
	.byte	0x10
	.4byte	0x20c
	.uleb128 0xc
	.4byte	0x1f4
	.uleb128 0x17
	.4byte	.LASF39
	.2byte	0x100
	.byte	0xc
	.4byte	0x3a1
	.uleb128 0x1
	.string	"ra"
	.byte	0x5
	.byte	0xd
	.byte	0xe
	.4byte	0x99
	.byte	0
	.uleb128 0x1
	.string	"sp"
	.byte	0x5
	.byte	0xe
	.byte	0xe
	.4byte	0x99
	.byte	0x8
	.uleb128 0x1
	.string	"gp"
	.byte	0x5
	.byte	0xf
	.byte	0xe
	.4byte	0x99
	.byte	0x10
	.uleb128 0x1
	.string	"tp"
	.byte	0x5
	.byte	0x10
	.byte	0xe
	.4byte	0x99
	.byte	0x18
	.uleb128 0x1
	.string	"t0"
	.byte	0x5
	.byte	0x11
	.byte	0xe
	.4byte	0x99
	.byte	0x20
	.uleb128 0x1
	.string	"t1"
	.byte	0x5
	.byte	0x12
	.byte	0xe
	.4byte	0x99
	.byte	0x28
	.uleb128 0x1
	.string	"t2"
	.byte	0x5
	.byte	0x13
	.byte	0xe
	.4byte	0x99
	.byte	0x30
	.uleb128 0x1
	.string	"t3"
	.byte	0x5
	.byte	0x14
	.byte	0xe
	.4byte	0x99
	.byte	0x38
	.uleb128 0x1
	.string	"t4"
	.byte	0x5
	.byte	0x15
	.byte	0xe
	.4byte	0x99
	.byte	0x40
	.uleb128 0x1
	.string	"t5"
	.byte	0x5
	.byte	0x16
	.byte	0xe
	.4byte	0x99
	.byte	0x48
	.uleb128 0x1
	.string	"t6"
	.byte	0x5
	.byte	0x17
	.byte	0xe
	.4byte	0x99
	.byte	0x50
	.uleb128 0x1
	.string	"a0"
	.byte	0x5
	.byte	0x18
	.byte	0xe
	.4byte	0x99
	.byte	0x58
	.uleb128 0x1
	.string	"a1"
	.byte	0x5
	.byte	0x19
	.byte	0xe
	.4byte	0x99
	.byte	0x60
	.uleb128 0x1
	.string	"a2"
	.byte	0x5
	.byte	0x1a
	.byte	0xe
	.4byte	0x99
	.byte	0x68
	.uleb128 0x1
	.string	"a3"
	.byte	0x5
	.byte	0x1b
	.byte	0xe
	.4byte	0x99
	.byte	0x70
	.uleb128 0x1
	.string	"a4"
	.byte	0x5
	.byte	0x1c
	.byte	0xe
	.4byte	0x99
	.byte	0x78
	.uleb128 0x1
	.string	"a5"
	.byte	0x5
	.byte	0x1d
	.byte	0xe
	.4byte	0x99
	.byte	0x80
	.uleb128 0x1
	.string	"a6"
	.byte	0x5
	.byte	0x1e
	.byte	0xe
	.4byte	0x99
	.byte	0x88
	.uleb128 0x1
	.string	"a7"
	.byte	0x5
	.byte	0x1f
	.byte	0xe
	.4byte	0x99
	.byte	0x90
	.uleb128 0x1
	.string	"s0"
	.byte	0x5
	.byte	0x20
	.byte	0xe
	.4byte	0x99
	.byte	0x98
	.uleb128 0x1
	.string	"s1"
	.byte	0x5
	.byte	0x21
	.byte	0xe
	.4byte	0x99
	.byte	0xa0
	.uleb128 0x1
	.string	"s2"
	.byte	0x5
	.byte	0x22
	.byte	0xe
	.4byte	0x99
	.byte	0xa8
	.uleb128 0x1
	.string	"s3"
	.byte	0x5
	.byte	0x23
	.byte	0xe
	.4byte	0x99
	.byte	0xb0
	.uleb128 0x1
	.string	"s4"
	.byte	0x5
	.byte	0x24
	.byte	0xe
	.4byte	0x99
	.byte	0xb8
	.uleb128 0x1
	.string	"s5"
	.byte	0x5
	.byte	0x25
	.byte	0xe
	.4byte	0x99
	.byte	0xc0
	.uleb128 0x1
	.string	"s6"
	.byte	0x5
	.byte	0x26
	.byte	0xe
	.4byte	0x99
	.byte	0xc8
	.uleb128 0x1
	.string	"s7"
	.byte	0x5
	.byte	0x27
	.byte	0xe
	.4byte	0x99
	.byte	0xd0
	.uleb128 0x1
	.string	"s8"
	.byte	0x5
	.byte	0x28
	.byte	0xe
	.4byte	0x99
	.byte	0xd8
	.uleb128 0x1
	.string	"s9"
	.byte	0x5
	.byte	0x29
	.byte	0xe
	.4byte	0x99
	.byte	0xe0
	.uleb128 0x1
	.string	"s10"
	.byte	0x5
	.byte	0x2a
	.byte	0xe
	.4byte	0x99
	.byte	0xe8
	.uleb128 0x1
	.string	"s11"
	.byte	0x5
	.byte	0x2b
	.byte	0xe
	.4byte	0x99
	.byte	0xf0
	.uleb128 0x3
	.4byte	.LASF40
	.byte	0x5
	.byte	0x2c
	.byte	0xe
	.4byte	0x99
	.byte	0xf8
	.byte	0
	.uleb128 0x17
	.4byte	.LASF41
	.2byte	0x4d8
	.byte	0x33
	.4byte	0x47e
	.uleb128 0x3
	.4byte	.LASF42
	.byte	0x5
	.byte	0x34
	.byte	0x16
	.4byte	0x211
	.byte	0
	.uleb128 0x6
	.4byte	.LASF43
	.byte	0x36
	.byte	0x16
	.4byte	0x211
	.2byte	0x100
	.uleb128 0x6
	.4byte	.LASF44
	.byte	0x37
	.byte	0x12
	.4byte	0x47e
	.2byte	0x200
	.uleb128 0x6
	.4byte	.LASF45
	.byte	0x39
	.byte	0xb
	.4byte	0x483
	.2byte	0x208
	.uleb128 0x6
	.4byte	.LASF46
	.byte	0x3a
	.byte	0xe
	.4byte	0x99
	.2byte	0x210
	.uleb128 0x6
	.4byte	.LASF47
	.byte	0x3b
	.byte	0xe
	.4byte	0x99
	.2byte	0x218
	.uleb128 0x27
	.string	"sz"
	.byte	0x5
	.byte	0x3c
	.byte	0xe
	.4byte	0x99
	.2byte	0x220
	.uleb128 0x6
	.4byte	.LASF48
	.byte	0x3e
	.byte	0x9
	.4byte	0x48
	.2byte	0x228
	.uleb128 0x6
	.4byte	.LASF49
	.byte	0x40
	.byte	0x11
	.4byte	0x200
	.2byte	0x230
	.uleb128 0x6
	.4byte	.LASF50
	.byte	0x42
	.byte	0xb
	.4byte	0x483
	.2byte	0x238
	.uleb128 0x6
	.4byte	.LASF51
	.byte	0x43
	.byte	0x9
	.4byte	0x48
	.2byte	0x240
	.uleb128 0x6
	.4byte	.LASF52
	.byte	0x45
	.byte	0x12
	.4byte	0x488
	.2byte	0x248
	.uleb128 0x6
	.4byte	.LASF53
	.byte	0x47
	.byte	0xb
	.4byte	0x546
	.2byte	0x2c8
	.uleb128 0x6
	.4byte	.LASF54
	.byte	0x48
	.byte	0x9
	.4byte	0x48
	.2byte	0x4c8
	.uleb128 0x6
	.4byte	.LASF55
	.byte	0x4a
	.byte	0x9
	.4byte	0x48
	.2byte	0x4cc
	.uleb128 0x6
	.4byte	.LASF56
	.byte	0x4c
	.byte	0x12
	.4byte	0x47e
	.2byte	0x4d0
	.byte	0
	.uleb128 0xc
	.4byte	0x3a1
	.uleb128 0xc
	.4byte	0x1dc
	.uleb128 0xb
	.4byte	0x498
	.4byte	0x498
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0xc
	.4byte	0x49d
	.uleb128 0x17
	.4byte	.LASF57
	.2byte	0x480
	.byte	0x6b
	.4byte	0x546
	.uleb128 0x3
	.4byte	.LASF58
	.byte	0x5
	.byte	0x6c
	.byte	0x3f
	.4byte	0x616
	.byte	0
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x5
	.byte	0x6d
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x1
	.string	"din"
	.byte	0x5
	.byte	0x6e
	.byte	0x13
	.4byte	0x13a
	.byte	0x8
	.uleb128 0x1
	.string	"off"
	.byte	0x5
	.byte	0x6f
	.byte	0xe
	.4byte	0x86
	.byte	0x4c
	.uleb128 0x3
	.4byte	.LASF59
	.byte	0x5
	.byte	0x70
	.byte	0x9
	.4byte	0x48
	.byte	0x50
	.uleb128 0x3
	.4byte	.LASF60
	.byte	0x5
	.byte	0x71
	.byte	0x13
	.4byte	0x611
	.byte	0x58
	.uleb128 0x3
	.4byte	.LASF61
	.byte	0x5
	.byte	0x72
	.byte	0x9
	.4byte	0x48
	.byte	0x60
	.uleb128 0x3
	.4byte	.LASF62
	.byte	0x5
	.byte	0x73
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x3
	.4byte	.LASF63
	.byte	0x5
	.byte	0x74
	.byte	0x9
	.4byte	0x48
	.byte	0x68
	.uleb128 0x3
	.4byte	.LASF64
	.byte	0x5
	.byte	0x76
	.byte	0x12
	.4byte	0x498
	.byte	0x70
	.uleb128 0x3
	.4byte	.LASF65
	.byte	0x5
	.byte	0x78
	.byte	0x12
	.4byte	0x643
	.byte	0x78
	.uleb128 0x6
	.4byte	.LASF66
	.byte	0x79
	.byte	0x9
	.4byte	0x48
	.2byte	0x478
	.byte	0
	.uleb128 0xb
	.4byte	0x483
	.4byte	0x556
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x3f
	.byte	0
	.uleb128 0x17
	.4byte	.LASF67
	.2byte	0x330
	.byte	0x56
	.4byte	0x5f2
	.uleb128 0x3
	.4byte	.LASF68
	.byte	0x5
	.byte	0x57
	.byte	0xa
	.4byte	0x5f2
	.byte	0
	.uleb128 0x6
	.4byte	.LASF69
	.byte	0x58
	.byte	0xe
	.4byte	0x86
	.2byte	0x200
	.uleb128 0x6
	.4byte	.LASF70
	.byte	0x59
	.byte	0xe
	.4byte	0x86
	.2byte	0x204
	.uleb128 0x6
	.4byte	.LASF71
	.byte	0x5a
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x6
	.4byte	.LASF72
	.byte	0x5b
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x6
	.4byte	.LASF73
	.byte	0x5c
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x6
	.4byte	.LASF74
	.byte	0x5d
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x6
	.4byte	.LASF59
	.byte	0x5e
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x6
	.4byte	.LASF75
	.byte	0x60
	.byte	0x12
	.4byte	0x601
	.2byte	0x220
	.uleb128 0x6
	.4byte	.LASF76
	.byte	0x61
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x6
	.4byte	.LASF64
	.byte	0x63
	.byte	0x13
	.4byte	0x611
	.2byte	0x328
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x601
	.uleb128 0x1b
	.4byte	0xa5
	.byte	0
	.uleb128 0xb
	.4byte	0x498
	.4byte	0x611
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x1f
	.byte	0
	.uleb128 0xc
	.4byte	0x556
	.uleb128 0x28
	.byte	0x7
	.byte	0x4
	.4byte	0x92
	.byte	0x5
	.byte	0x6c
	.byte	0xa
	.4byte	0x643
	.uleb128 0x16
	.4byte	.LASF77
	.byte	0
	.uleb128 0x16
	.4byte	.LASF78
	.byte	0x1
	.uleb128 0x16
	.4byte	.LASF79
	.byte	0x2
	.uleb128 0x16
	.4byte	.LASF80
	.byte	0x3
	.uleb128 0x16
	.4byte	.LASF81
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x47e
	.4byte	0x653
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x7f
	.byte	0
	.uleb128 0x21
	.4byte	.LASF82
	.byte	0x93
	.byte	0x15
	.4byte	0x643
	.uleb128 0x21
	.4byte	.LASF83
	.byte	0x95
	.byte	0xc
	.4byte	0x48
	.uleb128 0x13
	.4byte	.LASF84
	.byte	0x10
	.byte	0x1
	.byte	0x3f
	.4byte	0x6aa
	.uleb128 0x3
	.4byte	.LASF85
	.byte	0x1
	.byte	0x40
	.byte	0xe
	.4byte	0x99
	.byte	0
	.uleb128 0x1
	.string	"len"
	.byte	0x1
	.byte	0x41
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x42
	.byte	0xe
	.4byte	0x73
	.byte	0xc
	.uleb128 0x3
	.4byte	.LASF56
	.byte	0x1
	.byte	0x43
	.byte	0xe
	.4byte	0x73
	.byte	0xe
	.byte	0
	.uleb128 0x22
	.4byte	.LASF89
	.byte	0x2
	.byte	0x46
	.4byte	0x6dd
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x47
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x1
	.string	"idx"
	.byte	0x1
	.byte	0x48
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x49
	.byte	0xe
	.4byte	0x6dd
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x73
	.4byte	0x6ec
	.uleb128 0x23
	.4byte	0xa5
	.byte	0
	.uleb128 0x13
	.4byte	.LASF88
	.byte	0x8
	.byte	0x1
	.byte	0x4c
	.4byte	0x712
	.uleb128 0x1
	.string	"id"
	.byte	0x1
	.byte	0x4c
	.byte	0x23
	.4byte	0x86
	.byte	0
	.uleb128 0x1
	.string	"len"
	.byte	0x1
	.byte	0x4c
	.byte	0x26
	.4byte	0x86
	.byte	0x4
	.byte	0
	.uleb128 0x22
	.4byte	.LASF90
	.byte	0x4
	.byte	0x4d
	.4byte	0x745
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x4e
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x1
	.string	"idx"
	.byte	0x1
	.byte	0x4f
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x50
	.byte	0x1c
	.4byte	0x745
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x6ec
	.4byte	0x754
	.uleb128 0x23
	.4byte	0xa5
	.byte	0
	.uleb128 0x13
	.4byte	.LASF91
	.byte	0x10
	.byte	0x1
	.byte	0x56
	.4byte	0x788
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0x1
	.byte	0x57
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x3
	.4byte	.LASF92
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF93
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x99
	.byte	0x8
	.byte	0
	.uleb128 0x4
	.4byte	.LASF94
	.byte	0x5d
	.byte	0x11
	.4byte	0x99
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x14
	.string	"Q"
	.byte	0x5e
	.byte	0x11
	.4byte	0x86
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0x4
	.4byte	.LASF95
	.byte	0x60
	.byte	0x1c
	.4byte	0x7c5
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xc
	.4byte	0x669
	.uleb128 0x4
	.4byte	.LASF96
	.byte	0x61
	.byte	0x1c
	.4byte	0x7df
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xc
	.4byte	0x6aa
	.uleb128 0x4
	.4byte	.LASF59
	.byte	0x62
	.byte	0x1c
	.4byte	0x7f9
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xc
	.4byte	0x712
	.uleb128 0x4
	.4byte	.LASF97
	.byte	0x63
	.byte	0x1c
	.4byte	0x813
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xc
	.4byte	0x5b
	.uleb128 0x4
	.4byte	.LASF98
	.byte	0x65
	.byte	0x11
	.4byte	0x73
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x29
	.4byte	.LASF99
	.byte	0x1
	.byte	0x66
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xb
	.4byte	0x67
	.4byte	0x853
	.uleb128 0x1b
	.4byte	0xa5
	.byte	0
	.uleb128 0x1a
	.4byte	0x844
	.uleb128 0x2a
	.4byte	.LASF100
	.byte	0x1
	.byte	0x67
	.byte	0x1a
	.4byte	0x853
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x14
	.string	"req"
	.byte	0xa6
	.byte	0x1e
	.4byte	0x754
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x14
	.string	"sb"
	.byte	0xca
	.byte	0x1a
	.4byte	0xd2
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xb
	.4byte	0x5b
	.4byte	0x8a8
	.uleb128 0x1b
	.4byte	0xa5
	.byte	0
	.uleb128 0x4
	.4byte	.LASF101
	.byte	0xcb
	.byte	0x17
	.4byte	0x899
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xb
	.4byte	0x556
	.4byte	0x8cd
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0x18
	.4byte	.LASF102
	.2byte	0x166
	.byte	0xe
	.4byte	0x8bd
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xb
	.4byte	0x49d
	.4byte	0x8f3
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0x18
	.4byte	.LASF103
	.2byte	0x167
	.byte	0xd
	.4byte	0x8e3
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x18
	.4byte	.LASF104
	.2byte	0x169
	.byte	0xf
	.4byte	0x611
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x18
	.4byte	.LASF105
	.2byte	0x16a
	.byte	0xe
	.4byte	0x498
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x12
	.4byte	.LASF108
	.byte	0x10
	.byte	0x7
	.4byte	0x483
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x483
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0xb8
	.byte	0
	.uleb128 0xc
	.4byte	0x1e3
	.uleb128 0x2b
	.4byte	.LASF196
	.byte	0x1
	.2byte	0x240
	.byte	0x6
	.4byte	0x968
	.uleb128 0x1c
	.byte	0
	.uleb128 0x2c
	.4byte	.LASF106
	.byte	0x1
	.2byte	0x23f
	.byte	0x6
	.4byte	0x97b
	.uleb128 0x7
	.4byte	0x483
	.byte	0
	.uleb128 0x2d
	.4byte	.LASF107
	.byte	0x5
	.byte	0x8b
	.byte	0xf
	.4byte	0x98d
	.4byte	0x98d
	.uleb128 0x1c
	.byte	0
	.uleb128 0xc
	.4byte	0x498
	.uleb128 0x12
	.4byte	.LASF109
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0x9a8
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x1c
	.byte	0
	.uleb128 0x12
	.4byte	.LASF110
	.byte	0x12
	.byte	0x7
	.4byte	0x483
	.4byte	0x9c2
	.uleb128 0x7
	.4byte	0x483
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x12
	.4byte	.LASF111
	.byte	0x11
	.byte	0x7
	.4byte	0x483
	.4byte	0x9e1
	.uleb128 0x7
	.4byte	0x483
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x48
	.byte	0
	.uleb128 0x12
	.4byte	.LASF112
	.byte	0xe
	.byte	0x5
	.4byte	0x48
	.4byte	0x9f6
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x12
	.4byte	.LASF113
	.byte	0x14
	.byte	0x5
	.4byte	0x48
	.4byte	0xa10
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x12
	.4byte	.LASF114
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0xa2f
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x954
	.uleb128 0x7
	.4byte	0x92
	.byte	0
	.uleb128 0x12
	.4byte	.LASF115
	.byte	0xd
	.byte	0x7
	.4byte	0xa4e
	.4byte	0xa4e
	.uleb128 0x7
	.4byte	0xa4e
	.uleb128 0x7
	.4byte	0xa50
	.uleb128 0x7
	.4byte	0x92
	.byte	0
	.uleb128 0x2e
	.byte	0x8
	.uleb128 0xc
	.4byte	0xa55
	.uleb128 0x2f
	.uleb128 0x12
	.4byte	.LASF116
	.byte	0xc
	.byte	0x7
	.4byte	0xa4e
	.4byte	0xa75
	.uleb128 0x7
	.4byte	0xa4e
	.uleb128 0x7
	.4byte	0x48
	.uleb128 0x7
	.4byte	0x92
	.byte	0
	.uleb128 0x12
	.4byte	.LASF117
	.byte	0xb
	.byte	0x7
	.4byte	0xa4e
	.4byte	0xa8a
	.uleb128 0x7
	.4byte	0xb8
	.byte	0
	.uleb128 0x30
	.4byte	.LASF118
	.byte	0x1
	.byte	0x13
	.byte	0xd
	.4byte	0xa9c
	.uleb128 0x7
	.4byte	0x954
	.byte	0
	.uleb128 0x15
	.4byte	.LASF121
	.2byte	0x3e8
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xae7
	.uleb128 0x8
	.4byte	.LASF119
	.2byte	0x3e8
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x8
	.4byte	.LASF120
	.2byte	0x3e8
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x3e9
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x19
	.4byte	.LASF122
	.2byte	0x3d4
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb14
	.uleb128 0x8
	.4byte	.LASF52
	.2byte	0x3d4
	.byte	0x22
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x19
	.4byte	.LASF123
	.2byte	0x3b0
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb7e
	.uleb128 0x8
	.4byte	.LASF124
	.2byte	0x3b0
	.byte	0x20
	.4byte	0x47e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x8
	.4byte	.LASF125
	.2byte	0x3b0
	.byte	0x35
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x8
	.4byte	.LASF126
	.2byte	0x3b0
	.byte	0x4b
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.uleb128 0x2
	.string	"i"
	.2byte	0x3b3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF127
	.2byte	0x3a4
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbca
	.uleb128 0x8
	.4byte	.LASF52
	.2byte	0x3a4
	.byte	0x1c
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xa
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.uleb128 0x2
	.string	"i"
	.2byte	0x3ab
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF128
	.2byte	0x38a
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc26
	.uleb128 0x9
	.string	"fd"
	.2byte	0x38a
	.byte	0x18
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x38b
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x391
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"p"
	.2byte	0x395
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF129
	.2byte	0x2f1
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcad
	.uleb128 0x9
	.string	"fd"
	.2byte	0x2f1
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x8
	.4byte	.LASF130
	.2byte	0x2f1
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.string	"ft"
	.2byte	0x2f2
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"f"
	.2byte	0x2f5
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"p"
	.2byte	0x305
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xa
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.uleb128 0x2
	.string	"i"
	.2byte	0x30d
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF131
	.2byte	0x2df
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd09
	.uleb128 0x9
	.string	"fd"
	.2byte	0x2df
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x2e0
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x2e6
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x2ea
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF132
	.2byte	0x2ca
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xda2
	.uleb128 0x9
	.string	"fd"
	.2byte	0x2ca
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x9
	.string	"buf"
	.2byte	0x2ca
	.byte	0x1f
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.4byte	.LASF133
	.2byte	0x2ca
	.byte	0x2b
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x2cb
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x2d1
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x2d5
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF134
	.2byte	0x2d6
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x5
	.4byte	.LASF135
	.2byte	0x2d9
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xd
	.4byte	.LASF136
	.2byte	0x2a1
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe31
	.uleb128 0x8
	.4byte	.LASF137
	.2byte	0x2a1
	.byte	0x19
	.4byte	0x954
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x2a2
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x5
	.4byte	.LASF138
	.2byte	0x2a4
	.byte	0xa
	.4byte	0xe31
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x2ae
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.string	"di"
	.2byte	0x2b3
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0xa
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.uleb128 0x2
	.string	"i"
	.2byte	0x2b7
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0xe41
	.uleb128 0x11
	.4byte	0xa5
	.byte	0x1f
	.byte	0
	.uleb128 0xd
	.4byte	.LASF139
	.2byte	0x276
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xec9
	.uleb128 0x9
	.string	"fd"
	.2byte	0x276
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.4byte	.LASF85
	.2byte	0x276
	.byte	0x1d
	.4byte	0x483
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x9
	.string	"n"
	.2byte	0x276
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x278
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x281
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xa
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x2
	.string	"i"
	.2byte	0x287
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF140
	.2byte	0x244
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf5e
	.uleb128 0x9
	.string	"fd"
	.2byte	0x244
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.4byte	.LASF85
	.2byte	0x244
	.byte	0x1c
	.4byte	0x483
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x9
	.string	"n"
	.2byte	0x244
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x246
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x24f
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"j"
	.2byte	0x25e
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0xa
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x2
	.string	"i"
	.2byte	0x25f
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF141
	.2byte	0x201
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xff0
	.uleb128 0x9
	.string	"fd1"
	.2byte	0x201
	.byte	0x15
	.4byte	0xff0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x9
	.string	"fd2"
	.2byte	0x201
	.byte	0x1f
	.4byte	0xff0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x202
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"pip"
	.2byte	0x204
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1d
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0xfdc
	.uleb128 0x2
	.string	"i"
	.2byte	0x206
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x31
	.4byte	.LLRL0
	.uleb128 0x2
	.string	"i"
	.2byte	0x220
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x48
	.uleb128 0xd
	.4byte	.LASF142
	.2byte	0x1f4
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1035
	.uleb128 0x9
	.string	"fd"
	.2byte	0x1f4
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x1f6
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF143
	.2byte	0x1e8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1075
	.uleb128 0x9
	.string	"fd"
	.2byte	0x1e8
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x1ea
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF144
	.2byte	0x1db
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10b5
	.uleb128 0x9
	.string	"fd"
	.2byte	0x1db
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x1dd
	.byte	0x13
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF145
	.2byte	0x1c7
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10e2
	.uleb128 0x8
	.4byte	.LASF52
	.2byte	0x1c7
	.byte	0x1c
	.4byte	0x98d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF146
	.2byte	0x1bb
	.byte	0xe
	.4byte	0x498
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1114
	.uleb128 0x5
	.4byte	.LASF125
	.2byte	0x1bd
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF147
	.2byte	0x1a5
	.byte	0xf
	.4byte	0x611
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1161
	.uleb128 0x2
	.string	"p"
	.2byte	0x1a7
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF148
	.2byte	0x1b3
	.byte	0xb
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"pa"
	.2byte	0x1b4
	.byte	0xb
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x19
	.4byte	.LASF149
	.2byte	0x19c
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x118c
	.uleb128 0x9
	.string	"p"
	.2byte	0x19c
	.byte	0x1d
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF150
	.2byte	0x191
	.byte	0xe
	.4byte	0x498
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11bc
	.uleb128 0x2
	.string	"p"
	.2byte	0x193
	.byte	0x12
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x19
	.4byte	.LASF151
	.2byte	0x18b
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11e7
	.uleb128 0x9
	.string	"p"
	.2byte	0x18b
	.byte	0x1e
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF152
	.2byte	0x180
	.byte	0xf
	.4byte	0x611
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1217
	.uleb128 0x2
	.string	"p"
	.2byte	0x182
	.byte	0x13
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x32
	.4byte	.LASF197
	.byte	0x1
	.2byte	0x16c
	.byte	0x6
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12b7
	.uleb128 0x1d
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x1278
	.uleb128 0x2
	.string	"i"
	.2byte	0x171
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xa
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x2
	.string	"p"
	.2byte	0x172
	.byte	0x17
	.4byte	0x611
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x2
	.string	"i"
	.2byte	0x178
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x2
	.string	"p"
	.2byte	0x179
	.byte	0x16
	.4byte	0x498
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF153
	.2byte	0x14b
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1313
	.uleb128 0x8
	.4byte	.LASF33
	.2byte	0x14b
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x2
	.string	"ip"
	.2byte	0x14c
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xa
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.uleb128 0x2
	.string	"i"
	.2byte	0x152
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF154
	.2byte	0x131
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13a9
	.uleb128 0x8
	.4byte	.LASF137
	.2byte	0x131
	.byte	0x22
	.4byte	0x954
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x2
	.string	"ipr"
	.2byte	0x137
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x5
	.4byte	.LASF155
	.2byte	0x13b
	.byte	0xa
	.4byte	0x13a9
	.uleb128 0x4
	.byte	0x91
	.sleb128 -128
	.byte	0x6
	.uleb128 0x5
	.4byte	.LASF156
	.2byte	0x13d
	.byte	0xb
	.4byte	0x483
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x5
	.4byte	.LASF157
	.2byte	0x13e
	.byte	0xe
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0xa
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x5
	.4byte	.LASF158
	.2byte	0x142
	.byte	0x12
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x13bd
	.uleb128 0x33
	.4byte	0xa5
	.uleb128 0x4
	.byte	0x91
	.sleb128 -120
	.byte	0x6
	.byte	0
	.uleb128 0xd
	.4byte	.LASF159
	.2byte	0x11c
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x146c
	.uleb128 0x8
	.4byte	.LASF44
	.2byte	0x11c
	.byte	0x24
	.4byte	0x146c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.4byte	.LASF34
	.2byte	0x11c
	.byte	0x38
	.4byte	0x954
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.string	"off"
	.2byte	0x11d
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF160
	.2byte	0x11e
	.byte	0xa
	.4byte	0x1471
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x2
	.string	"de"
	.2byte	0x122
	.byte	0x18
	.4byte	0x1481
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x5
	.4byte	.LASF161
	.2byte	0x123
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0xa
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x2
	.string	"i"
	.2byte	0x124
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x13a
	.uleb128 0xb
	.4byte	0x1dc
	.4byte	0x1481
	.uleb128 0x11
	.4byte	0xa5
	.byte	0xe
	.byte	0
	.uleb128 0xc
	.4byte	0x1a5
	.uleb128 0x15
	.4byte	.LASF162
	.2byte	0x104
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x155b
	.uleb128 0x9
	.string	"ip"
	.2byte	0x104
	.byte	0x1f
	.4byte	0x146c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x8
	.4byte	.LASF163
	.2byte	0x104
	.byte	0x2c
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x9
	.string	"buf"
	.2byte	0x104
	.byte	0x3d
	.4byte	0x813
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.4byte	.LASF18
	.2byte	0x104
	.byte	0x4b
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.4byte	.LASF164
	.2byte	0x105
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"off"
	.2byte	0x106
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"dst"
	.2byte	0x107
	.byte	0xe
	.4byte	0x813
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xa
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.uleb128 0x5
	.4byte	.LASF165
	.2byte	0x10a
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF166
	.2byte	0x10b
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x5
	.4byte	.LASF135
	.2byte	0x10c
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF167
	.2byte	0x10f
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x34
	.4byte	.LASF193
	.byte	0x1
	.byte	0xe4
	.byte	0x11
	.4byte	0x86
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1634
	.uleb128 0xe
	.string	"ip"
	.byte	0xe4
	.byte	0x2e
	.4byte	0x146c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xe
	.string	"idx"
	.byte	0xe4
	.byte	0x3b
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x1d
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0x15cd
	.uleb128 0x4
	.4byte	.LASF168
	.byte	0xea
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.4byte	.LASF161
	.byte	0xed
	.byte	0x13
	.4byte	0x1634
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0xa
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x4
	.4byte	.LASF169
	.byte	0xf2
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF170
	.byte	0xf3
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF171
	.byte	0xf5
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.4byte	.LASF172
	.byte	0xf9
	.byte	0x13
	.4byte	0x1634
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF173
	.byte	0xfa
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.4byte	.LASF174
	.byte	0xff
	.byte	0x13
	.4byte	0x1634
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x86
	.uleb128 0x1f
	.4byte	.LASF175
	.byte	0xd2
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16aa
	.uleb128 0x20
	.4byte	.LASF33
	.byte	0xd2
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x20
	.4byte	.LASF176
	.byte	0xd2
	.byte	0x2f
	.4byte	0x146c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF177
	.byte	0xd9
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF178
	.byte	0xdb
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF163
	.byte	0xdd
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x14
	.string	"dip"
	.byte	0xe0
	.byte	0x14
	.4byte	0x146c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x35
	.4byte	.LASF198
	.byte	0x1
	.byte	0xcd
	.byte	0x6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1f
	.4byte	.LASF179
	.byte	0xc1
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16fd
	.uleb128 0xe
	.string	"blk"
	.byte	0xc1
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"dst"
	.byte	0xc1
	.byte	0x25
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x36
	.4byte	.LASF180
	.byte	0x1
	.byte	0xa8
	.byte	0xd
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1738
	.uleb128 0x20
	.4byte	.LASF93
	.byte	0xa8
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"dst"
	.byte	0xa8
	.byte	0x34
	.4byte	0xa4e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x37
	.4byte	.LASF181
	.byte	0x1
	.byte	0xa0
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x177e
	.uleb128 0xe
	.string	"f0"
	.byte	0xa0
	.byte	0x27
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0xe
	.string	"f1"
	.byte	0xa0
	.byte	0x33
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"f2"
	.byte	0xa0
	.byte	0x3f
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF182
	.byte	0x6c
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1868
	.uleb128 0x4
	.4byte	.LASF183
	.byte	0x79
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x14
	.string	"st"
	.byte	0x7d
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF184
	.byte	0x85
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.4byte	.LASF185
	.byte	0x86
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.4byte	.LASF186
	.byte	0x8b
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.4byte	.LASF187
	.byte	0x8c
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF188
	.byte	0x8d
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.4byte	.LASF189
	.byte	0x8e
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.4byte	.LASF190
	.byte	0x8f
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.4byte	.LASF191
	.byte	0x99
	.byte	0xe
	.4byte	0x99
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0xa
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x14
	.string	"s"
	.byte	0x6e
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xa
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x4
	.4byte	.LASF192
	.byte	0x6f
	.byte	0x12
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x38
	.4byte	.LASF194
	.byte	0x1
	.byte	0x6a
	.byte	0x18
	.4byte	0x86
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18a3
	.uleb128 0xe
	.string	"b"
	.byte	0x6a
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"o"
	.byte	0x6a
	.byte	0x31
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x39
	.4byte	.LASF199
	.byte	0x1
	.byte	0x69
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xe
	.string	"b"
	.byte	0x69
	.byte	0x22
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"o"
	.byte	0x69
	.byte	0x2d
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0xe
	.string	"v"
	.byte	0x69
	.byte	0x38
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x2
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
	.uleb128 0x3
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
	.uleb128 0x4
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
	.uleb128 0x5
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
	.uleb128 0x6
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 5
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
	.uleb128 0x7
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
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
	.uleb128 0x9
	.uleb128 0x5
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
	.uleb128 0xa
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
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
	.uleb128 0xe
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
	.uleb128 0xf
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
	.uleb128 0x10
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
	.uleb128 0x11
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
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
	.uleb128 0x13
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
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x14
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
	.uleb128 0x5
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
	.uleb128 0x16
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
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
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
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
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1d
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
	.uleb128 0x1e
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
	.uleb128 0xb
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
	.uleb128 0x1f
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
	.uleb128 0x20
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
	.uleb128 0x21
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 4
	.uleb128 0x88
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x23
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x24
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
	.uleb128 0x25
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
	.uleb128 0x26
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x27
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x28
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x29
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
	.uleb128 0x88
	.uleb128 0xb
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2a
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
	.uleb128 0x88
	.uleb128 0x5
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2b
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
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2c
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
	.uleb128 0x2d
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
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2e
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x2f
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x30
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
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x31
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x32
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
	.uleb128 0x33
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x34
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
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x35
	.uleb128 0x2e
	.byte	0
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
	.uleb128 0x7c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x36
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
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x37
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
	.uleb128 0x38
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
	.uleb128 0x39
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
	.uleb128 .LBB16-.Ltext0
	.uleb128 .LBE16-.Ltext0
	.byte	0x4
	.uleb128 .LBB17-.Ltext0
	.uleb128 .LBE17-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF109:
	.string	"printf"
.LASF133:
	.string	"count"
.LASF193:
	.string	"inode_blockno"
.LASF188:
	.string	"sz_used"
.LASF22:
	.string	"logstart"
.LASF64:
	.string	"free_next"
.LASF113:
	.string	"strcmp"
.LASF15:
	.string	"size_t"
.LASF179:
	.string	"read_block"
.LASF14:
	.string	"uintptr_t"
.LASF45:
	.string	"stack_top"
.LASF90:
	.string	"virtq_used"
.LASF12:
	.string	"uint64_t"
.LASF83:
	.string	"gActiveProc"
.LASF170:
	.string	"dbl_index1"
.LASF100:
	.string	"dma_buf"
.LASF146:
	.string	"new_file_table"
.LASF36:
	.string	"ssize_t"
.LASF198:
	.string	"read_superblock"
.LASF145:
	.string	"fs_init"
.LASF27:
	.string	"type"
.LASF111:
	.string	"strncpy"
.LASF117:
	.string	"kalloc_pages"
.LASF137:
	.string	"path"
.LASF53:
	.string	"process_kalloc_address"
.LASF168:
	.string	"indirect_blk"
.LASF52:
	.string	"file_table"
.LASF161:
	.string	"entries"
.LASF60:
	.string	"pipe"
.LASF139:
	.string	"pipewrite"
.LASF39:
	.string	"context_t"
.LASF56:
	.string	"next"
.LASF104:
	.string	"gFreePipes"
.LASF16:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF50:
	.string	"program"
.LASF77:
	.string	"FK_STDIN"
.LASF190:
	.string	"npages"
.LASF25:
	.string	"superblock"
.LASF158:
	.string	"next_inum"
.LASF44:
	.string	"parent"
.LASF191:
	.string	"vq_phys"
.LASF4:
	.string	"long int"
.LASF110:
	.string	"strtok"
.LASF76:
	.string	"num_linked_file"
.LASF98:
	.string	"aidx"
.LASF144:
	.string	"is_pipe"
.LASF124:
	.string	"owner"
.LASF194:
	.string	"mr32"
.LASF153:
	.string	"dump_inode"
.LASF115:
	.string	"memcpy"
.LASF97:
	.string	"vq_area"
.LASF8:
	.string	"uint16_t"
.LASF65:
	.string	"owner_processes"
.LASF80:
	.string	"FK_FILE"
.LASF141:
	.string	"pipe_open"
.LASF186:
	.string	"sz_desc"
.LASF84:
	.string	"virtq_desc"
.LASF163:
	.string	"offset"
.LASF106:
	.string	"panic"
.LASF130:
	.string	"massive"
.LASF92:
	.string	"reserved"
.LASF102:
	.string	"gPipes"
.LASF123:
	.string	"fs_dup_table"
.LASF11:
	.string	"unsigned int"
.LASF38:
	.string	"pagetable_t"
.LASF41:
	.string	"proc"
.LASF112:
	.string	"strlen"
.LASF114:
	.string	"strncmp"
.LASF71:
	.string	"read_open"
.LASF29:
	.string	"minor"
.LASF131:
	.string	"fs_size"
.LASF13:
	.string	"long unsigned int"
.LASF143:
	.string	"is_stdin"
.LASF72:
	.string	"write_open"
.LASF55:
	.string	"deleted"
.LASF34:
	.string	"name"
.LASF175:
	.string	"read_inode"
.LASF181:
	.string	"set_flags"
.LASF58:
	.string	"kind"
.LASF18:
	.string	"size"
.LASF9:
	.string	"short unsigned int"
.LASF196:
	.string	"yield"
.LASF129:
	.string	"fs_close"
.LASF30:
	.string	"nlink"
.LASF128:
	.string	"fs_close_pipe"
.LASF54:
	.string	"num_process_kalloc_address"
.LASF121:
	.string	"fs_dup2"
.LASF23:
	.string	"inodestart"
.LASF187:
	.string	"sz_avail"
.LASF195:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -ffreestanding"
.LASF93:
	.string	"sector"
.LASF78:
	.string	"FK_STDOUT"
.LASF99:
	.string	"status_byte"
.LASF151:
	.string	"free_pipe"
.LASF154:
	.string	"path_lookup"
.LASF107:
	.string	"get_current_file_table"
.LASF155:
	.string	"copy"
.LASF192:
	.string	"base"
.LASF159:
	.string	"dir_lookup"
.LASF118:
	.string	"puts"
.LASF177:
	.string	"inodes_per_blk"
.LASF174:
	.string	"second_entries"
.LASF122:
	.string	"free_fs_table"
.LASF42:
	.string	"trapframe"
.LASF178:
	.string	"blkno"
.LASF47:
	.string	"memsz"
.LASF17:
	.string	"long double"
.LASF48:
	.string	"zombie"
.LASF148:
	.string	"user_va"
.LASF95:
	.string	"desc"
.LASF88:
	.string	"virtq_used_elem"
.LASF32:
	.string	"dirent"
.LASF31:
	.string	"addrs"
.LASF162:
	.string	"read_data"
.LASF149:
	.string	"free_file"
.LASF105:
	.string	"gFreeFiles"
.LASF73:
	.string	"nreader"
.LASF82:
	.string	"gProc"
.LASF171:
	.string	"dindirect_blk"
.LASF120:
	.string	"newfd"
.LASF140:
	.string	"piperead"
.LASF169:
	.string	"dbl_index0"
.LASF157:
	.string	"current_inum"
.LASF59:
	.string	"used"
.LASF156:
	.string	"token"
.LASF176:
	.string	"dest"
.LASF135:
	.string	"to_read"
.LASF108:
	.string	"strncat"
.LASF85:
	.string	"addr"
.LASF89:
	.string	"virtq_avail"
.LASF33:
	.string	"inum"
.LASF49:
	.string	"pagetable"
.LASF5:
	.string	"int32_t"
.LASF7:
	.string	"unsigned char"
.LASF21:
	.string	"nlog"
.LASF67:
	.string	"spipe"
.LASF126:
	.string	"orig"
.LASF3:
	.string	"short int"
.LASF57:
	.string	"file"
.LASF37:
	.string	"pte_t"
.LASF20:
	.string	"ninodes"
.LASF167:
	.string	"disk_blk"
.LASF160:
	.string	"namebuf"
.LASF165:
	.string	"blk_idx"
.LASF10:
	.string	"uint32_t"
.LASF69:
	.string	"nread"
.LASF197:
	.string	"file_system_init"
.LASF40:
	.string	"mepc"
.LASF103:
	.string	"gFiles"
.LASF183:
	.string	"devfeat"
.LASF35:
	.string	"char"
.LASF199:
	.string	"mw32"
.LASF189:
	.string	"sz_total"
.LASF91:
	.string	"virtio_blk_req"
.LASF136:
	.string	"fs_open"
.LASF51:
	.string	"xstatus"
.LASF173:
	.string	"first_blk"
.LASF66:
	.string	"num_owner_process"
.LASF180:
	.string	"virtio_blk_read"
.LASF70:
	.string	"nwrite"
.LASF81:
	.string	"FK_PIPE"
.LASF68:
	.string	"data"
.LASF43:
	.string	"context"
.LASF26:
	.string	"dinode"
.LASF152:
	.string	"alloc_pipe"
.LASF46:
	.string	"vaddr"
.LASF79:
	.string	"FK_STDERR"
.LASF166:
	.string	"blk_off"
.LASF119:
	.string	"oldfd"
.LASF116:
	.string	"memset"
.LASF150:
	.string	"alloc_file"
.LASF75:
	.string	"linked_file"
.LASF74:
	.string	"nwriter"
.LASF147:
	.string	"pipealloc"
.LASF132:
	.string	"fs_read"
.LASF184:
	.string	"devQ"
.LASF182:
	.string	"virtio_blk_init"
.LASF6:
	.string	"uint8_t"
.LASF61:
	.string	"pipe_used"
.LASF86:
	.string	"flags"
.LASF96:
	.string	"avail"
.LASF87:
	.string	"ring"
.LASF101:
	.string	"block_buf"
.LASF94:
	.string	"vbase"
.LASF62:
	.string	"read_pipe"
.LASF142:
	.string	"is_stdout"
.LASF19:
	.string	"nblocks"
.LASF63:
	.string	"write_pipe"
.LASF28:
	.string	"major"
.LASF185:
	.string	"drvQ"
.LASF24:
	.string	"bmapstart"
.LASF127:
	.string	"fs_exit"
.LASF164:
	.string	"left"
.LASF138:
	.string	"path2"
.LASF125:
	.string	"result"
.LASF134:
	.string	"remaining"
.LASF172:
	.string	"first_entries"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
