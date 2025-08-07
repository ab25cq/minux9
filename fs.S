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
	.loc 1 141 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 141 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 142 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 142 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 143 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 143 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 144 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 144 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 145 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 145 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 147 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 147 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 148 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 148 8
	bne	a5,zero,.L20
	.loc 1 148 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 148 57
	j	.L21
.L20:
	.loc 1 149 5
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
	.loc 1 151 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 152 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 152 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 153 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 153 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 155 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 155 14
	sd	a5,-96(s0)
	.loc 1 156 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 157 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 157 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 157 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 159 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 160 1
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
	.loc 1 162 66
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
	.loc 1 163 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 163 19
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
	.loc 1 164 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 164 19
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
	.loc 1 165 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 165 19
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
	.loc 1 166 1
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
	.loc 1 171 1
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
	.loc 1 172 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 173 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 174 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 175 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 177 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 177 20
	lla	a4,req
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
	.loc 1 177 51
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
	.loc 1 177 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 177 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 178 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 178 20
	lla	a4,dma_buf
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
	.loc 1 178 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 178 51
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
	.loc 1 178 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 178 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 179 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 179 20
	lla	a4,status_byte
	.loc 1 179 18
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
	.loc 1 179 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 179 57
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
	.loc 1 181 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 183 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 183 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 183 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 184 5
	fence	rw,rw
	.loc 1 185 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 185 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 185 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 185 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 187 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 189 10
	j	.L25
.L26:
	.loc 1 190 9
	fence	rw,rw
.L25:
	.loc 1 189 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 192 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 193 1
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
	.loc 1 196 1
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
	.loc 1 197 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
	.loc 1 198 1
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
	.loc 1 207 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 208 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 209 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 210 1
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
	.loc 1 212 53
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
	.loc 1 213 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L30
	.loc 1 213 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 213 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L31
.L30:
	.loc 1 214 9
	li	a2,68
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 215 9
	j	.L29
.L31:
	.loc 1 219 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 221 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 221 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 221 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 221 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 223 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 223 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 223 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 225 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 226 26
	lwu	a4,-28(s0)
	.loc 1 226 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 227 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L29:
	.loc 1 228 1
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
	.loc 1 230 64
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
	.loc 1 231 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L34
	.loc 1 233 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L35
.L34:
	.loc 1 234 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L36
.LBB4:
	.loc 1 236 18
	ld	a5,-88(s0)
	lw	a5,60(a5)
	sw	a5,-60(s0)
	.loc 1 237 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L37
	.loc 1 237 39 discriminator 1
	li	a5,0
	.loc 1 237 39 is_stmt 0
	j	.L35
.L37:
	.loc 1 238 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 239 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 240 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 240 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L35
.L36:
.LBE4:
.LBB5:
	.loc 1 243 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 244 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 245 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 247 18
	ld	a5,-88(s0)
	lw	a5,64(a5)
	sw	a5,-28(s0)
	.loc 1 248 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L38
	.loc 1 248 40 discriminator 1
	li	a5,0
	.loc 1 248 40 is_stmt 0
	j	.L35
.L38:
	.loc 1 250 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 251 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 252 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 252 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 253 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L39
	.loc 1 253 36 discriminator 1
	li	a5,0
	.loc 1 253 36 is_stmt 0
	j	.L35
.L39:
	.loc 1 256 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 257 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 258 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L35:
.LBE5:
	.loc 1 260 1
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
	.loc 1 262 81
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
	.loc 1 263 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 264 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 265 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 267 11
	j	.L41
.L45:
.LBB6:
	.loc 1 268 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 269 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 270 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 271 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L42
	.loc 1 271 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L42:
	.loc 1 273 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 274 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L43
	.loc 1 275 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L44
.L43:
	.loc 1 277 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 278 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L44:
	.loc 1 280 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 281 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 282 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L41:
.LBE6:
	.loc 1 267 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L45
	.loc 1 284 1
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
	.loc 1 286 62
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
	.loc 1 287 14
	sw	zero,-20(s0)
	.loc 1 290 11
	j	.L47
.L53:
.LBB7:
	.loc 1 291 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 292 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 293 13
	li	a5,32
	sw	a5,-36(s0)
.LBB8:
	.loc 1 294 18
	sw	zero,-24(s0)
	.loc 1 294 9
	j	.L48
.L52:
	.loc 1 295 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 295 22
	lhu	a5,0(a5)
	.loc 1 295 16
	beq	a5,zero,.L55
	.loc 1 296 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 296 34
	addi	a4,a5,2
	.loc 1 296 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 297 29
	sb	zero,-42(s0)
	.loc 1 298 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 298 16 discriminator 1
	bne	a5,zero,.L50
	.loc 1 299 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 299 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L54
.L55:
	.loc 1 295 34
	nop
.L50:
	.loc 1 294 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L48:
	.loc 1 294 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L52
.LBE8:
	.loc 1 302 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L47:
.LBE7:
	.loc 1 290 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 290 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L53
	.loc 1 304 12
	li	a5,0
.L54:
	.loc 1 305 1
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
	.loc 1 307 40
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
	.loc 1 307 40
	mv	a5,sp
	mv	s1,a5
	.loc 1 308 13
	ld	a5,-216(s0)
	lbu	a5,0(a5)
	.loc 1 308 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L57
	.loc 1 308 32 discriminator 1
	li	a5,0
	.loc 1 308 32 is_stmt 0
	j	.L58
.L57:
	.loc 1 309 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-216(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 309 8 discriminator 1
	bne	a5,zero,.L59
	.loc 1 310 16
	li	a5,1
	j	.L58
.L59:
	.loc 1 314 5
	addi	a5,s0,-200
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 315 12
	lhu	a5,-200(s0)
	.loc 1 315 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L60
	.loc 1 315 35 discriminator 1
	li	a5,0
	.loc 1 315 35 is_stmt 0
	j	.L58
.L60:
	.loc 1 317 15 is_stmt 1
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 317 27 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 317 10 discriminator 1
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
	.loc 1 318 25
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 318 5 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a2,a5
	ld	a1,-216(s0)
	ld	a0,-128(s0)
	call	strncpy
	.loc 1 319 19
	lla	a1,.LC5
	ld	a0,-128(s0)
	call	strtok
	sd	a0,-104(s0)
	.loc 1 320 14
	li	a5,1
	sw	a5,-108(s0)
	.loc 1 322 11
	j	.L61
.L64:
.LBB9:
	.loc 1 323 16
	lhu	a5,-200(s0)
	.loc 1 323 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L62
	.loc 1 323 39 discriminator 1
	li	a5,0
	.loc 1 323 39 is_stmt 0
	j	.L58
.L62:
	.loc 1 324 30 is_stmt 1
	addi	a5,s0,-200
	ld	a1,-104(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-132(s0)
	.loc 1 325 12
	lw	a5,-132(s0)
	sext.w	a5,a5
	bne	a5,zero,.L63
	.loc 1 325 36 discriminator 1
	li	a5,0
	.loc 1 325 36 is_stmt 0
	j	.L58
.L63:
	.loc 1 326 9 is_stmt 1
	addi	a4,s0,-200
	lw	a5,-132(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 327 22
	lw	a5,-132(s0)
	sw	a5,-108(s0)
	.loc 1 328 17
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-104(s0)
.L61:
.LBE9:
	.loc 1 322 18
	ld	a5,-104(s0)
	bne	a5,zero,.L64
	.loc 1 330 12
	lw	a5,-108(s0)
.L58:
	mv	sp,s1
	.loc 1 331 1
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
	.loc 1 333 32
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
	.loc 1 335 5
	addi	a4,s0,-88
	lw	a5,-100(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 336 5
	lw	a5,-100(s0)
	mv	a1,a5
	lla	a0,.LC6
	call	printf
	.loc 1 337 32
	lhu	a5,-88(s0)
	.loc 1 337 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 338 5
	lw	a5,-80(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 339 5
	lla	a0,.LC9
	call	printf
.LBB10:
	.loc 1 340 14
	sw	zero,-20(s0)
	.loc 1 340 5
	j	.L67
.L69:
	.loc 1 341 21
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 341 12
	beq	a5,zero,.L68
	.loc 1 341 31 discriminator 1
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
.L68:
	.loc 1 340 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L67:
	.loc 1 340 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L69
.LBE10:
	.loc 1 343 17
	lw	a5,-28(s0)
	.loc 1 343 8
	beq	a5,zero,.L70
	.loc 1 344 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
.L70:
	.loc 1 346 17
	lw	a5,-24(s0)
	.loc 1 346 8
	beq	a5,zero,.L71
	.loc 1 347 9
	lw	a5,-24(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L71:
	.loc 1 349 5
	lla	a0,.LC13
	call	printf
	.loc 1 350 1
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
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB13:
	.loc 1 368 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 369 38
	li	a0,528
	call	common_kalloc
	sd	a0,-24(s0)
	.loc 1 370 8
	ld	a5,-24(s0)
	bne	a5,zero,.L73
	.loc 1 371 16
	li	a5,0
	j	.L74
.L73:
	.loc 1 372 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 373 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 374 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 375 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 377 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 378 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 380 5
	li	a2,528
	ld	a1,-40(s0)
	ld	a0,-32(s0)
	call	append_mapping_values
	.loc 1 382 12
	ld	a5,-24(s0)
.L74:
	.loc 1 383 1
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
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
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
	.loc 1 387 41
	li	a0,104
	call	common_kalloc
	sd	a0,-24(s0)
	.loc 1 388 5
	li	a2,104
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 389 12
	ld	a5,-24(s0)
	.loc 1 390 1
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
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB15:
	.loc 1 393 1
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
	.loc 1 394 47
	li	a0,128
	call	common_kalloc
	sd	a0,-40(s0)
	.loc 1 396 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 398 21
	call	new_file_table
	mv	a4,a0
	.loc 1 398 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 400 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 400 25
	sw	zero,0(a5)
	.loc 1 401 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 401 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 403 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 403 21
	call	new_file_table
	mv	a5,a0
	.loc 1 403 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 405 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 405 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 406 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 406 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 408 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 408 21
	call	new_file_table
	mv	a5,a0
	.loc 1 408 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 410 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 410 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 411 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 411 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 413 12
	ld	a5,-40(s0)
	.loc 1 414 1
	mv	a0,a5
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
.LFE15:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB16:
	.loc 1 417 1
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
	.loc 1 418 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 420 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 420 8
	beq	a5,zero,.L80
	.loc 1 420 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 420 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 420 24 discriminator 1
	beq	a5,zero,.L80
	.loc 1 421 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 421 26
	ld	a5,88(a5)
	.loc 1 421 11
	beq	a5,zero,.L80
	.loc 1 422 20
	li	a5,1
	j	.L81
.L80:
	.loc 1 426 12
	li	a5,0
.L81:
	.loc 1 427 1
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
.LFE16:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB17:
	.loc 1 430 1
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
	.loc 1 431 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 432 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 432 8
	beq	a5,zero,.L83
	.loc 1 432 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 432 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 432 24 discriminator 1
	beq	a5,zero,.L83
	.loc 1 433 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 433 26
	lw	a5,0(a5)
	.loc 1 433 11
	bne	a5,zero,.L83
	.loc 1 434 20
	li	a5,1
	j	.L84
.L83:
	.loc 1 438 12
	li	a5,0
.L84:
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
.LFE17:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB18:
	.loc 1 442 1
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
	.loc 1 443 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 445 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 445 8
	beq	a5,zero,.L86
	.loc 1 445 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 445 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 445 24 discriminator 1
	beq	a5,zero,.L86
	.loc 1 446 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 446 26
	lw	a4,0(a5)
	.loc 1 446 11
	li	a5,1
	bne	a4,a5,.L86
	.loc 1 447 20
	li	a5,1
	j	.L87
.L86:
	.loc 1 451 12
	li	a5,0
.L87:
	.loc 1 452 1
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
	.size	is_stdout, .-is_stdout
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB19:
	.loc 1 454 36
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
	.loc 1 455 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 457 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB11:
	.loc 1 459 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 459 5
	j	.L89
.L92:
	.loc 1 460 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 460 12
	bne	a5,zero,.L90
	.loc 1 461 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 461 29
	call	new_file_table
	mv	a5,a0
	.loc 1 461 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 463 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 463 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 464 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 464 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 465 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 465 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 466 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 466 34
	sw	zero,76(a5)
	.loc 1 467 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 467 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 468 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 468 38
	li	a4,1
	sw	a4,96(a5)
	.loc 1 469 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 469 41
	sw	zero,100(a5)
	.loc 1 470 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 471 13
	j	.L91
.L90:
	.loc 1 459 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L89:
	.loc 1 459 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L92
.L91:
.LBE11:
.LBB12:
	.loc 1 474 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 474 5
	j	.L93
.L96:
	.loc 1 475 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 475 12
	bne	a5,zero,.L94
	.loc 1 476 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 476 29
	call	new_file_table
	mv	a5,a0
	.loc 1 476 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 478 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 478 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 479 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 479 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 480 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 480 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 482 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 482 34
	sw	zero,76(a5)
	.loc 1 483 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 483 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 484 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 484 39
	li	a4,1
	sw	a4,100(a5)
	.loc 1 485 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 485 38
	sw	zero,96(a5)
	.loc 1 486 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 487 13
	j	.L95
.L94:
	.loc 1 474 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L93:
	.loc 1 474 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L96
.LBE12:
	.loc 1 490 1
	nop
.L95:
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
.LFE19:
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
.LFB20:
	.loc 1 500 1
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
	.loc 1 501 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 503 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 503 8
	bne	a5,zero,.L98
	.loc 1 504 9
	lla	a0,.LC14
	call	panic
.L98:
	.loc 1 507 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L99
	.loc 1 507 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L100
.L99:
	.loc 1 508 9
	lla	a0,.LC14
	call	panic
.L100:
	.loc 1 510 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 510 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 512 7
	ld	a5,-32(s0)
	bne	a5,zero,.L102
	.loc 1 513 9
	lla	a0,.LC14
	call	panic
	.loc 1 516 11
	j	.L102
.L104:
	.loc 1 517 8
	call	yield
.L102:
	.loc 1 516 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 516 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 516 34
	bne	a4,a5,.L103
	.loc 1 516 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 516 34 discriminator 1
	bne	a5,zero,.L104
.L103:
	.loc 1 520 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 520 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 520 8
	bne	a4,a5,.L105
	.loc 1 520 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 520 31 discriminator 1
	bne	a5,zero,.L105
	.loc 1 521 16
	li	a5,0
	j	.L106
.L105:
	.loc 1 525 18
	sw	zero,-36(s0)
.LBB13:
	.loc 1 526 23
	sw	zero,-40(s0)
	.loc 1 526 5
	j	.L107
.L110:
	.loc 1 528 12
	call	yield
.L108:
	.loc 1 527 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 527 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 527 38
	bne	a4,a5,.L109
	.loc 1 527 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 527 38 discriminator 1
	bne	a5,zero,.L110
.L109:
	.loc 1 532 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 532 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 532 12
	bne	a4,a5,.L111
	.loc 1 532 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 532 35 discriminator 1
	bne	a5,zero,.L111
	.loc 1 533 20
	li	a5,0
	j	.L106
.L111:
	.loc 1 536 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 536 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 536 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 536 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 536 17
	sb	a4,0(a5)
	.loc 1 537 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 537 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 540 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 526 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L107:
	.loc 1 526 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 526 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L112
	.loc 1 526 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 526 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 526 36 discriminator 3
	bltu	a4,a5,.L108
.L112:
.LBE13:
	.loc 1 544 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L106:
	.loc 1 545 1
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
.LFE20:
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
.LFB21:
	.loc 1 550 1
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
	.loc 1 551 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 553 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 553 8
	bne	a5,zero,.L115
	.loc 1 554 9
	lla	a0,.LC15
	call	panic
.L115:
	.loc 1 557 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L116
	.loc 1 557 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L117
.L116:
	.loc 1 558 9
	lla	a0,.LC15
	call	panic
.L117:
	.loc 1 560 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 560 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 562 7
	ld	a5,-32(s0)
	bne	a5,zero,.L118
	.loc 1 563 9
	lla	a0,.LC15
	call	panic
.L118:
.LBB14:
	.loc 1 566 23
	sw	zero,-36(s0)
	.loc 1 566 5
	j	.L119
.L122:
	.loc 1 569 11
	call	yield
.L120:
	.loc 1 568 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 568 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 568 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 568 48
	li	a5,512
	bne	a4,a5,.L121
	.loc 1 568 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 568 48 discriminator 1
	bne	a5,zero,.L122
.L121:
	.loc 1 572 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 572 10
	bne	a5,zero,.L123
	.loc 1 573 18
	li	a5,-1
	j	.L124
.L123:
	.loc 1 575 44
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 575 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 575 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 575 44
	lbu	a4,0(a5)
	.loc 1 575 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 576 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 576 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 566 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L119:
	.loc 1 566 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L120
.LBE14:
	.loc 1 583 12
	lw	a5,-56(s0)
.L124:
	.loc 1 584 1
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
.LFE21:
	.size	pipewrite, .-pipewrite
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB22:
	.loc 1 592 31
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
	.loc 1 593 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 597 12
	ld	a5,-168(s0)
	lbu	a5,0(a5)
	.loc 1 597 7
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L127
	.loc 1 598 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncpy
	j	.L128
.L127:
	.loc 1 601 9
	addi	a5,s0,-88
	li	a2,32
	lla	a1,.LC5
	mv	a0,a5
	call	strncpy
	.loc 1 602 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncat
.L128:
	.loc 1 605 21
	addi	a5,s0,-88
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 606 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L129
	.loc 1 607 16
	li	a5,-1
	j	.L135
.L129:
	.loc 1 611 5
	addi	a4,s0,-160
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 612 11
	lhu	a5,-160(s0)
	.loc 1 612 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L131
	.loc 1 612 32 discriminator 1
	lhu	a5,-160(s0)
	.loc 1 612 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L131
	.loc 1 612 55 discriminator 2
	li	a5,-1
	.loc 1 612 55 is_stmt 0
	j	.L135
.L131:
.LBB15:
	.loc 1 614 14 is_stmt 1
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 614 5
	j	.L132
.L134:
	.loc 1 615 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 615 12
	bne	a5,zero,.L133
	.loc 1 616 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 616 29
	call	new_file_table
	mv	a5,a0
	.loc 1 616 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 618 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 618 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 619 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 619 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 620 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 620 34
	lw	a4,-52(s0)
	sw	a4,4(a5)
	.loc 1 621 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 621 34
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
	.loc 1 622 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 622 34
	sw	zero,76(a5)
	.loc 1 623 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 623 40
	sw	zero,96(a5)
	.loc 1 624 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 624 41
	sw	zero,100(a5)
	.loc 1 625 20
	lw	a5,-36(s0)
	j	.L135
.L133:
	.loc 1 614 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L132:
	.loc 1 614 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L134
.LBE15:
	.loc 1 628 12
	li	a5,-1
.L135:
	.loc 1 629 1
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
.LFE22:
	.size	fs_open, .-fs_open
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB23:
	.loc 1 633 50
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
	.loc 1 634 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 636 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 636 7
	bne	a5,zero,.L137
	.loc 1 637 16
	li	a5,-1
	j	.L138
.L137:
	.loc 1 640 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 641 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L139
	.loc 1 641 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L140
.L139:
	.loc 1 642 16
	li	a5,-1
	j	.L138
.L140:
	.loc 1 644 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 644 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 645 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 645 41
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 645 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 646 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L141
	.loc 1 646 32 discriminator 1
	li	a5,0
	.loc 1 646 32 is_stmt 0
	j	.L138
.L141:
	.loc 1 648 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L142
	mv	a5,a4
.L142:
	.loc 1 648 14
	sw	a5,-48(s0)
	.loc 1 649 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,76(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 650 6
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 650 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,76(a5)
	.loc 1 651 12
	lw	a5,-48(s0)
.L138:
	.loc 1 652 1
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
.LFE23:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB24:
	.loc 1 654 25
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
	.loc 1 655 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 657 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 657 7
	bne	a5,zero,.L144
	.loc 1 658 16
	li	a5,-1
	j	.L145
.L144:
	.loc 1 661 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 662 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L146
	.loc 1 662 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L146
	.loc 1 662 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 662 61 discriminator 2
	lw	a5,80(a5)
	.loc 1 662 42 discriminator 2
	bne	a5,zero,.L147
.L146:
	.loc 1 663 16
	li	a5,-1
	j	.L145
.L147:
	.loc 1 665 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 665 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 666 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L145:
	.loc 1 667 1
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
.LFE24:
	.size	fs_size, .-fs_size
	.section	.rodata
	.align	3
.LC16:
	.string	"fs_close fd %d used %d\n"
	.text
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB25:
	.loc 1 671 45
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
	.loc 1 672 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 674 18
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 674 7
	bne	a5,zero,.L149
	.loc 1 675 16
	li	a5,-1
	j	.L150
.L149:
	.loc 1 678 18
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 678 22
	lw	a5,0(a5)
	.loc 1 678 7
	beq	a5,zero,.L151
	.loc 1 678 54 discriminator 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 678 58 discriminator 1
	lw	a4,0(a5)
	.loc 1 678 41 discriminator 1
	li	a5,1
	beq	a4,a5,.L151
	.loc 1 678 91 discriminator 2
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 678 95 discriminator 2
	lw	a4,0(a5)
	.loc 1 678 78 discriminator 2
	li	a5,2
	bne	a4,a5,.L152
.L151:
	.loc 1 680 16
	li	a5,-1
	j	.L150
.L152:
	.loc 1 683 10
	ld	a5,-56(s0)
	sd	a5,-32(s0)
	.loc 1 684 8
	ld	a5,-32(s0)
	blt	a5,zero,.L153
	.loc 1 684 17 discriminator 1
	ld	a4,-32(s0)
	li	a5,15
	bgt	a4,a5,.L153
	.loc 1 684 55 discriminator 2
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 684 42 discriminator 2
	beq	a5,zero,.L153
	.loc 1 684 83 discriminator 3
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 684 88 discriminator 3
	lw	a5,80(a5)
	.loc 1 684 69 discriminator 3
	bne	a5,zero,.L154
.L153:
	.loc 1 685 16
	li	a5,-1
	j	.L150
.L154:
	.loc 1 686 15
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 686 20
	lw	a4,80(a5)
	.loc 1 686 26
	addiw	a4,a4,-1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 687 51
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 687 1
	lw	a5,80(a5)
	mv	a2,a5
	ld	a1,-32(s0)
	lla	a0,.LC16
	call	printf
	.loc 1 688 3
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L155
.LBB16:
	.loc 1 689 33
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 689 19
	ld	a5,88(a5)
	sd	a5,-40(s0)
	.loc 1 690 18
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 690 23
	lw	a5,96(a5)
	.loc 1 690 7
	beq	a5,zero,.L156
	.loc 1 691 22
	ld	a5,-40(s0)
	sw	zero,520(a5)
.L156:
	.loc 1 693 18
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 693 23
	lw	a5,100(a5)
	.loc 1 693 7
	beq	a5,zero,.L155
	.loc 1 694 23
	ld	a5,-40(s0)
	sw	zero,524(a5)
.L155:
.LBE16:
	.loc 1 697 18
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 697 23
	lw	a5,80(a5)
	.loc 1 697 7
	bgt	a5,zero,.L157
.LBB17:
	.loc 1 698 19
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 698 31
	sw	zero,80(a5)
	.loc 1 699 37
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 699 23
	ld	a5,88(a5)
	sd	a5,-48(s0)
	.loc 1 700 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 700 27
	lw	a5,96(a5)
	.loc 1 700 11
	beq	a5,zero,.L158
	.loc 1 701 26
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L158:
	.loc 1 703 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 703 27
	lw	a5,100(a5)
	.loc 1 703 11
	beq	a5,zero,.L159
	.loc 1 704 27
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L159:
	.loc 1 706 26
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 706 9
	ld	a5,0(a5)
	li	a2,104
	li	a1,0
	mv	a0,a5
	call	memset
.L157:
.LBE17:
	.loc 1 708 12
	li	a5,0
.L150:
	.loc 1 709 1
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
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB26:
	.loc 1 712 1
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
.LBB18:
	.loc 1 713 13
	sw	zero,-20(s0)
	.loc 1 713 5
	j	.L161
.L162:
	.loc 1 714 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 713 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L161:
	.loc 1 713 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L162
.LBE18:
	.loc 1 716 1
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
.LFE26:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB27:
	.loc 1 719 1
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
	.loc 1 720 28
	call	fs_init
	sd	a0,-32(s0)
.LBB19:
	.loc 1 722 13
	sw	zero,-20(s0)
	.loc 1 722 5
	j	.L164
.L166:
	.loc 1 723 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 723 11
	beq	a5,zero,.L165
	.loc 1 724 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a4,a4,a5
	.loc 1 724 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-32(s0)
	add	a5,a3,a5
	.loc 1 724 29
	ld	a4,0(a4)
	.loc 1 724 23
	sd	a4,0(a5)
	.loc 1 725 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 725 22
	lw	a4,80(a5)
	.loc 1 725 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
.L165:
	.loc 1 722 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L164:
	.loc 1 722 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L166
.LBE19:
	.loc 1 729 12
	ld	a5,-32(s0)
	.loc 1 730 1
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
.LFE27:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB28:
	.loc 1 732 36
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
	.loc 1 733 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 736 20
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 736 9
	beq	a5,zero,.L169
	.loc 1 737 10
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L169:
	.loc 1 741 35
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 741 15
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 741 35
	ld	a4,0(a4)
	.loc 1 741 23
	sd	a4,0(a5)
	.loc 1 742 15
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 742 22
	lw	a4,80(a5)
	.loc 1 742 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 743 1
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
.LFE28:
	.size	fs_dup2, .-fs_dup2
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x1374
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x21
	.4byte	.LASF159
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0xc
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0xc
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0xf
	.4byte	.LASF5
	.byte	0x2
	.byte	0x28
	.byte	0x18
	.4byte	0x48
	.uleb128 0x22
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x17
	.4byte	0x48
	.uleb128 0xc
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0xf
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2e
	.byte	0x18
	.4byte	0x6c
	.uleb128 0x17
	.4byte	0x5b
	.uleb128 0xc
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0xf
	.4byte	.LASF8
	.byte	0x2
	.byte	0x31
	.byte	0x19
	.4byte	0x7f
	.uleb128 0xc
	.byte	0x2
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0xf
	.4byte	.LASF10
	.byte	0x2
	.byte	0x34
	.byte	0x19
	.4byte	0x92
	.uleb128 0xc
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0xf
	.4byte	.LASF12
	.byte	0x2
	.byte	0x37
	.byte	0x19
	.4byte	0xa5
	.uleb128 0xc
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
	.uleb128 0xc
	.byte	0x8
	.byte	0x5
	.4byte	.LASF16
	.uleb128 0xc
	.byte	0x10
	.byte	0x4
	.4byte	.LASF17
	.uleb128 0x10
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x19
	.4byte	0x13a
	.uleb128 0x1
	.4byte	.LASF18
	.byte	0x4
	.byte	0x1a
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x1
	.4byte	.LASF19
	.byte	0x4
	.byte	0x1b
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF20
	.byte	0x4
	.byte	0x1c
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x1
	.4byte	.LASF21
	.byte	0x4
	.byte	0x1d
	.byte	0xe
	.4byte	0x86
	.byte	0xc
	.uleb128 0x1
	.4byte	.LASF22
	.byte	0x4
	.byte	0x1e
	.byte	0xe
	.4byte	0x86
	.byte	0x10
	.uleb128 0x1
	.4byte	.LASF23
	.byte	0x4
	.byte	0x1f
	.byte	0xe
	.4byte	0x86
	.byte	0x14
	.uleb128 0x1
	.4byte	.LASF24
	.byte	0x4
	.byte	0x20
	.byte	0xe
	.4byte	0x86
	.byte	0x18
	.byte	0
	.uleb128 0x10
	.4byte	.LASF26
	.byte	0x44
	.byte	0x4
	.byte	0x24
	.4byte	0x195
	.uleb128 0x1
	.4byte	.LASF27
	.byte	0x4
	.byte	0x25
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x1
	.4byte	.LASF28
	.byte	0x4
	.byte	0x26
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x1
	.4byte	.LASF29
	.byte	0x4
	.byte	0x27
	.byte	0xe
	.4byte	0x73
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x4
	.byte	0x28
	.byte	0xe
	.4byte	0x73
	.byte	0x6
	.uleb128 0x1
	.4byte	.LASF18
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x1
	.4byte	.LASF31
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x195
	.byte	0xc
	.byte	0
	.uleb128 0xd
	.4byte	0x86
	.4byte	0x1a5
	.uleb128 0x15
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0x10
	.4byte	.LASF32
	.byte	0x10
	.byte	0x4
	.byte	0x2f
	.4byte	0x1cc
	.uleb128 0x1
	.4byte	.LASF33
	.byte	0x4
	.byte	0x30
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x1
	.4byte	.LASF34
	.byte	0x4
	.byte	0x31
	.byte	0xe
	.4byte	0x1cc
	.byte	0x2
	.byte	0
	.uleb128 0xd
	.4byte	0x1dc
	.4byte	0x1dc
	.uleb128 0x15
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0xc
	.byte	0x1
	.byte	0x8
	.4byte	.LASF35
	.uleb128 0x23
	.4byte	0x1dc
	.uleb128 0xf
	.4byte	.LASF36
	.byte	0x4
	.byte	0x5c
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x24
	.4byte	.LASF37
	.2byte	0x210
	.byte	0x4
	.byte	0x65
	.byte	0x8
	.4byte	0x244
	.uleb128 0x1
	.4byte	.LASF38
	.byte	0x4
	.byte	0x66
	.byte	0xa
	.4byte	0x244
	.byte	0
	.uleb128 0x16
	.4byte	.LASF39
	.byte	0x67
	.byte	0xe
	.4byte	0x86
	.2byte	0x200
	.uleb128 0x16
	.4byte	.LASF40
	.byte	0x68
	.byte	0xe
	.4byte	0x86
	.2byte	0x204
	.uleb128 0x16
	.4byte	.LASF41
	.byte	0x69
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x16
	.4byte	.LASF42
	.byte	0x6a
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.byte	0
	.uleb128 0xd
	.4byte	0x1dc
	.4byte	0x253
	.uleb128 0x18
	.4byte	0xa5
	.byte	0
	.uleb128 0x25
	.byte	0x7
	.byte	0x4
	.4byte	0x92
	.byte	0x4
	.byte	0x6f
	.byte	0xa
	.4byte	0x280
	.uleb128 0x13
	.4byte	.LASF43
	.byte	0
	.uleb128 0x13
	.4byte	.LASF44
	.byte	0x1
	.uleb128 0x13
	.4byte	.LASF45
	.byte	0x2
	.uleb128 0x13
	.4byte	.LASF46
	.byte	0x3
	.uleb128 0x13
	.4byte	.LASF47
	.byte	0x4
	.byte	0
	.uleb128 0x10
	.4byte	.LASF48
	.byte	0x68
	.byte	0x4
	.byte	0x6e
	.4byte	0x2f5
	.uleb128 0x1
	.4byte	.LASF49
	.byte	0x4
	.byte	0x6f
	.byte	0x3f
	.4byte	0x253
	.byte	0
	.uleb128 0x1
	.4byte	.LASF33
	.byte	0x4
	.byte	0x70
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x11
	.string	"din"
	.byte	0x4
	.byte	0x71
	.byte	0x13
	.4byte	0x13a
	.byte	0x8
	.uleb128 0x11
	.string	"off"
	.byte	0x4
	.byte	0x72
	.byte	0xe
	.4byte	0x86
	.byte	0x4c
	.uleb128 0x1
	.4byte	.LASF50
	.byte	0x4
	.byte	0x73
	.byte	0x9
	.4byte	0x48
	.byte	0x50
	.uleb128 0x1
	.4byte	.LASF51
	.byte	0x4
	.byte	0x74
	.byte	0x13
	.4byte	0x2f5
	.byte	0x58
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x4
	.byte	0x75
	.byte	0x9
	.4byte	0x48
	.byte	0x60
	.uleb128 0x1
	.4byte	.LASF53
	.byte	0x4
	.byte	0x76
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.byte	0
	.uleb128 0x9
	.4byte	0x1f4
	.uleb128 0x10
	.4byte	.LASF54
	.byte	0x10
	.byte	0x1
	.byte	0x40
	.4byte	0x33b
	.uleb128 0x1
	.4byte	.LASF55
	.byte	0x1
	.byte	0x41
	.byte	0xe
	.4byte	0x99
	.byte	0
	.uleb128 0x11
	.string	"len"
	.byte	0x1
	.byte	0x42
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x1
	.4byte	.LASF56
	.byte	0x1
	.byte	0x43
	.byte	0xe
	.4byte	0x73
	.byte	0xc
	.uleb128 0x1
	.4byte	.LASF57
	.byte	0x1
	.byte	0x44
	.byte	0xe
	.4byte	0x73
	.byte	0xe
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF60
	.byte	0x2
	.byte	0x47
	.4byte	0x36e
	.uleb128 0x1
	.4byte	.LASF56
	.byte	0x1
	.byte	0x48
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x11
	.string	"idx"
	.byte	0x1
	.byte	0x49
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x1
	.4byte	.LASF58
	.byte	0x1
	.byte	0x4a
	.byte	0xe
	.4byte	0x36e
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x73
	.4byte	0x37d
	.uleb128 0x1e
	.4byte	0xa5
	.byte	0
	.uleb128 0x10
	.4byte	.LASF59
	.byte	0x8
	.byte	0x1
	.byte	0x4d
	.4byte	0x3a3
	.uleb128 0x11
	.string	"id"
	.byte	0x1
	.byte	0x4d
	.byte	0x23
	.4byte	0x86
	.byte	0
	.uleb128 0x11
	.string	"len"
	.byte	0x1
	.byte	0x4d
	.byte	0x26
	.4byte	0x86
	.byte	0x4
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF61
	.byte	0x4
	.byte	0x4e
	.4byte	0x3d6
	.uleb128 0x1
	.4byte	.LASF56
	.byte	0x1
	.byte	0x4f
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x11
	.string	"idx"
	.byte	0x1
	.byte	0x50
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x1
	.4byte	.LASF58
	.byte	0x1
	.byte	0x51
	.byte	0x1c
	.4byte	0x3d6
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x37d
	.4byte	0x3e5
	.uleb128 0x1e
	.4byte	0xa5
	.byte	0
	.uleb128 0x10
	.4byte	.LASF62
	.byte	0x10
	.byte	0x1
	.byte	0x57
	.4byte	0x419
	.uleb128 0x1
	.4byte	.LASF27
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x1
	.4byte	.LASF63
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF64
	.byte	0x1
	.byte	0x5a
	.byte	0xe
	.4byte	0x99
	.byte	0x8
	.byte	0
	.uleb128 0x5
	.4byte	.LASF65
	.byte	0x5e
	.byte	0x11
	.4byte	0x99
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x12
	.string	"Q"
	.byte	0x5f
	.byte	0x11
	.4byte	0x86
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0x5
	.4byte	.LASF66
	.byte	0x61
	.byte	0x1c
	.4byte	0x456
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0x9
	.4byte	0x2fa
	.uleb128 0x5
	.4byte	.LASF67
	.byte	0x62
	.byte	0x1c
	.4byte	0x470
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0x9
	.4byte	0x33b
	.uleb128 0x5
	.4byte	.LASF50
	.byte	0x63
	.byte	0x1c
	.4byte	0x48a
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0x9
	.4byte	0x3a3
	.uleb128 0x5
	.4byte	.LASF68
	.byte	0x64
	.byte	0x1c
	.4byte	0x4a4
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0x9
	.4byte	0x5b
	.uleb128 0x5
	.4byte	.LASF69
	.byte	0x66
	.byte	0x11
	.4byte	0x73
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x26
	.4byte	.LASF70
	.byte	0x1
	.byte	0x67
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xd
	.4byte	0x67
	.4byte	0x4e4
	.uleb128 0x18
	.4byte	0xa5
	.byte	0
	.uleb128 0x17
	.4byte	0x4d5
	.uleb128 0x27
	.4byte	.LASF71
	.byte	0x1
	.byte	0x68
	.byte	0x1a
	.4byte	0x4e4
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x12
	.string	"req"
	.byte	0xa8
	.byte	0x1e
	.4byte	0x3e5
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x12
	.string	"sb"
	.byte	0xcc
	.byte	0x1a
	.4byte	0xd2
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xd
	.4byte	0x5b
	.4byte	0x539
	.uleb128 0x18
	.4byte	0xa5
	.byte	0
	.uleb128 0x5
	.4byte	.LASF72
	.byte	0xcd
	.byte	0x17
	.4byte	0x52a
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xe
	.4byte	.LASF76
	.byte	0x11
	.byte	0x7
	.4byte	0x56d
	.4byte	0x56d
	.uleb128 0x4
	.4byte	0x56d
	.uleb128 0x4
	.4byte	0x572
	.uleb128 0x4
	.4byte	0xb8
	.byte	0
	.uleb128 0x9
	.4byte	0x1dc
	.uleb128 0x9
	.4byte	0x1e3
	.uleb128 0x28
	.4byte	.LASF160
	.byte	0x1
	.2byte	0x1ef
	.byte	0x6
	.4byte	0x586
	.uleb128 0x19
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF73
	.2byte	0x1ee
	.4byte	0x597
	.uleb128 0x4
	.4byte	0x56d
	.byte	0
	.uleb128 0x29
	.4byte	.LASF74
	.byte	0x4
	.byte	0x83
	.byte	0xf
	.4byte	0x5a9
	.4byte	0x5a9
	.uleb128 0x19
	.byte	0
	.uleb128 0x9
	.4byte	0x5ae
	.uleb128 0x9
	.4byte	0x280
	.uleb128 0x1f
	.4byte	.LASF75
	.2byte	0x16d
	.4byte	0x5ce
	.uleb128 0x4
	.4byte	0x5ce
	.uleb128 0x4
	.4byte	0x5ce
	.uleb128 0x4
	.4byte	0xb8
	.byte	0
	.uleb128 0x2a
	.byte	0x8
	.uleb128 0x2b
	.4byte	.LASF77
	.byte	0x1
	.2byte	0x169
	.byte	0x7
	.4byte	0x5ce
	.4byte	0x5e7
	.uleb128 0x4
	.4byte	0xb8
	.byte	0
	.uleb128 0xe
	.4byte	.LASF78
	.byte	0x10
	.byte	0x5
	.4byte	0x48
	.4byte	0x5fd
	.uleb128 0x4
	.4byte	0x572
	.uleb128 0x19
	.byte	0
	.uleb128 0xe
	.4byte	.LASF79
	.byte	0x13
	.byte	0x7
	.4byte	0x56d
	.4byte	0x617
	.uleb128 0x4
	.4byte	0x56d
	.uleb128 0x4
	.4byte	0x572
	.byte	0
	.uleb128 0xe
	.4byte	.LASF80
	.byte	0x12
	.byte	0x7
	.4byte	0x56d
	.4byte	0x636
	.uleb128 0x4
	.4byte	0x56d
	.uleb128 0x4
	.4byte	0x572
	.uleb128 0x4
	.4byte	0x48
	.byte	0
	.uleb128 0xe
	.4byte	.LASF81
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0x64b
	.uleb128 0x4
	.4byte	0x572
	.byte	0
	.uleb128 0xe
	.4byte	.LASF82
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0x665
	.uleb128 0x4
	.4byte	0x572
	.uleb128 0x4
	.4byte	0x572
	.byte	0
	.uleb128 0xe
	.4byte	.LASF83
	.byte	0x16
	.byte	0x5
	.4byte	0x48
	.4byte	0x684
	.uleb128 0x4
	.4byte	0x572
	.uleb128 0x4
	.4byte	0x572
	.uleb128 0x4
	.4byte	0x92
	.byte	0
	.uleb128 0xe
	.4byte	.LASF84
	.byte	0xe
	.byte	0x7
	.4byte	0x5ce
	.4byte	0x6a3
	.uleb128 0x4
	.4byte	0x5ce
	.uleb128 0x4
	.4byte	0x6a3
	.uleb128 0x4
	.4byte	0x92
	.byte	0
	.uleb128 0x9
	.4byte	0x6a8
	.uleb128 0x2c
	.uleb128 0xe
	.4byte	.LASF85
	.byte	0xd
	.byte	0x7
	.4byte	0x5ce
	.4byte	0x6c8
	.uleb128 0x4
	.4byte	0x5ce
	.uleb128 0x4
	.4byte	0x48
	.uleb128 0x4
	.4byte	0x92
	.byte	0
	.uleb128 0xe
	.4byte	.LASF86
	.byte	0xc
	.byte	0x7
	.4byte	0x5ce
	.4byte	0x6dd
	.uleb128 0x4
	.4byte	0xb8
	.byte	0
	.uleb128 0x2d
	.4byte	.LASF87
	.byte	0x1
	.byte	0x14
	.byte	0xd
	.4byte	0x6ef
	.uleb128 0x4
	.4byte	0x572
	.byte	0
	.uleb128 0x14
	.4byte	.LASF93
	.2byte	0x2dc
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x73a
	.uleb128 0x6
	.4byte	.LASF88
	.2byte	0x2dc
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.4byte	.LASF89
	.2byte	0x2dc
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x2dd
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xa
	.4byte	.LASF95
	.2byte	0x2ce
	.byte	0xf
	.4byte	0x5a9
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x79a
	.uleb128 0x6
	.4byte	.LASF91
	.2byte	0x2ce
	.byte	0x2a
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF92
	.2byte	0x2d0
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x3
	.string	"i"
	.2byte	0x2d2
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF94
	.2byte	0x2c7
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x7e6
	.uleb128 0x6
	.4byte	.LASF90
	.2byte	0x2c7
	.byte	0x1c
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x3
	.string	"i"
	.2byte	0x2c9
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	.LASF96
	.2byte	0x29f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x886
	.uleb128 0x8
	.string	"fd"
	.2byte	0x29f
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x6
	.4byte	.LASF97
	.2byte	0x29f
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x2a0
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"idx"
	.2byte	0x2ab
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1a
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.4byte	0x866
	.uleb128 0x3
	.string	"p"
	.2byte	0x2b1
	.byte	0x13
	.4byte	0x2f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x7
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x3
	.string	"p"
	.2byte	0x2bb
	.byte	0x17
	.4byte	0x2f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	.LASF98
	.2byte	0x28e
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x8e2
	.uleb128 0x8
	.string	"fd"
	.2byte	0x28e
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x28f
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"idx"
	.2byte	0x295
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.string	"f"
	.2byte	0x299
	.byte	0x12
	.4byte	0x5ae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xa
	.4byte	.LASF99
	.2byte	0x279
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x97b
	.uleb128 0x8
	.string	"fd"
	.2byte	0x279
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.string	"buf"
	.2byte	0x279
	.byte	0x1f
	.4byte	0x5ce
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.4byte	.LASF100
	.2byte	0x279
	.byte	0x2b
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x27a
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"idx"
	.2byte	0x280
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.string	"f"
	.2byte	0x284
	.byte	0x12
	.4byte	0x5ae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF101
	.2byte	0x285
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF102
	.2byte	0x288
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xa
	.4byte	.LASF103
	.2byte	0x250
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa0a
	.uleb128 0x6
	.4byte	.LASF104
	.2byte	0x250
	.byte	0x19
	.4byte	0x572
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x251
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF105
	.2byte	0x253
	.byte	0xa
	.4byte	0xa0a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.4byte	.LASF33
	.2byte	0x25d
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.string	"di"
	.2byte	0x262
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x7
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x3
	.string	"i"
	.2byte	0x266
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x1dc
	.4byte	0xa1a
	.uleb128 0x15
	.4byte	0xa5
	.byte	0x1f
	.byte	0
	.uleb128 0xa
	.4byte	.LASF106
	.2byte	0x225
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xaa2
	.uleb128 0x8
	.string	"fd"
	.2byte	0x225
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.4byte	.LASF55
	.2byte	0x225
	.byte	0x1d
	.4byte	0x56d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x225
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x227
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"p"
	.2byte	0x230
	.byte	0x13
	.4byte	0x2f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x3
	.string	"i"
	.2byte	0x236
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	.LASF107
	.2byte	0x1f3
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb37
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1f3
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.4byte	.LASF55
	.2byte	0x1f3
	.byte	0x1c
	.4byte	0x56d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x1f3
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x1f5
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"p"
	.2byte	0x1fe
	.byte	0x13
	.4byte	0x2f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.string	"j"
	.2byte	0x20d
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x3
	.string	"i"
	.2byte	0x20e
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF108
	.2byte	0x1c6
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbd5
	.uleb128 0x8
	.string	"fd1"
	.2byte	0x1c6
	.byte	0x15
	.4byte	0xbd5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.string	"fd2"
	.2byte	0x1c6
	.byte	0x1f
	.4byte	0xbd5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x1c7
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.string	"pip"
	.2byte	0x1c9
	.byte	0x13
	.4byte	0x2f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1a
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0xbb5
	.uleb128 0x3
	.string	"i"
	.2byte	0x1cb
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x7
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x3
	.string	"i"
	.2byte	0x1da
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x48
	.uleb128 0xa
	.4byte	.LASF109
	.2byte	0x1b9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc1a
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1b9
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x1bb
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xa
	.4byte	.LASF110
	.2byte	0x1ad
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc5a
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1ad
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x1af
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xa
	.4byte	.LASF111
	.2byte	0x1a0
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc9a
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1a0
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x1a2
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x20
	.4byte	.LASF112
	.2byte	0x188
	.byte	0xf
	.4byte	0x5a9
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xccc
	.uleb128 0x2
	.4byte	.LASF90
	.2byte	0x18a
	.byte	0x13
	.4byte	0x5a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x20
	.4byte	.LASF113
	.2byte	0x181
	.byte	0xe
	.4byte	0x5ae
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcfe
	.uleb128 0x2
	.4byte	.LASF92
	.2byte	0x183
	.byte	0x12
	.4byte	0x5ae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xa
	.4byte	.LASF114
	.2byte	0x16f
	.byte	0xf
	.4byte	0x2f5
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd4b
	.uleb128 0x3
	.string	"p"
	.2byte	0x171
	.byte	0x13
	.4byte	0x2f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF115
	.2byte	0x179
	.byte	0xb
	.4byte	0x5ce
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.string	"pa"
	.2byte	0x17a
	.byte	0xb
	.4byte	0x5ce
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x14
	.4byte	.LASF116
	.2byte	0x14d
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xda7
	.uleb128 0x6
	.4byte	.LASF33
	.2byte	0x14d
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x3
	.string	"ip"
	.2byte	0x14e
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x7
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.uleb128 0x3
	.string	"i"
	.2byte	0x154
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	.LASF117
	.2byte	0x133
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe3d
	.uleb128 0x6
	.4byte	.LASF104
	.2byte	0x133
	.byte	0x22
	.4byte	0x572
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x3
	.string	"ipr"
	.2byte	0x139
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x2
	.4byte	.LASF118
	.2byte	0x13d
	.byte	0xa
	.4byte	0xe3d
	.uleb128 0x4
	.byte	0x91
	.sleb128 -128
	.byte	0x6
	.uleb128 0x2
	.4byte	.LASF119
	.2byte	0x13f
	.byte	0xb
	.4byte	0x56d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF120
	.2byte	0x140
	.byte	0xe
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x7
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x2
	.4byte	.LASF121
	.2byte	0x144
	.byte	0x12
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x1dc
	.4byte	0xe51
	.uleb128 0x2e
	.4byte	0xa5
	.uleb128 0x4
	.byte	0x91
	.sleb128 -120
	.byte	0x6
	.byte	0
	.uleb128 0xa
	.4byte	.LASF122
	.2byte	0x11e
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf00
	.uleb128 0x6
	.4byte	.LASF123
	.2byte	0x11e
	.byte	0x24
	.4byte	0xf00
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.4byte	.LASF34
	.2byte	0x11e
	.byte	0x38
	.4byte	0x572
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.string	"off"
	.2byte	0x11f
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF124
	.2byte	0x120
	.byte	0xa
	.4byte	0xf05
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x3
	.string	"de"
	.2byte	0x124
	.byte	0x18
	.4byte	0xf15
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF125
	.2byte	0x125
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x3
	.string	"i"
	.2byte	0x126
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
	.uleb128 0xd
	.4byte	0x1dc
	.4byte	0xf15
	.uleb128 0x15
	.4byte	0xa5
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	0x1a5
	.uleb128 0x14
	.4byte	.LASF126
	.2byte	0x106
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfef
	.uleb128 0x8
	.string	"ip"
	.2byte	0x106
	.byte	0x1f
	.4byte	0xf00
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x6
	.4byte	.LASF127
	.2byte	0x106
	.byte	0x2c
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x8
	.string	"buf"
	.2byte	0x106
	.byte	0x3d
	.4byte	0x4a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.4byte	.LASF18
	.2byte	0x106
	.byte	0x4b
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF128
	.2byte	0x107
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.string	"off"
	.2byte	0x108
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.string	"dst"
	.2byte	0x109
	.byte	0xe
	.4byte	0x4a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.uleb128 0x2
	.4byte	.LASF129
	.2byte	0x10c
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF130
	.2byte	0x10d
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF102
	.2byte	0x10e
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF131
	.2byte	0x111
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x2f
	.4byte	.LASF157
	.byte	0x1
	.byte	0xe6
	.byte	0x11
	.4byte	0x86
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x10c9
	.uleb128 0xb
	.string	"ip"
	.byte	0xe6
	.byte	0x2e
	.4byte	0xf00
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xb
	.string	"idx"
	.byte	0xe6
	.byte	0x3b
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x1a
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.4byte	0x1061
	.uleb128 0x5
	.4byte	.LASF132
	.byte	0xec
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x5
	.4byte	.LASF125
	.byte	0xef
	.byte	0x13
	.4byte	0x10c9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x7
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x5
	.4byte	.LASF133
	.byte	0xf4
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF134
	.byte	0xf5
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF135
	.byte	0xf7
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x5
	.4byte	.LASF136
	.byte	0xfb
	.byte	0x13
	.4byte	0x10c9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF137
	.byte	0xfc
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF138
	.2byte	0x101
	.byte	0x13
	.4byte	0x10c9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x86
	.uleb128 0x1b
	.4byte	.LASF139
	.byte	0xd4
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x113f
	.uleb128 0x1c
	.4byte	.LASF33
	.byte	0xd4
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1c
	.4byte	.LASF140
	.byte	0xd4
	.byte	0x2f
	.4byte	0xf00
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.4byte	.LASF141
	.byte	0xdb
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.4byte	.LASF142
	.byte	0xdd
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF127
	.byte	0xdf
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x12
	.string	"dip"
	.byte	0xe2
	.byte	0x14
	.4byte	0xf00
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x30
	.4byte	.LASF161
	.byte	0x1
	.byte	0xcf
	.byte	0x6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1b
	.4byte	.LASF143
	.byte	0xc3
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1192
	.uleb128 0xb
	.string	"blk"
	.byte	0xc3
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xb
	.string	"dst"
	.byte	0xc3
	.byte	0x25
	.4byte	0x5ce
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x31
	.4byte	.LASF144
	.byte	0x1
	.byte	0xaa
	.byte	0xd
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11cd
	.uleb128 0x1c
	.4byte	.LASF64
	.byte	0xaa
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xb
	.string	"dst"
	.byte	0xaa
	.byte	0x34
	.4byte	0x5ce
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x32
	.4byte	.LASF145
	.byte	0x1
	.byte	0xa2
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1213
	.uleb128 0xb
	.string	"f0"
	.byte	0xa2
	.byte	0x27
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0xb
	.string	"f1"
	.byte	0xa2
	.byte	0x33
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xb
	.string	"f2"
	.byte	0xa2
	.byte	0x3f
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF146
	.byte	0x6d
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12fd
	.uleb128 0x5
	.4byte	.LASF147
	.byte	0x7a
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x12
	.string	"st"
	.byte	0x7e
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF148
	.byte	0x86
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x5
	.4byte	.LASF149
	.byte	0x87
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x5
	.4byte	.LASF150
	.byte	0x8d
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF151
	.byte	0x8e
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.4byte	.LASF152
	.byte	0x8f
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.4byte	.LASF153
	.byte	0x90
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x5
	.4byte	.LASF154
	.byte	0x91
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x5
	.4byte	.LASF155
	.byte	0x9b
	.byte	0xe
	.4byte	0x99
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x7
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x12
	.string	"s"
	.byte	0x6f
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x5
	.4byte	.LASF156
	.byte	0x70
	.byte	0x12
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x33
	.4byte	.LASF158
	.byte	0x1
	.byte	0x6b
	.byte	0x18
	.4byte	0x86
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1338
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
	.uleb128 0x34
	.4byte	.LASF162
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
	.uleb128 0x2
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
	.uleb128 0x3
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
	.uleb128 0xd
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x11
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
	.uleb128 0x12
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
	.uleb128 0x13
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
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
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x16
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
	.uleb128 0x17
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1a
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
	.uleb128 0x1b
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
	.uleb128 0x1c
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
	.uleb128 0x1d
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
	.uleb128 0x1e
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
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
	.uleb128 0x20
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
	.uleb128 0x21
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
	.uleb128 0x22
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
	.uleb128 0x23
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x24
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
	.uleb128 0x25
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
	.uleb128 0x26
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
	.uleb128 0x5
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x28
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
	.uleb128 0x2a
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
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
	.uleb128 0x2c
	.uleb128 0x26
	.byte	0
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
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2e
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2f
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
	.uleb128 0x30
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
	.uleb128 0x31
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
	.uleb128 0x33
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
.LASF78:
	.string	"printf"
.LASF100:
	.string	"count"
.LASF157:
	.string	"inode_blockno"
.LASF152:
	.string	"sz_used"
.LASF22:
	.string	"logstart"
.LASF82:
	.string	"strcmp"
.LASF15:
	.string	"size_t"
.LASF14:
	.string	"uintptr_t"
.LASF61:
	.string	"virtq_used"
.LASF12:
	.string	"uint64_t"
.LASF143:
	.string	"read_block"
.LASF134:
	.string	"dbl_index1"
.LASF71:
	.string	"dma_buf"
.LASF113:
	.string	"new_file_table"
.LASF36:
	.string	"ssize_t"
.LASF112:
	.string	"fs_init"
.LASF27:
	.string	"type"
.LASF80:
	.string	"strncpy"
.LASF86:
	.string	"kalloc_pages"
.LASF104:
	.string	"path"
.LASF132:
	.string	"indirect_blk"
.LASF76:
	.string	"strncat"
.LASF51:
	.string	"pipe"
.LASF75:
	.string	"append_mapping_values"
.LASF57:
	.string	"next"
.LASF137:
	.string	"first_blk"
.LASF16:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF72:
	.string	"block_buf"
.LASF43:
	.string	"FK_STDIN"
.LASF116:
	.string	"dump_inode"
.LASF154:
	.string	"npages"
.LASF25:
	.string	"superblock"
.LASF123:
	.string	"parent"
.LASF155:
	.string	"vq_phys"
.LASF4:
	.string	"long int"
.LASF79:
	.string	"strtok"
.LASF69:
	.string	"aidx"
.LASF111:
	.string	"is_pipe"
.LASF126:
	.string	"read_data"
.LASF158:
	.string	"mr32"
.LASF84:
	.string	"memcpy"
.LASF68:
	.string	"vq_area"
.LASF8:
	.string	"uint16_t"
.LASF46:
	.string	"FK_FILE"
.LASF150:
	.string	"sz_desc"
.LASF106:
	.string	"pipewrite"
.LASF60:
	.string	"virtq_avail"
.LASF133:
	.string	"dbl_index0"
.LASF108:
	.string	"pipe_open"
.LASF54:
	.string	"virtq_desc"
.LASF127:
	.string	"offset"
.LASF73:
	.string	"panic"
.LASF63:
	.string	"reserved"
.LASF95:
	.string	"fs_dup_table"
.LASF11:
	.string	"unsigned int"
.LASF81:
	.string	"strlen"
.LASF41:
	.string	"read_open"
.LASF29:
	.string	"minor"
.LASF98:
	.string	"fs_size"
.LASF13:
	.string	"long unsigned int"
.LASF110:
	.string	"is_stdin"
.LASF42:
	.string	"write_open"
.LASF34:
	.string	"name"
.LASF139:
	.string	"read_inode"
.LASF145:
	.string	"set_flags"
.LASF38:
	.string	"data"
.LASF18:
	.string	"size"
.LASF9:
	.string	"short unsigned int"
.LASF160:
	.string	"yield"
.LASF96:
	.string	"fs_close"
.LASF30:
	.string	"nlink"
.LASF93:
	.string	"fs_dup2"
.LASF23:
	.string	"inodestart"
.LASF151:
	.string	"sz_avail"
.LASF159:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -ffreestanding"
.LASF64:
	.string	"sector"
.LASF44:
	.string	"FK_STDOUT"
.LASF117:
	.string	"path_lookup"
.LASF74:
	.string	"get_current_file_table"
.LASF118:
	.string	"copy"
.LASF90:
	.string	"file_table"
.LASF121:
	.string	"next_inum"
.LASF70:
	.string	"status_byte"
.LASF156:
	.string	"base"
.LASF87:
	.string	"puts"
.LASF138:
	.string	"second_entries"
.LASF122:
	.string	"dir_lookup"
.LASF83:
	.string	"strncmp"
.LASF142:
	.string	"blkno"
.LASF17:
	.string	"long double"
.LASF115:
	.string	"user_va"
.LASF66:
	.string	"desc"
.LASF59:
	.string	"virtq_used_elem"
.LASF149:
	.string	"drvQ"
.LASF32:
	.string	"dirent"
.LASF31:
	.string	"addrs"
.LASF140:
	.string	"dest"
.LASF135:
	.string	"dindirect_blk"
.LASF89:
	.string	"newfd"
.LASF107:
	.string	"piperead"
.LASF141:
	.string	"inodes_per_blk"
.LASF120:
	.string	"current_inum"
.LASF50:
	.string	"used"
.LASF119:
	.string	"token"
.LASF102:
	.string	"to_read"
.LASF55:
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
.LASF91:
	.string	"orig"
.LASF3:
	.string	"short int"
.LASF48:
	.string	"file"
.LASF20:
	.string	"ninodes"
.LASF49:
	.string	"kind"
.LASF131:
	.string	"disk_blk"
.LASF124:
	.string	"namebuf"
.LASF129:
	.string	"blk_idx"
.LASF10:
	.string	"uint32_t"
.LASF39:
	.string	"nread"
.LASF147:
	.string	"devfeat"
.LASF35:
	.string	"char"
.LASF162:
	.string	"mw32"
.LASF153:
	.string	"sz_total"
.LASF62:
	.string	"virtio_blk_req"
.LASF103:
	.string	"fs_open"
.LASF125:
	.string	"entries"
.LASF144:
	.string	"virtio_blk_read"
.LASF40:
	.string	"nwrite"
.LASF47:
	.string	"FK_PIPE"
.LASF97:
	.string	"force_pipe_close"
.LASF26:
	.string	"dinode"
.LASF45:
	.string	"FK_STDERR"
.LASF130:
	.string	"blk_off"
.LASF88:
	.string	"oldfd"
.LASF85:
	.string	"memset"
.LASF114:
	.string	"pipealloc"
.LASF99:
	.string	"fs_read"
.LASF148:
	.string	"devQ"
.LASF146:
	.string	"virtio_blk_init"
.LASF6:
	.string	"uint8_t"
.LASF56:
	.string	"flags"
.LASF67:
	.string	"avail"
.LASF58:
	.string	"ring"
.LASF161:
	.string	"read_superblock"
.LASF65:
	.string	"vbase"
.LASF52:
	.string	"read_pipe"
.LASF109:
	.string	"is_stdout"
.LASF19:
	.string	"nblocks"
.LASF53:
	.string	"write_pipe"
.LASF28:
	.string	"major"
.LASF24:
	.string	"bmapstart"
.LASF94:
	.string	"fs_exit"
.LASF128:
	.string	"left"
.LASF105:
	.string	"path2"
.LASF92:
	.string	"result"
.LASF101:
	.string	"remaining"
.LASF77:
	.string	"common_kalloc"
.LASF136:
	.string	"first_entries"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
