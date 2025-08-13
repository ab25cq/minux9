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
	.loc 1 106 59
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
	.loc 1 106 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 106 62
	mv	a4,a5
	.loc 1 106 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 106 91
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
	.loc 1 107 60
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
	.loc 1 107 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 107 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 107 97
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
	.loc 1 110 1
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
	.loc 1 111 13
	sw	zero,-20(s0)
	.loc 1 111 5
	j	.L5
.L9:
.LBB3:
	.loc 1 112 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 112 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 113 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 113 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 114 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 114 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 114 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 114 58
	j	.L8
.L22:
	.loc 1 113 47
	nop
.L7:
.LBE3:
	.loc 1 111 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 111 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 116 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 116 7
	bne	a5,zero,.L10
	.loc 1 116 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 116 54
	j	.L11
.L10:
	.loc 1 117 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 117 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 117 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 117 70
	j	.L13
.L12:
	.loc 1 119 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 120 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 122 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 124 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 126 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 126 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 127 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 128 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 128 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 128 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 129 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 129 46
	j	.L15
.L14:
	.loc 1 132 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 133 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 134 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 135 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 136 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 137 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 138 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 138 7
	beq	a5,zero,.L17
	.loc 1 138 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 138 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 138 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 138 65
	j	.L19
.L18:
	.loc 1 140 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 140 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 141 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 141 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 142 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 142 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 143 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 143 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 144 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 144 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 146 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 146 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 147 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 147 8
	bne	a5,zero,.L20
	.loc 1 147 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 147 57
	j	.L21
.L20:
	.loc 1 148 5
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
	.loc 1 150 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 151 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 151 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 152 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 152 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 154 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 154 14
	sd	a5,-96(s0)
	.loc 1 155 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 156 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 156 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 156 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 158 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 159 1
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
	.loc 1 161 66
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
	.loc 1 162 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 162 19
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
	.loc 1 163 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 163 19
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
	.loc 1 164 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 164 19
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
	.loc 1 165 1
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
	.loc 1 170 1
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
	.loc 1 171 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 172 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 173 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 174 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 176 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 176 20
	lla	a4,req
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
	.loc 1 176 51
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
	.loc 1 176 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 176 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 177 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 177 20
	lla	a4,dma_buf
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
	.loc 1 177 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 177 51
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
	.loc 1 177 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 177 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 178 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 178 20
	lla	a4,status_byte
	.loc 1 178 18
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
	.loc 1 178 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 178 57
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
	.loc 1 180 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 182 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 182 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 182 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 183 5
	fence	rw,rw
	.loc 1 184 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 184 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 184 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 184 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 186 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 188 10
	j	.L25
.L26:
	.loc 1 189 9
	fence	rw,rw
.L25:
	.loc 1 188 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 191 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 192 1
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
	.loc 1 195 1
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
	.loc 1 196 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
	.loc 1 197 1
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
	.loc 1 206 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 207 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 208 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 209 1
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
	.loc 1 211 53
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
	.loc 1 212 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L30
	.loc 1 212 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 212 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L31
.L30:
	.loc 1 213 9
	li	a2,68
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 214 9
	j	.L29
.L31:
	.loc 1 218 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 220 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 220 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 220 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 220 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 222 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 222 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 222 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 224 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 225 26
	lwu	a4,-28(s0)
	.loc 1 225 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 226 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L29:
	.loc 1 227 1
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
	.loc 1 229 64
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
	.loc 1 230 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L34
	.loc 1 232 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L35
.L34:
	.loc 1 233 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L36
.LBB4:
	.loc 1 235 18
	ld	a5,-88(s0)
	lw	a5,60(a5)
	sw	a5,-60(s0)
	.loc 1 236 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L37
	.loc 1 236 39 discriminator 1
	li	a5,0
	.loc 1 236 39 is_stmt 0
	j	.L35
.L37:
	.loc 1 237 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 238 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 239 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 239 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L35
.L36:
.LBE4:
.LBB5:
	.loc 1 242 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 243 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 244 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 246 18
	ld	a5,-88(s0)
	lw	a5,64(a5)
	sw	a5,-28(s0)
	.loc 1 247 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L38
	.loc 1 247 40 discriminator 1
	li	a5,0
	.loc 1 247 40 is_stmt 0
	j	.L35
.L38:
	.loc 1 249 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 250 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 251 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 251 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 252 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L39
	.loc 1 252 36 discriminator 1
	li	a5,0
	.loc 1 252 36 is_stmt 0
	j	.L35
.L39:
	.loc 1 255 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 256 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 257 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L35:
.LBE5:
	.loc 1 259 1
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
	.loc 1 261 81
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
	.loc 1 262 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 263 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 264 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 266 11
	j	.L41
.L45:
.LBB6:
	.loc 1 267 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 268 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 269 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 270 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L42
	.loc 1 270 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L42:
	.loc 1 272 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 273 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L43
	.loc 1 274 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L44
.L43:
	.loc 1 276 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 277 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L44:
	.loc 1 279 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 280 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 281 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L41:
.LBE6:
	.loc 1 266 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L45
	.loc 1 283 1
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
	.loc 1 285 62
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
	.loc 1 286 14
	sw	zero,-20(s0)
	.loc 1 289 11
	j	.L47
.L53:
.LBB7:
	.loc 1 290 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 291 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 292 13
	li	a5,32
	sw	a5,-36(s0)
.LBB8:
	.loc 1 293 18
	sw	zero,-24(s0)
	.loc 1 293 9
	j	.L48
.L52:
	.loc 1 294 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 294 22
	lhu	a5,0(a5)
	.loc 1 294 16
	beq	a5,zero,.L55
	.loc 1 295 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 295 34
	addi	a4,a5,2
	.loc 1 295 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 296 29
	sb	zero,-42(s0)
	.loc 1 297 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 297 16 discriminator 1
	bne	a5,zero,.L50
	.loc 1 298 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 298 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L54
.L55:
	.loc 1 294 34
	nop
.L50:
	.loc 1 293 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L48:
	.loc 1 293 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L52
.LBE8:
	.loc 1 301 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L47:
.LBE7:
	.loc 1 289 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 289 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L53
	.loc 1 303 12
	li	a5,0
.L54:
	.loc 1 304 1
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
	.loc 1 306 40
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
	.loc 1 306 40
	mv	a5,sp
	mv	s1,a5
	.loc 1 307 13
	ld	a5,-216(s0)
	lbu	a5,0(a5)
	.loc 1 307 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L57
	.loc 1 307 32 discriminator 1
	li	a5,0
	.loc 1 307 32 is_stmt 0
	j	.L58
.L57:
	.loc 1 308 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-216(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 308 8 discriminator 1
	bne	a5,zero,.L59
	.loc 1 309 16
	li	a5,1
	j	.L58
.L59:
	.loc 1 313 5
	addi	a5,s0,-200
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 314 12
	lhu	a5,-200(s0)
	.loc 1 314 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L60
	.loc 1 314 35 discriminator 1
	li	a5,0
	.loc 1 314 35 is_stmt 0
	j	.L58
.L60:
	.loc 1 316 15 is_stmt 1
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 316 27 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 316 10 discriminator 1
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
	.loc 1 317 25
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 317 5 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a2,a5
	ld	a1,-216(s0)
	ld	a0,-128(s0)
	call	strncpy
	.loc 1 318 19
	lla	a1,.LC5
	ld	a0,-128(s0)
	call	strtok
	sd	a0,-104(s0)
	.loc 1 319 14
	li	a5,1
	sw	a5,-108(s0)
	.loc 1 321 11
	j	.L61
.L64:
.LBB9:
	.loc 1 322 16
	lhu	a5,-200(s0)
	.loc 1 322 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L62
	.loc 1 322 39 discriminator 1
	li	a5,0
	.loc 1 322 39 is_stmt 0
	j	.L58
.L62:
	.loc 1 323 30 is_stmt 1
	addi	a5,s0,-200
	ld	a1,-104(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-132(s0)
	.loc 1 324 12
	lw	a5,-132(s0)
	sext.w	a5,a5
	bne	a5,zero,.L63
	.loc 1 324 36 discriminator 1
	li	a5,0
	.loc 1 324 36 is_stmt 0
	j	.L58
.L63:
	.loc 1 325 9 is_stmt 1
	addi	a4,s0,-200
	lw	a5,-132(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 326 22
	lw	a5,-132(s0)
	sw	a5,-108(s0)
	.loc 1 327 17
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-104(s0)
.L61:
.LBE9:
	.loc 1 321 18
	ld	a5,-104(s0)
	bne	a5,zero,.L64
	.loc 1 329 12
	lw	a5,-108(s0)
.L58:
	mv	sp,s1
	.loc 1 330 1
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
	.loc 1 332 32
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
	.loc 1 334 5
	addi	a4,s0,-88
	lw	a5,-100(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 335 5
	lw	a5,-100(s0)
	mv	a1,a5
	lla	a0,.LC6
	call	printf
	.loc 1 336 32
	lhu	a5,-88(s0)
	.loc 1 336 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 337 5
	lw	a5,-80(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 338 5
	lla	a0,.LC9
	call	printf
.LBB10:
	.loc 1 339 14
	sw	zero,-20(s0)
	.loc 1 339 5
	j	.L67
.L69:
	.loc 1 340 21
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 340 12
	beq	a5,zero,.L68
	.loc 1 340 31 discriminator 1
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
.L68:
	.loc 1 339 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L67:
	.loc 1 339 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L69
.LBE10:
	.loc 1 342 17
	lw	a5,-28(s0)
	.loc 1 342 8
	beq	a5,zero,.L70
	.loc 1 343 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
.L70:
	.loc 1 345 17
	lw	a5,-24(s0)
	.loc 1 345 8
	beq	a5,zero,.L71
	.loc 1 346 9
	lw	a5,-24(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L71:
	.loc 1 348 5
	lla	a0,.LC13
	call	printf
	.loc 1 349 1
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
	.size	gPipes, 12928
gPipes:
	.zero	12928
	.globl	gFiles
	.align	3
	.type	gFiles, @object
	.size	gFiles, 1920
gFiles:
	.zero	1920
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
	.loc 1 366 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 367 5
	li	a5,12288
	addi	a2,a5,640
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 368 5
	li	a2,1920
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB11:
	.loc 1 370 13
	sw	zero,-20(s0)
	.loc 1 370 5
	j	.L73
.L74:
.LBB12:
	.loc 1 371 23
	lw	a4,-20(s0)
	li	a5,808
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 373 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,800(a5)
	.loc 1 374 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE12:
	.loc 1 370 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L73:
	.loc 1 370 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L74
.LBE11:
.LBB13:
	.loc 1 377 13
	sw	zero,-24(s0)
	.loc 1 377 5
	j	.L75
.L76:
.LBB14:
	.loc 1 378 22
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	slli	a5,a5,3
	lla	a4,gFiles
	add	a5,a5,a4
	sd	a5,-32(s0)
	.loc 1 380 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,112(a5)
	.loc 1 381 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE14:
	.loc 1 377 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L75:
	.loc 1 377 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L76
.LBE13:
	.loc 1 383 1
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
	.loc 1 386 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 387 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 389 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,800(a5)
	.loc 1 389 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 391 12
	ld	a5,-24(s0)
	.loc 1 392 1
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
	.loc 1 395 1
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
	.loc 1 396 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,800(a5)
	.loc 1 397 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 398 1
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
	.loc 1 401 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 402 18
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 404 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,112(a5)
	.loc 1 404 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 406 12
	ld	a5,-24(s0)
	.loc 1 407 1
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
	.loc 1 410 1
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
	.loc 1 411 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,112(a5)
	.loc 1 412 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 413 1
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
	.loc 1 419 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 420 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 422 5
	li	a2,808
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 423 8
	ld	a5,-24(s0)
	bne	a5,zero,.L84
	.loc 1 424 16
	li	a5,0
	j	.L85
.L84:
	.loc 1 425 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 426 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 427 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 428 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 429 13
	ld	a5,-24(s0)
	sw	zero,528(a5)
	.loc 1 430 24
	ld	a5,-24(s0)
	sw	zero,792(a5)
	.loc 1 432 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 433 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 435 12
	ld	a5,-24(s0)
.L85:
	.loc 1 436 1
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
	.loc 1 441 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 442 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 444 5
	li	a2,120
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 446 12
	ld	a5,-24(s0)
	.loc 1 447 1
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
	.loc 1 450 1
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
	.loc 1 451 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 453 21
	call	new_file_table
	mv	a4,a0
	.loc 1 453 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 455 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 455 25
	sw	zero,0(a5)
	.loc 1 456 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 456 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 458 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 458 21
	call	new_file_table
	mv	a5,a0
	.loc 1 458 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 460 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 460 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 461 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 461 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 463 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 463 21
	call	new_file_table
	mv	a5,a0
	.loc 1 463 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 465 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 465 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 466 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 466 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 467 1
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
	.loc 1 470 1
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
	.loc 1 471 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 473 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 473 8
	beq	a5,zero,.L90
	.loc 1 473 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 473 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 473 24 discriminator 1
	beq	a5,zero,.L90
	.loc 1 474 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 474 26
	ld	a5,88(a5)
	.loc 1 474 11
	beq	a5,zero,.L90
	.loc 1 475 20
	li	a5,1
	j	.L91
.L90:
	.loc 1 479 12
	li	a5,0
.L91:
	.loc 1 480 1
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
	.loc 1 483 1
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
	.loc 1 484 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 485 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 485 8
	beq	a5,zero,.L93
	.loc 1 485 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 485 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 485 24 discriminator 1
	beq	a5,zero,.L93
	.loc 1 486 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 486 26
	lw	a5,0(a5)
	.loc 1 486 11
	bne	a5,zero,.L93
	.loc 1 487 20
	li	a5,1
	j	.L94
.L93:
	.loc 1 491 12
	li	a5,0
.L94:
	.loc 1 492 1
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
	.loc 1 495 1
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
	.loc 1 496 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 498 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 498 8
	beq	a5,zero,.L96
	.loc 1 498 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 498 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 498 24 discriminator 1
	beq	a5,zero,.L96
	.loc 1 499 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 499 26
	lw	a4,0(a5)
	.loc 1 499 11
	li	a5,1
	bne	a4,a5,.L96
	.loc 1 500 20
	li	a5,1
	j	.L97
.L96:
	.loc 1 504 12
	li	a5,0
.L97:
	.loc 1 505 1
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
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB24:
	.loc 1 507 36
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
	.loc 1 508 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 510 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB15:
	.loc 1 512 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 512 5
	j	.L99
.L102:
	.loc 1 513 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 513 12
	bne	a5,zero,.L100
	.loc 1 514 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 514 29
	call	new_file_table
	mv	a5,a0
	.loc 1 514 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 516 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 516 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 517 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 517 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 518 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 518 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 519 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 519 34
	sw	zero,76(a5)
	.loc 1 520 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 520 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 521 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 521 38
	li	a4,1
	sw	a4,100(a5)
	.loc 1 522 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 522 41
	sw	zero,104(a5)
	.loc 1 523 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 525 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 525 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 529 13
	j	.L101
.L100:
	.loc 1 512 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L99:
	.loc 1 512 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L102
.L101:
.LBE15:
.LBB16:
	.loc 1 532 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 532 5
	j	.L103
.L106:
	.loc 1 533 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 533 12
	bne	a5,zero,.L104
	.loc 1 534 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 534 29
	call	new_file_table
	mv	a5,a0
	.loc 1 534 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 536 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 536 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 537 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 537 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 538 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 538 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 540 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 540 34
	sw	zero,76(a5)
	.loc 1 541 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 541 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 542 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 542 39
	li	a4,1
	sw	a4,104(a5)
	.loc 1 543 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 543 38
	sw	zero,100(a5)
	.loc 1 544 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 546 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 546 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 550 13
	j	.L105
.L104:
	.loc 1 532 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L103:
	.loc 1 532 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L106
.LBE16:
	.loc 1 553 1
	nop
.L105:
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
.LC14:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB25:
	.loc 1 563 1
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
	.loc 1 564 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 566 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 566 8
	bne	a5,zero,.L108
	.loc 1 567 9
	lla	a0,.LC14
	call	panic
.L108:
	.loc 1 570 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L109
	.loc 1 570 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L110
.L109:
	.loc 1 571 9
	lla	a0,.LC14
	call	panic
.L110:
	.loc 1 573 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 573 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 575 7
	ld	a5,-32(s0)
	bne	a5,zero,.L112
	.loc 1 576 9
	lla	a0,.LC14
	call	panic
	.loc 1 579 11
	j	.L112
.L114:
	.loc 1 580 8
	call	yield
.L112:
	.loc 1 579 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 579 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 579 34
	bne	a4,a5,.L113
	.loc 1 579 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 579 34 discriminator 1
	bne	a5,zero,.L114
.L113:
	.loc 1 583 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 583 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 583 8
	bne	a4,a5,.L115
	.loc 1 583 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 583 31 discriminator 1
	bne	a5,zero,.L115
	.loc 1 584 16
	li	a5,0
	j	.L116
.L115:
	.loc 1 588 18
	sw	zero,-36(s0)
.LBB17:
	.loc 1 589 23
	sw	zero,-40(s0)
	.loc 1 589 5
	j	.L117
.L120:
	.loc 1 591 12
	call	yield
.L118:
	.loc 1 590 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 590 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 590 38
	bne	a4,a5,.L119
	.loc 1 590 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 590 38 discriminator 1
	bne	a5,zero,.L120
.L119:
	.loc 1 595 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 595 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 595 12
	bne	a4,a5,.L121
	.loc 1 595 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 595 35 discriminator 1
	bne	a5,zero,.L121
	.loc 1 596 20
	li	a5,0
	j	.L116
.L121:
	.loc 1 599 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 599 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 599 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 599 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 599 17
	sb	a4,0(a5)
	.loc 1 600 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 600 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 603 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 589 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L117:
	.loc 1 589 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 589 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L122
	.loc 1 589 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 589 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 589 36 discriminator 3
	bltu	a4,a5,.L118
.L122:
.LBE17:
	.loc 1 607 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L116:
	.loc 1 608 1
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
.LC15:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB26:
	.loc 1 613 1
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
	.loc 1 614 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 616 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 616 8
	bne	a5,zero,.L125
	.loc 1 617 9
	lla	a0,.LC15
	call	panic
.L125:
	.loc 1 620 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L126
	.loc 1 620 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L127
.L126:
	.loc 1 621 9
	lla	a0,.LC15
	call	panic
.L127:
	.loc 1 623 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 623 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 625 7
	ld	a5,-32(s0)
	bne	a5,zero,.L128
	.loc 1 626 9
	lla	a0,.LC15
	call	panic
.L128:
.LBB18:
	.loc 1 629 23
	sw	zero,-36(s0)
	.loc 1 629 5
	j	.L129
.L132:
	.loc 1 632 11
	call	yield
.L130:
	.loc 1 631 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 631 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 631 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 631 48
	li	a5,512
	bne	a4,a5,.L131
	.loc 1 631 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 631 48 discriminator 1
	bne	a5,zero,.L132
.L131:
	.loc 1 635 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 635 10
	bne	a5,zero,.L133
	.loc 1 636 18
	li	a5,-1
	j	.L134
.L133:
	.loc 1 638 44
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 638 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 638 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 638 44
	lbu	a4,0(a5)
	.loc 1 638 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 639 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 639 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 629 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L129:
	.loc 1 629 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L130
.LBE18:
	.loc 1 646 12
	lw	a5,-56(s0)
.L134:
	.loc 1 647 1
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
	.loc 1 655 31
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
	.loc 1 656 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 660 12
	ld	a5,-168(s0)
	lbu	a5,0(a5)
	.loc 1 660 7
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L137
	.loc 1 661 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncpy
	j	.L138
.L137:
	.loc 1 664 9
	addi	a5,s0,-88
	li	a2,32
	lla	a1,.LC5
	mv	a0,a5
	call	strncpy
	.loc 1 665 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncat
.L138:
	.loc 1 668 21
	addi	a5,s0,-88
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 669 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L139
	.loc 1 670 16
	li	a5,-1
	j	.L145
.L139:
	.loc 1 674 5
	addi	a4,s0,-160
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 675 11
	lhu	a5,-160(s0)
	.loc 1 675 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L141
	.loc 1 675 32 discriminator 1
	lhu	a5,-160(s0)
	.loc 1 675 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L141
	.loc 1 675 55 discriminator 2
	li	a5,-1
	.loc 1 675 55 is_stmt 0
	j	.L145
.L141:
.LBB19:
	.loc 1 677 14 is_stmt 1
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 677 5
	j	.L142
.L144:
	.loc 1 678 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 678 12
	bne	a5,zero,.L143
	.loc 1 679 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 679 29
	call	new_file_table
	mv	a5,a0
	.loc 1 679 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 681 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 681 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 682 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 682 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 683 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 683 34
	lw	a4,-52(s0)
	sw	a4,4(a5)
	.loc 1 684 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 684 34
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
	.loc 1 685 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 685 34
	sw	zero,76(a5)
	.loc 1 686 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 686 40
	sw	zero,100(a5)
	.loc 1 687 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 687 41
	sw	zero,104(a5)
	.loc 1 688 20
	lw	a5,-36(s0)
	j	.L145
.L143:
	.loc 1 677 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L142:
	.loc 1 677 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L144
.LBE19:
	.loc 1 691 12
	li	a5,-1
.L145:
	.loc 1 692 1
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
	.loc 1 696 50
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
	.loc 1 697 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 699 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 699 7
	bne	a5,zero,.L147
	.loc 1 700 16
	li	a5,-1
	j	.L148
.L147:
	.loc 1 703 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 704 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L149
	.loc 1 704 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L150
.L149:
	.loc 1 705 16
	li	a5,-1
	j	.L148
.L150:
	.loc 1 707 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 707 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 708 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 708 41
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 708 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 709 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L151
	.loc 1 709 32 discriminator 1
	li	a5,0
	.loc 1 709 32 is_stmt 0
	j	.L148
.L151:
	.loc 1 711 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L152
	mv	a5,a4
.L152:
	.loc 1 711 14
	sw	a5,-48(s0)
	.loc 1 712 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,76(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 713 6
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 713 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,76(a5)
	.loc 1 714 12
	lw	a5,-48(s0)
.L148:
	.loc 1 715 1
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
	.loc 1 717 25
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
	.loc 1 718 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 720 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 720 7
	bne	a5,zero,.L154
	.loc 1 721 16
	li	a5,-1
	j	.L155
.L154:
	.loc 1 724 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 725 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L156
	.loc 1 725 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L156
	.loc 1 725 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 725 61 discriminator 2
	lw	a5,80(a5)
	.loc 1 725 42 discriminator 2
	bne	a5,zero,.L157
.L156:
	.loc 1 726 16
	li	a5,-1
	j	.L155
.L157:
	.loc 1 728 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 728 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 729 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L155:
	.loc 1 730 1
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
	.loc 1 734 45
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
	mv	a5,a1
	sw	a5,-76(s0)
	.loc 1 735 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 737 18
	ld	a5,-72(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 737 7
	bne	a5,zero,.L159
	.loc 1 738 16
	li	a5,-1
	j	.L160
.L159:
	.loc 1 748 10
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 749 8
	ld	a5,-32(s0)
	blt	a5,zero,.L161
	.loc 1 749 17 discriminator 1
	ld	a4,-32(s0)
	li	a5,15
	ble	a4,a5,.L162
.L161:
	.loc 1 750 16
	li	a5,-1
	j	.L160
.L162:
	.loc 1 751 15
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 751 20
	lw	a4,80(a5)
	.loc 1 751 26
	addiw	a4,a4,-1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 752 7
	lw	a5,-76(s0)
	sext.w	a5,a5
	beq	a5,zero,.L163
.LBB20:
	.loc 1 753 37
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 753 23
	ld	a5,88(a5)
	sd	a5,-40(s0)
	.loc 1 754 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 754 27
	lw	a5,100(a5)
	.loc 1 754 11
	beq	a5,zero,.L164
	.loc 1 755 26
	ld	a5,-40(s0)
	sw	zero,520(a5)
.L164:
	.loc 1 757 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 757 27
	lw	a5,104(a5)
	.loc 1 757 11
	beq	a5,zero,.L163
	.loc 1 758 27
	ld	a5,-40(s0)
	sw	zero,524(a5)
.L163:
.LBE20:
	.loc 1 761 33
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 761 19
	ld	a5,88(a5)
	sd	a5,-48(s0)
	.loc 1 762 7
	ld	a5,-48(s0)
	beq	a5,zero,.L165
	.loc 1 763 10
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 763 16
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,528(a5)
.L165:
	.loc 1 765 18
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 765 23
	lw	a5,80(a5)
	.loc 1 765 7
	bgt	a5,zero,.L166
.LBB21:
	.loc 1 767 19
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 767 31
	sw	zero,80(a5)
	.loc 1 769 37
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 769 23
	ld	a5,88(a5)
	sd	a5,-56(s0)
	.loc 1 770 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 770 27
	lw	a5,100(a5)
	.loc 1 770 11
	beq	a5,zero,.L167
	.loc 1 771 26
	ld	a5,-56(s0)
	sw	zero,520(a5)
.L167:
	.loc 1 773 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 773 27
	lw	a5,104(a5)
	.loc 1 773 11
	beq	a5,zero,.L168
	.loc 1 774 27
	ld	a5,-56(s0)
	sw	zero,524(a5)
.L168:
	.loc 1 777 11
	ld	a5,-56(s0)
	beq	a5,zero,.L169
	.loc 1 780 17
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 780 15
	bne	a5,zero,.L169
	.loc 1 788 17
	ld	a0,-56(s0)
	call	free_pipe
	.loc 1 790 27
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 790 39
	sd	zero,88(a5)
.L169:
	.loc 1 794 29
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 794 9
	ld	a5,0(a5)
	mv	a0,a5
	call	free_file
	.loc 1 795 19
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 795 25
	sd	zero,0(a5)
.L166:
.LBE21:
	.loc 1 797 12
	li	a5,0
.L160:
	.loc 1 798 1
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
.LFE30:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB31:
	.loc 1 801 1
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
	.loc 1 802 13
	sw	zero,-20(s0)
	.loc 1 802 5
	j	.L171
.L172:
	.loc 1 803 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 802 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L171:
	.loc 1 802 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L172
.LBE22:
	.loc 1 805 1
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
.LFE31:
	.size	fs_exit, .-fs_exit
	.section	.rodata
	.align	3
.LC16:
	.string	"PIPE LINKED MAX"
	.text
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB32:
	.loc 1 808 1
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
	sd	a1,-48(s0)
.LBB23:
	.loc 1 810 13
	sw	zero,-20(s0)
	.loc 1 810 5
	j	.L174
.L177:
	.loc 1 811 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 811 11
	beq	a5,zero,.L175
	.loc 1 812 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 812 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-40(s0)
	add	a5,a3,a5
	.loc 1 812 29
	ld	a4,0(a4)
	.loc 1 812 23
	sd	a4,0(a5)
	.loc 1 813 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 813 22
	lw	a4,80(a5)
	.loc 1 813 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 814 22
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 814 25
	ld	a5,88(a5)
	.loc 1 814 15
	beq	a5,zero,.L175
.LBB24:
	.loc 1 815 43
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 815 31
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 817 20
	ld	a5,-32(s0)
	lw	a5,528(a5)
	.loc 1 817 26
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,528(a5)
	.loc 1 821 23
	ld	a5,-32(s0)
	lw	a4,792(a5)
	.loc 1 821 19
	li	a5,31
	ble	a4,a5,.L175
	.loc 1 822 21
	lla	a0,.LC16
	call	puts
.L176:
	.loc 1 823 26
	j	.L176
.L175:
.LBE24:
	.loc 1 810 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L174:
	.loc 1 810 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L177
.LBE23:
	.loc 1 829 1
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
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB33:
	.loc 1 832 1
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
	.loc 1 849 1
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
.LFE33:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB34:
	.loc 1 851 36
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
	.loc 1 852 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 855 20
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 855 9
	beq	a5,zero,.L180
	.loc 1 856 10
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L180:
	.loc 1 860 35
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 860 15
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 860 35
	ld	a4,0(a4)
	.loc 1 860 23
	sd	a4,0(a5)
	.loc 1 861 15
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 861 22
	lw	a4,80(a5)
	.loc 1 861 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 862 18
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 862 25
	ld	a5,88(a5)
	.loc 1 862 7
	beq	a5,zero,.L183
.LBB25:
	.loc 1 863 39
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 863 23
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 865 12
	ld	a5,-32(s0)
	lw	a5,528(a5)
	.loc 1 865 18
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,528(a5)
	.loc 1 868 15
	ld	a5,-32(s0)
	lw	a4,792(a5)
	.loc 1 868 11
	li	a5,31
	ble	a4,a5,.L183
	.loc 1 869 13
	lla	a0,.LC16
	call	puts
.L182:
	.loc 1 870 18
	j	.L182
.L183:
.LBE25:
	.loc 1 873 1
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
.LFE34:
	.size	fs_dup2, .-fs_dup2
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x15e5
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x22
	.4byte	.LASF170
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0xd
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0xd
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0xf
	.4byte	.LASF5
	.byte	0x2
	.byte	0x28
	.byte	0x18
	.4byte	0x48
	.uleb128 0x23
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x19
	.4byte	0x48
	.uleb128 0xd
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0xf
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2e
	.byte	0x18
	.4byte	0x6c
	.uleb128 0x19
	.4byte	0x5b
	.uleb128 0xd
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0xf
	.4byte	.LASF8
	.byte	0x2
	.byte	0x31
	.byte	0x19
	.4byte	0x7f
	.uleb128 0xd
	.byte	0x2
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0xf
	.4byte	.LASF10
	.byte	0x2
	.byte	0x34
	.byte	0x19
	.4byte	0x92
	.uleb128 0xd
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0xf
	.4byte	.LASF12
	.byte	0x2
	.byte	0x37
	.byte	0x19
	.4byte	0xa5
	.uleb128 0xd
	.byte	0x8
	.byte	0x7
	.4byte	.LASF13
	.uleb128 0xf
	.4byte	.LASF14
	.byte	0x2
	.byte	0x56
	.byte	0x1a
	.4byte	0xa5
	.uleb128 0xf
	.4byte	.LASF15
	.byte	0x3
	.byte	0xd6
	.byte	0x17
	.4byte	0xa5
	.uleb128 0xd
	.byte	0x8
	.byte	0x5
	.4byte	.LASF16
	.uleb128 0xd
	.byte	0x10
	.byte	0x4
	.4byte	.LASF17
	.uleb128 0x11
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x19
	.4byte	0x13a
	.uleb128 0x2
	.4byte	.LASF18
	.byte	0x4
	.byte	0x1a
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x2
	.4byte	.LASF19
	.byte	0x4
	.byte	0x1b
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x2
	.4byte	.LASF20
	.byte	0x4
	.byte	0x1c
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x4
	.byte	0x1d
	.byte	0xe
	.4byte	0x86
	.byte	0xc
	.uleb128 0x2
	.4byte	.LASF22
	.byte	0x4
	.byte	0x1e
	.byte	0xe
	.4byte	0x86
	.byte	0x10
	.uleb128 0x2
	.4byte	.LASF23
	.byte	0x4
	.byte	0x1f
	.byte	0xe
	.4byte	0x86
	.byte	0x14
	.uleb128 0x2
	.4byte	.LASF24
	.byte	0x4
	.byte	0x20
	.byte	0xe
	.4byte	0x86
	.byte	0x18
	.byte	0
	.uleb128 0x11
	.4byte	.LASF26
	.byte	0x44
	.byte	0x4
	.byte	0x24
	.4byte	0x195
	.uleb128 0x2
	.4byte	.LASF27
	.byte	0x4
	.byte	0x25
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x2
	.4byte	.LASF28
	.byte	0x4
	.byte	0x26
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x2
	.4byte	.LASF29
	.byte	0x4
	.byte	0x27
	.byte	0xe
	.4byte	0x73
	.byte	0x4
	.uleb128 0x2
	.4byte	.LASF30
	.byte	0x4
	.byte	0x28
	.byte	0xe
	.4byte	0x73
	.byte	0x6
	.uleb128 0x2
	.4byte	.LASF18
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x2
	.4byte	.LASF31
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x195
	.byte	0xc
	.byte	0
	.uleb128 0xa
	.4byte	0x86
	.4byte	0x1a5
	.uleb128 0x12
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0x11
	.4byte	.LASF32
	.byte	0x10
	.byte	0x4
	.byte	0x2f
	.4byte	0x1cc
	.uleb128 0x2
	.4byte	.LASF33
	.byte	0x4
	.byte	0x30
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x2
	.4byte	.LASF34
	.byte	0x4
	.byte	0x31
	.byte	0xe
	.4byte	0x1cc
	.byte	0x2
	.byte	0
	.uleb128 0xa
	.4byte	0x1dc
	.4byte	0x1dc
	.uleb128 0x12
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0xd
	.byte	0x1
	.byte	0x8
	.4byte	.LASF35
	.uleb128 0x24
	.4byte	0x1dc
	.uleb128 0xf
	.4byte	.LASF36
	.byte	0x4
	.byte	0x5c
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x25
	.4byte	.LASF37
	.2byte	0x328
	.byte	0x4
	.byte	0x69
	.byte	0x8
	.4byte	0x278
	.uleb128 0x2
	.4byte	.LASF38
	.byte	0x4
	.byte	0x6a
	.byte	0xa
	.4byte	0x278
	.byte	0
	.uleb128 0x10
	.4byte	.LASF39
	.byte	0x6b
	.byte	0xe
	.4byte	0x86
	.2byte	0x200
	.uleb128 0x10
	.4byte	.LASF40
	.byte	0x6c
	.byte	0xe
	.4byte	0x86
	.2byte	0x204
	.uleb128 0x10
	.4byte	.LASF41
	.byte	0x6d
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x10
	.4byte	.LASF42
	.byte	0x6e
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x10
	.4byte	.LASF43
	.byte	0x6f
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x10
	.4byte	.LASF44
	.byte	0x71
	.byte	0x12
	.4byte	0x287
	.2byte	0x218
	.uleb128 0x10
	.4byte	.LASF45
	.byte	0x72
	.byte	0x9
	.4byte	0x48
	.2byte	0x318
	.uleb128 0x10
	.4byte	.LASF46
	.byte	0x74
	.byte	0x13
	.4byte	0x32b
	.2byte	0x320
	.byte	0
	.uleb128 0xa
	.4byte	0x1dc
	.4byte	0x287
	.uleb128 0x1a
	.4byte	0xa5
	.byte	0
	.uleb128 0xa
	.4byte	0x297
	.4byte	0x297
	.uleb128 0x12
	.4byte	0xa5
	.byte	0x1f
	.byte	0
	.uleb128 0x9
	.4byte	0x29c
	.uleb128 0x11
	.4byte	.LASF47
	.byte	0x78
	.byte	0x4
	.byte	0x78
	.4byte	0x32b
	.uleb128 0x2
	.4byte	.LASF48
	.byte	0x4
	.byte	0x79
	.byte	0x3f
	.4byte	0x330
	.byte	0
	.uleb128 0x2
	.4byte	.LASF33
	.byte	0x4
	.byte	0x7a
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x13
	.string	"din"
	.byte	0x4
	.byte	0x7b
	.byte	0x13
	.4byte	0x13a
	.byte	0x8
	.uleb128 0x13
	.string	"off"
	.byte	0x4
	.byte	0x7c
	.byte	0xe
	.4byte	0x86
	.byte	0x4c
	.uleb128 0x2
	.4byte	.LASF43
	.byte	0x4
	.byte	0x7d
	.byte	0x9
	.4byte	0x48
	.byte	0x50
	.uleb128 0x2
	.4byte	.LASF49
	.byte	0x4
	.byte	0x7e
	.byte	0x13
	.4byte	0x32b
	.byte	0x58
	.uleb128 0x2
	.4byte	.LASF50
	.byte	0x4
	.byte	0x7f
	.byte	0x9
	.4byte	0x48
	.byte	0x60
	.uleb128 0x2
	.4byte	.LASF51
	.byte	0x4
	.byte	0x80
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x2
	.4byte	.LASF52
	.byte	0x4
	.byte	0x81
	.byte	0x9
	.4byte	0x48
	.byte	0x68
	.uleb128 0x2
	.4byte	.LASF46
	.byte	0x4
	.byte	0x83
	.byte	0x12
	.4byte	0x297
	.byte	0x70
	.byte	0
	.uleb128 0x9
	.4byte	0x1f4
	.uleb128 0x26
	.byte	0x7
	.byte	0x4
	.4byte	0x92
	.byte	0x4
	.byte	0x79
	.byte	0xa
	.4byte	0x35d
	.uleb128 0x16
	.4byte	.LASF53
	.byte	0
	.uleb128 0x16
	.4byte	.LASF54
	.byte	0x1
	.uleb128 0x16
	.4byte	.LASF55
	.byte	0x2
	.uleb128 0x16
	.4byte	.LASF56
	.byte	0x3
	.uleb128 0x16
	.4byte	.LASF57
	.byte	0x4
	.byte	0
	.uleb128 0x11
	.4byte	.LASF58
	.byte	0x10
	.byte	0x1
	.byte	0x40
	.4byte	0x39e
	.uleb128 0x2
	.4byte	.LASF59
	.byte	0x1
	.byte	0x41
	.byte	0xe
	.4byte	0x99
	.byte	0
	.uleb128 0x13
	.string	"len"
	.byte	0x1
	.byte	0x42
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x2
	.4byte	.LASF60
	.byte	0x1
	.byte	0x43
	.byte	0xe
	.4byte	0x73
	.byte	0xc
	.uleb128 0x2
	.4byte	.LASF61
	.byte	0x1
	.byte	0x44
	.byte	0xe
	.4byte	0x73
	.byte	0xe
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF64
	.byte	0x2
	.byte	0x47
	.4byte	0x3d1
	.uleb128 0x2
	.4byte	.LASF60
	.byte	0x1
	.byte	0x48
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x13
	.string	"idx"
	.byte	0x1
	.byte	0x49
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x2
	.4byte	.LASF62
	.byte	0x1
	.byte	0x4a
	.byte	0xe
	.4byte	0x3d1
	.byte	0x4
	.byte	0
	.uleb128 0xa
	.4byte	0x73
	.4byte	0x3e0
	.uleb128 0x20
	.4byte	0xa5
	.byte	0
	.uleb128 0x11
	.4byte	.LASF63
	.byte	0x8
	.byte	0x1
	.byte	0x4d
	.4byte	0x406
	.uleb128 0x13
	.string	"id"
	.byte	0x1
	.byte	0x4d
	.byte	0x23
	.4byte	0x86
	.byte	0
	.uleb128 0x13
	.string	"len"
	.byte	0x1
	.byte	0x4d
	.byte	0x26
	.4byte	0x86
	.byte	0x4
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF65
	.byte	0x4
	.byte	0x4e
	.4byte	0x439
	.uleb128 0x2
	.4byte	.LASF60
	.byte	0x1
	.byte	0x4f
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x13
	.string	"idx"
	.byte	0x1
	.byte	0x50
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x2
	.4byte	.LASF62
	.byte	0x1
	.byte	0x51
	.byte	0x1c
	.4byte	0x439
	.byte	0x4
	.byte	0
	.uleb128 0xa
	.4byte	0x3e0
	.4byte	0x448
	.uleb128 0x20
	.4byte	0xa5
	.byte	0
	.uleb128 0x11
	.4byte	.LASF66
	.byte	0x10
	.byte	0x1
	.byte	0x57
	.4byte	0x47c
	.uleb128 0x2
	.4byte	.LASF27
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x2
	.4byte	.LASF67
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x2
	.4byte	.LASF68
	.byte	0x1
	.byte	0x5a
	.byte	0xe
	.4byte	0x99
	.byte	0x8
	.byte	0
	.uleb128 0x4
	.4byte	.LASF69
	.byte	0x5e
	.byte	0x11
	.4byte	0x99
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x15
	.string	"Q"
	.byte	0x5f
	.byte	0x11
	.4byte	0x86
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0x4
	.4byte	.LASF70
	.byte	0x61
	.byte	0x1c
	.4byte	0x4b9
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0x9
	.4byte	0x35d
	.uleb128 0x4
	.4byte	.LASF71
	.byte	0x62
	.byte	0x1c
	.4byte	0x4d3
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0x9
	.4byte	0x39e
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0x63
	.byte	0x1c
	.4byte	0x4ed
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0x9
	.4byte	0x406
	.uleb128 0x4
	.4byte	.LASF72
	.byte	0x64
	.byte	0x1c
	.4byte	0x507
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0x9
	.4byte	0x5b
	.uleb128 0x4
	.4byte	.LASF73
	.byte	0x66
	.byte	0x11
	.4byte	0x73
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x27
	.4byte	.LASF74
	.byte	0x1
	.byte	0x67
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xa
	.4byte	0x67
	.4byte	0x547
	.uleb128 0x1a
	.4byte	0xa5
	.byte	0
	.uleb128 0x19
	.4byte	0x538
	.uleb128 0x28
	.4byte	.LASF75
	.byte	0x1
	.byte	0x68
	.byte	0x1a
	.4byte	0x547
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x15
	.string	"req"
	.byte	0xa7
	.byte	0x1e
	.4byte	0x448
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x15
	.string	"sb"
	.byte	0xcb
	.byte	0x1a
	.4byte	0xd2
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xa
	.4byte	0x5b
	.4byte	0x59c
	.uleb128 0x1a
	.4byte	0xa5
	.byte	0
	.uleb128 0x4
	.4byte	.LASF76
	.byte	0xcc
	.byte	0x17
	.4byte	0x58d
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xa
	.4byte	0x1f4
	.4byte	0x5c1
	.uleb128 0x12
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0x17
	.4byte	.LASF77
	.2byte	0x167
	.byte	0xe
	.4byte	0x5b1
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xa
	.4byte	0x29c
	.4byte	0x5e7
	.uleb128 0x12
	.4byte	0xa5
	.byte	0xf
	.byte	0
	.uleb128 0x17
	.4byte	.LASF78
	.2byte	0x168
	.byte	0xd
	.4byte	0x5d7
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x17
	.4byte	.LASF79
	.2byte	0x16a
	.byte	0xf
	.4byte	0x32b
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x17
	.4byte	.LASF80
	.2byte	0x16b
	.byte	0xe
	.4byte	0x297
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0xe
	.4byte	.LASF83
	.byte	0x11
	.byte	0x7
	.4byte	0x648
	.4byte	0x648
	.uleb128 0x5
	.4byte	0x648
	.uleb128 0x5
	.4byte	0x64d
	.uleb128 0x5
	.4byte	0xb8
	.byte	0
	.uleb128 0x9
	.4byte	0x1dc
	.uleb128 0x9
	.4byte	0x1e3
	.uleb128 0x29
	.4byte	.LASF171
	.byte	0x1
	.2byte	0x22e
	.byte	0x6
	.4byte	0x661
	.uleb128 0x1b
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x22d
	.byte	0x6
	.4byte	0x674
	.uleb128 0x5
	.4byte	0x648
	.byte	0
	.uleb128 0x2b
	.4byte	.LASF82
	.byte	0x4
	.byte	0x90
	.byte	0xf
	.4byte	0x686
	.4byte	0x686
	.uleb128 0x1b
	.byte	0
	.uleb128 0x9
	.4byte	0x297
	.uleb128 0xe
	.4byte	.LASF84
	.byte	0x10
	.byte	0x5
	.4byte	0x48
	.4byte	0x6a1
	.uleb128 0x5
	.4byte	0x64d
	.uleb128 0x1b
	.byte	0
	.uleb128 0xe
	.4byte	.LASF85
	.byte	0x13
	.byte	0x7
	.4byte	0x648
	.4byte	0x6bb
	.uleb128 0x5
	.4byte	0x648
	.uleb128 0x5
	.4byte	0x64d
	.byte	0
	.uleb128 0xe
	.4byte	.LASF86
	.byte	0x12
	.byte	0x7
	.4byte	0x648
	.4byte	0x6da
	.uleb128 0x5
	.4byte	0x648
	.uleb128 0x5
	.4byte	0x64d
	.uleb128 0x5
	.4byte	0x48
	.byte	0
	.uleb128 0xe
	.4byte	.LASF87
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0x6ef
	.uleb128 0x5
	.4byte	0x64d
	.byte	0
	.uleb128 0xe
	.4byte	.LASF88
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0x709
	.uleb128 0x5
	.4byte	0x64d
	.uleb128 0x5
	.4byte	0x64d
	.byte	0
	.uleb128 0xe
	.4byte	.LASF89
	.byte	0x16
	.byte	0x5
	.4byte	0x48
	.4byte	0x728
	.uleb128 0x5
	.4byte	0x64d
	.uleb128 0x5
	.4byte	0x64d
	.uleb128 0x5
	.4byte	0x92
	.byte	0
	.uleb128 0xe
	.4byte	.LASF90
	.byte	0xe
	.byte	0x7
	.4byte	0x747
	.4byte	0x747
	.uleb128 0x5
	.4byte	0x747
	.uleb128 0x5
	.4byte	0x749
	.uleb128 0x5
	.4byte	0x92
	.byte	0
	.uleb128 0x2c
	.byte	0x8
	.uleb128 0x9
	.4byte	0x74e
	.uleb128 0x2d
	.uleb128 0xe
	.4byte	.LASF91
	.byte	0xd
	.byte	0x7
	.4byte	0x747
	.4byte	0x76e
	.uleb128 0x5
	.4byte	0x747
	.uleb128 0x5
	.4byte	0x48
	.uleb128 0x5
	.4byte	0x92
	.byte	0
	.uleb128 0xe
	.4byte	.LASF92
	.byte	0xc
	.byte	0x7
	.4byte	0x747
	.4byte	0x783
	.uleb128 0x5
	.4byte	0xb8
	.byte	0
	.uleb128 0x2e
	.4byte	.LASF93
	.byte	0x1
	.byte	0x14
	.byte	0xd
	.4byte	0x795
	.uleb128 0x5
	.4byte	0x64d
	.byte	0
	.uleb128 0x14
	.4byte	.LASF97
	.2byte	0x353
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x801
	.uleb128 0x7
	.4byte	.LASF94
	.2byte	0x353
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.4byte	.LASF95
	.2byte	0x353
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x354
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x1
	.string	"pip"
	.2byte	0x35f
	.byte	0x17
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF98
	.2byte	0x33f
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x82e
	.uleb128 0x7
	.4byte	.LASF96
	.2byte	0x33f
	.byte	0x22
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF99
	.2byte	0x327
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x8aa
	.uleb128 0x7
	.4byte	.LASF100
	.2byte	0x327
	.byte	0x21
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.4byte	.LASF101
	.2byte	0x327
	.byte	0x37
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x6
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.uleb128 0x1
	.string	"i"
	.2byte	0x32a
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x1
	.string	"pip"
	.2byte	0x32f
	.byte	0x1f
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF102
	.2byte	0x320
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x8f6
	.uleb128 0x7
	.4byte	.LASF96
	.2byte	0x320
	.byte	0x1c
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.uleb128 0x1
	.string	"i"
	.2byte	0x322
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF104
	.2byte	0x2de
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x9a5
	.uleb128 0x8
	.string	"fd"
	.2byte	0x2de
	.byte	0x13
	.4byte	0x54
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x7
	.4byte	.LASF103
	.2byte	0x2de
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x2df
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x2ec
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.2byte	0x2f9
	.byte	0x13
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x18
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x985
	.uleb128 0x1
	.string	"p"
	.2byte	0x2f1
	.byte	0x17
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x6
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.uleb128 0x1
	.string	"p"
	.2byte	0x301
	.byte	0x17
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF105
	.2byte	0x2cd
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa01
	.uleb128 0x8
	.string	"fd"
	.2byte	0x2cd
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x2ce
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x2d4
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x2d8
	.byte	0x12
	.4byte	0x297
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xc
	.4byte	.LASF106
	.2byte	0x2b8
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa9a
	.uleb128 0x8
	.string	"fd"
	.2byte	0x2b8
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.string	"buf"
	.2byte	0x2b8
	.byte	0x1f
	.4byte	0x747
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x7
	.4byte	.LASF107
	.2byte	0x2b8
	.byte	0x2b
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x2b9
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x2bf
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x2c3
	.byte	0x12
	.4byte	0x297
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF108
	.2byte	0x2c4
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF109
	.2byte	0x2c7
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xc
	.4byte	.LASF110
	.2byte	0x28f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb29
	.uleb128 0x7
	.4byte	.LASF111
	.2byte	0x28f
	.byte	0x19
	.4byte	0x64d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x290
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF112
	.2byte	0x292
	.byte	0xa
	.4byte	0xb29
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x29c
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"di"
	.2byte	0x2a1
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x6
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x1
	.string	"i"
	.2byte	0x2a5
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x1dc
	.4byte	0xb39
	.uleb128 0x12
	.4byte	0xa5
	.byte	0x1f
	.byte	0
	.uleb128 0xc
	.4byte	.LASF113
	.2byte	0x264
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbc1
	.uleb128 0x8
	.string	"fd"
	.2byte	0x264
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x7
	.4byte	.LASF59
	.2byte	0x264
	.byte	0x1d
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x264
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x266
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x26f
	.byte	0x13
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x6
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"i"
	.2byte	0x275
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF114
	.2byte	0x232
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc56
	.uleb128 0x8
	.string	"fd"
	.2byte	0x232
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x7
	.4byte	.LASF59
	.2byte	0x232
	.byte	0x1c
	.4byte	0x648
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x232
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x234
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x23d
	.byte	0x13
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"j"
	.2byte	0x24c
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x1
	.string	"i"
	.2byte	0x24d
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF115
	.2byte	0x1fb
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcf4
	.uleb128 0x8
	.string	"fd1"
	.2byte	0x1fb
	.byte	0x15
	.4byte	0xcf4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.string	"fd2"
	.2byte	0x1fb
	.byte	0x1f
	.4byte	0xcf4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x1fc
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pip"
	.2byte	0x1fe
	.byte	0x13
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x18
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0xcd4
	.uleb128 0x1
	.string	"i"
	.2byte	0x200
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x6
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.string	"i"
	.2byte	0x214
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x48
	.uleb128 0xc
	.4byte	.LASF116
	.2byte	0x1ee
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd39
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1ee
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x1f0
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xc
	.4byte	.LASF117
	.2byte	0x1e2
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd79
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1e2
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x1e4
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xc
	.4byte	.LASF118
	.2byte	0x1d5
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdb9
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1d5
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x1d7
	.byte	0x13
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF119
	.2byte	0x1c1
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xde6
	.uleb128 0x7
	.4byte	.LASF96
	.2byte	0x1c1
	.byte	0x1c
	.4byte	0x686
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x2f
	.4byte	.LASF120
	.byte	0x1
	.2byte	0x1b8
	.byte	0xe
	.4byte	0x297
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe19
	.uleb128 0x3
	.4byte	.LASF100
	.2byte	0x1ba
	.byte	0x12
	.4byte	0x297
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xc
	.4byte	.LASF121
	.2byte	0x1a2
	.byte	0xf
	.4byte	0x32b
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe66
	.uleb128 0x1
	.string	"p"
	.2byte	0x1a4
	.byte	0x13
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF122
	.2byte	0x1b0
	.byte	0xb
	.4byte	0x747
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"pa"
	.2byte	0x1b1
	.byte	0xb
	.4byte	0x747
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF123
	.2byte	0x199
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe91
	.uleb128 0x8
	.string	"p"
	.2byte	0x199
	.byte	0x1d
	.4byte	0x297
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x21
	.4byte	.LASF124
	.2byte	0x190
	.byte	0xe
	.4byte	0x297
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xec1
	.uleb128 0x1
	.string	"p"
	.2byte	0x192
	.byte	0x12
	.4byte	0x297
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF125
	.2byte	0x18a
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xeec
	.uleb128 0x8
	.string	"p"
	.2byte	0x18a
	.byte	0x1e
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x21
	.4byte	.LASF126
	.2byte	0x181
	.byte	0xf
	.4byte	0x32b
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf1c
	.uleb128 0x1
	.string	"p"
	.2byte	0x183
	.byte	0x13
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x30
	.4byte	.LASF172
	.byte	0x1
	.2byte	0x16d
	.byte	0x6
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfbc
	.uleb128 0x18
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0xf7d
	.uleb128 0x1
	.string	"i"
	.2byte	0x172
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"p"
	.2byte	0x173
	.byte	0x17
	.4byte	0x32b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x6
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x1
	.string	"i"
	.2byte	0x179
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x1
	.string	"p"
	.2byte	0x17a
	.byte	0x16
	.4byte	0x297
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF127
	.2byte	0x14c
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1018
	.uleb128 0x7
	.4byte	.LASF33
	.2byte	0x14c
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x1
	.string	"ip"
	.2byte	0x14d
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.uleb128 0x1
	.string	"i"
	.2byte	0x153
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	.LASF128
	.2byte	0x132
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10ae
	.uleb128 0x7
	.4byte	.LASF111
	.2byte	0x132
	.byte	0x22
	.4byte	0x64d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.string	"ipr"
	.2byte	0x138
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x3
	.4byte	.LASF129
	.2byte	0x13c
	.byte	0xa
	.4byte	0x10ae
	.uleb128 0x4
	.byte	0x91
	.sleb128 -128
	.byte	0x6
	.uleb128 0x3
	.4byte	.LASF130
	.2byte	0x13e
	.byte	0xb
	.4byte	0x648
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.4byte	.LASF131
	.2byte	0x13f
	.byte	0xe
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x6
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x3
	.4byte	.LASF132
	.2byte	0x143
	.byte	0x12
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x1dc
	.4byte	0x10c2
	.uleb128 0x31
	.4byte	0xa5
	.uleb128 0x4
	.byte	0x91
	.sleb128 -120
	.byte	0x6
	.byte	0
	.uleb128 0xc
	.4byte	.LASF133
	.2byte	0x11d
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1171
	.uleb128 0x7
	.4byte	.LASF134
	.2byte	0x11d
	.byte	0x24
	.4byte	0x1171
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x7
	.4byte	.LASF34
	.2byte	0x11d
	.byte	0x38
	.4byte	0x64d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"off"
	.2byte	0x11e
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.4byte	.LASF135
	.2byte	0x11f
	.byte	0xa
	.4byte	0x1176
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x6
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x1
	.string	"de"
	.2byte	0x123
	.byte	0x18
	.4byte	0x1186
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.4byte	.LASF136
	.2byte	0x124
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x1
	.string	"i"
	.2byte	0x125
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x13a
	.uleb128 0xa
	.4byte	0x1dc
	.4byte	0x1186
	.uleb128 0x12
	.4byte	0xa5
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	0x1a5
	.uleb128 0x14
	.4byte	.LASF137
	.2byte	0x105
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1260
	.uleb128 0x8
	.string	"ip"
	.2byte	0x105
	.byte	0x1f
	.4byte	0x1171
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.4byte	.LASF138
	.2byte	0x105
	.byte	0x2c
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x8
	.string	"buf"
	.2byte	0x105
	.byte	0x3d
	.4byte	0x507
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x7
	.4byte	.LASF18
	.2byte	0x105
	.byte	0x4b
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF139
	.2byte	0x106
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x107
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"dst"
	.2byte	0x108
	.byte	0xe
	.4byte	0x507
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x6
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.uleb128 0x3
	.4byte	.LASF140
	.2byte	0x10b
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF141
	.2byte	0x10c
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF109
	.2byte	0x10d
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF142
	.2byte	0x110
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x32
	.4byte	.LASF168
	.byte	0x1
	.byte	0xe5
	.byte	0x11
	.4byte	0x86
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x133a
	.uleb128 0xb
	.string	"ip"
	.byte	0xe5
	.byte	0x2e
	.4byte	0x1171
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xb
	.string	"idx"
	.byte	0xe5
	.byte	0x3b
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x18
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0x12d2
	.uleb128 0x4
	.4byte	.LASF143
	.byte	0xeb
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.4byte	.LASF136
	.byte	0xee
	.byte	0x13
	.4byte	0x133a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x6
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x4
	.4byte	.LASF144
	.byte	0xf3
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF145
	.byte	0xf4
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF146
	.byte	0xf6
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.4byte	.LASF147
	.byte	0xfa
	.byte	0x13
	.4byte	0x133a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF148
	.byte	0xfb
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF149
	.2byte	0x100
	.byte	0x13
	.4byte	0x133a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x86
	.uleb128 0x1d
	.4byte	.LASF150
	.byte	0xd3
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13b0
	.uleb128 0x1e
	.4byte	.LASF33
	.byte	0xd3
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1e
	.4byte	.LASF151
	.byte	0xd3
	.byte	0x2f
	.4byte	0x1171
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF152
	.byte	0xda
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF153
	.byte	0xdc
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF138
	.byte	0xde
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x15
	.string	"dip"
	.byte	0xe1
	.byte	0x14
	.4byte	0x1171
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x33
	.4byte	.LASF173
	.byte	0x1
	.byte	0xce
	.byte	0x6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1d
	.4byte	.LASF154
	.byte	0xc2
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1403
	.uleb128 0xb
	.string	"blk"
	.byte	0xc2
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xb
	.string	"dst"
	.byte	0xc2
	.byte	0x25
	.4byte	0x747
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x34
	.4byte	.LASF155
	.byte	0x1
	.byte	0xa9
	.byte	0xd
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x143e
	.uleb128 0x1e
	.4byte	.LASF68
	.byte	0xa9
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xb
	.string	"dst"
	.byte	0xa9
	.byte	0x34
	.4byte	0x747
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x35
	.4byte	.LASF156
	.byte	0x1
	.byte	0xa1
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1484
	.uleb128 0xb
	.string	"f0"
	.byte	0xa1
	.byte	0x27
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0xb
	.string	"f1"
	.byte	0xa1
	.byte	0x33
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xb
	.string	"f2"
	.byte	0xa1
	.byte	0x3f
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF157
	.byte	0x6d
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x156e
	.uleb128 0x4
	.4byte	.LASF158
	.byte	0x7a
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x15
	.string	"st"
	.byte	0x7e
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF159
	.byte	0x86
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.4byte	.LASF160
	.byte	0x87
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.4byte	.LASF161
	.byte	0x8c
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.4byte	.LASF162
	.byte	0x8d
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF163
	.byte	0x8e
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.4byte	.LASF164
	.byte	0x8f
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.4byte	.LASF165
	.byte	0x90
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.4byte	.LASF166
	.byte	0x9a
	.byte	0xe
	.4byte	0x99
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x6
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x15
	.string	"s"
	.byte	0x6f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x4
	.4byte	.LASF167
	.byte	0x70
	.byte	0x12
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x36
	.4byte	.LASF169
	.byte	0x1
	.byte	0x6b
	.byte	0x18
	.4byte	0x86
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15a9
	.uleb128 0xb
	.string	"b"
	.byte	0x6b
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xb
	.string	"o"
	.byte	0x6b
	.byte	0x31
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x37
	.4byte	.LASF174
	.byte	0x1
	.byte	0x6a
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xb
	.string	"b"
	.byte	0x6a
	.byte	0x22
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xb
	.string	"o"
	.byte	0x6a
	.byte	0x2d
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0xb
	.string	"v"
	.byte	0x6a
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
	.uleb128 0x8
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
	.uleb128 0x9
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0xd
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
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 4
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
	.uleb128 0x11
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
	.uleb128 0x12
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x13
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
	.uleb128 0x15
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
	.uleb128 0x18
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
	.uleb128 0x19
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
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
	.uleb128 0x1d
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
	.uleb128 0x1e
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
	.uleb128 0x1f
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
	.uleb128 0x20
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x21
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
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x22
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
	.uleb128 0x23
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
	.uleb128 0x24
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x25
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
	.uleb128 0x26
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
	.uleb128 0x27
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
	.uleb128 0x28
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
	.uleb128 0x29
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
	.uleb128 0x2a
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
	.uleb128 0x2c
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x2d
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x2e
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
	.uleb128 0x2f
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
	.uleb128 0x31
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x32
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
	.uleb128 0x33
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
.LASF84:
	.string	"printf"
.LASF107:
	.string	"count"
.LASF168:
	.string	"inode_blockno"
.LASF163:
	.string	"sz_used"
.LASF22:
	.string	"logstart"
.LASF46:
	.string	"free_next"
.LASF88:
	.string	"strcmp"
.LASF15:
	.string	"size_t"
.LASF14:
	.string	"uintptr_t"
.LASF65:
	.string	"virtq_used"
.LASF12:
	.string	"uint64_t"
.LASF145:
	.string	"dbl_index1"
.LASF75:
	.string	"dma_buf"
.LASF120:
	.string	"new_file_table"
.LASF36:
	.string	"ssize_t"
.LASF119:
	.string	"fs_init"
.LASF27:
	.string	"type"
.LASF86:
	.string	"strncpy"
.LASF154:
	.string	"read_block"
.LASF111:
	.string	"path"
.LASF143:
	.string	"indirect_blk"
.LASF83:
	.string	"strncat"
.LASF49:
	.string	"pipe"
.LASF92:
	.string	"kalloc_pages"
.LASF61:
	.string	"next"
.LASF79:
	.string	"gFreePipes"
.LASF98:
	.string	"free_fs_table"
.LASF148:
	.string	"first_blk"
.LASF16:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF76:
	.string	"block_buf"
.LASF53:
	.string	"FK_STDIN"
.LASF127:
	.string	"dump_inode"
.LASF165:
	.string	"npages"
.LASF25:
	.string	"superblock"
.LASF134:
	.string	"parent"
.LASF166:
	.string	"vq_phys"
.LASF4:
	.string	"long int"
.LASF85:
	.string	"strtok"
.LASF45:
	.string	"num_linked_file"
.LASF73:
	.string	"aidx"
.LASF118:
	.string	"is_pipe"
.LASF137:
	.string	"read_data"
.LASF169:
	.string	"mr32"
.LASF90:
	.string	"memcpy"
.LASF72:
	.string	"vq_area"
.LASF8:
	.string	"uint16_t"
.LASF56:
	.string	"FK_FILE"
.LASF161:
	.string	"sz_desc"
.LASF113:
	.string	"pipewrite"
.LASF64:
	.string	"virtq_avail"
.LASF144:
	.string	"dbl_index0"
.LASF115:
	.string	"pipe_open"
.LASF58:
	.string	"virtq_desc"
.LASF138:
	.string	"offset"
.LASF81:
	.string	"panic"
.LASF67:
	.string	"reserved"
.LASF77:
	.string	"gPipes"
.LASF99:
	.string	"fs_dup_table"
.LASF11:
	.string	"unsigned int"
.LASF87:
	.string	"strlen"
.LASF41:
	.string	"read_open"
.LASF29:
	.string	"minor"
.LASF105:
	.string	"fs_size"
.LASF13:
	.string	"long unsigned int"
.LASF117:
	.string	"is_stdin"
.LASF42:
	.string	"write_open"
.LASF34:
	.string	"name"
.LASF150:
	.string	"read_inode"
.LASF156:
	.string	"set_flags"
.LASF38:
	.string	"data"
.LASF18:
	.string	"size"
.LASF9:
	.string	"short unsigned int"
.LASF171:
	.string	"yield"
.LASF104:
	.string	"fs_close"
.LASF30:
	.string	"nlink"
.LASF97:
	.string	"fs_dup2"
.LASF23:
	.string	"inodestart"
.LASF162:
	.string	"sz_avail"
.LASF170:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -ffreestanding"
.LASF68:
	.string	"sector"
.LASF54:
	.string	"FK_STDOUT"
.LASF125:
	.string	"free_pipe"
.LASF128:
	.string	"path_lookup"
.LASF82:
	.string	"get_current_file_table"
.LASF129:
	.string	"copy"
.LASF96:
	.string	"file_table"
.LASF132:
	.string	"next_inum"
.LASF74:
	.string	"status_byte"
.LASF167:
	.string	"base"
.LASF93:
	.string	"puts"
.LASF149:
	.string	"second_entries"
.LASF133:
	.string	"dir_lookup"
.LASF89:
	.string	"strncmp"
.LASF153:
	.string	"blkno"
.LASF17:
	.string	"long double"
.LASF122:
	.string	"user_va"
.LASF70:
	.string	"desc"
.LASF63:
	.string	"virtq_used_elem"
.LASF160:
	.string	"drvQ"
.LASF32:
	.string	"dirent"
.LASF31:
	.string	"addrs"
.LASF123:
	.string	"free_file"
.LASF80:
	.string	"gFreeFiles"
.LASF151:
	.string	"dest"
.LASF146:
	.string	"dindirect_blk"
.LASF95:
	.string	"newfd"
.LASF114:
	.string	"piperead"
.LASF152:
	.string	"inodes_per_blk"
.LASF131:
	.string	"current_inum"
.LASF43:
	.string	"used"
.LASF130:
	.string	"token"
.LASF109:
	.string	"to_read"
.LASF59:
	.string	"addr"
.LASF33:
	.string	"inum"
.LASF5:
	.string	"int32_t"
.LASF7:
	.string	"unsigned char"
.LASF21:
	.string	"nlog"
.LASF37:
	.string	"spipe"
.LASF101:
	.string	"orig"
.LASF3:
	.string	"short int"
.LASF47:
	.string	"file"
.LASF20:
	.string	"ninodes"
.LASF48:
	.string	"kind"
.LASF142:
	.string	"disk_blk"
.LASF135:
	.string	"namebuf"
.LASF140:
	.string	"blk_idx"
.LASF10:
	.string	"uint32_t"
.LASF39:
	.string	"nread"
.LASF172:
	.string	"file_system_init"
.LASF78:
	.string	"gFiles"
.LASF158:
	.string	"devfeat"
.LASF35:
	.string	"char"
.LASF174:
	.string	"mw32"
.LASF164:
	.string	"sz_total"
.LASF66:
	.string	"virtio_blk_req"
.LASF110:
	.string	"fs_open"
.LASF136:
	.string	"entries"
.LASF155:
	.string	"virtio_blk_read"
.LASF40:
	.string	"nwrite"
.LASF57:
	.string	"FK_PIPE"
.LASF103:
	.string	"force_pipe_close"
.LASF26:
	.string	"dinode"
.LASF126:
	.string	"alloc_pipe"
.LASF55:
	.string	"FK_STDERR"
.LASF141:
	.string	"blk_off"
.LASF94:
	.string	"oldfd"
.LASF91:
	.string	"memset"
.LASF124:
	.string	"alloc_file"
.LASF44:
	.string	"linked_file"
.LASF121:
	.string	"pipealloc"
.LASF106:
	.string	"fs_read"
.LASF159:
	.string	"devQ"
.LASF157:
	.string	"virtio_blk_init"
.LASF6:
	.string	"uint8_t"
.LASF50:
	.string	"pipe_used"
.LASF60:
	.string	"flags"
.LASF71:
	.string	"avail"
.LASF62:
	.string	"ring"
.LASF173:
	.string	"read_superblock"
.LASF69:
	.string	"vbase"
.LASF51:
	.string	"read_pipe"
.LASF116:
	.string	"is_stdout"
.LASF19:
	.string	"nblocks"
.LASF52:
	.string	"write_pipe"
.LASF28:
	.string	"major"
.LASF24:
	.string	"bmapstart"
.LASF102:
	.string	"fs_exit"
.LASF139:
	.string	"left"
.LASF112:
	.string	"path2"
.LASF100:
	.string	"result"
.LASF108:
	.string	"remaining"
.LASF147:
	.string	"first_entries"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
