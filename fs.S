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
	.loc 1 107 59
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
	.loc 1 107 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 107 62
	mv	a4,a5
	.loc 1 107 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 107 91
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
	.loc 1 108 60
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
	.loc 1 108 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 108 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 108 97
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
	.loc 1 111 1
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
	.loc 1 112 13
	sw	zero,-20(s0)
	.loc 1 112 5
	j	.L5
.L9:
.LBB3:
	.loc 1 113 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 113 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 114 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 114 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 115 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 115 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 115 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 115 58
	j	.L8
.L22:
	.loc 1 114 47
	nop
.L7:
.LBE3:
	.loc 1 112 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 112 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 117 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 117 7
	bne	a5,zero,.L10
	.loc 1 117 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 117 54
	j	.L11
.L10:
	.loc 1 118 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 118 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 118 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 118 70
	j	.L13
.L12:
	.loc 1 120 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 121 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 123 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 125 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 127 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 127 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 128 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 129 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 129 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 129 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 130 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 130 46
	j	.L15
.L14:
	.loc 1 133 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 134 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 135 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 136 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 137 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 138 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 139 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 139 7
	beq	a5,zero,.L17
	.loc 1 139 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 139 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 139 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 139 65
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
	.section	.rodata
	.align	3
.LC14:
	.string	"kalloc pipe %p\n"
	.text
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB13:
	.loc 1 367 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 368 38
	call	kalloc
	sd	a0,-24(s0)
	.loc 1 369 1
	ld	a1,-24(s0)
	lla	a0,.LC14
	call	printf
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
	.loc 1 376 13
	ld	a5,-24(s0)
	sw	zero,528(a5)
	.loc 1 378 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 379 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 381 12
	ld	a5,-24(s0)
.L74:
	.loc 1 382 1
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
	.globl	gFiles
	.bss
	.align	3
	.type	gFiles, @object
	.size	gFiles, 1024
gFiles:
	.zero	1024
	.globl	gNumFiles
	.section	.sbss,"aw",@nobits
	.align	2
	.type	gNumFiles, @object
	.size	gNumFiles, 4
gNumFiles:
	.zero	4
	.section	.rodata
	.align	3
.LC15:
	.string	"kalloc file table %p\n"
	.align	3
.LC16:
	.string	"MAX FILE DISCRIPTOR OPEN"
	.text
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB14:
	.loc 1 389 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 390 41
	call	kalloc
	sd	a0,-24(s0)
	.loc 1 391 1
	ld	a1,-24(s0)
	lla	a0,.LC15
	call	printf
	.loc 1 392 5
	li	a2,104
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 394 21
	lla	a5,gNumFiles
	lw	a5,0(a5)
	addiw	a4,a5,1
	sext.w	a3,a4
	lla	a4,gNumFiles
	sw	a3,0(a4)
	.loc 1 394 25
	lla	a4,gFiles
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 396 18
	lla	a5,gNumFiles
	lw	a4,0(a5)
	.loc 1 396 7
	li	a5,127
	ble	a4,a5,.L76
	.loc 1 397 9
	lla	a0,.LC16
	call	puts
.L77:
	.loc 1 398 14
	j	.L77
.L76:
	.loc 1 401 12
	ld	a5,-24(s0)
	.loc 1 402 1
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
	.loc 1 405 1
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
	.loc 1 406 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 408 21
	call	new_file_table
	mv	a4,a0
	.loc 1 408 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 410 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 410 25
	sw	zero,0(a5)
	.loc 1 411 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 411 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 413 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 413 21
	call	new_file_table
	mv	a5,a0
	.loc 1 413 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 415 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 415 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 416 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 416 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 418 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 418 21
	call	new_file_table
	mv	a5,a0
	.loc 1 418 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 420 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 420 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 421 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 421 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 422 1
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
.LFE15:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB16:
	.loc 1 425 1
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
	.loc 1 426 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 428 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 428 8
	beq	a5,zero,.L81
	.loc 1 428 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 428 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 428 24 discriminator 1
	beq	a5,zero,.L81
	.loc 1 429 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 429 26
	ld	a5,88(a5)
	.loc 1 429 11
	beq	a5,zero,.L81
	.loc 1 430 20
	li	a5,1
	j	.L82
.L81:
	.loc 1 434 12
	li	a5,0
.L82:
	.loc 1 435 1
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
	.loc 1 438 1
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
	.loc 1 439 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 440 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 440 8
	beq	a5,zero,.L84
	.loc 1 440 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 440 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 440 24 discriminator 1
	beq	a5,zero,.L84
	.loc 1 441 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 441 26
	lw	a5,0(a5)
	.loc 1 441 11
	bne	a5,zero,.L84
	.loc 1 442 20
	li	a5,1
	j	.L85
.L84:
	.loc 1 446 12
	li	a5,0
.L85:
	.loc 1 447 1
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
	.loc 1 450 1
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
	.loc 1 451 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 453 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 453 8
	beq	a5,zero,.L87
	.loc 1 453 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 453 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 453 24 discriminator 1
	beq	a5,zero,.L87
	.loc 1 454 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 454 26
	lw	a4,0(a5)
	.loc 1 454 11
	li	a5,1
	bne	a4,a5,.L87
	.loc 1 455 20
	li	a5,1
	j	.L88
.L87:
	.loc 1 459 12
	li	a5,0
.L88:
	.loc 1 460 1
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
	.loc 1 462 36
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
	.loc 1 463 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 465 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB11:
	.loc 1 467 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 467 5
	j	.L90
.L93:
	.loc 1 468 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 468 12
	bne	a5,zero,.L91
	.loc 1 469 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 469 29
	call	new_file_table
	mv	a5,a0
	.loc 1 469 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 471 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 471 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 472 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 472 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 473 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 473 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 474 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 474 34
	sw	zero,76(a5)
	.loc 1 475 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 475 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 476 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 476 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 477 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 477 38
	li	a4,1
	sw	a4,96(a5)
	.loc 1 478 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 478 41
	sw	zero,100(a5)
	.loc 1 479 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 480 13
	j	.L92
.L91:
	.loc 1 467 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L90:
	.loc 1 467 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L93
.L92:
.LBE11:
.LBB12:
	.loc 1 483 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 483 5
	j	.L94
.L97:
	.loc 1 484 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 484 12
	bne	a5,zero,.L95
	.loc 1 485 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 485 29
	call	new_file_table
	mv	a5,a0
	.loc 1 485 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 487 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 487 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 488 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 488 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 489 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 489 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 491 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 491 34
	sw	zero,76(a5)
	.loc 1 492 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 492 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 493 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 493 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 494 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 494 39
	li	a4,1
	sw	a4,100(a5)
	.loc 1 495 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 495 38
	sw	zero,96(a5)
	.loc 1 496 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 497 13
	j	.L96
.L95:
	.loc 1 483 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L94:
	.loc 1 483 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L97
.LBE12:
	.loc 1 500 1
	nop
.L96:
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
.LC17:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB20:
	.loc 1 510 1
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
	.loc 1 511 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 513 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 513 8
	bne	a5,zero,.L99
	.loc 1 514 9
	lla	a0,.LC17
	call	panic
.L99:
	.loc 1 517 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L100
	.loc 1 517 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L101
.L100:
	.loc 1 518 9
	lla	a0,.LC17
	call	panic
.L101:
	.loc 1 520 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 520 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 522 7
	ld	a5,-32(s0)
	bne	a5,zero,.L103
	.loc 1 523 9
	lla	a0,.LC17
	call	panic
	.loc 1 526 11
	j	.L103
.L105:
	.loc 1 527 8
	call	yield
.L103:
	.loc 1 526 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 526 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 526 34
	bne	a4,a5,.L104
	.loc 1 526 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 526 34 discriminator 1
	bne	a5,zero,.L105
.L104:
	.loc 1 530 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 530 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 530 8
	bne	a4,a5,.L106
	.loc 1 530 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 530 31 discriminator 1
	bne	a5,zero,.L106
	.loc 1 531 16
	li	a5,0
	j	.L107
.L106:
	.loc 1 535 18
	sw	zero,-36(s0)
.LBB13:
	.loc 1 536 23
	sw	zero,-40(s0)
	.loc 1 536 5
	j	.L108
.L111:
	.loc 1 538 12
	call	yield
.L109:
	.loc 1 537 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 537 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 537 38
	bne	a4,a5,.L110
	.loc 1 537 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 537 38 discriminator 1
	bne	a5,zero,.L111
.L110:
	.loc 1 542 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 542 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 542 12
	bne	a4,a5,.L112
	.loc 1 542 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 542 35 discriminator 1
	bne	a5,zero,.L112
	.loc 1 543 20
	li	a5,0
	j	.L107
.L112:
	.loc 1 546 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 546 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 546 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 546 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 546 17
	sb	a4,0(a5)
	.loc 1 547 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 547 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 550 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 536 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L108:
	.loc 1 536 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 536 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L113
	.loc 1 536 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 536 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 536 36 discriminator 3
	bltu	a4,a5,.L109
.L113:
.LBE13:
	.loc 1 554 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L107:
	.loc 1 555 1
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
.LC18:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB21:
	.loc 1 560 1
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
	.loc 1 561 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 563 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 563 8
	bne	a5,zero,.L116
	.loc 1 564 9
	lla	a0,.LC18
	call	panic
.L116:
	.loc 1 567 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L117
	.loc 1 567 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L118
.L117:
	.loc 1 568 9
	lla	a0,.LC18
	call	panic
.L118:
	.loc 1 570 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 570 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 572 7
	ld	a5,-32(s0)
	bne	a5,zero,.L119
	.loc 1 573 9
	lla	a0,.LC18
	call	panic
.L119:
.LBB14:
	.loc 1 576 23
	sw	zero,-36(s0)
	.loc 1 576 5
	j	.L120
.L123:
	.loc 1 579 11
	call	yield
.L121:
	.loc 1 578 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 578 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 578 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 578 48
	li	a5,512
	bne	a4,a5,.L122
	.loc 1 578 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 578 48 discriminator 1
	bne	a5,zero,.L123
.L122:
	.loc 1 582 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 582 10
	bne	a5,zero,.L124
	.loc 1 583 18
	li	a5,-1
	j	.L125
.L124:
	.loc 1 585 44
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 585 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 585 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 585 44
	lbu	a4,0(a5)
	.loc 1 585 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 586 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 586 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 576 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L120:
	.loc 1 576 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L121
.LBE14:
	.loc 1 593 12
	lw	a5,-56(s0)
.L125:
	.loc 1 594 1
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
	.loc 1 602 31
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
	.loc 1 603 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 607 12
	ld	a5,-168(s0)
	lbu	a5,0(a5)
	.loc 1 607 7
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L128
	.loc 1 608 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncpy
	j	.L129
.L128:
	.loc 1 611 9
	addi	a5,s0,-88
	li	a2,32
	lla	a1,.LC5
	mv	a0,a5
	call	strncpy
	.loc 1 612 9
	addi	a5,s0,-88
	li	a2,32
	ld	a1,-168(s0)
	mv	a0,a5
	call	strncat
.L129:
	.loc 1 615 21
	addi	a5,s0,-88
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 616 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L130
	.loc 1 617 16
	li	a5,-1
	j	.L136
.L130:
	.loc 1 621 5
	addi	a4,s0,-160
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 622 11
	lhu	a5,-160(s0)
	.loc 1 622 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L132
	.loc 1 622 32 discriminator 1
	lhu	a5,-160(s0)
	.loc 1 622 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L132
	.loc 1 622 55 discriminator 2
	li	a5,-1
	.loc 1 622 55 is_stmt 0
	j	.L136
.L132:
.LBB15:
	.loc 1 624 14 is_stmt 1
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 624 5
	j	.L133
.L135:
	.loc 1 625 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 625 12
	bne	a5,zero,.L134
	.loc 1 626 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 626 29
	call	new_file_table
	mv	a5,a0
	.loc 1 626 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 628 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 628 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 629 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 629 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 630 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 630 34
	lw	a4,-52(s0)
	sw	a4,4(a5)
	.loc 1 631 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 631 34
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
	.loc 1 632 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 632 34
	sw	zero,76(a5)
	.loc 1 633 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 633 40
	sw	zero,96(a5)
	.loc 1 634 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 634 41
	sw	zero,100(a5)
	.loc 1 635 20
	lw	a5,-36(s0)
	j	.L136
.L134:
	.loc 1 624 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L133:
	.loc 1 624 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L135
.LBE15:
	.loc 1 638 12
	li	a5,-1
.L136:
	.loc 1 639 1
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
	.loc 1 643 50
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
	.loc 1 644 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 646 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 646 7
	bne	a5,zero,.L138
	.loc 1 647 16
	li	a5,-1
	j	.L139
.L138:
	.loc 1 650 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 651 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L140
	.loc 1 651 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L141
.L140:
	.loc 1 652 16
	li	a5,-1
	j	.L139
.L141:
	.loc 1 654 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 654 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 655 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 655 41
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 655 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 656 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L142
	.loc 1 656 32 discriminator 1
	li	a5,0
	.loc 1 656 32 is_stmt 0
	j	.L139
.L142:
	.loc 1 658 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L143
	mv	a5,a4
.L143:
	.loc 1 658 14
	sw	a5,-48(s0)
	.loc 1 659 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,76(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 660 6
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 660 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,76(a5)
	.loc 1 661 12
	lw	a5,-48(s0)
.L139:
	.loc 1 662 1
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
	.loc 1 664 25
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
	.loc 1 665 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 667 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 667 7
	bne	a5,zero,.L145
	.loc 1 668 16
	li	a5,-1
	j	.L146
.L145:
	.loc 1 671 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 672 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L147
	.loc 1 672 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L147
	.loc 1 672 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 672 61 discriminator 2
	lw	a5,80(a5)
	.loc 1 672 42 discriminator 2
	bne	a5,zero,.L148
.L147:
	.loc 1 673 16
	li	a5,-1
	j	.L146
.L148:
	.loc 1 675 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 675 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 676 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L146:
	.loc 1 677 1
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
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB25:
	.loc 1 681 45
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
	.loc 1 682 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 684 18
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 684 7
	bne	a5,zero,.L150
	.loc 1 685 16
	li	a5,-1
	j	.L151
.L150:
	.loc 1 695 10
	ld	a5,-56(s0)
	sd	a5,-32(s0)
	.loc 1 696 8
	ld	a5,-32(s0)
	blt	a5,zero,.L152
	.loc 1 696 17 discriminator 1
	ld	a4,-32(s0)
	li	a5,15
	ble	a4,a5,.L153
.L152:
	.loc 1 697 16
	li	a5,-1
	j	.L151
.L153:
	.loc 1 698 15
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 698 20
	lw	a4,80(a5)
	.loc 1 698 26
	addiw	a4,a4,-1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 699 7
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L154
.LBB16:
	.loc 1 700 37
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 700 23
	ld	a5,88(a5)
	sd	a5,-40(s0)
	.loc 1 701 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 701 27
	lw	a5,96(a5)
	.loc 1 701 11
	beq	a5,zero,.L155
	.loc 1 702 26
	ld	a5,-40(s0)
	sw	zero,520(a5)
.L155:
	.loc 1 704 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 704 27
	lw	a5,100(a5)
	.loc 1 704 11
	beq	a5,zero,.L154
	.loc 1 705 27
	ld	a5,-40(s0)
	sw	zero,524(a5)
.L154:
.LBE16:
	.loc 1 708 18
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 708 23
	lw	a5,80(a5)
	.loc 1 708 7
	bgt	a5,zero,.L156
.LBB17:
	.loc 1 709 19
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 709 31
	sw	zero,80(a5)
	.loc 1 710 37
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 710 23
	ld	a5,88(a5)
	sd	a5,-48(s0)
	.loc 1 711 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 711 27
	lw	a5,96(a5)
	.loc 1 711 11
	beq	a5,zero,.L157
	.loc 1 712 26
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L157:
	.loc 1 714 22
	ld	a5,-32(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 714 27
	lw	a5,100(a5)
	.loc 1 714 11
	beq	a5,zero,.L158
	.loc 1 715 27
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L158:
	.loc 1 717 11
	ld	a5,-48(s0)
	beq	a5,zero,.L156
	.loc 1 718 14
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 718 20
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,528(a5)
.L156:
.LBE17:
	.loc 1 723 12
	li	a5,0
.L151:
	.loc 1 724 1
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
	.loc 1 727 1
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
	.loc 1 728 13
	sw	zero,-20(s0)
	.loc 1 728 5
	j	.L160
.L161:
	.loc 1 729 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 728 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L160:
	.loc 1 728 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L161
.LBE18:
	.loc 1 731 1
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
	.loc 1 734 1
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
.LBB19:
	.loc 1 735 13
	sw	zero,-20(s0)
	.loc 1 735 5
	j	.L163
.L165:
	.loc 1 736 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 736 11
	beq	a5,zero,.L164
	.loc 1 737 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 737 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-40(s0)
	add	a5,a3,a5
	.loc 1 737 29
	ld	a4,0(a4)
	.loc 1 737 23
	sd	a4,0(a5)
	.loc 1 738 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 738 22
	lw	a4,80(a5)
	.loc 1 738 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 739 22
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 739 25
	ld	a5,88(a5)
	.loc 1 739 15
	beq	a5,zero,.L164
	.loc 1 740 23
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 740 26
	ld	a5,88(a5)
	.loc 1 740 32
	lw	a4,528(a5)
	.loc 1 740 38
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,528(a5)
.L164:
	.loc 1 735 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L163:
	.loc 1 735 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L165
.LBE19:
	.loc 1 744 1
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
.LFE27:
	.size	fs_dup_table, .-fs_dup_table
	.section	.rodata
	.align	3
.LC19:
	.string	"kfree %p\n"
	.text
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB28:
	.loc 1 747 1
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
.LBB20:
	.loc 1 748 13
	sw	zero,-20(s0)
	.loc 1 748 5
	j	.L167
.L170:
	.loc 1 749 22
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 749 11
	beq	a5,zero,.L168
	.loc 1 750 26
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 750 29
	ld	a5,88(a5)
	.loc 1 750 15
	beq	a5,zero,.L169
	.loc 1 751 33
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 751 36
	ld	a5,88(a5)
	.loc 1 751 17
	mv	a0,a5
	call	kfree
	.loc 1 752 32
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 752 1
	ld	a5,88(a5)
	mv	a1,a5
	lla	a0,.LC19
	call	printf
.L169:
	.loc 1 754 26
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 754 29
	lw	a5,80(a5)
	.loc 1 754 15
	bgt	a5,zero,.L168
	.loc 1 755 33
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 755 17
	ld	a5,0(a5)
	mv	a0,a5
	call	kfree
	.loc 1 756 32
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 756 1
	ld	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC19
	call	printf
.L168:
	.loc 1 748 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L167:
	.loc 1 748 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L170
.LBE20:
	.loc 1 760 1
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
.LFE28:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB29:
	.loc 1 762 36
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
	.loc 1 763 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 766 20
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 766 9
	beq	a5,zero,.L172
	.loc 1 767 10
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L172:
	.loc 1 771 35
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 771 15
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 771 35
	ld	a4,0(a4)
	.loc 1 771 23
	sd	a4,0(a5)
	.loc 1 772 15
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 772 22
	lw	a4,80(a5)
	.loc 1 772 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 773 18
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 773 25
	ld	a5,88(a5)
	.loc 1 773 7
	beq	a5,zero,.L174
	.loc 1 774 19
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 774 26
	ld	a5,88(a5)
	.loc 1 774 32
	lw	a4,528(a5)
	.loc 1 774 38
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,528(a5)
.L174:
	.loc 1 776 1
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
.LFE29:
	.size	fs_dup2, .-fs_dup2
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x13ee
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x21
	.4byte	.LASF161
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
	.uleb128 0x22
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x17
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
	.uleb128 0x17
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
	.uleb128 0xc
	.4byte	0x86
	.4byte	0x1a5
	.uleb128 0x14
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
	.uleb128 0xc
	.4byte	0x1dc
	.4byte	0x1dc
	.uleb128 0x14
	.4byte	0xa5
	.byte	0xd
	.byte	0
	.uleb128 0xd
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
	.2byte	0x214
	.byte	0x4
	.byte	0x65
	.byte	0x8
	.4byte	0x251
	.uleb128 0x1
	.4byte	.LASF38
	.byte	0x4
	.byte	0x66
	.byte	0xa
	.4byte	0x251
	.byte	0
	.uleb128 0x15
	.4byte	.LASF39
	.byte	0x67
	.byte	0xe
	.4byte	0x86
	.2byte	0x200
	.uleb128 0x15
	.4byte	.LASF40
	.byte	0x68
	.byte	0xe
	.4byte	0x86
	.2byte	0x204
	.uleb128 0x15
	.4byte	.LASF41
	.byte	0x69
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x15
	.4byte	.LASF42
	.byte	0x6a
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x15
	.4byte	.LASF43
	.byte	0x6b
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.byte	0
	.uleb128 0xc
	.4byte	0x1dc
	.4byte	0x260
	.uleb128 0x18
	.4byte	0xa5
	.byte	0
	.uleb128 0x25
	.byte	0x7
	.byte	0x4
	.4byte	0x92
	.byte	0x4
	.byte	0x70
	.byte	0xa
	.4byte	0x28d
	.uleb128 0x16
	.4byte	.LASF44
	.byte	0
	.uleb128 0x16
	.4byte	.LASF45
	.byte	0x1
	.uleb128 0x16
	.4byte	.LASF46
	.byte	0x2
	.uleb128 0x16
	.4byte	.LASF47
	.byte	0x3
	.uleb128 0x16
	.4byte	.LASF48
	.byte	0x4
	.byte	0
	.uleb128 0x10
	.4byte	.LASF49
	.byte	0x68
	.byte	0x4
	.byte	0x6f
	.4byte	0x302
	.uleb128 0x1
	.4byte	.LASF50
	.byte	0x4
	.byte	0x70
	.byte	0x3f
	.4byte	0x260
	.byte	0
	.uleb128 0x1
	.4byte	.LASF33
	.byte	0x4
	.byte	0x71
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x11
	.string	"din"
	.byte	0x4
	.byte	0x72
	.byte	0x13
	.4byte	0x13a
	.byte	0x8
	.uleb128 0x11
	.string	"off"
	.byte	0x4
	.byte	0x73
	.byte	0xe
	.4byte	0x86
	.byte	0x4c
	.uleb128 0x1
	.4byte	.LASF43
	.byte	0x4
	.byte	0x74
	.byte	0x9
	.4byte	0x48
	.byte	0x50
	.uleb128 0x1
	.4byte	.LASF51
	.byte	0x4
	.byte	0x75
	.byte	0x13
	.4byte	0x302
	.byte	0x58
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x4
	.byte	0x76
	.byte	0x9
	.4byte	0x48
	.byte	0x60
	.uleb128 0x1
	.4byte	.LASF53
	.byte	0x4
	.byte	0x77
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
	.byte	0x41
	.4byte	0x348
	.uleb128 0x1
	.4byte	.LASF55
	.byte	0x1
	.byte	0x42
	.byte	0xe
	.4byte	0x99
	.byte	0
	.uleb128 0x11
	.string	"len"
	.byte	0x1
	.byte	0x43
	.byte	0xe
	.4byte	0x86
	.byte	0x8
	.uleb128 0x1
	.4byte	.LASF56
	.byte	0x1
	.byte	0x44
	.byte	0xe
	.4byte	0x73
	.byte	0xc
	.uleb128 0x1
	.4byte	.LASF57
	.byte	0x1
	.byte	0x45
	.byte	0xe
	.4byte	0x73
	.byte	0xe
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF60
	.byte	0x2
	.byte	0x48
	.4byte	0x37b
	.uleb128 0x1
	.4byte	.LASF56
	.byte	0x1
	.byte	0x49
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x11
	.string	"idx"
	.byte	0x1
	.byte	0x4a
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x1
	.4byte	.LASF58
	.byte	0x1
	.byte	0x4b
	.byte	0xe
	.4byte	0x37b
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x73
	.4byte	0x38a
	.uleb128 0x1e
	.4byte	0xa5
	.byte	0
	.uleb128 0x10
	.4byte	.LASF59
	.byte	0x8
	.byte	0x1
	.byte	0x4e
	.4byte	0x3b0
	.uleb128 0x11
	.string	"id"
	.byte	0x1
	.byte	0x4e
	.byte	0x23
	.4byte	0x86
	.byte	0
	.uleb128 0x11
	.string	"len"
	.byte	0x1
	.byte	0x4e
	.byte	0x26
	.4byte	0x86
	.byte	0x4
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF61
	.byte	0x4
	.byte	0x4f
	.4byte	0x3e3
	.uleb128 0x1
	.4byte	.LASF56
	.byte	0x1
	.byte	0x50
	.byte	0xe
	.4byte	0x73
	.byte	0
	.uleb128 0x11
	.string	"idx"
	.byte	0x1
	.byte	0x51
	.byte	0xe
	.4byte	0x73
	.byte	0x2
	.uleb128 0x1
	.4byte	.LASF58
	.byte	0x1
	.byte	0x52
	.byte	0x1c
	.4byte	0x3e3
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x38a
	.4byte	0x3f2
	.uleb128 0x1e
	.4byte	0xa5
	.byte	0
	.uleb128 0x10
	.4byte	.LASF62
	.byte	0x10
	.byte	0x1
	.byte	0x58
	.4byte	0x426
	.uleb128 0x1
	.4byte	.LASF27
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x86
	.byte	0
	.uleb128 0x1
	.4byte	.LASF63
	.byte	0x1
	.byte	0x5a
	.byte	0xe
	.4byte	0x86
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF64
	.byte	0x1
	.byte	0x5b
	.byte	0xe
	.4byte	0x99
	.byte	0x8
	.byte	0
	.uleb128 0x4
	.4byte	.LASF65
	.byte	0x5f
	.byte	0x11
	.4byte	0x99
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x13
	.string	"Q"
	.byte	0x60
	.byte	0x11
	.4byte	0x86
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0x4
	.4byte	.LASF66
	.byte	0x62
	.byte	0x1c
	.4byte	0x463
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0x9
	.4byte	0x307
	.uleb128 0x4
	.4byte	.LASF67
	.byte	0x63
	.byte	0x1c
	.4byte	0x47d
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0x9
	.4byte	0x348
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0x64
	.byte	0x1c
	.4byte	0x497
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0x9
	.4byte	0x3b0
	.uleb128 0x4
	.4byte	.LASF68
	.byte	0x65
	.byte	0x1c
	.4byte	0x4b1
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0x9
	.4byte	0x5b
	.uleb128 0x4
	.4byte	.LASF69
	.byte	0x67
	.byte	0x11
	.4byte	0x73
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x26
	.4byte	.LASF70
	.byte	0x1
	.byte	0x68
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xc
	.4byte	0x67
	.4byte	0x4f1
	.uleb128 0x18
	.4byte	0xa5
	.byte	0
	.uleb128 0x17
	.4byte	0x4e2
	.uleb128 0x27
	.4byte	.LASF71
	.byte	0x1
	.byte	0x69
	.byte	0x1a
	.4byte	0x4f1
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x13
	.string	"req"
	.byte	0xa8
	.byte	0x1e
	.4byte	0x3f2
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x13
	.string	"sb"
	.byte	0xcc
	.byte	0x1a
	.4byte	0xd2
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xc
	.4byte	0x5b
	.4byte	0x546
	.uleb128 0x18
	.4byte	0xa5
	.byte	0
	.uleb128 0x4
	.4byte	.LASF72
	.byte	0xcd
	.byte	0x17
	.4byte	0x537
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xc
	.4byte	0x56b
	.4byte	0x56b
	.uleb128 0x14
	.4byte	0xa5
	.byte	0x7f
	.byte	0
	.uleb128 0x9
	.4byte	0x28d
	.uleb128 0x1f
	.4byte	.LASF73
	.2byte	0x181
	.byte	0xe
	.4byte	0x55b
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1f
	.4byte	.LASF74
	.2byte	0x182
	.byte	0x5
	.4byte	0x48
	.uleb128 0x9
	.byte	0x3
	.8byte	gNumFiles
	.uleb128 0x20
	.4byte	.LASF75
	.byte	0x9
	.byte	0x6
	.4byte	0x5ad
	.uleb128 0x5
	.4byte	0x5ad
	.byte	0
	.uleb128 0x28
	.byte	0x8
	.uleb128 0xe
	.4byte	.LASF78
	.byte	0x12
	.byte	0x7
	.4byte	0x5ce
	.4byte	0x5ce
	.uleb128 0x5
	.4byte	0x5ce
	.uleb128 0x5
	.4byte	0x5d3
	.uleb128 0x5
	.4byte	0xb8
	.byte	0
	.uleb128 0x9
	.4byte	0x1dc
	.uleb128 0x9
	.4byte	0x1e3
	.uleb128 0x29
	.4byte	.LASF162
	.byte	0x1
	.2byte	0x1f9
	.byte	0x6
	.4byte	0x5e7
	.uleb128 0x19
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF76
	.byte	0x1
	.2byte	0x1f8
	.byte	0x6
	.4byte	0x5fa
	.uleb128 0x5
	.4byte	0x5ce
	.byte	0
	.uleb128 0x2b
	.4byte	.LASF77
	.byte	0x4
	.byte	0x84
	.byte	0xf
	.4byte	0x60c
	.4byte	0x60c
	.uleb128 0x19
	.byte	0
	.uleb128 0x9
	.4byte	0x56b
	.uleb128 0x2c
	.4byte	.LASF163
	.byte	0x1
	.byte	0x8
	.byte	0x8
	.4byte	0x5ad
	.uleb128 0xe
	.4byte	.LASF79
	.byte	0x11
	.byte	0x5
	.4byte	0x48
	.4byte	0x633
	.uleb128 0x5
	.4byte	0x5d3
	.uleb128 0x19
	.byte	0
	.uleb128 0xe
	.4byte	.LASF80
	.byte	0x14
	.byte	0x7
	.4byte	0x5ce
	.4byte	0x64d
	.uleb128 0x5
	.4byte	0x5ce
	.uleb128 0x5
	.4byte	0x5d3
	.byte	0
	.uleb128 0xe
	.4byte	.LASF81
	.byte	0x13
	.byte	0x7
	.4byte	0x5ce
	.4byte	0x66c
	.uleb128 0x5
	.4byte	0x5ce
	.uleb128 0x5
	.4byte	0x5d3
	.uleb128 0x5
	.4byte	0x48
	.byte	0
	.uleb128 0xe
	.4byte	.LASF82
	.byte	0x10
	.byte	0x5
	.4byte	0x48
	.4byte	0x681
	.uleb128 0x5
	.4byte	0x5d3
	.byte	0
	.uleb128 0xe
	.4byte	.LASF83
	.byte	0x16
	.byte	0x5
	.4byte	0x48
	.4byte	0x69b
	.uleb128 0x5
	.4byte	0x5d3
	.uleb128 0x5
	.4byte	0x5d3
	.byte	0
	.uleb128 0xe
	.4byte	.LASF84
	.byte	0x17
	.byte	0x5
	.4byte	0x48
	.4byte	0x6ba
	.uleb128 0x5
	.4byte	0x5d3
	.uleb128 0x5
	.4byte	0x5d3
	.uleb128 0x5
	.4byte	0x92
	.byte	0
	.uleb128 0xe
	.4byte	.LASF85
	.byte	0xf
	.byte	0x7
	.4byte	0x5ad
	.4byte	0x6d9
	.uleb128 0x5
	.4byte	0x5ad
	.uleb128 0x5
	.4byte	0x6d9
	.uleb128 0x5
	.4byte	0x92
	.byte	0
	.uleb128 0x9
	.4byte	0x6de
	.uleb128 0x2d
	.uleb128 0xe
	.4byte	.LASF86
	.byte	0xe
	.byte	0x7
	.4byte	0x5ad
	.4byte	0x6fe
	.uleb128 0x5
	.4byte	0x5ad
	.uleb128 0x5
	.4byte	0x48
	.uleb128 0x5
	.4byte	0x92
	.byte	0
	.uleb128 0xe
	.4byte	.LASF87
	.byte	0xd
	.byte	0x7
	.4byte	0x5ad
	.4byte	0x713
	.uleb128 0x5
	.4byte	0xb8
	.byte	0
	.uleb128 0x20
	.4byte	.LASF88
	.byte	0x15
	.byte	0xd
	.4byte	0x724
	.uleb128 0x5
	.4byte	0x5d3
	.byte	0
	.uleb128 0x12
	.4byte	.LASF92
	.2byte	0x2fa
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x76f
	.uleb128 0x6
	.4byte	.LASF89
	.2byte	0x2fa
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.4byte	.LASF90
	.2byte	0x2fa
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x2fb
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x12
	.4byte	.LASF93
	.2byte	0x2ea
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x7bb
	.uleb128 0x6
	.4byte	.LASF91
	.2byte	0x2ea
	.byte	0x22
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.uleb128 0x2
	.string	"i"
	.2byte	0x2ec
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x2e
	.4byte	.LASF94
	.byte	0x1
	.2byte	0x2dd
	.byte	0x6
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x818
	.uleb128 0x6
	.4byte	.LASF95
	.2byte	0x2dd
	.byte	0x21
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.4byte	.LASF96
	.2byte	0x2dd
	.byte	0x37
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x7
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x2
	.string	"i"
	.2byte	0x2df
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x12
	.4byte	.LASF97
	.2byte	0x2d6
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x864
	.uleb128 0x6
	.4byte	.LASF91
	.2byte	0x2d6
	.byte	0x1c
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x2
	.string	"i"
	.2byte	0x2d8
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	.LASF99
	.2byte	0x2a9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x904
	.uleb128 0x8
	.string	"fd"
	.2byte	0x2a9
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x6
	.4byte	.LASF98
	.2byte	0x2a9
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x2aa
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x2b7
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1a
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.4byte	0x8e4
	.uleb128 0x2
	.string	"p"
	.2byte	0x2bc
	.byte	0x17
	.4byte	0x302
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x7
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x2
	.string	"p"
	.2byte	0x2c6
	.byte	0x17
	.4byte	0x302
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	.LASF100
	.2byte	0x298
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x960
	.uleb128 0x8
	.string	"fd"
	.2byte	0x298
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x299
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x29f
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x2a3
	.byte	0x12
	.4byte	0x56b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xb
	.4byte	.LASF101
	.2byte	0x283
	.byte	0x9
	.4byte	0x1e8
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x9f9
	.uleb128 0x8
	.string	"fd"
	.2byte	0x283
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.string	"buf"
	.2byte	0x283
	.byte	0x1f
	.4byte	0x5ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.4byte	.LASF102
	.2byte	0x283
	.byte	0x2b
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x284
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x28a
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x28e
	.byte	0x12
	.4byte	0x56b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF103
	.2byte	0x28f
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF104
	.2byte	0x292
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xb
	.4byte	.LASF105
	.2byte	0x25a
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa88
	.uleb128 0x6
	.4byte	.LASF106
	.2byte	0x25a
	.byte	0x19
	.4byte	0x5d3
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x25b
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF107
	.2byte	0x25d
	.byte	0xa
	.4byte	0xa88
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x267
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.string	"di"
	.2byte	0x26c
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x7
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x2
	.string	"i"
	.2byte	0x270
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x1dc
	.4byte	0xa98
	.uleb128 0x14
	.4byte	0xa5
	.byte	0x1f
	.byte	0
	.uleb128 0xb
	.4byte	.LASF108
	.2byte	0x22f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb20
	.uleb128 0x8
	.string	"fd"
	.2byte	0x22f
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.4byte	.LASF55
	.2byte	0x22f
	.byte	0x1d
	.4byte	0x5ce
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x22f
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x231
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x23a
	.byte	0x13
	.4byte	0x302
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x2
	.string	"i"
	.2byte	0x240
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	.LASF109
	.2byte	0x1fd
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbb5
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1fd
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.4byte	.LASF55
	.2byte	0x1fd
	.byte	0x1c
	.4byte	0x5ce
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.string	"n"
	.2byte	0x1fd
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x1ff
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x208
	.byte	0x13
	.4byte	0x302
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"j"
	.2byte	0x217
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x2
	.string	"i"
	.2byte	0x218
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x12
	.4byte	.LASF110
	.2byte	0x1ce
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc53
	.uleb128 0x8
	.string	"fd1"
	.2byte	0x1ce
	.byte	0x15
	.4byte	0xc53
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.string	"fd2"
	.2byte	0x1ce
	.byte	0x1f
	.4byte	0xc53
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x1cf
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"pip"
	.2byte	0x1d1
	.byte	0x13
	.4byte	0x302
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1a
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0xc33
	.uleb128 0x2
	.string	"i"
	.2byte	0x1d3
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x7
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x2
	.string	"i"
	.2byte	0x1e3
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x48
	.uleb128 0xb
	.4byte	.LASF111
	.2byte	0x1c1
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc98
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1c1
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x1c3
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.4byte	.LASF112
	.2byte	0x1b5
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcd8
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1b5
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x1b7
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.4byte	.LASF113
	.2byte	0x1a8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd18
	.uleb128 0x8
	.string	"fd"
	.2byte	0x1a8
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x1aa
	.byte	0x13
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x12
	.4byte	.LASF114
	.2byte	0x194
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd45
	.uleb128 0x6
	.4byte	.LASF91
	.2byte	0x194
	.byte	0x1c
	.4byte	0x60c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x2f
	.4byte	.LASF115
	.byte	0x1
	.2byte	0x184
	.byte	0xe
	.4byte	0x56b
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd78
	.uleb128 0x3
	.4byte	.LASF95
	.2byte	0x186
	.byte	0x12
	.4byte	0x56b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.4byte	.LASF116
	.2byte	0x16e
	.byte	0xf
	.4byte	0x302
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdc5
	.uleb128 0x2
	.string	"p"
	.2byte	0x170
	.byte	0x13
	.4byte	0x302
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.4byte	.LASF117
	.2byte	0x17a
	.byte	0xb
	.4byte	0x5ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"pa"
	.2byte	0x17b
	.byte	0xb
	.4byte	0x5ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x12
	.4byte	.LASF118
	.2byte	0x14d
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe21
	.uleb128 0x6
	.4byte	.LASF33
	.2byte	0x14d
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x2
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
	.uleb128 0x2
	.string	"i"
	.2byte	0x154
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	.LASF119
	.2byte	0x133
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xeb7
	.uleb128 0x6
	.4byte	.LASF106
	.2byte	0x133
	.byte	0x22
	.4byte	0x5d3
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x2
	.string	"ipr"
	.2byte	0x139
	.byte	0x13
	.4byte	0x13a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x3
	.4byte	.LASF120
	.2byte	0x13d
	.byte	0xa
	.4byte	0xeb7
	.uleb128 0x4
	.byte	0x91
	.sleb128 -128
	.byte	0x6
	.uleb128 0x3
	.4byte	.LASF121
	.2byte	0x13f
	.byte	0xb
	.4byte	0x5ce
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.4byte	.LASF122
	.2byte	0x140
	.byte	0xe
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x7
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x3
	.4byte	.LASF123
	.2byte	0x144
	.byte	0x12
	.4byte	0x86
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x1dc
	.4byte	0xecb
	.uleb128 0x30
	.4byte	0xa5
	.uleb128 0x4
	.byte	0x91
	.sleb128 -120
	.byte	0x6
	.byte	0
	.uleb128 0xb
	.4byte	.LASF124
	.2byte	0x11e
	.byte	0xa
	.4byte	0x86
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf7a
	.uleb128 0x6
	.4byte	.LASF125
	.2byte	0x11e
	.byte	0x24
	.4byte	0xf7a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.4byte	.LASF34
	.2byte	0x11e
	.byte	0x38
	.4byte	0x5d3
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.string	"off"
	.2byte	0x11f
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.4byte	.LASF126
	.2byte	0x120
	.byte	0xa
	.4byte	0xf7f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x2
	.string	"de"
	.2byte	0x124
	.byte	0x18
	.4byte	0xf8f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.4byte	.LASF127
	.2byte	0x125
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x2
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
	.uleb128 0xc
	.4byte	0x1dc
	.4byte	0xf8f
	.uleb128 0x14
	.4byte	0xa5
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	0x1a5
	.uleb128 0x12
	.4byte	.LASF128
	.2byte	0x106
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1069
	.uleb128 0x8
	.string	"ip"
	.2byte	0x106
	.byte	0x1f
	.4byte	0xf7a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x6
	.4byte	.LASF129
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
	.4byte	0x4b1
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
	.uleb128 0x3
	.4byte	.LASF130
	.2byte	0x107
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"off"
	.2byte	0x108
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"dst"
	.2byte	0x109
	.byte	0xe
	.4byte	0x4b1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.uleb128 0x3
	.4byte	.LASF131
	.2byte	0x10c
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF132
	.2byte	0x10d
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF104
	.2byte	0x10e
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF133
	.2byte	0x111
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x31
	.4byte	.LASF159
	.byte	0x1
	.byte	0xe6
	.byte	0x11
	.4byte	0x86
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1143
	.uleb128 0xa
	.string	"ip"
	.byte	0xe6
	.byte	0x2e
	.4byte	0xf7a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xa
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
	.4byte	0x10db
	.uleb128 0x4
	.4byte	.LASF134
	.byte	0xec
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.4byte	.LASF127
	.byte	0xef
	.byte	0x13
	.4byte	0x1143
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x7
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x4
	.4byte	.LASF135
	.byte	0xf4
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF136
	.byte	0xf5
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF137
	.byte	0xf7
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.4byte	.LASF138
	.byte	0xfb
	.byte	0x13
	.4byte	0x1143
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF139
	.byte	0xfc
	.byte	0x12
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.4byte	.LASF140
	.2byte	0x101
	.byte	0x13
	.4byte	0x1143
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	0x86
	.uleb128 0x1b
	.4byte	.LASF141
	.byte	0xd4
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11b9
	.uleb128 0x1c
	.4byte	.LASF33
	.byte	0xd4
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1c
	.4byte	.LASF142
	.byte	0xd4
	.byte	0x2f
	.4byte	0xf7a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF143
	.byte	0xdb
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF144
	.byte	0xdd
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF129
	.byte	0xdf
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x13
	.string	"dip"
	.byte	0xe2
	.byte	0x14
	.4byte	0xf7a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x32
	.4byte	.LASF164
	.byte	0x1
	.byte	0xcf
	.byte	0x6
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1b
	.4byte	.LASF145
	.byte	0xc3
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x120c
	.uleb128 0xa
	.string	"blk"
	.byte	0xc3
	.byte	0x1a
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xa
	.string	"dst"
	.byte	0xc3
	.byte	0x25
	.4byte	0x5ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x33
	.4byte	.LASF146
	.byte	0x1
	.byte	0xaa
	.byte	0xd
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1247
	.uleb128 0x1c
	.4byte	.LASF64
	.byte	0xaa
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.string	"dst"
	.byte	0xaa
	.byte	0x34
	.4byte	0x5ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x34
	.4byte	.LASF147
	.byte	0x1
	.byte	0xa2
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x128d
	.uleb128 0xa
	.string	"f0"
	.byte	0xa2
	.byte	0x27
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0xa
	.string	"f1"
	.byte	0xa2
	.byte	0x33
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xa
	.string	"f2"
	.byte	0xa2
	.byte	0x3f
	.4byte	0x73
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF148
	.byte	0x6e
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1377
	.uleb128 0x4
	.4byte	.LASF149
	.byte	0x7b
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x13
	.string	"st"
	.byte	0x7f
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.4byte	.LASF150
	.byte	0x87
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.4byte	.LASF151
	.byte	0x88
	.byte	0xe
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.4byte	.LASF152
	.byte	0x8d
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.4byte	.LASF153
	.byte	0x8e
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.4byte	.LASF154
	.byte	0x8f
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.4byte	.LASF155
	.byte	0x90
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.4byte	.LASF156
	.byte	0x91
	.byte	0xc
	.4byte	0xb8
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.4byte	.LASF157
	.byte	0x9b
	.byte	0xe
	.4byte	0x99
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x7
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x13
	.string	"s"
	.byte	0x70
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x4
	.4byte	.LASF158
	.byte	0x71
	.byte	0x12
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x35
	.4byte	.LASF160
	.byte	0x1
	.byte	0x6c
	.byte	0x18
	.4byte	0x86
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13b2
	.uleb128 0xa
	.string	"b"
	.byte	0x6c
	.byte	0x26
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.string	"o"
	.byte	0x6c
	.byte	0x31
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x36
	.4byte	.LASF165
	.byte	0x1
	.byte	0x6b
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xa
	.string	"b"
	.byte	0x6b
	.byte	0x22
	.4byte	0x99
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.string	"o"
	.byte	0x6b
	.byte	0x2d
	.4byte	0x86
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0xa
	.string	"v"
	.byte	0x6b
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
	.uleb128 0xc
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x13
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
	.uleb128 0x14
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x15
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
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
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
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
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
	.uleb128 0x5
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
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
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
	.uleb128 0x32
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
.LASF79:
	.string	"printf"
.LASF102:
	.string	"count"
.LASF159:
	.string	"inode_blockno"
.LASF154:
	.string	"sz_used"
.LASF22:
	.string	"logstart"
.LASF83:
	.string	"strcmp"
.LASF74:
	.string	"gNumFiles"
.LASF15:
	.string	"size_t"
.LASF14:
	.string	"uintptr_t"
.LASF61:
	.string	"virtq_used"
.LASF12:
	.string	"uint64_t"
.LASF136:
	.string	"dbl_index1"
.LASF71:
	.string	"dma_buf"
.LASF115:
	.string	"new_file_table"
.LASF36:
	.string	"ssize_t"
.LASF156:
	.string	"npages"
.LASF114:
	.string	"fs_init"
.LASF27:
	.string	"type"
.LASF81:
	.string	"strncpy"
.LASF145:
	.string	"read_block"
.LASF106:
	.string	"path"
.LASF134:
	.string	"indirect_blk"
.LASF78:
	.string	"strncat"
.LASF51:
	.string	"pipe"
.LASF87:
	.string	"kalloc_pages"
.LASF57:
	.string	"next"
.LASF93:
	.string	"free_fs_table"
.LASF139:
	.string	"first_blk"
.LASF16:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF72:
	.string	"block_buf"
.LASF44:
	.string	"FK_STDIN"
.LASF118:
	.string	"dump_inode"
.LASF152:
	.string	"sz_desc"
.LASF25:
	.string	"superblock"
.LASF125:
	.string	"parent"
.LASF157:
	.string	"vq_phys"
.LASF4:
	.string	"long int"
.LASF80:
	.string	"strtok"
.LASF69:
	.string	"aidx"
.LASF113:
	.string	"is_pipe"
.LASF128:
	.string	"read_data"
.LASF160:
	.string	"mr32"
.LASF85:
	.string	"memcpy"
.LASF68:
	.string	"vq_area"
.LASF8:
	.string	"uint16_t"
.LASF47:
	.string	"FK_FILE"
.LASF75:
	.string	"kfree"
.LASF108:
	.string	"pipewrite"
.LASF60:
	.string	"virtq_avail"
.LASF135:
	.string	"dbl_index0"
.LASF110:
	.string	"pipe_open"
.LASF54:
	.string	"virtq_desc"
.LASF129:
	.string	"offset"
.LASF76:
	.string	"panic"
.LASF63:
	.string	"reserved"
.LASF94:
	.string	"fs_dup_table"
.LASF11:
	.string	"unsigned int"
.LASF82:
	.string	"strlen"
.LASF41:
	.string	"read_open"
.LASF29:
	.string	"minor"
.LASF100:
	.string	"fs_size"
.LASF13:
	.string	"long unsigned int"
.LASF112:
	.string	"is_stdin"
.LASF42:
	.string	"write_open"
.LASF34:
	.string	"name"
.LASF141:
	.string	"read_inode"
.LASF147:
	.string	"set_flags"
.LASF38:
	.string	"data"
.LASF18:
	.string	"size"
.LASF9:
	.string	"short unsigned int"
.LASF162:
	.string	"yield"
.LASF99:
	.string	"fs_close"
.LASF30:
	.string	"nlink"
.LASF92:
	.string	"fs_dup2"
.LASF23:
	.string	"inodestart"
.LASF153:
	.string	"sz_avail"
.LASF161:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -ffreestanding"
.LASF64:
	.string	"sector"
.LASF45:
	.string	"FK_STDOUT"
.LASF119:
	.string	"path_lookup"
.LASF77:
	.string	"get_current_file_table"
.LASF120:
	.string	"copy"
.LASF91:
	.string	"file_table"
.LASF123:
	.string	"next_inum"
.LASF70:
	.string	"status_byte"
.LASF158:
	.string	"base"
.LASF88:
	.string	"puts"
.LASF140:
	.string	"second_entries"
.LASF124:
	.string	"dir_lookup"
.LASF84:
	.string	"strncmp"
.LASF144:
	.string	"blkno"
.LASF17:
	.string	"long double"
.LASF117:
	.string	"user_va"
.LASF66:
	.string	"desc"
.LASF59:
	.string	"virtq_used_elem"
.LASF151:
	.string	"drvQ"
.LASF32:
	.string	"dirent"
.LASF31:
	.string	"addrs"
.LASF142:
	.string	"dest"
.LASF137:
	.string	"dindirect_blk"
.LASF90:
	.string	"newfd"
.LASF109:
	.string	"piperead"
.LASF143:
	.string	"inodes_per_blk"
.LASF165:
	.string	"mw32"
.LASF122:
	.string	"current_inum"
.LASF43:
	.string	"used"
.LASF121:
	.string	"token"
.LASF104:
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
.LASF96:
	.string	"orig"
.LASF3:
	.string	"short int"
.LASF49:
	.string	"file"
.LASF20:
	.string	"ninodes"
.LASF50:
	.string	"kind"
.LASF133:
	.string	"disk_blk"
.LASF126:
	.string	"namebuf"
.LASF131:
	.string	"blk_idx"
.LASF10:
	.string	"uint32_t"
.LASF39:
	.string	"nread"
.LASF73:
	.string	"gFiles"
.LASF149:
	.string	"devfeat"
.LASF35:
	.string	"char"
.LASF163:
	.string	"kalloc"
.LASF155:
	.string	"sz_total"
.LASF62:
	.string	"virtio_blk_req"
.LASF105:
	.string	"fs_open"
.LASF127:
	.string	"entries"
.LASF146:
	.string	"virtio_blk_read"
.LASF40:
	.string	"nwrite"
.LASF48:
	.string	"FK_PIPE"
.LASF98:
	.string	"force_pipe_close"
.LASF26:
	.string	"dinode"
.LASF46:
	.string	"FK_STDERR"
.LASF132:
	.string	"blk_off"
.LASF89:
	.string	"oldfd"
.LASF86:
	.string	"memset"
.LASF116:
	.string	"pipealloc"
.LASF101:
	.string	"fs_read"
.LASF150:
	.string	"devQ"
.LASF148:
	.string	"virtio_blk_init"
.LASF6:
	.string	"uint8_t"
.LASF56:
	.string	"flags"
.LASF67:
	.string	"avail"
.LASF58:
	.string	"ring"
.LASF164:
	.string	"read_superblock"
.LASF65:
	.string	"vbase"
.LASF52:
	.string	"read_pipe"
.LASF111:
	.string	"is_stdout"
.LASF19:
	.string	"nblocks"
.LASF53:
	.string	"write_pipe"
.LASF28:
	.string	"major"
.LASF24:
	.string	"bmapstart"
.LASF97:
	.string	"fs_exit"
.LASF130:
	.string	"left"
.LASF107:
	.string	"path2"
.LASF95:
	.string	"result"
.LASF103:
	.string	"remaining"
.LASF138:
	.string	"first_entries"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
