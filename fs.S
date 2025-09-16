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
.LFB2:
	.file 1 "fs.c"
	.loc 1 130 59
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
	.loc 1 130 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 130 62
	mv	a4,a5
	.loc 1 130 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 130 91
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
.LFE2:
	.size	mw32, .-mw32
	.align	1
	.type	mr32, @function
mr32:
.LFB3:
	.loc 1 131 60
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
	.loc 1 131 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 131 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 131 97
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
.LFB4:
	.loc 1 134 1
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
	.loc 1 135 13
	sw	zero,-20(s0)
	.loc 1 135 5
	j	.L5
.L9:
.LBB3:
	.loc 1 136 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 136 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 137 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 137 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 138 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 138 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 138 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 138 58
	j	.L8
.L22:
	.loc 1 137 47
	nop
.L7:
.LBE3:
	.loc 1 135 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 135 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 140 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 140 7
	bne	a5,zero,.L10
	.loc 1 140 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 140 54
	j	.L11
.L10:
	.loc 1 141 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 141 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 141 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 141 70
	j	.L13
.L12:
	.loc 1 143 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 144 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 146 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 148 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 150 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 150 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 151 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 152 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 152 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 152 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 153 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 153 46
	j	.L15
.L14:
	.loc 1 156 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 157 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 158 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 159 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 160 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 161 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 162 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 162 7
	beq	a5,zero,.L17
	.loc 1 162 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 162 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 162 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 162 65
	j	.L19
.L18:
	.loc 1 164 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 164 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 165 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 165 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 166 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 166 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 167 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 167 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 168 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 168 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 170 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 170 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 171 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 171 8
	bne	a5,zero,.L20
	.loc 1 171 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 171 57
	j	.L21
.L20:
	.loc 1 172 5
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
	.loc 1 174 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 175 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 175 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 176 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 176 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 178 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 178 14
	sd	a5,-96(s0)
	.loc 1 179 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 180 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 180 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 180 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 182 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 183 1
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
.LFE4:
	.size	virtio_blk_init, .-virtio_blk_init
	.align	1
	.type	set_flags, @function
set_flags:
.LFB5:
	.loc 1 185 66
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
	.loc 1 186 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 186 19
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
	.loc 1 187 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 187 19
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
	.loc 1 188 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 188 19
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
	.loc 1 189 1
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
	.size	set_flags, .-set_flags
	.local	req
	.comm	req,16,8
	.align	1
	.type	virtio_blk_read, @function
virtio_blk_read:
.LFB6:
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
	sd	a0,-24(s0)
	sd	a1,-32(s0)
	.loc 1 195 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 196 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 197 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 198 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 200 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 200 20
	lla	a4,req
	.loc 1 200 18
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
	.loc 1 200 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 200 51
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
	.loc 1 200 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 200 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 201 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 201 20
	lla	a4,dma_buf
	.loc 1 201 18
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
	.loc 1 201 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 201 51
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
	.loc 1 201 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 201 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 202 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 202 20
	lla	a4,status_byte
	.loc 1 202 18
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
	.loc 1 202 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 202 57
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
	.loc 1 204 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 206 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 206 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 206 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 207 5
	fence	rw,rw
	.loc 1 208 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 208 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 208 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 208 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 210 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 212 10
	j	.L25
.L26:
	.loc 1 213 9
	fence	rw,rw
.L25:
	.loc 1 212 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 215 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 216 1
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
	.size	virtio_blk_read, .-virtio_blk_read
	.align	1
	.globl	read_block
	.type	read_block, @function
read_block:
.LFB7:
	.loc 1 219 1
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
	.loc 1 220 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
	.loc 1 221 1
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
	.size	read_block, .-read_block
	.align	1
	.type	virtio_blk_write, @function
virtio_blk_write:
.LFB8:
	.loc 1 224 1
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
	.loc 1 225 14
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 226 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 227 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 228 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 230 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 232 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 232 20
	lla	a4,req
	.loc 1 232 18
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
	.loc 1 232 47
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 232 55
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
	.loc 1 232 77
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 232 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 233 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 233 20
	lla	a4,dma_buf
	.loc 1 233 18
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
	.loc 1 233 47
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 233 55
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
	.loc 1 233 77
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 233 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 234 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 234 20
	lla	a4,status_byte
	.loc 1 234 18
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
	.loc 1 234 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 234 56
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
	.loc 1 236 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 238 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 238 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 238 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 239 5
	fence	rw,rw
	.loc 1 240 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 240 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 240 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 240 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 242 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 244 10
	j	.L29
.L30:
	.loc 1 245 9
	fence	rw,rw
.L29:
	.loc 1 244 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L30
	.loc 1 246 1
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
.LFE8:
	.size	virtio_blk_write, .-virtio_blk_write
	.align	1
	.globl	write_block
	.type	write_block, @function
write_block:
.LFB9:
	.loc 1 249 1
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
	.loc 1 250 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_write
	.loc 1 251 1
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
.LFE9:
	.size	write_block, .-write_block
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.type	fs_now, @function
fs_now:
.LFB10:
	.loc 1 262 37
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 262 51
 #APP
# 262 "fs.c" 1
	csrr a5, time
# 0 "" 2
 #NO_APP
	sd	a5,-24(s0)
	.loc 1 262 128
	ld	a4,-24(s0)
	lla	a5,.LC5
	ld	a5,0(a5)
	mulhu	a5,a4,a5
	srli	a5,a5,18
	.loc 1 262 115
	sext.w	a4,a5
	.loc 1 262 113
	lla	a5,g_time_offset
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 262 143
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
.LFE10:
	.size	fs_now, .-fs_now
	.align	1
	.type	check_perm, @function
check_perm:
.LFB11:
	.loc 1 270 1
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
	.loc 1 271 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 271 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 272 23
	ld	a5,-56(s0)
	lw	a5,12(a5)
	.loc 1 272 14
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 273 9
	li	a5,6
	sw	a5,-20(s0)
	.loc 1 274 10
	ld	a5,-40(s0)
	lhu	a4,1882(a5)
	.loc 1 274 21
	ld	a5,-56(s0)
	lhu	a5,16(a5)
	.loc 1 274 8
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L35
	.loc 1 274 34 discriminator 1
	li	a5,6
	sw	a5,-20(s0)
	j	.L36
.L35:
	.loc 1 275 15
	ld	a5,-40(s0)
	lhu	a4,1884(a5)
	.loc 1 275 26
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 275 13
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L37
	.loc 1 275 39 discriminator 1
	li	a5,3
	sw	a5,-20(s0)
	j	.L36
.L37:
.LBB4:
	.loc 1 277 13
	sw	zero,-24(s0)
.LBB5:
	.loc 1 278 18
	sw	zero,-28(s0)
	.loc 1 278 9
	j	.L38
.L41:
	.loc 1 278 54 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-28(s0)
	addi	a5,a5,936
	slli	a5,a5,1
	add	a5,a4,a5
	lhu	a4,14(a5)
	.loc 1 278 63 discriminator 5
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 278 41 discriminator 5
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L39
	.loc 1 278 78 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 278 82
	j	.L40
.L39:
	.loc 1 278 34 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L38:
	.loc 1 278 25 discriminator 4
	ld	a5,-40(s0)
	lw	a5,1904(a5)
	.loc 1 278 23 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L41
.L40:
.LBE5:
	.loc 1 279 28
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L42
	.loc 1 279 28 is_stmt 0 discriminator 1
	li	a5,3
	j	.L43
.L42:
	.loc 1 279 28 discriminator 2
	li	a5,0
.L43:
	.loc 1 279 15 is_stmt 1 discriminator 4
	sw	a5,-20(s0)
.L36:
.LBE4:
	.loc 1 281 23
	lw	a5,-20(s0)
	lw	a4,-44(s0)
	srlw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 281 9
	andi	a5,a5,7
	sw	a5,-48(s0)
	.loc 1 283 15
	lw	a5,-60(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 283 8
	beq	a5,zero,.L44
	.loc 1 283 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 283 26 discriminator 1
	bne	a5,zero,.L44
	.loc 1 283 50 discriminator 2
	li	a5,0
	.loc 1 283 50 is_stmt 0
	j	.L45
.L44:
	.loc 1 284 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 284 8
	beq	a5,zero,.L46
	.loc 1 284 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 284 26 discriminator 1
	bne	a5,zero,.L46
	.loc 1 284 50 discriminator 2
	li	a5,0
	.loc 1 284 50 is_stmt 0
	j	.L45
.L46:
	.loc 1 285 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 285 8
	beq	a5,zero,.L47
	.loc 1 285 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 285 26 discriminator 1
	bne	a5,zero,.L47
	.loc 1 285 50 discriminator 2
	li	a5,0
	.loc 1 285 50 is_stmt 0
	j	.L45
.L47:
	.loc 1 286 12 is_stmt 1
	li	a5,1
.L45:
	.loc 1 287 1
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
.LFE11:
	.size	check_perm, .-check_perm
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB12:
	.loc 1 289 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 290 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 291 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 292 1
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
.LFE12:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB13:
	.loc 1 294 53
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
	.loc 1 295 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L50
	.loc 1 295 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 295 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L51
.L50:
	.loc 1 296 9
	li	a2,88
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 297 9
	j	.L49
.L51:
	.loc 1 301 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 303 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 303 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 303 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 303 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 305 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 305 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 305 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 307 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 308 26
	lwu	a4,-28(s0)
	.loc 1 308 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 309 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L49:
	.loc 1 310 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE13:
	.size	read_inode, .-read_inode
	.align	1
	.type	BBLOCK, @function
BBLOCK:
.LFB14:
	.loc 1 315 42
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
	sw	a5,-20(s0)
	.loc 1 315 53
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 315 69
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 1 315 64
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 315 77
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
	.size	BBLOCK, .-BBLOCK
	.align	1
	.type	write_inode, @function
write_inode:
.LFB15:
	.loc 1 318 1
	.cfi_startproc
	addi	sp,sp,-576
	.cfi_def_cfa_offset 576
	sd	ra,568(sp)
	sd	s0,560(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,576
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-576(s0)
	sw	a5,-564(s0)
	.loc 1 319 8
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L60
	.loc 1 319 30 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 319 18 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L60
	.loc 1 320 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 321 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 321 45
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 321 50
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 321 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 322 30
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 322 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 322 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 325 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 326 26
	lwu	a5,-28(s0)
	.loc 1 326 20
	addi	a4,s0,-552
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 327 10
	ld	a4,-40(s0)
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 328 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L55
.L60:
	.loc 1 319 40
	nop
.L55:
	.loc 1 329 1
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE15:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB16:
	.loc 1 332 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 1 333 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 335 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 336 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 337 19
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 337 16
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 1 337 29
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 337 23
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 337 34
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 338 1
	mv	a0,a5
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE16:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB17:
	.loc 1 341 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 1 342 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 344 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 345 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 346 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 346 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 346 27
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 346 21
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 346 15
	slliw	a5,a5,24
	sraiw	a5,a5,24
	or	a5,a4,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	andi	a4,a5,0xff
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-520(a5)
	.loc 1 347 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 348 1
	nop
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE17:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	bitmap_clear, @function
bitmap_clear:
.LFB18:
	.loc 1 351 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 1 352 8
	lw	a5,-548(s0)
	sext.w	a5,a5
	beq	a5,zero,.L68
	.loc 1 353 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 355 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 356 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 357 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 357 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 357 28
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 357 22
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 357 15
	slliw	a5,a5,24
	sraiw	a5,a5,24
	not	a5,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	and	a5,a4,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	andi	a4,a5,0xff
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-520(a5)
	.loc 1 358 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L64
.L68:
	.loc 1 352 17
	nop
.L64:
	.loc 1 359 1
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE18:
	.size	bitmap_clear, .-bitmap_clear
	.align	1
	.type	free_inode_blocks, @function
free_inode_blocks:
.LFB19:
	.loc 1 363 1
	.cfi_startproc
	addi	sp,sp,-608
	.cfi_def_cfa_offset 608
	sd	ra,600(sp)
	sd	s0,592(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,608
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-608(s0)
	sw	a5,-596(s0)
.LBB6:
	.loc 1 365 14
	sw	zero,-20(s0)
	.loc 1 365 5
	j	.L70
.L72:
	.loc 1 366 22
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 366 12
	beq	a5,zero,.L71
	.loc 1 367 13
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 368 26
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L71:
	.loc 1 365 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L70:
	.loc 1 365 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L72
.LBE6:
	.loc 1 373 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	.loc 1 373 8
	beq	a5,zero,.L73
.LBB7:
	.loc 1 374 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	sw	a5,-36(s0)
	.loc 1 375 9
	lw	a5,-36(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 376 19
	lla	a5,block_buf
	sd	a5,-48(s0)
.LBB8:
	.loc 1 377 18
	sw	zero,-24(s0)
	.loc 1 377 9
	j	.L74
.L76:
	.loc 1 378 21
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 378 16
	beq	a5,zero,.L75
	.loc 1 378 43 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 378 26 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L75:
	.loc 1 377 41 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L74:
	.loc 1 377 27 discriminator 1
	lw	a4,-24(s0)
	li	a5,127
	bleu	a4,a5,.L76
.LBE8:
	.loc 1 380 9
	lw	a5,-36(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 381 28
	ld	a5,-608(s0)
	sw	zero,80(a5)
.L73:
.LBE7:
	.loc 1 385 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	.loc 1 385 8
	beq	a5,zero,.L77
.LBB9:
	.loc 1 386 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	sw	a5,-52(s0)
	.loc 1 387 9
	lw	a5,-52(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 388 19
	lla	a5,block_buf
	sd	a5,-64(s0)
.LBB10:
	.loc 1 389 18
	sw	zero,-28(s0)
	.loc 1 389 9
	j	.L78
.L85:
.LBB11:
	.loc 1 390 23
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 390 16
	beq	a5,zero,.L86
	.loc 1 391 34
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 391 22
	lw	a5,0(a5)
	sw	a5,-68(s0)
	.loc 1 393 13
	addi	a4,s0,-592
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 394 23
	addi	a5,s0,-592
	sd	a5,-80(s0)
.LBB12:
	.loc 1 395 22
	sw	zero,-32(s0)
	.loc 1 395 13
	j	.L81
.L83:
	.loc 1 396 27
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 396 20
	beq	a5,zero,.L82
	.loc 1 396 51 discriminator 1
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	.loc 1 396 32 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L82:
	.loc 1 395 45 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L81:
	.loc 1 395 31 discriminator 1
	lw	a4,-32(s0)
	li	a5,127
	bleu	a4,a5,.L83
.LBE12:
	.loc 1 398 13
	lw	a5,-68(s0)
	mv	a0,a5
	call	bitmap_clear
	j	.L84
.L86:
	.loc 1 390 28
	nop
.L84:
.LBE11:
	.loc 1 389 41 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L78:
	.loc 1 389 27 discriminator 1
	lw	a4,-28(s0)
	li	a5,127
	bleu	a4,a5,.L85
.LBE10:
	.loc 1 400 9
	lw	a5,-52(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 401 30
	ld	a5,-608(s0)
	sw	zero,84(a5)
.L77:
.LBE9:
	.loc 1 404 14
	ld	a5,-608(s0)
	sw	zero,8(a5)
	.loc 1 405 5
	lw	a5,-596(s0)
	ld	a1,-608(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 406 1
	nop
	ld	ra,600(sp)
	.cfi_restore 1
	ld	s0,592(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 608
	addi	sp,sp,608
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE19:
	.size	free_inode_blocks, .-free_inode_blocks
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB20:
	.loc 1 409 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 410 30
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 410 42
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 410 14
	srliw	a5,a5,12
	sw	a5,-24(s0)
	.loc 1 411 29
	lla	a5,sb
	lw	a5,24(a5)
	.loc 1 411 14
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
.LBB13:
	.loc 1 412 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
	.loc 1 412 5
	j	.L88
.L91:
	.loc 1 413 14
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 413 12 discriminator 1
	bne	a5,zero,.L89
.LBB14:
	.loc 1 414 13
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 417 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 418 13
	addi	a4,s0,-544
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 419 20
	lw	a5,-20(s0)
	j	.L90
.L89:
.LBE14:
	.loc 1 412 48 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L88:
	.loc 1 412 40 discriminator 1
	lla	a5,sb
	lw	a5,0(a5)
	.loc 1 412 36 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L91
.LBE13:
	.loc 1 422 12
	li	a5,0
.L90:
	.loc 1 423 1
	mv	a0,a5
	ld	ra,536(sp)
	.cfi_restore 1
	ld	s0,528(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 544
	addi	sp,sp,544
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE20:
	.size	alloc_data_block, .-alloc_data_block
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB21:
	.loc 1 425 64
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
	.loc 1 426 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L93
	.loc 1 428 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L94
.L93:
	.loc 1 429 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L95
.LBB15:
	.loc 1 431 18
	ld	a5,-88(s0)
	lw	a5,80(a5)
	sw	a5,-60(s0)
	.loc 1 432 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L96
	.loc 1 432 39 discriminator 1
	li	a5,0
	.loc 1 432 39 is_stmt 0
	j	.L94
.L96:
	.loc 1 433 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 434 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 435 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 435 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L94
.L95:
.LBE15:
.LBB16:
	.loc 1 438 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 439 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 440 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 442 18
	ld	a5,-88(s0)
	lw	a5,84(a5)
	sw	a5,-28(s0)
	.loc 1 443 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L97
	.loc 1 443 40 discriminator 1
	li	a5,0
	.loc 1 443 40 is_stmt 0
	j	.L94
.L97:
	.loc 1 445 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 446 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 447 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 447 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 448 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L98
	.loc 1 448 36 discriminator 1
	li	a5,0
	.loc 1 448 36 is_stmt 0
	j	.L94
.L98:
	.loc 1 451 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 452 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 453 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L94:
.LBE16:
	.loc 1 455 1
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
.LFE21:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB22:
	.loc 1 458 1
	.cfi_startproc
	addi	sp,sp,-1664
	.cfi_def_cfa_offset 1664
	sd	ra,1656(sp)
	sd	s0,1648(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1664
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-1664(s0)
	mv	a4,a2
	sw	a5,-1652(s0)
	mv	a5,a4
	sw	a5,-1656(s0)
	.loc 1 459 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L100
	.loc 1 460 22
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 460 12
	bne	a5,zero,.L101
.LBB17:
	.loc 1 461 26
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-100(s0)
	.loc 1 462 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L102
	.loc 1 462 28 discriminator 1
	li	a5,0
	.loc 1 462 28 is_stmt 0
	j	.L116
.L102:
	.loc 1 463 28 is_stmt 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a4,-100(s0)
	sw	a4,0(a5)
	.loc 1 464 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L101:
.LBE17:
	.loc 1 466 25
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L116
.L100:
	.loc 1 469 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L104
.LBB18:
	.loc 1 470 18
	ld	a5,-1664(s0)
	lw	a5,80(a5)
	sw	a5,-20(s0)
	.loc 1 471 12
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L105
.LBB19:
	.loc 1 472 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-80(s0)
	.loc 1 473 16
	lw	a5,-80(s0)
	sext.w	a5,a5
	bne	a5,zero,.L106
	.loc 1 473 29 discriminator 1
	li	a5,0
	.loc 1 473 29 is_stmt 0
	j	.L116
.L106:
	.loc 1 475 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-80(s0)
	sw	a4,80(a5)
	.loc 1 476 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 477 26
	lw	a5,-80(s0)
	sw	a5,-20(s0)
.L105:
.LBE19:
	.loc 1 480 9
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 481 19
	addi	a5,s0,-1640
	sd	a5,-88(s0)
	.loc 1 482 18
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sw	a5,-92(s0)
	.loc 1 483 20
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 483 12
	bne	a5,zero,.L108
.LBB20:
	.loc 1 484 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-96(s0)
	.loc 1 485 16
	lw	a5,-96(s0)
	sext.w	a5,a5
	bne	a5,zero,.L109
	.loc 1 485 29 discriminator 1
	li	a5,0
	.loc 1 485 29 is_stmt 0
	j	.L116
.L109:
	.loc 1 486 20 is_stmt 1
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	.loc 1 486 24
	lw	a4,-96(s0)
	sw	a4,0(a5)
	.loc 1 487 13
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L108:
.LBE20:
	.loc 1 489 23
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L116
.L104:
.LBE18:
	.loc 1 493 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sw	a5,-32(s0)
	.loc 1 494 14
	lw	a5,-32(s0)
	srliw	a5,a5,7
	sw	a5,-36(s0)
	.loc 1 495 14
	lw	a5,-32(s0)
	andi	a5,a5,127
	sw	a5,-40(s0)
	.loc 1 497 14
	ld	a5,-1664(s0)
	lw	a5,84(a5)
	sw	a5,-24(s0)
	.loc 1 498 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L110
.LBB21:
	.loc 1 499 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 500 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L111
	.loc 1 500 25 discriminator 1
	li	a5,0
	.loc 1 500 25 is_stmt 0
	j	.L116
.L111:
	.loc 1 501 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-44(s0)
	sw	a4,84(a5)
	.loc 1 502 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 503 23
	lw	a5,-44(s0)
	sw	a5,-24(s0)
.L110:
.LBE21:
	.loc 1 507 5
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 508 15
	addi	a5,s0,-616
	sd	a5,-56(s0)
	.loc 1 509 39
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 509 14
	lw	a5,0(a5)
	sw	a5,-28(s0)
	.loc 1 510 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L112
.LBB22:
	.loc 1 511 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 512 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L113
	.loc 1 512 25 discriminator 1
	li	a5,0
	.loc 1 512 25 is_stmt 0
	j	.L116
.L113:
	.loc 1 513 22 is_stmt 1
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 513 29
	lw	a4,-60(s0)
	sw	a4,0(a5)
	.loc 1 514 9
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 515 19
	lw	a5,-60(s0)
	sw	a5,-28(s0)
.L112:
.LBE22:
	.loc 1 519 5
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 520 15
	addi	a5,s0,-1128
	sd	a5,-72(s0)
	.loc 1 521 23
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 521 8
	bne	a5,zero,.L114
.LBB23:
	.loc 1 522 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 523 12
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L115
	.loc 1 523 25 discriminator 1
	li	a5,0
	.loc 1 523 25 is_stmt 0
	j	.L116
.L115:
	.loc 1 524 23 is_stmt 1
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 524 30
	lw	a4,-76(s0)
	sw	a4,0(a5)
	.loc 1 525 9
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L114:
.LBE23:
	.loc 1 527 26
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L116:
	.loc 1 528 1
	mv	a0,a5
	ld	ra,1656(sp)
	.cfi_restore 1
	ld	s0,1648(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1664
	addi	sp,sp,1664
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE22:
	.size	inode_bmap_alloc, .-inode_bmap_alloc
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB23:
	.loc 1 530 81
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
	.loc 1 531 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 532 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 533 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 535 11
	j	.L118
.L122:
.LBB24:
	.loc 1 536 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 537 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 538 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 539 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L119
	.loc 1 539 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L119:
	.loc 1 541 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 542 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L120
	.loc 1 543 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L121
.L120:
	.loc 1 545 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 546 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L121:
	.loc 1 548 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 549 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 550 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L118:
.LBE24:
	.loc 1 535 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L122
	.loc 1 552 1
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
.LFE23:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB24:
	.loc 1 554 62
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
	.loc 1 555 14
	sw	zero,-20(s0)
	.loc 1 558 11
	j	.L124
.L130:
.LBB25:
	.loc 1 559 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 560 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 561 13
	li	a5,32
	sw	a5,-36(s0)
.LBB26:
	.loc 1 562 18
	sw	zero,-24(s0)
	.loc 1 562 9
	j	.L125
.L129:
	.loc 1 563 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 563 22
	lhu	a5,0(a5)
	.loc 1 563 16
	beq	a5,zero,.L132
	.loc 1 564 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 564 34
	addi	a4,a5,2
	.loc 1 564 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 565 29
	sb	zero,-42(s0)
	.loc 1 566 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 566 16 discriminator 1
	bne	a5,zero,.L127
	.loc 1 567 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 567 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L131
.L132:
	.loc 1 563 34
	nop
.L127:
	.loc 1 562 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L125:
	.loc 1 562 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L129
.LBE26:
	.loc 1 570 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L124:
.LBE25:
	.loc 1 558 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 558 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L130
	.loc 1 572 12
	li	a5,0
.L131:
	.loc 1 573 1
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
.LFE24:
	.size	dir_lookup, .-dir_lookup
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB25:
	.loc 1 577 40
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
	.loc 1 578 12
	li	a1,8
	ld	a0,-24(s0)
	call	path_lookup_lim
	mv	a5,a0
	.loc 1 579 1
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
.LFE25:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC6:
	.string	"/"
	.text
	.align	1
	.type	path_lookup_lim, @function
path_lookup_lim:
.LFB26:
	.loc 1 581 62
	.cfi_startproc
	addi	sp,sp,-1408
	.cfi_def_cfa_offset 1408
	sd	ra,1400(sp)
	sd	s0,1392(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1408
	.cfi_def_cfa 8, 0
	sd	a0,-1400(s0)
	mv	a5,a1
	sw	a5,-1404(s0)
	.loc 1 582 8
	lw	a5,-1404(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L136
	.loc 1 582 28 discriminator 1
	li	a5,0
	.loc 1 582 28 is_stmt 0
	j	.L160
.L136:
	.loc 1 583 8 is_stmt 1
	ld	a5,-1400(s0)
	beq	a5,zero,.L138
	.loc 1 583 22 discriminator 2
	ld	a5,-1400(s0)
	lbu	a5,0(a5)
	.loc 1 583 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L139
.L138:
	.loc 1 583 41 discriminator 3
	li	a5,0
	.loc 1 583 41 is_stmt 0
	j	.L160
.L139:
	.loc 1 584 9 is_stmt 1
	lla	a1,.LC6
	ld	a0,-1400(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 584 8 discriminator 1
	bne	a5,zero,.L140
	.loc 1 584 40 discriminator 1
	li	a5,1
	.loc 1 584 40 is_stmt 0
	j	.L160
.L140:
	.loc 1 587 5 is_stmt 1
	addi	a5,s0,-144
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 588 12
	lhu	a5,-144(s0)
	.loc 1 588 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L141
	.loc 1 588 35 discriminator 1
	li	a5,0
	.loc 1 588 35 is_stmt 0
	j	.L160
.L141:
	.loc 1 591 5 is_stmt 1
	addi	a5,s0,-400
	li	a2,255
	ld	a1,-1400(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 591 59 discriminator 1
	sb	zero,-145(s0)
	.loc 1 592 11
	addi	a5,s0,-400
	sd	a5,-24(s0)
	.loc 1 594 14
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 595 33
	li	a5,47
	sb	a5,-656(s0)
	.loc 1 595 50
	sb	zero,-655(s0)
	.loc 1 597 11
	j	.L142
.L159:
.LBB27:
	.loc 1 598 14
	sd	zero,-24(s0)
	.loc 1 599 16
	lhu	a5,-144(s0)
	.loc 1 599 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L143
	.loc 1 599 39 discriminator 1
	li	a5,0
	.loc 1 599 39 is_stmt 0
	j	.L160
.L143:
	.loc 1 601 14 is_stmt 1
	addi	a5,s0,-144
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 601 12 discriminator 1
	bne	a5,zero,.L145
	.loc 1 601 47 discriminator 1
	li	a5,0
	.loc 1 601 47 is_stmt 0
	j	.L160
.L145:
	.loc 1 602 25 is_stmt 1
	addi	a5,s0,-144
	ld	a1,-48(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 603 12
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L146
	.loc 1 603 31 discriminator 1
	li	a5,0
	.loc 1 603 31 is_stmt 0
	j	.L160
.L146:
	.loc 1 604 28 is_stmt 1
	addi	a4,s0,-1384
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 605 16
	lhu	a5,-1384(s0)
	.loc 1 605 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L147
.LBB28:
	.loc 1 608 24
	lw	a5,-1376(s0)
	.loc 1 608 17
	sw	a5,-32(s0)
	.loc 1 608 34
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L148
	.loc 1 608 61 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L148:
	.loc 1 609 13
	lw	a3,-32(s0)
	addi	a4,s0,-1296
	addi	a5,s0,-1384
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 610 21
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1280(a5)
	.loc 1 613 23
	sb	zero,-1168(s0)
	.loc 1 614 23
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 615 19
	j	.L149
.L151:
	.loc 1 616 27
	lbu	a5,-1168(s0)
	.loc 1 616 20
	beq	a5,zero,.L150
	.loc 1 616 68 discriminator 1
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 616 32 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L150:
	.loc 1 617 51
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 617 51 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 617 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 618 21
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L149:
	.loc 1 615 20
	ld	a5,-40(s0)
	bne	a5,zero,.L151
	.loc 1 621 21
	lbu	a5,-1296(s0)
	.loc 1 621 16
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L152
	.loc 1 622 17
	addi	a4,s0,-1296
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 623 42
	sb	zero,-657(s0)
	j	.L153
.L152:
	.loc 1 626 17
	addi	a4,s0,-656
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 627 42
	sb	zero,-657(s0)
	.loc 1 628 29
	lbu	a5,-912(s0)
	.loc 1 628 20
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L154
	.loc 1 628 47 discriminator 2
	lbu	a5,-911(s0)
	.loc 1 628 21 discriminator 2
	beq	a5,zero,.L155
.L154:
	.loc 1 628 95 discriminator 3
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 628 95 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 628 59 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L155:
	.loc 1 629 54
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 629 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 629 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1296
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L153:
	.loc 1 631 23
	lbu	a5,-1168(s0)
	.loc 1 631 16
	beq	a5,zero,.L156
	.loc 1 632 53
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 632 53 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 632 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
	.loc 1 633 56
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 633 56 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 633 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1168
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L156:
	.loc 1 635 20
	lw	a5,-1404(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	addi	a5,s0,-912
	mv	a1,a4
	mv	a0,a5
	call	path_lookup_lim
	mv	a5,a0
	j	.L160
.L147:
.LBE28:
	.loc 1 638 13
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 638 25
	ld	t4,-1384(s0)
	ld	t3,-1376(s0)
	ld	t1,-1368(s0)
	ld	a7,-1360(s0)
	ld	a6,-1352(s0)
	ld	a0,-1344(s0)
	ld	a1,-1336(s0)
	ld	a2,-1328(s0)
	ld	a3,-1320(s0)
	ld	a4,-1312(s0)
	ld	a5,-1304(s0)
	sd	t4,-144(s0)
	sd	t3,-136(s0)
	sd	t1,-128(s0)
	sd	a7,-120(s0)
	sd	a6,-112(s0)
	sd	a0,-104(s0)
	sd	a1,-96(s0)
	sd	a2,-88(s0)
	sd	a3,-80(s0)
	sd	a4,-72(s0)
	sd	a5,-64(s0)
	.loc 1 640 21
	lbu	a5,-656(s0)
	.loc 1 640 12
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L157
	.loc 1 640 39 discriminator 2
	lbu	a5,-655(s0)
	.loc 1 640 13 discriminator 2
	beq	a5,zero,.L158
.L157:
	.loc 1 640 87 discriminator 3
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 640 87 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 640 51 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L158:
	.loc 1 641 45
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 641 45 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 641 9 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	ld	a1,-48(s0)
	mv	a0,a5
	call	strncat
.L142:
.LBE27:
	.loc 1 597 19
	lla	a1,.LC6
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-48(s0)
	.loc 1 597 38 discriminator 1
	ld	a5,-48(s0)
	bne	a5,zero,.L159
	.loc 1 643 12
	lw	a5,-28(s0)
.L160:
	.loc 1 644 1
	mv	a0,a5
	ld	ra,1400(sp)
	.cfi_restore 1
	ld	s0,1392(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1408
	addi	sp,sp,1408
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE26:
	.size	path_lookup_lim, .-path_lookup_lim
	.align	1
	.globl	fs_realpath
	.type	fs_realpath, @function
fs_realpath:
.LFB27:
	.loc 1 648 1
	.cfi_startproc
	addi	sp,sp,-1696
	.cfi_def_cfa_offset 1696
	sd	ra,1688(sp)
	sd	s0,1680(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1696
	.cfi_def_cfa 8, 0
	sd	a0,-1672(s0)
	sd	a1,-1680(s0)
	mv	a5,a2
	sw	a5,-1684(s0)
	.loc 1 649 8
	ld	a5,-1680(s0)
	beq	a5,zero,.L162
	.loc 1 649 14 discriminator 2
	lw	a5,-1684(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L163
.L162:
	.loc 1 649 36 discriminator 3
	li	a5,-1
	.loc 1 649 36 is_stmt 0
	j	.L191
.L163:
	.loc 1 650 20 is_stmt 1
	addi	a5,s0,-328
	ld	a2,-1672(s0)
	li	a1,256
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 652 12
	lbu	a5,-328(s0)
	.loc 1 652 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L165
	.loc 1 652 31 discriminator 1
	li	a5,-1
	.loc 1 652 31 is_stmt 0
	j	.L191
.L165:
	.loc 1 653 9 is_stmt 1
	addi	a5,s0,-328
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 653 8 discriminator 1
	bne	a5,zero,.L166
	.loc 1 653 37 discriminator 1
	lw	a5,-1684(s0)
	sext.w	a4,a5
	li	a5,1
	ble	a4,a5,.L167
	.loc 1 653 57 discriminator 2
	ld	a5,-1680(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 653 66 discriminator 2
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 653 69 discriminator 2
	sb	zero,0(a5)
	.loc 1 653 83 discriminator 2
	li	a5,0
	.loc 1 653 83 is_stmt 0
	j	.L191
.L167:
	.loc 1 653 94 is_stmt 1 discriminator 3
	li	a5,-1
	.loc 1 653 94 is_stmt 0
	j	.L191
.L166:
	.loc 1 654 24 is_stmt 1
	addi	a5,s0,-416
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 655 20
	addi	a4,s0,-328
	addi	a5,s0,-672
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 655 72 discriminator 1
	sb	zero,-417(s0)
	.loc 1 656 11
	addi	a5,s0,-672
	sd	a5,-24(s0)
	.loc 1 657 9
	li	a5,8
	sw	a5,-48(s0)
	.loc 1 657 22
	li	a5,1
	sw	a5,-52(s0)
	.loc 1 657 35
	sw	zero,-28(s0)
	.loc 1 657 45
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 657 43
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 657 48
	li	a4,47
	sb	a4,0(a5)
	.loc 1 657 57
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 657 60
	sb	zero,0(a5)
	.loc 1 658 11
	j	.L168
.L190:
.LBB29:
	.loc 1 659 14
	sd	zero,-24(s0)
	.loc 1 660 16
	lhu	a5,-416(s0)
	.loc 1 660 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L169
	.loc 1 660 39 discriminator 1
	li	a5,-1
	.loc 1 660 39 is_stmt 0
	j	.L191
.L169:
	.loc 1 661 14 is_stmt 1
	addi	a5,s0,-416
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 661 12 discriminator 1
	bne	a5,zero,.L171
	.loc 1 661 47 discriminator 1
	li	a5,-1
	.loc 1 661 47 is_stmt 0
	j	.L191
.L171:
	.loc 1 662 25 is_stmt 1
	addi	a5,s0,-416
	ld	a1,-64(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-68(s0)
	.loc 1 663 12
	lw	a5,-68(s0)
	sext.w	a5,a5
	bne	a5,zero,.L172
	.loc 1 663 27 discriminator 1
	li	a5,-1
	.loc 1 663 27 is_stmt 0
	j	.L191
.L172:
	.loc 1 664 28 is_stmt 1
	addi	a4,s0,-1656
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 665 16
	lhu	a5,-1656(s0)
	.loc 1 665 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L173
.LBB30:
	.loc 1 666 16
	lw	a5,-48(s0)
	addiw	a5,a5,-1
	sw	a5,-48(s0)
	lw	a5,-48(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L174
	.loc 1 666 38 discriminator 1
	li	a5,-1
	.loc 1 666 38 is_stmt 0
	j	.L191
.L174:
	.loc 1 667 40 is_stmt 1
	lw	a5,-1648(s0)
	.loc 1 667 33
	sw	a5,-32(s0)
	.loc 1 667 49
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L176
	.loc 1 667 78 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L176:
	.loc 1 668 13
	lw	a3,-32(s0)
	addi	a4,s0,-1568
	addi	a5,s0,-1656
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 668 63 discriminator 1
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1552(a5)
	.loc 1 669 40
	sb	zero,-1440(s0)
	.loc 1 669 55
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 670 18
	j	.L177
.L179:
	.loc 1 670 32 discriminator 5
	lbu	a5,-1440(s0)
	.loc 1 670 25 discriminator 5
	beq	a5,zero,.L178
	.loc 1 670 73 discriminator 1
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 670 37 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L178:
	.loc 1 670 126 discriminator 3
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 670 126 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 670 92 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 670 147 discriminator 2
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L177:
	.loc 1 670 19 discriminator 4
	ld	a5,-40(s0)
	bne	a5,zero,.L179
	.loc 1 671 39
	lbu	a5,-1568(s0)
	.loc 1 671 34
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L180
	.loc 1 671 51 discriminator 1
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	li	a2,511
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L181
.L180:
	.loc 1 673 26
	sb	zero,-1184(s0)
	.loc 1 673 33
	addi	a5,s0,-1184
	li	a2,511
	ld	a1,-1680(s0)
	mv	a0,a5
	call	strncat
	.loc 1 673 84 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 673 98 discriminator 2
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 673 83 discriminator 2
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 673 76 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L182
	.loc 1 673 146 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 673 110 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L182:
	.loc 1 673 202 discriminator 3
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 673 202 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 673 165 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L181:
	.loc 1 675 23
	lbu	a5,-1440(s0)
	.loc 1 675 16
	beq	a5,zero,.L183
	.loc 1 675 41 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 675 55 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 675 40 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 675 33 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L184
	.loc 1 675 103 discriminator 2
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 675 103 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 675 67 is_stmt 1 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L184:
	.loc 1 675 161 discriminator 4
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 675 161 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 675 122 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1440
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L183:
	.loc 1 676 20
	lw	a4,-1684(s0)
	addi	a5,s0,-1184
	mv	a2,a4
	ld	a1,-1680(s0)
	mv	a0,a5
	call	fs_realpath
	mv	a5,a0
	j	.L191
.L173:
.LBE30:
	.loc 1 679 17
	ld	a0,-64(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-72(s0)
	.loc 1 680 15
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 680 19
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 680 12
	lw	a4,-1684(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L185
	.loc 1 680 40 discriminator 1
	li	a5,-1
	.loc 1 680 40 is_stmt 0
	j	.L191
.L185:
	.loc 1 681 12 is_stmt 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L186
	.loc 1 681 26 discriminator 2
	ld	a5,-1680(s0)
	lbu	a5,0(a5)
	.loc 1 681 13 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L187
.L186:
	.loc 1 681 42 discriminator 3
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 681 40 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 681 45 discriminator 3
	li	a4,47
	sb	a4,0(a5)
.L187:
.LBB31:
	.loc 1 682 17
	sw	zero,-44(s0)
	.loc 1 682 9
	j	.L188
.L189:
	.loc 1 682 42 discriminator 3
	lw	a5,-44(s0)
	ld	a4,-64(s0)
	add	a4,a4,a5
	.loc 1 682 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a3,a5,1
	sw	a3,-28(s0)
	mv	a3,a5
	.loc 1 682 33 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a3
	.loc 1 682 42 discriminator 3
	lbu	a4,0(a4)
	.loc 1 682 38 discriminator 3
	sb	a4,0(a5)
	.loc 1 682 26 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L188:
	.loc 1 682 22 discriminator 1
	lw	a5,-44(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L189
.LBE31:
	.loc 1 682 50 discriminator 4
	lw	a5,-28(s0)
	ld	a4,-1680(s0)
	add	a5,a4,a5
	.loc 1 682 53 discriminator 4
	sb	zero,0(a5)
	.loc 1 683 13
	ld	t4,-1656(s0)
	ld	t3,-1648(s0)
	ld	t1,-1640(s0)
	ld	a7,-1632(s0)
	ld	a6,-1624(s0)
	ld	a0,-1616(s0)
	ld	a1,-1608(s0)
	ld	a2,-1600(s0)
	ld	a3,-1592(s0)
	ld	a4,-1584(s0)
	ld	a5,-1576(s0)
	sd	t4,-416(s0)
	sd	t3,-408(s0)
	sd	t1,-400(s0)
	sd	a7,-392(s0)
	sd	a6,-384(s0)
	sd	a0,-376(s0)
	sd	a1,-368(s0)
	sd	a2,-360(s0)
	sd	a3,-352(s0)
	sd	a4,-344(s0)
	sd	a5,-336(s0)
.L168:
.LBE29:
	.loc 1 658 19
	lla	a1,.LC6
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-64(s0)
	.loc 1 658 38 discriminator 1
	ld	a5,-64(s0)
	bne	a5,zero,.L190
	.loc 1 685 12
	li	a5,0
.L191:
	.loc 1 686 1
	mv	a0,a5
	ld	ra,1688(sp)
	.cfi_restore 1
	ld	s0,1680(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1696
	addi	sp,sp,1696
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE27:
	.size	fs_realpath, .-fs_realpath
	.section	.rodata
	.align	3
.LC7:
	.string	"== i-node %u ==\n"
	.align	3
.LC8:
	.string	"  type  = %u\n"
	.align	3
.LC9:
	.string	"  size  = %u\n"
	.align	3
.LC10:
	.string	"  addrs ="
	.align	3
.LC11:
	.string	" %u"
	.align	3
.LC12:
	.string	" [indirect %u]"
	.align	3
.LC13:
	.string	" [double-indirect %u]"
	.align	3
.LC14:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB28:
	.loc 1 688 32
	.cfi_startproc
	addi	sp,sp,-128
	.cfi_def_cfa_offset 128
	sd	ra,120(sp)
	sd	s0,112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,128
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-116(s0)
	.loc 1 690 5
	addi	a4,s0,-112
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 691 5
	lw	a5,-116(s0)
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 692 32
	lhu	a5,-112(s0)
	.loc 1 692 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 693 5
	lw	a5,-104(s0)
	mv	a1,a5
	lla	a0,.LC9
	call	printf
	.loc 1 694 5
	lla	a0,.LC10
	call	printf
.LBB32:
	.loc 1 695 14
	sw	zero,-20(s0)
	.loc 1 695 5
	j	.L193
.L195:
	.loc 1 696 21
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 696 12
	beq	a5,zero,.L194
	.loc 1 696 31 discriminator 1
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
.L194:
	.loc 1 695 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L193:
	.loc 1 695 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L195
.LBE32:
	.loc 1 698 17
	lw	a5,-32(s0)
	.loc 1 698 8
	beq	a5,zero,.L196
	.loc 1 699 9
	lw	a5,-32(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L196:
	.loc 1 701 17
	lw	a5,-28(s0)
	.loc 1 701 8
	beq	a5,zero,.L197
	.loc 1 702 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC13
	call	printf
.L197:
	.loc 1 704 5
	lla	a0,.LC14
	call	printf
	.loc 1 705 1
	nop
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 128
	addi	sp,sp,128
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE28:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB29:
	.loc 1 712 38
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
	.loc 1 713 12
	li	a5,128
	.loc 1 714 1
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
.LFE29:
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB30:
	.loc 1 715 55
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
	.loc 1 716 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB33:
	.loc 1 718 14
	sw	zero,-20(s0)
	.loc 1 718 5
	j	.L201
.L204:
	.loc 1 718 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 718 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L209
	.loc 1 718 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L201:
	.loc 1 718 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L204
.LBE33:
.LBB34:
	.loc 1 720 14
	sw	zero,-24(s0)
	.loc 1 720 5
	j	.L205
.L208:
	.loc 1 721 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 721 12
	bne	a5,zero,.L206
	.loc 1 722 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 723 18
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 723 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L210
	.loc 1 723 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 723 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,1160(a5)
	.loc 1 724 13
	j	.L210
.L206:
	.loc 1 720 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L205:
	.loc 1 720 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L208
	j	.L200
.L209:
.LBE34:
.LBB35:
	.loc 1 718 67
	nop
	j	.L200
.L210:
.LBE35:
.LBB36:
	.loc 1 724 13
	nop
.L200:
.LBE36:
	.loc 1 728 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE30:
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB31:
	.loc 1 729 58
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
	.loc 1 730 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 730 29 discriminator 1
	sw	zero,-20(s0)
.LBB37:
	.loc 1 731 14
	sw	zero,-24(s0)
	.loc 1 731 5
	j	.L212
.L215:
	.loc 1 732 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 732 12
	ld	a4,-48(s0)
	bne	a4,a5,.L213
	.loc 1 732 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L213:
	.loc 1 733 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 733 12
	beq	a5,zero,.L214
	.loc 1 733 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L214:
	.loc 1 731 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L212:
	.loc 1 731 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L215
.LBE37:
	.loc 1 735 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,1160(a5)
	.loc 1 736 1
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
	.size	owner_remove, .-owner_remove
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
	.size	gFiles, 18688
gFiles:
	.zero	18688
	.globl	gFreePipes
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
.LFB32:
	.loc 1 749 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 750 5
	li	a5,12288
	addi	a2,a5,768
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 751 5
	li	a5,20480
	addi	a2,a5,-1792
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB38:
	.loc 1 753 13
	sw	zero,-20(s0)
	.loc 1 753 5
	j	.L217
.L218:
.LBB39:
	.loc 1 754 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 756 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 757 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE39:
	.loc 1 753 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L217:
	.loc 1 753 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L218
.LBE38:
.LBB40:
	.loc 1 760 13
	sw	zero,-24(s0)
	.loc 1 760 5
	j	.L219
.L220:
.LBB41:
	.loc 1 761 22
	lw	a4,-24(s0)
	li	a5,1168
	mul	a4,a4,a5
	lla	a5,gFiles
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 763 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,128(a5)
	.loc 1 764 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE41:
	.loc 1 760 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L219:
	.loc 1 760 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L220
.LBE40:
	.loc 1 766 1
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
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB33:
	.loc 1 769 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 770 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 772 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 772 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 774 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 776 12
	ld	a5,-24(s0)
	.loc 1 777 1
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
.LFE33:
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB34:
	.loc 1 780 1
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
	.loc 1 781 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 782 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 783 1
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
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB35:
	.loc 1 785 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 786 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 786 8
	bne	a5,zero,.L225
	.loc 1 786 29 discriminator 1
	li	a5,0
	.loc 1 786 29 is_stmt 0
	j	.L226
.L225:
	.loc 1 787 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 788 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,128(a5)
	.loc 1 788 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 789 5
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 790 12
	ld	a5,-24(s0)
.L226:
	.loc 1 791 1
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
.LFE35:
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB36:
	.loc 1 795 1
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
	.loc 1 796 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,128(a5)
	.loc 1 797 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 798 1
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
.LFE36:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB37:
	.loc 1 804 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 805 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 807 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 808 8
	ld	a5,-24(s0)
	bne	a5,zero,.L229
	.loc 1 809 16
	li	a5,0
	j	.L230
.L229:
	.loc 1 810 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 811 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 812 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 813 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 814 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 815 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 817 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 818 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 820 12
	ld	a5,-24(s0)
.L230:
	.loc 1 821 1
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
.LFE37:
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB38:
	.loc 1 826 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 827 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 829 5
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 831 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 833 12
	ld	a5,-24(s0)
	.loc 1 834 1
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
.LFE38:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB39:
	.loc 1 837 1
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
	.loc 1 838 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 840 21
	call	new_file_table
	mv	a4,a0
	.loc 1 840 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 842 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 842 25
	sw	zero,0(a5)
	.loc 1 843 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 843 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 845 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 845 21
	call	new_file_table
	mv	a5,a0
	.loc 1 845 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 847 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 847 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 848 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 848 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 850 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 850 21
	call	new_file_table
	mv	a5,a0
	.loc 1 850 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 852 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 852 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 853 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 853 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 854 1
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
.LFE39:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB40:
	.loc 1 857 1
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
	.loc 1 858 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 867 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L235
	.loc 1 867 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L236
.L235:
	.loc 1 867 48 discriminator 3
	li	a5,0
	.loc 1 867 48 is_stmt 0
	j	.L237
.L236:
	.loc 1 868 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 868 8
	bne	a5,zero,.L238
	.loc 1 868 33 discriminator 1
	li	a5,0
	.loc 1 868 33 is_stmt 0
	j	.L237
.L238:
	.loc 1 869 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 869 24
	lw	a5,100(a5)
	.loc 1 869 8
	bne	a5,zero,.L239
	.loc 1 869 39 discriminator 1
	li	a5,0
	.loc 1 869 39 is_stmt 0
	j	.L237
.L239:
	.loc 1 871 19 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 871 23
	lw	a4,0(a5)
	.loc 1 871 8
	li	a5,4
	bne	a4,a5,.L240
	.loc 1 871 54 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 871 58 discriminator 1
	ld	a5,104(a5)
	.loc 1 871 41 discriminator 1
	beq	a5,zero,.L240
	.loc 1 872 16
	li	a5,1
	j	.L237
.L240:
	.loc 1 874 12
	li	a5,0
.L237:
	.loc 1 875 1
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
.LFE40:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB41:
	.loc 1 878 1
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
	.loc 1 879 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 880 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 880 8
	beq	a5,zero,.L242
	.loc 1 880 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 880 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 880 24 discriminator 1
	beq	a5,zero,.L242
	.loc 1 881 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 881 26
	lw	a5,0(a5)
	.loc 1 881 11
	bne	a5,zero,.L242
	.loc 1 882 20
	li	a5,1
	j	.L243
.L242:
	.loc 1 886 12
	li	a5,0
.L243:
	.loc 1 887 1
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
.LFE41:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB42:
	.loc 1 890 1
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
	.loc 1 891 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 893 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 893 8
	beq	a5,zero,.L245
	.loc 1 893 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 893 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 893 24 discriminator 1
	beq	a5,zero,.L245
	.loc 1 894 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 894 26
	lw	a4,0(a5)
	.loc 1 894 11
	li	a5,1
	bne	a4,a5,.L245
	.loc 1 895 20
	li	a5,1
	j	.L246
.L245:
	.loc 1 899 12
	li	a5,0
.L246:
	.loc 1 900 1
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
.LFE42:
	.size	is_stdout, .-is_stdout
	.align	1
	.globl	is_tty
	.type	is_tty, @function
is_tty:
.LFB43:
	.loc 1 903 1
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
	.loc 1 904 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 905 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L248
	.loc 1 905 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L249
.L248:
	.loc 1 905 48 discriminator 3
	li	a5,0
	.loc 1 905 48 is_stmt 0
	j	.L250
.L249:
	.loc 1 906 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 906 8
	bne	a5,zero,.L251
	.loc 1 906 33 discriminator 1
	li	a5,0
	.loc 1 906 33 is_stmt 0
	j	.L250
.L251:
	.loc 1 907 23 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 907 27
	lw	a5,0(a5)
	.loc 1 907 9
	sw	a5,-28(s0)
	.loc 1 908 63
	lw	a5,-28(s0)
	sext.w	a5,a5
	beq	a5,zero,.L252
	.loc 1 908 27 discriminator 2
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L252
	.loc 1 908 45 discriminator 4
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L252
	.loc 1 908 63 discriminator 6
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,5
	bne	a4,a5,.L253
.L252:
	.loc 1 908 63 is_stmt 0 discriminator 7
	li	a5,1
	.loc 1 908 63
	j	.L250
.L253:
	.loc 1 908 63 discriminator 8
	li	a5,0
.L250:
	.loc 1 909 1 is_stmt 1
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
.LFE43:
	.size	is_tty, .-is_tty
	.section	.rodata
	.align	3
.LC15:
	.string	"PIPE LINKED MAX"
	.text
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB44:
	.loc 1 911 36
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
	.loc 1 912 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 914 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB42:
	.loc 1 916 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 916 5
	j	.L256
.L261:
	.loc 1 917 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 917 12
	bne	a5,zero,.L257
	.loc 1 918 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 918 29
	call	new_file_table
	mv	a5,a0
	.loc 1 918 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 920 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 920 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 921 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 921 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 922 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 922 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 923 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 923 34
	sw	zero,96(a5)
	.loc 1 924 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 924 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 925 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 925 38
	li	a4,1
	sw	a4,116(a5)
	.loc 1 926 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 926 41
	sw	zero,120(a5)
	.loc 1 927 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 929 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 929 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 930 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 930 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 930 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 930 66
	ld	a4,0(a4)
	.loc 1 930 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 931 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 931 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 933 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 933 15
	li	a5,31
	ble	a4,a5,.L268
	.loc 1 934 17
	lla	a0,.LC15
	call	puts
.L259:
	.loc 1 935 22
	j	.L259
.L257:
	.loc 1 916 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L256:
	.loc 1 916 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L261
	j	.L260
.L268:
	.loc 1 939 13
	nop
.L260:
.LBE42:
.LBB43:
	.loc 1 942 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 942 5
	j	.L262
.L267:
	.loc 1 943 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 943 12
	bne	a5,zero,.L263
	.loc 1 944 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 944 29
	call	new_file_table
	mv	a5,a0
	.loc 1 944 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 946 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 946 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 947 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 947 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 948 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 948 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 950 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 950 34
	sw	zero,96(a5)
	.loc 1 951 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 951 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 952 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 952 39
	li	a4,1
	sw	a4,120(a5)
	.loc 1 953 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 953 38
	sw	zero,116(a5)
	.loc 1 954 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 956 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 956 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 957 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 957 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 957 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 957 66
	ld	a4,0(a4)
	.loc 1 957 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 958 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 958 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 960 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 960 15
	li	a5,31
	ble	a4,a5,.L269
	.loc 1 961 17
	lla	a0,.LC15
	call	puts
.L265:
	.loc 1 962 22
	j	.L265
.L263:
	.loc 1 942 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L262:
	.loc 1 942 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L267
.LBE43:
	.loc 1 969 1
	j	.L270
.L269:
.LBB44:
	.loc 1 966 13
	nop
.L270:
.LBE44:
	.loc 1 969 1
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
.LFE44:
	.size	pipe_open, .-pipe_open
	.section	.rodata
	.align	3
.LC16:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB45:
	.loc 1 979 1
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
	.loc 1 980 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 982 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 982 8
	bne	a5,zero,.L272
	.loc 1 983 9
	lla	a0,.LC16
	call	panic
.L272:
	.loc 1 986 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L273
	.loc 1 986 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L274
.L273:
	.loc 1 987 9
	lla	a0,.LC16
	call	panic
.L274:
	.loc 1 989 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 989 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 991 7
	ld	a5,-32(s0)
	bne	a5,zero,.L276
	.loc 1 992 9
	lla	a0,.LC16
	call	panic
	.loc 1 995 11
	j	.L276
.L278:
	.loc 1 996 8
	call	yield
.L276:
	.loc 1 995 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 995 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 995 34
	bne	a4,a5,.L277
	.loc 1 995 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 995 34 discriminator 1
	bne	a5,zero,.L278
.L277:
	.loc 1 999 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 999 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 999 8
	bne	a4,a5,.L279
	.loc 1 999 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 999 31 discriminator 1
	bne	a5,zero,.L279
	.loc 1 1000 16
	li	a5,0
	j	.L280
.L279:
	.loc 1 1004 18
	sw	zero,-36(s0)
.LBB45:
	.loc 1 1005 23
	sw	zero,-40(s0)
	.loc 1 1005 5
	j	.L281
.L284:
	.loc 1 1007 12
	call	yield
.L282:
	.loc 1 1006 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1006 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1006 38
	bne	a4,a5,.L283
	.loc 1 1006 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1006 38 discriminator 1
	bne	a5,zero,.L284
.L283:
	.loc 1 1011 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1011 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1011 12
	bne	a4,a5,.L285
	.loc 1 1011 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1011 35 discriminator 1
	beq	a5,zero,.L288
.L285:
	.loc 1 1015 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1015 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 1015 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 1015 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 1015 17
	sb	a4,0(a5)
	.loc 1 1016 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1016 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 1019 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 1005 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L281:
	.loc 1 1005 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 1005 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L286
	.loc 1 1005 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1005 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1005 36 discriminator 3
	bltu	a4,a5,.L282
	j	.L286
.L288:
	.loc 1 1012 13
	nop
.L286:
.LBE45:
	.loc 1 1023 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L280:
	.loc 1 1024 1
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
.LFE45:
	.size	piperead, .-piperead
	.section	.rodata
	.align	3
.LC17:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB46:
	.loc 1 1029 1
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
	.loc 1 1030 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1032 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1032 8
	bne	a5,zero,.L290
	.loc 1 1033 9
	lla	a0,.LC17
	call	panic
.L290:
	.loc 1 1036 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L291
	.loc 1 1036 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L292
.L291:
	.loc 1 1037 9
	lla	a0,.LC17
	call	panic
.L292:
	.loc 1 1039 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1039 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1041 7
	ld	a5,-32(s0)
	bne	a5,zero,.L293
	.loc 1 1042 9
	lla	a0,.LC17
	call	panic
.L293:
.LBB46:
	.loc 1 1045 23
	sw	zero,-36(s0)
	.loc 1 1045 5
	j	.L294
.L297:
	.loc 1 1048 11
	call	yield
.L295:
	.loc 1 1047 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 1047 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1047 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 1047 48
	li	a5,512
	bne	a4,a5,.L296
	.loc 1 1047 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1047 48 discriminator 1
	bne	a5,zero,.L297
.L296:
	.loc 1 1051 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1051 10
	bne	a5,zero,.L298
	.loc 1 1053 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1053 30
	ble	a5,zero,.L299
	.loc 1 1053 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1053 30
	j	.L301
.L299:
	.loc 1 1053 30 discriminator 2
	li	a5,-1
	.loc 1 1053 30
	j	.L301
.L298:
	.loc 1 1055 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 1055 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 1055 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 1055 44
	lbu	a4,0(a5)
	.loc 1 1055 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 1056 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1056 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 1045 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L294:
	.loc 1 1045 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L295
.LBE46:
	.loc 1 1063 12
	lw	a5,-56(s0)
.L301:
	.loc 1 1064 1
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
.LFE46:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB47:
	.loc 1 1076 1
	.cfi_startproc
	addi	sp,sp,-288
	.cfi_def_cfa_offset 288
	sd	ra,280(sp)
	sd	s0,272(sp)
	sd	s1,264(sp)
	sd	s2,256(sp)
	sd	s3,248(sp)
	sd	s4,240(sp)
	sd	s5,232(sp)
	sd	s6,224(sp)
	sd	s7,216(sp)
	sd	s8,208(sp)
	sd	s9,200(sp)
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
	addi	s0,sp,288
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	sd	a1,-272(s0)
	sd	a2,-280(s0)
	.loc 1 1076 1
	mv	a5,sp
	mv	s1,a5
	.loc 1 1077 8
	ld	a5,-264(s0)
	beq	a5,zero,.L304
	.loc 1 1077 22 discriminator 2
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 1 1077 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L305
.L304:
	.loc 1 1077 41 discriminator 3
	li	a5,0
	.loc 1 1077 41 is_stmt 0
	j	.L306
.L305:
	.loc 1 1078 9 is_stmt 1
	lla	a1,.LC6
	ld	a0,-264(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 1078 8 discriminator 1
	bne	a5,zero,.L307
	.loc 1 1078 40 discriminator 1
	li	a5,0
	.loc 1 1078 40 is_stmt 0
	j	.L306
.L307:
	.loc 1 1081 15 is_stmt 1
	ld	a0,-264(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1081 28 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 1081 10 discriminator 1
	addi	a4,a4,-1
	sd	a4,-136(s0)
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
	mv	a4,a5
	addi	a4,a4,15
	srli	a4,a4,4
	slli	a4,a4,4
	sub	sp,sp,a4
	mv	a4,sp
	sd	a4,-144(s0)
	.loc 1 1082 5
	mv	a2,a5
	ld	a1,-264(s0)
	ld	a0,-144(s0)
	call	strncpy
	.loc 1 1085 11
	ld	a5,-144(s0)
	sd	a5,-152(s0)
	.loc 1 1086 11
	sd	zero,-104(s0)
	.loc 1 1087 17
	lla	a1,.LC6
	ld	a0,-152(s0)
	call	strtok
	sd	a0,-112(s0)
	.loc 1 1088 14
	li	a5,1
	sw	a5,-116(s0)
	.loc 1 1090 5
	addi	a4,s0,-256
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1092 11
	j	.L308
.L313:
.LBB47:
	.loc 1 1093 25
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-160(s0)
	.loc 1 1094 12
	ld	a5,-160(s0)
	bne	a5,zero,.L309
	.loc 1 1096 18
	ld	a5,-112(s0)
	sd	a5,-104(s0)
	.loc 1 1097 13
	j	.L310
.L309:
	.loc 1 1100 15
	lhu	a5,-256(s0)
	.loc 1 1100 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L311
	.loc 1 1100 38 discriminator 1
	li	a5,0
	.loc 1 1100 38 is_stmt 0
	j	.L306
.L311:
	.loc 1 1101 30 is_stmt 1
	addi	a5,s0,-256
	ld	a1,-112(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 1102 12
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L312
	.loc 1 1102 36 discriminator 1
	li	a5,0
	.loc 1 1102 36 is_stmt 0
	j	.L306
.L312:
	.loc 1 1103 9 is_stmt 1
	addi	a4,s0,-256
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1104 13
	lw	a5,-164(s0)
	sw	a5,-116(s0)
	.loc 1 1105 13
	ld	a5,-160(s0)
	sd	a5,-112(s0)
.L308:
.LBE47:
	.loc 1 1092 12
	ld	a5,-112(s0)
	bne	a5,zero,.L313
.L310:
	.loc 1 1108 8
	ld	a5,-104(s0)
	bne	a5,zero,.L314
	.loc 1 1108 23 discriminator 1
	li	a5,0
	.loc 1 1108 23 is_stmt 0
	j	.L306
.L314:
	.loc 1 1109 18 is_stmt 1
	ld	a5,-272(s0)
	lw	a4,-116(s0)
	sw	a4,0(a5)
	.loc 1 1111 13
	ld	a0,-104(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-120(s0)
	.loc 1 1112 8
	lw	a5,-120(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L315
	.loc 1 1112 23 discriminator 1
	li	a5,14
	sw	a5,-120(s0)
.L315:
.LBB48:
	.loc 1 1113 14
	sw	zero,-124(s0)
	.loc 1 1113 5
	j	.L316
.L317:
	.loc 1 1113 46 discriminator 3
	lw	a5,-124(s0)
	ld	a4,-280(s0)
	add	a5,a4,a5
	.loc 1 1113 50 discriminator 3
	sb	zero,0(a5)
	.loc 1 1113 34 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L316:
	.loc 1 1113 23 discriminator 1
	lw	a5,-124(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L317
.LBE48:
	.loc 1 1114 5
	lw	a5,-120(s0)
	mv	a2,a5
	ld	a1,-104(s0)
	ld	a0,-280(s0)
	call	strncpy
	.loc 1 1115 12
	li	a5,1
.L306:
	mv	sp,s1
	.loc 1 1116 1
	mv	a0,a5
	addi	sp,s0,-288
	.cfi_def_cfa 2, 288
	ld	ra,280(sp)
	.cfi_restore 1
	ld	s0,272(sp)
	.cfi_restore 8
	ld	s1,264(sp)
	.cfi_restore 9
	ld	s2,256(sp)
	.cfi_restore 18
	ld	s3,248(sp)
	.cfi_restore 19
	ld	s4,240(sp)
	.cfi_restore 20
	ld	s5,232(sp)
	.cfi_restore 21
	ld	s6,224(sp)
	.cfi_restore 22
	ld	s7,216(sp)
	.cfi_restore 23
	ld	s8,208(sp)
	.cfi_restore 24
	ld	s9,200(sp)
	.cfi_restore 25
	addi	sp,sp,288
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE47:
	.size	path_parent_lookup_abs, .-path_parent_lookup_abs
	.align	1
	.type	alloc_inode_T_FILE, @function
alloc_inode_T_FILE:
.LFB48:
	.loc 1 1121 1
	.cfi_startproc
	addi	sp,sp,-208
	.cfi_def_cfa_offset 208
	sd	ra,200(sp)
	sd	s0,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,208
	.cfi_def_cfa 8, 0
.LBB49:
	.loc 1 1123 19
	li	a5,1
	sw	a5,-20(s0)
	.loc 1 1123 5
	j	.L320
.L323:
	.loc 1 1124 9
	addi	a4,s0,-112
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1125 15
	lhu	a5,-112(s0)
	.loc 1 1125 12
	bne	a5,zero,.L321
.LBB50:
	.loc 1 1128 13
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1129 23
	li	a5,2
	sh	a5,-200(s0)
	.loc 1 1130 24
	li	a5,1
	sh	a5,-194(s0)
	.loc 1 1131 23
	sw	zero,-192(s0)
	.loc 1 1132 23
	li	a5,420
	sw	a5,-188(s0)
	.loc 1 1132 39
	sh	zero,-184(s0)
	.loc 1 1132 51
	sh	zero,-182(s0)
	.loc 1 1132 94
	call	fs_now
	mv	a5,a0
	.loc 1 1132 92 discriminator 1
	sw	a5,-172(s0)
	.loc 1 1132 85 discriminator 1
	lw	a5,-172(s0)
	.loc 1 1132 79 discriminator 1
	sw	a5,-176(s0)
	.loc 1 1132 72 discriminator 1
	lw	a5,-176(s0)
	.loc 1 1132 66 discriminator 1
	sw	a5,-180(s0)
	.loc 1 1133 13
	addi	a4,s0,-200
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1134 20
	lw	a5,-20(s0)
	j	.L324
.L321:
.LBE50:
	.loc 1 1123 53 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L320:
	.loc 1 1123 39 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1123 34 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L323
.LBE49:
	.loc 1 1137 12
	li	a5,0
.L324:
	.loc 1 1138 1
	mv	a0,a5
	ld	ra,200(sp)
	.cfi_restore 1
	ld	s0,192(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 208
	addi	sp,sp,208
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE48:
	.size	alloc_inode_T_FILE, .-alloc_inode_T_FILE
	.align	1
	.type	add_dirent, @function
add_dirent:
.LFB49:
	.loc 1 1143 1
	.cfi_startproc
	addi	sp,sp,-720
	.cfi_def_cfa_offset 720
	sd	ra,712(sp)
	sd	s0,704(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,720
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-720(s0)
	mv	a4,a2
	sw	a5,-708(s0)
	mv	a5,a4
	sw	a5,-712(s0)
	.loc 1 1144 8
	ld	a5,-720(s0)
	beq	a5,zero,.L326
	.loc 1 1144 22 discriminator 2
	ld	a5,-720(s0)
	lbu	a5,0(a5)
	.loc 1 1144 15 discriminator 2
	bne	a5,zero,.L327
.L326:
	.loc 1 1144 42 discriminator 3
	li	a5,-1
	.loc 1 1144 42 is_stmt 0
	j	.L340
.L327:
	.loc 1 1147 5 is_stmt 1
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1148 12
	lhu	a5,-176(s0)
	.loc 1 1148 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L329
	.loc 1 1148 35 discriminator 1
	li	a5,-1
	.loc 1 1148 35 is_stmt 0
	j	.L340
.L329:
	.loc 1 1152 15 is_stmt 1
	lw	a5,-712(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 1152 13
	sh	a5,-192(s0)
.LBB51:
	.loc 1 1154 14
	sw	zero,-20(s0)
	.loc 1 1154 5
	j	.L330
.L331:
	.loc 1 1154 49 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-174(a5)
	.loc 1 1154 34 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L330:
	.loc 1 1154 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L331
.LBE51:
	.loc 1 1155 5
	addi	a5,s0,-192
	addi	a5,a5,2
	li	a2,14
	ld	a1,-720(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1158 14
	sw	zero,-24(s0)
	.loc 1 1159 11
	j	.L332
.L338:
.LBB52:
	.loc 1 1160 9
	lw	a4,-24(s0)
	addi	a5,s0,-176
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1161 24
	lla	a5,block_buf
	sd	a5,-64(s0)
	.loc 1 1162 13
	li	a5,32
	sw	a5,-68(s0)
.LBB53:
	.loc 1 1163 18
	sw	zero,-28(s0)
	.loc 1 1163 9
	j	.L333
.L337:
	.loc 1 1164 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1164 24
	lhu	a5,0(a5)
	.loc 1 1164 16
	bne	a5,zero,.L334
.LBB54:
	.loc 1 1165 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1165 25
	lhu	a4,-192(s0)
	mv	t1,a4
	lhu	a4,-190(s0)
	mv	a7,a4
	lhu	a4,-188(s0)
	mv	a6,a4
	lhu	a4,-186(s0)
	mv	a0,a4
	lhu	a4,-184(s0)
	mv	a1,a4
	lhu	a4,-182(s0)
	mv	a2,a4
	lhu	a4,-180(s0)
	mv	a3,a4
	lhu	a4,-178(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 1167 26
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-72(s0)
	.loc 1 1168 37
	lw	a3,-72(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 1169 20
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L335
	.loc 1 1169 39 discriminator 1
	li	a5,-1
	.loc 1 1169 39 is_stmt 0
	j	.L340
.L335:
	.loc 1 1170 17 is_stmt 1
	lw	a5,-76(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_block
	.loc 1 1173 43
	lw	a5,-168(s0)
	.loc 1 1173 26
	srliw	a5,a5,4
	sw	a5,-80(s0)
	.loc 1 1174 41
	lw	a5,-24(s0)
	srliw	a5,a5,4
	sext.w	a4,a5
	.loc 1 1174 78
	lw	a5,-28(s0)
	.loc 1 1174 26
	addw	a5,a4,a5
	sw	a5,-84(s0)
	.loc 1 1175 20
	lw	a5,-84(s0)
	mv	a4,a5
	lw	a5,-80(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bltu	a4,a5,.L336
	.loc 1 1176 41
	lw	a5,-84(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 1176 46
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1176 30
	sw	a5,-168(s0)
	.loc 1 1177 33
	call	fs_now
	mv	a5,a0
	.loc 1 1177 31 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1178 21
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
.L336:
	.loc 1 1180 24
	li	a5,0
	j	.L340
.L334:
.LBE54:
	.loc 1 1163 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L333:
	.loc 1 1163 27 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-68(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L337
.LBE53:
	.loc 1 1183 13
	lw	a5,-24(s0)
	addiw	a5,a5,512
	sw	a5,-24(s0)
.L332:
.LBE52:
	.loc 1 1159 21
	lw	a5,-168(s0)
	.loc 1 1159 16
	lw	a4,-24(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L338
	.loc 1 1187 23
	lw	a5,-168(s0)
	.loc 1 1187 14
	srliw	a5,a5,4
	sw	a5,-32(s0)
	.loc 1 1188 29
	lwu	a5,-32(s0)
	slli	a5,a5,4
	.loc 1 1188 54
	srli	a5,a5,9
	.loc 1 1188 14
	sw	a5,-36(s0)
	.loc 1 1189 29
	lw	a5,-32(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1189 14
	andi	a5,a5,496
	sw	a5,-40(s0)
	.loc 1 1190 25
	lw	a3,-36(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 1191 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L339
	.loc 1 1191 27 discriminator 1
	li	a5,-1
	.loc 1 1191 27 is_stmt 0
	j	.L340
.L339:
	.loc 1 1194 5 is_stmt 1
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1195 20
	addi	a5,s0,-704
	sd	a5,-56(s0)
	.loc 1 1196 19
	lw	a5,-40(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 1196 9
	slli	a5,a5,4
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 1196 45
	lhu	a4,-192(s0)
	mv	t1,a4
	lhu	a4,-190(s0)
	mv	a7,a4
	lhu	a4,-188(s0)
	mv	a6,a4
	lhu	a4,-186(s0)
	mv	a0,a4
	lhu	a4,-184(s0)
	mv	a1,a4
	lhu	a4,-182(s0)
	mv	a2,a4
	lhu	a4,-180(s0)
	mv	a3,a4
	lhu	a4,-178(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 1197 5
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1199 8
	lw	a5,-168(s0)
	.loc 1 1199 14
	addiw	a5,a5,16
	sext.w	a5,a5
	sw	a5,-168(s0)
	.loc 1 1200 17
	call	fs_now
	mv	a5,a0
	.loc 1 1200 15 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1201 5
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1202 12
	li	a5,0
.L340:
	.loc 1 1203 1
	mv	a0,a5
	ld	ra,712(sp)
	.cfi_restore 1
	ld	s0,704(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 720
	addi	sp,sp,720
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE49:
	.size	add_dirent, .-add_dirent
	.align	1
	.type	remove_dirent, @function
remove_dirent:
.LFB50:
	.loc 1 1207 1
	.cfi_startproc
	addi	sp,sp,-160
	.cfi_def_cfa_offset 160
	sd	ra,152(sp)
	sd	s0,144(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,160
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-160(s0)
	sw	a5,-148(s0)
	.loc 1 1209 5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1210 12
	lhu	a5,-128(s0)
	.loc 1 1210 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L342
	.loc 1 1210 35 discriminator 1
	li	a5,-1
	.loc 1 1210 35 is_stmt 0
	j	.L350
.L342:
	.loc 1 1212 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1214 11
	j	.L344
.L349:
.LBB55:
	.loc 1 1215 9
	lw	a5,-20(s0)
	srliw	a5,a5,9
	sext.w	a3,a5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 1215 9 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1216 24 is_stmt 1
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 1217 13
	li	a5,32
	sw	a5,-36(s0)
.LBB56:
	.loc 1 1218 18
	sw	zero,-24(s0)
	.loc 1 1218 9
	j	.L345
.L348:
	.loc 1 1219 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1219 22
	lhu	a5,0(a5)
	.loc 1 1219 16
	beq	a5,zero,.L351
	.loc 1 1220 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1220 34
	addi	a4,a5,2
	.loc 1 1220 13
	addi	a5,s0,-144
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 1221 29
	sb	zero,-130(s0)
	.loc 1 1222 17
	addi	a5,s0,-144
	li	a2,14
	ld	a1,-160(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 1222 16 discriminator 1
	bne	a5,zero,.L347
	.loc 1 1223 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1223 28
	sh	zero,0(a5)
	.loc 1 1224 17
	lw	a5,-20(s0)
	srliw	a5,a5,9
	sext.w	a3,a5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 1224 17 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1225 29 is_stmt 1
	call	fs_now
	mv	a5,a0
	.loc 1 1225 27 discriminator 1
	sw	a5,-104(s0)
	.loc 1 1226 17
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1227 24
	li	a5,0
	j	.L350
.L351:
	.loc 1 1219 34
	nop
.L347:
	.loc 1 1218 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L345:
	.loc 1 1218 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L348
.LBE56:
	.loc 1 1230 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L344:
.LBE55:
	.loc 1 1214 21
	lw	a5,-120(s0)
	.loc 1 1214 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L349
	.loc 1 1232 12
	li	a5,-1
.L350:
	.loc 1 1233 1
	mv	a0,a5
	ld	ra,152(sp)
	.cfi_restore 1
	ld	s0,144(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 160
	addi	sp,sp,160
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE50:
	.size	remove_dirent, .-remove_dirent
	.align	1
	.type	build_abs_normalized, @function
build_abs_normalized:
.LFB51:
	.loc 1 1237 1
	.cfi_startproc
	addi	sp,sp,-1136
	.cfi_def_cfa_offset 1136
	sd	ra,1128(sp)
	sd	s0,1120(sp)
	sd	s1,1112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1136
	.cfi_def_cfa 8, 0
	sd	a0,-1112(s0)
	sd	a1,-1120(s0)
	sd	a2,-1128(s0)
	.loc 1 1238 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1238 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1240 8
	ld	a5,-1128(s0)
	beq	a5,zero,.L353
	.loc 1 1240 21 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1240 14 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L353
	.loc 1 1241 9
	addi	a5,s0,-368
	li	a2,255
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1242 34
	sb	zero,-113(s0)
	j	.L354
.L353:
.LBB57:
	.loc 1 1245 26
	ld	a5,-80(s0)
	addi	a4,a5,1752
	.loc 1 1245 9
	addi	a5,s0,-368
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1246 34
	sb	zero,-113(s0)
	.loc 1 1247 17
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1248 12
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L355
	.loc 1 1248 31 discriminator 1
	lbu	a5,-368(s0)
	.loc 1 1248 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L356
.L355:
	.loc 1 1249 16
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,254
	bgt	a4,a5,.L356
	.loc 1 1249 54 discriminator 1
	lw	a5,-84(s0)
	addiw	a4,a5,1
	sw	a4,-84(s0)
	.loc 1 1249 58 discriminator 1
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-336(a5)
	.loc 1 1249 75 discriminator 1
	lw	a5,-84(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-336(a5)
.L356:
	.loc 1 1251 12
	ld	a5,-1128(s0)
	beq	a5,zero,.L354
	.loc 1 1251 25 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1251 18 discriminator 1
	beq	a5,zero,.L354
	.loc 1 1251 67 discriminator 2
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1251 67 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1251 30 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-368
	mv	a2,a4
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncat
.L354:
.LBE57:
	.loc 1 1256 5
	addi	a4,s0,-368
	addi	a5,s0,-624
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1257 24
	sb	zero,-369(s0)
	.loc 1 1258 17
	addi	a5,s0,-624
	sd	a5,-40(s0)
	.loc 1 1259 29
	addi	a5,s0,-624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1259 29 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1259 17 is_stmt 1 discriminator 1
	addi	a5,s0,-624
	add	a5,a5,a4
	sd	a5,-96(s0)
	.loc 1 1262 9
	sw	zero,-44(s0)
	.loc 1 1263 11
	j	.L357
.L359:
.LBB58:
	.loc 1 1264 28 discriminator 2
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L358:
	.loc 1 1264 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1264 19 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L359
	.loc 1 1265 13
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1265 12
	beq	a5,zero,.L386
	.loc 1 1266 19
	ld	a5,-40(s0)
	sd	a5,-104(s0)
	.loc 1 1267 15
	j	.L362
.L364:
	.loc 1 1267 34 discriminator 3
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L362:
	.loc 1 1267 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1267 19 discriminator 1
	beq	a5,zero,.L363
	.loc 1 1267 22 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1267 19 discriminator 2
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L364
.L363:
	.loc 1 1268 21
	ld	a4,-40(s0)
	ld	a5,-104(s0)
	sub	a5,a4,a5
	.loc 1 1268 13
	sw	a5,-108(s0)
	.loc 1 1269 12
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L365
	.loc 1 1269 34 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1269 22 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L365
	.loc 1 1269 22 is_stmt 0
	j	.L357
.L365:
	.loc 1 1271 19 is_stmt 1
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L366
	.loc 1 1271 41 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1271 29 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L366
	.loc 1 1271 64 discriminator 2
	ld	a5,-104(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1271 52 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L366
	.loc 1 1272 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	ble	a5,zero,.L357
	.loc 1 1272 33 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,-1
	sw	a5,-44(s0)
	.loc 1 1272 16
	j	.L357
.L366:
	.loc 1 1273 19
	lw	a5,-108(s0)
	sext.w	a5,a5
	ble	a5,zero,.L357
.LBB59:
	.loc 1 1274 17
	lw	a5,-108(s0)
	sw	a5,-48(s0)
	.loc 1 1275 16
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L368
	.loc 1 1275 37 discriminator 1
	li	a5,14
	sw	a5,-48(s0)
.L368:
.LBB60:
	.loc 1 1276 22
	sw	zero,-52(s0)
	.loc 1 1276 13
	j	.L369
.L370:
	.loc 1 1276 57 discriminator 3
	lw	a3,-52(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1276 38 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L369:
	.loc 1 1276 27 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L370
.LBE60:
.LBB61:
	.loc 1 1277 22
	sw	zero,-56(s0)
	.loc 1 1277 13
	j	.L371
.L372:
	.loc 1 1277 65 discriminator 3
	lw	a5,-56(s0)
	ld	a4,-104(s0)
	add	a5,a4,a5
	lbu	a3,0(a5)
	.loc 1 1277 54 discriminator 3
	lw	a2,-56(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	sb	a3,-1072(a5)
	.loc 1 1277 34 discriminator 3
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L371:
	.loc 1 1277 27 discriminator 1
	lw	a5,-56(s0)
	mv	a4,a5
	lw	a5,-48(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L372
.LBE61:
	.loc 1 1278 32
	lw	a3,-48(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1279 16
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,30
	bgt	a4,a5,.L357
	.loc 1 1279 34 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L357:
.LBE59:
.LBE58:
	.loc 1 1263 14
	ld	a4,-40(s0)
	ld	a5,-96(s0)
	bltu	a4,a5,.L358
	j	.L361
.L386:
.LBB62:
	.loc 1 1265 25
	nop
.L361:
.LBE62:
	.loc 1 1283 9
	sw	zero,-60(s0)
	.loc 1 1284 8
	ld	a5,-1120(s0)
	beq	a5,zero,.L374
	.loc 1 1284 27 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1284 23 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1284 30 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L374:
.LBB63:
	.loc 1 1285 14
	sw	zero,-64(s0)
	.loc 1 1285 5
	j	.L375
.L382:
.LBB64:
	.loc 1 1286 24
	lw	a5,-64(s0)
	sext.w	a5,a5
	snez	a5,a5
	andi	a5,a5,0xff
	sext.w	s1,a5
	.loc 1 1286 42
	addi	a3,s0,-1104
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	add	a5,a3,a5
	.loc 1 1286 30
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1286 13 discriminator 1
	addw	a5,s1,a5
	sw	a5,-112(s0)
	.loc 1 1287 13
	lw	a4,-60(s0)
	.loc 1 1287 25
	lw	a5,-112(s0)
	add	a5,a4,a5
	.loc 1 1287 12
	ld	a4,-1120(s0)
	bleu	a4,a5,.L387
	.loc 1 1288 12
	lw	a5,-64(s0)
	sext.w	a5,a5
	beq	a5,zero,.L378
	.loc 1 1288 23 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1288 19 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1288 27 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L378:
.LBB65:
	.loc 1 1289 18
	sw	zero,-68(s0)
	.loc 1 1289 9
	j	.L379
.L381:
	.loc 1 1289 73 discriminator 4
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1289 69 discriminator 4
	ld	a5,-1112(s0)
	add	a3,a5,a4
	.loc 1 1289 87 discriminator 4
	lw	a2,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	lbu	a5,-1072(a5)
	.loc 1 1289 77 discriminator 4
	sb	a5,0(a3)
	.loc 1 1289 62 discriminator 4
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L379:
	.loc 1 1289 31 discriminator 1
	lw	a3,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	lbu	a5,-1072(a5)
	.loc 1 1289 35 discriminator 1
	beq	a5,zero,.L380
	.loc 1 1289 38 discriminator 3
	lw	a4,-60(s0)
	.loc 1 1289 57 discriminator 3
	ld	a5,-1120(s0)
	addi	a5,a5,-1
	.loc 1 1289 35 discriminator 3
	bltu	a4,a5,.L381
.L380:
.LBE65:
.LBE64:
	.loc 1 1285 27 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L375:
	.loc 1 1285 19 discriminator 1
	lw	a5,-64(s0)
	mv	a4,a5
	lw	a5,-44(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L382
	j	.L377
.L387:
.LBB66:
	.loc 1 1287 42
	nop
.L377:
.LBE66:
.LBE63:
	.loc 1 1291 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L383
	.loc 1 1292 12
	ld	a4,-1120(s0)
	li	a5,1
	bleu	a4,a5,.L384
	.loc 1 1292 33 discriminator 1
	ld	a5,-1112(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 1292 42 discriminator 1
	ld	a5,-1112(s0)
	addi	a5,a5,1
	.loc 1 1292 45 discriminator 1
	sb	zero,0(a5)
	.loc 1 1297 1
	j	.L388
.L384:
	.loc 1 1293 17
	ld	a5,-1120(s0)
	beq	a5,zero,.L388
	.loc 1 1293 34 discriminator 1
	ld	a5,-1112(s0)
	sb	zero,0(a5)
	.loc 1 1297 1
	j	.L388
.L383:
	.loc 1 1295 12
	lw	a5,-60(s0)
	ld	a4,-1112(s0)
	add	a5,a4,a5
	.loc 1 1295 17
	sb	zero,0(a5)
.L388:
	.loc 1 1297 1
	nop
	ld	ra,1128(sp)
	.cfi_restore 1
	ld	s0,1120(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1136
	ld	s1,1112(sp)
	.cfi_restore 9
	addi	sp,sp,1136
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE51:
	.size	build_abs_normalized, .-build_abs_normalized
	.align	1
	.globl	fs_mkdir
	.type	fs_mkdir, @function
fs_mkdir:
.LFB52:
	.loc 1 1301 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	sd	a0,-552(s0)
	mv	a5,a1
	sw	a5,-556(s0)
	.loc 1 1304 5
	addi	a5,s0,-160
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1305 9
	addi	a5,s0,-160
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1305 8 discriminator 1
	bne	a5,zero,.L390
	.loc 1 1305 39 discriminator 1
	li	a5,-1
	.loc 1 1305 39 is_stmt 0
	j	.L409
.L390:
	.loc 1 1308 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1308 8 discriminator 1
	beq	a5,zero,.L392
	.loc 1 1308 39 discriminator 1
	li	a5,-1
	.loc 1 1308 39 is_stmt 0
	j	.L409
.L392:
.LBB67:
	.loc 1 1312 34 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1312 26
	j	.L393
.L394:
	.loc 1 1312 61 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1312 50 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L393:
	.loc 1 1312 39 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L394
.LBE67:
	.loc 1 1313 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1313 8 discriminator 1
	bne	a5,zero,.L395
	.loc 1 1313 61 discriminator 1
	li	a5,-1
	.loc 1 1313 61 is_stmt 0
	j	.L409
.L395:
	.loc 1 1315 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1316 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1316 8 discriminator 1
	bne	a5,zero,.L396
	.loc 1 1316 51 discriminator 1
	li	a5,-1
	.loc 1 1316 51 is_stmt 0
	j	.L409
.L396:
	.loc 1 1317 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1317 8
	bne	a5,zero,.L397
	.loc 1 1317 33 discriminator 1
	li	a5,-1
	.loc 1 1317 33 is_stmt 0
	j	.L409
.L397:
	.loc 1 1321 14 is_stmt 1
	sw	zero,-24(s0)
.LBB68:
	.loc 1 1322 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1322 5
	j	.L398
.L401:
	.loc 1 1323 9
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1324 15
	lhu	a5,-360(s0)
	.loc 1 1324 12
	bne	a5,zero,.L399
	.loc 1 1324 34 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1324 39
	j	.L400
.L399:
	.loc 1 1322 44 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L398:
	.loc 1 1322 33 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1322 28 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L401
.L400:
.LBE68:
	.loc 1 1326 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L402
	.loc 1 1326 23 discriminator 1
	li	a5,-1
	.loc 1 1326 23 is_stmt 0
	j	.L409
.L402:
	.loc 1 1327 25 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1328 15
	li	a5,1
	sh	a5,-448(s0)
	.loc 1 1328 35
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1328 50
	sw	zero,-440(s0)
	.loc 1 1328 68
	call	fs_now
	mv	a5,a0
	.loc 1 1328 66 discriminator 1
	sw	a5,-424(s0)
	.loc 1 1328 95 discriminator 1
	lw	a5,-424(s0)
	.loc 1 1328 89 discriminator 1
	sw	a5,-420(s0)
	.loc 1 1330 30
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1330 20
	lhu	a5,1880(a5)
	sh	a5,-30(s0)
	.loc 1 1331 28
	lw	a5,-164(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1332 22
	lw	a5,-424(s0)
	.loc 1 1332 16
	sw	a5,-428(s0)
	.loc 1 1332 46
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1332 59
	lhu	a5,1882(a5)
	.loc 1 1332 39
	sh	a5,-432(s0)
	.loc 1 1333 24
	lw	a5,-524(s0)
	.loc 1 1333 30
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1333 14
	beq	a5,zero,.L403
	.loc 1 1333 14 is_stmt 0 discriminator 1
	lhu	a5,-518(s0)
	j	.L404
.L403:
	.loc 1 1333 62 is_stmt 1 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1333 14 discriminator 2
	lhu	a5,1884(a5)
.L404:
	.loc 1 1333 14 is_stmt 0 discriminator 4
	sh	a5,-430(s0)
	.loc 1 1334 40 is_stmt 1
	lw	a5,-556(s0)
	sext.w	a5,a5
	beq	a5,zero,.L405
	.loc 1 1334 40 is_stmt 0 discriminator 1
	lw	a5,-556(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L406
.L405:
	.loc 1 1334 40 discriminator 2
	li	a5,493
.L406:
	.loc 1 1334 50 is_stmt 1 discriminator 4
	lhu	a4,-30(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1334 48 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1334 15 discriminator 4
	sw	a5,-436(s0)
	.loc 1 1335 16
	lw	a5,-524(s0)
	.loc 1 1335 22
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1335 8
	beq	a5,zero,.L407
	.loc 1 1335 37 discriminator 1
	lw	a5,-436(s0)
	.loc 1 1335 43 discriminator 1
	ori	a5,a5,1024
	sext.w	a5,a5
	sw	a5,-436(s0)
.L407:
	.loc 1 1336 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1338 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1338 8 discriminator 1
	beq	a5,zero,.L408
	.loc 1 1338 53 discriminator 1
	li	a5,-1
	.loc 1 1338 53 is_stmt 0
	j	.L409
.L408:
	.loc 1 1339 12 is_stmt 1
	li	a5,0
.L409:
	.loc 1 1340 1
	mv	a0,a5
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE52:
	.size	fs_mkdir, .-fs_mkdir
	.align	1
	.globl	fs_rmdir
	.type	fs_rmdir, @function
fs_rmdir:
.LFB53:
	.loc 1 1344 1
	.cfi_startproc
	addi	sp,sp,-496
	.cfi_def_cfa_offset 496
	sd	ra,488(sp)
	sd	s0,480(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,496
	.cfi_def_cfa 8, 0
	sd	a0,-488(s0)
	.loc 1 1346 5
	addi	a5,s0,-184
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1347 9
	addi	a5,s0,-184
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1347 8 discriminator 1
	bne	a5,zero,.L411
	.loc 1 1347 39 discriminator 1
	li	a5,-1
	.loc 1 1347 39 is_stmt 0
	j	.L429
.L411:
	.loc 1 1349 21 is_stmt 1
	addi	a5,s0,-184
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 1350 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L413
	.loc 1 1350 27 discriminator 1
	li	a5,-1
	.loc 1 1350 27 is_stmt 0
	j	.L429
.L413:
	.loc 1 1351 23 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1352 11
	lhu	a5,-272(s0)
	.loc 1 1352 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L414
	.loc 1 1352 34 discriminator 1
	li	a5,-1
	.loc 1 1352 34 is_stmt 0
	j	.L429
.L414:
	.loc 1 1354 11 is_stmt 1
	lw	a5,-264(s0)
	.loc 1 1354 8
	beq	a5,zero,.L415
.LBB69:
	.loc 1 1356 18
	sw	zero,-20(s0)
	.loc 1 1356 29
	sw	zero,-24(s0)
	.loc 1 1357 15
	j	.L416
.L423:
.LBB70:
	.loc 1 1358 13
	lw	a4,-20(s0)
	addi	a5,s0,-272
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1359 28
	lla	a5,block_buf
	sd	a5,-48(s0)
	.loc 1 1360 17
	li	a5,32
	sw	a5,-52(s0)
.LBB71:
	.loc 1 1361 21
	sw	zero,-28(s0)
	.loc 1 1361 13
	j	.L417
.L420:
	.loc 1 1361 46 discriminator 5
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1361 49 discriminator 5
	lhu	a5,0(a5)
	.loc 1 1361 43 discriminator 5
	beq	a5,zero,.L418
	.loc 1 1361 69 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 1361 73
	j	.L419
.L418:
	.loc 1 1361 36 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L417:
	.loc 1 1361 26 discriminator 4
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-52(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L420
.L419:
.LBE71:
	.loc 1 1362 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L430
	.loc 1 1363 17
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L416:
.LBE70:
	.loc 1 1357 24
	lw	a5,-264(s0)
	.loc 1 1357 20
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L423
	j	.L422
.L430:
.LBB72:
	.loc 1 1362 29
	nop
.L422:
.LBE72:
	.loc 1 1365 12
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L415
	.loc 1 1365 33 discriminator 1
	li	a5,-1
	.loc 1 1365 33 is_stmt 0
	j	.L429
.L415:
.LBE69:
.LBB73:
	.loc 1 1368 51 is_stmt 1
	sw	zero,-32(s0)
	.loc 1 1368 43
	j	.L424
.L425:
	.loc 1 1368 78 discriminator 3
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-280(a5)
	.loc 1 1368 67 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L424:
	.loc 1 1368 56 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L425
.LBE73:
	.loc 1 1369 10
	addi	a3,s0,-296
	addi	a4,s0,-276
	addi	a5,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1369 8 discriminator 1
	bne	a5,zero,.L426
	.loc 1 1369 61 discriminator 1
	li	a5,-1
	.loc 1 1369 61 is_stmt 0
	j	.L429
.L426:
	.loc 1 1371 25 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-384
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1372 10
	addi	a5,s0,-384
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1372 8 discriminator 1
	bne	a5,zero,.L427
	.loc 1 1372 52 discriminator 1
	li	a5,-1
	.loc 1 1372 52 is_stmt 0
	j	.L429
.L427:
	.loc 1 1373 9 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1373 8 discriminator 1
	beq	a5,zero,.L428
	.loc 1 1373 50 discriminator 1
	li	a5,-1
	.loc 1 1373 50 is_stmt 0
	j	.L429
.L428:
	.loc 1 1376 5 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1378 25
	addi	a5,s0,-472
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1379 5
	addi	a4,s0,-472
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1380 12
	li	a5,0
.L429:
	.loc 1 1381 1
	mv	a0,a5
	ld	ra,488(sp)
	.cfi_restore 1
	ld	s0,480(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 496
	addi	sp,sp,496
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE53:
	.size	fs_rmdir, .-fs_rmdir
	.align	1
	.globl	fs_unlink
	.type	fs_unlink, @function
fs_unlink:
.LFB54:
	.loc 1 1385 1
	.cfi_startproc
	addi	sp,sp,-576
	.cfi_def_cfa_offset 576
	sd	ra,568(sp)
	sd	s0,560(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,576
	.cfi_def_cfa 8, 0
	sd	a0,-568(s0)
	.loc 1 1387 5
	addi	a5,s0,-176
	ld	a2,-568(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1388 9
	addi	a5,s0,-176
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1388 8 discriminator 1
	bne	a5,zero,.L432
	.loc 1 1388 39 discriminator 1
	li	a5,-1
	.loc 1 1388 39 is_stmt 0
	j	.L449
.L432:
	.loc 1 1390 21 is_stmt 1
	addi	a5,s0,-176
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-32(s0)
	.loc 1 1391 8
	lw	a5,-32(s0)
	sext.w	a5,a5
	bne	a5,zero,.L434
	.loc 1 1391 27 discriminator 1
	li	a5,-1
	.loc 1 1391 27 is_stmt 0
	j	.L449
.L434:
	.loc 1 1392 23 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1393 11
	lhu	a5,-264(s0)
	.loc 1 1393 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L435
	.loc 1 1393 35 discriminator 1
	li	a5,-1
	.loc 1 1393 35 is_stmt 0
	j	.L449
.L435:
.LBB74:
	.loc 1 1396 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1396 5
	j	.L436
.L442:
.LBB75:
	.loc 1 1397 19
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1397 12
	beq	a5,zero,.L450
	.loc 1 1398 33
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1398 23
	addi	a5,a5,584
	sd	a5,-48(s0)
.LBB76:
	.loc 1 1399 18
	sw	zero,-24(s0)
	.loc 1 1399 9
	j	.L439
.L441:
	.loc 1 1400 19
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1400 16
	beq	a5,zero,.L440
	.loc 1 1400 28 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1400 31 discriminator 1
	lw	a4,0(a5)
	.loc 1 1400 23 discriminator 1
	li	a5,3
	bne	a4,a5,.L440
	.loc 1 1400 54 discriminator 2
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1400 57 discriminator 2
	lw	a5,4(a5)
	.loc 1 1400 49 discriminator 2
	lw	a4,-32(s0)
	sext.w	a4,a4
	bne	a4,a5,.L440
	.loc 1 1401 24
	li	a5,-1
	j	.L449
.L440:
	.loc 1 1399 46 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L439:
	.loc 1 1399 27 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L441
	j	.L438
.L450:
.LBE76:
	.loc 1 1397 25
	nop
.L438:
.LBE75:
	.loc 1 1396 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L436:
	.loc 1 1396 25 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L442
.LBE74:
.LBB77:
	.loc 1 1406 51
	sw	zero,-28(s0)
	.loc 1 1406 43
	j	.L443
.L444:
	.loc 1 1406 78 discriminator 3
	lw	a5,-28(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-272(a5)
	.loc 1 1406 67 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L443:
	.loc 1 1406 56 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L444
.LBE77:
	.loc 1 1407 10
	addi	a3,s0,-288
	addi	a4,s0,-268
	addi	a5,s0,-176
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1407 8 discriminator 1
	bne	a5,zero,.L445
	.loc 1 1407 61 discriminator 1
	li	a5,-1
	.loc 1 1407 61 is_stmt 0
	j	.L449
.L445:
	.loc 1 1409 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-376
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1410 10
	addi	a5,s0,-376
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1410 8 discriminator 1
	bne	a5,zero,.L446
	.loc 1 1410 52 discriminator 1
	li	a5,-1
	.loc 1 1410 52 is_stmt 0
	j	.L449
.L446:
	.loc 1 1412 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-464
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1413 13
	lw	a5,-452(s0)
	.loc 1 1413 19
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1413 8
	beq	a5,zero,.L447
.LBB78:
	.loc 1 1414 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1414 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1415 17
	ld	a5,-40(s0)
	lhu	a5,1882(a5)
	.loc 1 1415 12
	beq	a5,zero,.L447
	.loc 1 1415 33 discriminator 1
	ld	a5,-40(s0)
	lhu	a4,1882(a5)
	.loc 1 1415 44 discriminator 1
	lhu	a5,-248(s0)
	.loc 1 1415 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L447
	.loc 1 1415 54 discriminator 2
	ld	a5,-40(s0)
	lhu	a4,1882(a5)
	.loc 1 1415 67 discriminator 2
	lhu	a5,-448(s0)
	.loc 1 1415 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L447
	.loc 1 1415 81 discriminator 3
	li	a5,-1
	.loc 1 1415 81 is_stmt 0
	j	.L449
.L447:
.LBE78:
	.loc 1 1417 9 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-288
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1417 8 discriminator 1
	beq	a5,zero,.L448
	.loc 1 1417 50 discriminator 1
	li	a5,-1
	.loc 1 1417 50 is_stmt 0
	j	.L449
.L448:
	.loc 1 1420 5 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1421 25
	addi	a5,s0,-552
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1422 5
	addi	a4,s0,-552
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1423 12
	li	a5,0
.L449:
	.loc 1 1424 1
	mv	a0,a5
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE54:
	.size	fs_unlink, .-fs_unlink
	.align	1
	.type	write_data_inode, @function
write_data_inode:
.LFB55:
	.loc 1 1428 1
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
	mv	a4,a3
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 1 1429 14
	lw	a5,-56(s0)
	sw	a5,-20(s0)
	.loc 1 1429 36
	sw	zero,-24(s0)
	.loc 1 1429 60
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 1430 11
	j	.L452
.L456:
.LBB79:
	.loc 1 1431 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 1431 50
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 1432 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 1432 49
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L453
	.loc 1 1432 76 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L453:
	.loc 1 1433 29
	lw	a4,-40(s0)
	lw	a5,-52(s0)
	mv	a2,a4
	ld	a1,-64(s0)
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 1434 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L454
	.loc 1 1434 31 discriminator 1
	li	a5,-1
	.loc 1 1434 31 is_stmt 0
	j	.L455
.L454:
	.loc 1 1435 9 is_stmt 1
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1436 9
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	ld	a1,-32(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1437 9
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1438 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 1438 31
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 1438 46
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L452:
.LBE79:
	.loc 1 1430 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L456
	.loc 1 1440 14
	ld	a5,-64(s0)
	lw	a4,-56(s0)
	sw	a4,8(a5)
	.loc 1 1440 34
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1440 32 discriminator 1
	ld	a5,-64(s0)
	sw	a4,24(a5)
	.loc 1 1440 44 discriminator 1
	lw	a5,-52(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1440 74 discriminator 2
	li	a5,0
.L455:
	.loc 1 1441 1
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
.LFE55:
	.size	write_data_inode, .-write_data_inode
	.align	1
	.globl	fs_symlink
	.type	fs_symlink, @function
fs_symlink:
.LFB56:
	.loc 1 1445 1
	.cfi_startproc
	addi	sp,sp,-704
	.cfi_def_cfa_offset 704
	sd	ra,696(sp)
	sd	s0,688(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,704
	.cfi_def_cfa 8, 0
	sd	a0,-696(s0)
	sd	a1,-704(s0)
	.loc 1 1446 20
	addi	a5,s0,-160
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1447 9
	addi	a5,s0,-160
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1447 8 discriminator 1
	bne	a5,zero,.L458
	.loc 1 1447 39 discriminator 1
	li	a5,-1
	.loc 1 1447 39 is_stmt 0
	j	.L474
.L458:
	.loc 1 1448 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1448 8 discriminator 1
	beq	a5,zero,.L460
	.loc 1 1448 39 discriminator 1
	li	a5,-1
	.loc 1 1448 39 is_stmt 0
	j	.L474
.L460:
.LBB80:
	.loc 1 1450 51 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1450 43
	j	.L461
.L462:
	.loc 1 1450 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1450 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L461:
	.loc 1 1450 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L462
.LBE80:
	.loc 1 1451 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1451 8 discriminator 1
	bne	a5,zero,.L463
	.loc 1 1451 61 discriminator 1
	li	a5,-1
	.loc 1 1451 61 is_stmt 0
	j	.L474
.L463:
	.loc 1 1452 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1452 8
	bne	a5,zero,.L464
	.loc 1 1452 33 discriminator 1
	li	a5,-1
	.loc 1 1452 33 is_stmt 0
	j	.L474
.L464:
	.loc 1 1454 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1455 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1455 8 discriminator 1
	bne	a5,zero,.L465
	.loc 1 1455 51 discriminator 1
	li	a5,-1
	.loc 1 1455 51 is_stmt 0
	j	.L474
.L465:
	.loc 1 1458 32 is_stmt 1
	sw	zero,-24(s0)
.LBB81:
	.loc 1 1459 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1459 5
	j	.L466
.L469:
	.loc 1 1459 43 discriminator 5
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1459 67 discriminator 5
	lhu	a5,-360(s0)
	.loc 1 1459 64 discriminator 5
	bne	a5,zero,.L467
	.loc 1 1459 82 discriminator 2
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1459 86
	j	.L468
.L467:
	.loc 1 1459 38 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L466:
	.loc 1 1459 28 discriminator 4
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1459 24 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L469
.L468:
.LBE81:
	.loc 1 1460 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L470
	.loc 1 1460 23 discriminator 1
	li	a5,-1
	.loc 1 1460 23 is_stmt 0
	j	.L474
.L470:
	.loc 1 1461 23 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1461 56 discriminator 1
	li	a5,3
	sh	a5,-448(s0)
	.loc 1 1461 76 discriminator 1
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1461 87 discriminator 1
	sw	zero,-440(s0)
	.loc 1 1461 100 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 1 1461 99 discriminator 2
	sw	a5,-424(s0)
	.loc 1 1461 121 discriminator 2
	lw	a5,-424(s0)
	.loc 1 1461 118 discriminator 2
	sw	a5,-420(s0)
	.loc 1 1461 129 discriminator 2
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1463 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1463 8 discriminator 1
	beq	a5,zero,.L471
	.loc 1 1463 53 discriminator 1
	li	a5,-1
	.loc 1 1463 53 is_stmt 0
	j	.L474
.L471:
	.loc 1 1465 21 is_stmt 1
	ld	a0,-696(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1465 14 discriminator 1
	sw	a5,-32(s0)
	.loc 1 1465 40 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,240
	bleu	a4,a5,.L472
	.loc 1 1465 58 discriminator 1
	li	a5,240
	sw	a5,-32(s0)
.L472:
	.loc 1 1466 23
	addi	a5,s0,-688
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1466 50 discriminator 1
	lw	a4,-32(s0)
	addi	a5,s0,-688
	mv	a2,a4
	ld	a1,-696(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1467 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1468 9
	lw	a3,-32(s0)
	addi	a2,s0,-688
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_data_inode
	mv	a5,a0
	.loc 1 1468 8 discriminator 1
	beq	a5,zero,.L473
	.loc 1 1468 61 discriminator 1
	li	a5,-1
	.loc 1 1468 61 is_stmt 0
	j	.L474
.L473:
	.loc 1 1469 12 is_stmt 1
	li	a5,0
.L474:
	.loc 1 1470 1
	mv	a0,a5
	ld	ra,696(sp)
	.cfi_restore 1
	ld	s0,688(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 704
	addi	sp,sp,704
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE56:
	.size	fs_symlink, .-fs_symlink
	.align	1
	.globl	fs_rename
	.type	fs_rename, @function
fs_rename:
.LFB57:
	.loc 1 1474 1
	.cfi_startproc
	addi	sp,sp,-704
	.cfi_def_cfa_offset 704
	sd	ra,696(sp)
	sd	s0,688(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,704
	.cfi_def_cfa 8, 0
	sd	a0,-696(s0)
	sd	a1,-704(s0)
	.loc 1 1476 5
	addi	a5,s0,-160
	ld	a2,-696(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1477 5
	addi	a5,s0,-288
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1479 9
	addi	a4,s0,-288
	addi	a5,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1479 8 discriminator 1
	bne	a5,zero,.L476
	.loc 1 1479 45 discriminator 1
	li	a5,0
	.loc 1 1479 45 is_stmt 0
	j	.L493
.L476:
	.loc 1 1480 9 is_stmt 1
	addi	a5,s0,-160
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1480 8 discriminator 1
	bne	a5,zero,.L478
	.loc 1 1480 42 discriminator 1
	li	a5,-1
	.loc 1 1480 42 is_stmt 0
	j	.L493
.L478:
	.loc 1 1482 21 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1483 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L479
	.loc 1 1483 27 discriminator 1
	li	a5,-1
	.loc 1 1483 27 is_stmt 0
	j	.L493
.L479:
	.loc 1 1484 9 is_stmt 1
	addi	a5,s0,-288
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1484 8 discriminator 1
	beq	a5,zero,.L480
	.loc 1 1484 42 discriminator 1
	li	a5,-1
	.loc 1 1484 42 is_stmt 0
	j	.L493
.L480:
.LBB82:
	.loc 1 1487 13 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1487 5
	j	.L481
.L482:
	.loc 1 1487 42 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-296(a5)
	.loc 1 1487 54 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-312(a5)
	.loc 1 1487 29 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L481:
	.loc 1 1487 18 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L482
.LBE82:
	.loc 1 1488 10
	addi	a3,s0,-312
	addi	a4,s0,-292
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1488 8 discriminator 1
	bne	a5,zero,.L483
	.loc 1 1488 61 discriminator 1
	li	a5,-1
	.loc 1 1488 61 is_stmt 0
	j	.L493
.L483:
	.loc 1 1489 10 is_stmt 1
	addi	a3,s0,-328
	addi	a4,s0,-296
	addi	a5,s0,-288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1489 8 discriminator 1
	bne	a5,zero,.L484
	.loc 1 1489 62 discriminator 1
	li	a5,-1
	.loc 1 1489 62 is_stmt 0
	j	.L493
.L484:
	.loc 1 1490 14 is_stmt 1
	lbu	a5,-312(s0)
	.loc 1 1490 8
	beq	a5,zero,.L485
	.loc 1 1490 34 discriminator 2
	lbu	a5,-328(s0)
	.loc 1 1490 26 discriminator 2
	bne	a5,zero,.L486
.L485:
	.loc 1 1490 54 discriminator 3
	li	a5,-1
	.loc 1 1490 54 is_stmt 0
	j	.L493
.L486:
	.loc 1 1492 24 is_stmt 1
	lw	a5,-296(s0)
	addi	a4,s0,-416
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1493 12
	lhu	a5,-416(s0)
	.loc 1 1493 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L487
	.loc 1 1493 35 discriminator 1
	li	a5,-1
	.loc 1 1493 35 is_stmt 0
	j	.L493
.L487:
	.loc 1 1495 24 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-504
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1496 10
	addi	a5,s0,-504
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1496 8 discriminator 1
	bne	a5,zero,.L488
	.loc 1 1496 51 discriminator 1
	li	a5,-1
	.loc 1 1496 51 is_stmt 0
	j	.L493
.L488:
	.loc 1 1497 10 is_stmt 1
	addi	a5,s0,-416
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1497 8 discriminator 1
	bne	a5,zero,.L489
	.loc 1 1497 51 discriminator 1
	li	a5,-1
	.loc 1 1497 51 is_stmt 0
	j	.L493
.L489:
	.loc 1 1500 26 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-592
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1501 27
	addi	a4,s0,-680
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1502 14
	lw	a5,-580(s0)
	.loc 1 1502 20
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1502 8
	beq	a5,zero,.L490
.LBB83:
	.loc 1 1503 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1503 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1504 17
	ld	a5,-32(s0)
	lhu	a5,1882(a5)
	.loc 1 1504 12
	beq	a5,zero,.L490
	.loc 1 1504 33 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1882(a5)
	.loc 1 1504 48 discriminator 1
	lhu	a5,-664(s0)
	.loc 1 1504 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L490
	.loc 1 1504 58 discriminator 2
	ld	a5,-32(s0)
	lhu	a4,1882(a5)
	.loc 1 1504 72 discriminator 2
	lhu	a5,-576(s0)
	.loc 1 1504 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L490
	.loc 1 1504 86 discriminator 3
	li	a5,-1
	.loc 1 1504 86 is_stmt 0
	j	.L493
.L490:
.LBE83:
	.loc 1 1506 9 is_stmt 1
	lw	a5,-296(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-328
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1506 8 discriminator 1
	beq	a5,zero,.L491
	.loc 1 1506 50 discriminator 1
	li	a5,-1
	.loc 1 1506 50 is_stmt 0
	j	.L493
.L491:
	.loc 1 1507 9 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1507 8 discriminator 1
	beq	a5,zero,.L492
	.loc 1 1507 47 discriminator 1
	li	a5,-1
	.loc 1 1507 47 is_stmt 0
	j	.L493
.L492:
	.loc 1 1508 12 is_stmt 1
	li	a5,0
.L493:
	.loc 1 1509 1
	mv	a0,a5
	ld	ra,696(sp)
	.cfi_restore 1
	ld	s0,688(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 704
	addi	sp,sp,704
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE57:
	.size	fs_rename, .-fs_rename
	.align	1
	.globl	fs_link
	.type	fs_link, @function
fs_link:
.LFB58:
	.loc 1 1513 1
	.cfi_startproc
	addi	sp,sp,-496
	.cfi_def_cfa_offset 496
	sd	ra,488(sp)
	sd	s0,480(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,496
	.cfi_def_cfa 8, 0
	sd	a0,-488(s0)
	sd	a1,-496(s0)
	.loc 1 1515 5
	addi	a5,s0,-152
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1516 5
	addi	a5,s0,-280
	ld	a2,-496(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1518 9
	addi	a5,s0,-280
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1518 8 discriminator 1
	beq	a5,zero,.L495
	.loc 1 1518 37 discriminator 2
	addi	a5,s0,-152
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1518 34 discriminator 1
	bne	a5,zero,.L496
.L495:
	.loc 1 1518 70 discriminator 3
	li	a5,-1
	.loc 1 1518 70 is_stmt 0
	j	.L507
.L496:
	.loc 1 1519 21 is_stmt 1
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1520 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L498
	.loc 1 1520 27 discriminator 1
	li	a5,-1
	.loc 1 1520 27 is_stmt 0
	j	.L507
.L498:
	.loc 1 1521 9 is_stmt 1
	addi	a5,s0,-280
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1521 8 discriminator 1
	beq	a5,zero,.L499
	.loc 1 1521 42 discriminator 1
	li	a5,-1
	.loc 1 1521 42 is_stmt 0
	j	.L507
.L499:
	.loc 1 1523 23 is_stmt 1
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1524 11
	lhu	a5,-368(s0)
	.loc 1 1524 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L500
	.loc 1 1524 35 discriminator 1
	li	a5,-1
	.loc 1 1524 35 is_stmt 0
	j	.L507
.L500:
.LBB84:
	.loc 1 1526 52 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1526 43
	j	.L501
.L502:
	.loc 1 1526 79 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-376(a5)
	.loc 1 1526 68 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L501:
	.loc 1 1526 57 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L502
.LBE84:
	.loc 1 1527 10
	addi	a3,s0,-392
	addi	a4,s0,-372
	addi	a5,s0,-280
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1527 8 discriminator 1
	bne	a5,zero,.L503
	.loc 1 1527 64 discriminator 1
	li	a5,-1
	.loc 1 1527 64 is_stmt 0
	j	.L507
.L503:
	.loc 1 1528 13 is_stmt 1
	lbu	a5,-392(s0)
	.loc 1 1528 8
	bne	a5,zero,.L504
	.loc 1 1528 33 discriminator 1
	li	a5,-1
	.loc 1 1528 33 is_stmt 0
	j	.L507
.L504:
	.loc 1 1530 24 is_stmt 1
	lw	a5,-372(s0)
	addi	a4,s0,-480
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1531 10
	addi	a5,s0,-480
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1531 8 discriminator 1
	bne	a5,zero,.L505
	.loc 1 1531 51 discriminator 1
	li	a5,-1
	.loc 1 1531 51 is_stmt 0
	j	.L507
.L505:
	.loc 1 1533 9 is_stmt 1
	lw	a5,-372(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-392
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1533 8 discriminator 1
	beq	a5,zero,.L506
	.loc 1 1533 53 discriminator 1
	li	a5,-1
	.loc 1 1533 53 is_stmt 0
	j	.L507
.L506:
	.loc 1 1535 7 is_stmt 1
	lhu	a5,-362(s0)
	.loc 1 1535 13
	addiw	a5,a5,1
	slli	a5,a5,48
	srli	a5,a5,48
	sh	a5,-362(s0)
	.loc 1 1536 16
	call	fs_now
	mv	a5,a0
	.loc 1 1536 14 discriminator 1
	sw	a5,-340(s0)
	.loc 1 1537 5
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1538 12
	li	a5,0
.L507:
	.loc 1 1539 1
	mv	a0,a5
	ld	ra,488(sp)
	.cfi_restore 1
	ld	s0,480(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 496
	addi	sp,sp,496
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE58:
	.size	fs_link, .-fs_link
	.align	1
	.globl	fs_stat
	.type	fs_stat, @function
fs_stat:
.LFB59:
	.loc 1 1542 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	sd	a1,-256(s0)
	.loc 1 1543 8
	ld	a5,-256(s0)
	bne	a5,zero,.L509
	.loc 1 1543 21 discriminator 1
	li	a5,-1
	.loc 1 1543 21 is_stmt 0
	j	.L512
.L509:
	.loc 1 1544 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1545 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1546 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L511
	.loc 1 1546 23 discriminator 1
	li	a5,-1
	.loc 1 1546 23 is_stmt 0
	j	.L512
.L511:
	.loc 1 1547 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1548 18
	lhu	a4,-240(s0)
	.loc 1 1548 14
	ld	a5,-256(s0)
	sh	a4,0(a5)
	.loc 1 1548 39
	lhu	a4,-234(s0)
	.loc 1 1548 35
	ld	a5,-256(s0)
	sh	a4,2(a5)
	.loc 1 1548 60
	lw	a4,-232(s0)
	.loc 1 1548 56
	ld	a5,-256(s0)
	sw	a4,4(a5)
	.loc 1 1548 76
	ld	a5,-256(s0)
	lw	a4,-20(s0)
	sw	a4,8(a5)
	.loc 1 1549 18
	lw	a4,-228(s0)
	.loc 1 1549 14
	ld	a5,-256(s0)
	sw	a4,12(a5)
	.loc 1 1549 37
	lhu	a4,-224(s0)
	.loc 1 1549 33
	ld	a5,-256(s0)
	sh	a4,16(a5)
	.loc 1 1549 55
	lhu	a4,-222(s0)
	.loc 1 1549 51
	ld	a5,-256(s0)
	sh	a4,18(a5)
	.loc 1 1550 19
	lw	a4,-220(s0)
	.loc 1 1550 15
	ld	a5,-256(s0)
	sw	a4,20(a5)
	.loc 1 1550 41
	lw	a4,-216(s0)
	.loc 1 1550 37
	ld	a5,-256(s0)
	sw	a4,24(a5)
	.loc 1 1550 63
	lw	a4,-212(s0)
	.loc 1 1550 59
	ld	a5,-256(s0)
	sw	a4,28(a5)
	.loc 1 1551 12
	li	a5,0
.L512:
	.loc 1 1552 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE59:
	.size	fs_stat, .-fs_stat
	.align	1
	.globl	fs_readlink
	.type	fs_readlink, @function
fs_readlink:
.LFB60:
	.loc 1 1555 1
	.cfi_startproc
	addi	sp,sp,-400
	.cfi_def_cfa_offset 400
	sd	ra,392(sp)
	sd	s0,384(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,400
	.cfi_def_cfa 8, 0
	sd	a0,-376(s0)
	sd	a1,-384(s0)
	mv	a5,a2
	sw	a5,-388(s0)
	.loc 1 1556 8
	ld	a5,-384(s0)
	beq	a5,zero,.L514
	.loc 1 1556 14 discriminator 2
	lw	a5,-388(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L515
.L514:
	.loc 1 1556 36 discriminator 3
	li	a5,-1
	.loc 1 1556 36 is_stmt 0
	j	.L526
.L515:
	.loc 1 1557 20 is_stmt 1
	addi	a5,s0,-160
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB85:
	.loc 1 1558 51
	sw	zero,-20(s0)
	.loc 1 1558 43
	j	.L517
.L518:
	.loc 1 1558 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1558 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L517:
	.loc 1 1558 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L518
.LBE85:
	.loc 1 1559 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1559 8 discriminator 1
	bne	a5,zero,.L519
	.loc 1 1559 61 discriminator 1
	li	a5,-1
	.loc 1 1559 61 is_stmt 0
	j	.L526
.L519:
	.loc 1 1560 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1560 57 discriminator 1
	lhu	a5,-272(s0)
	.loc 1 1560 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L520
	.loc 1 1560 80 discriminator 1
	li	a5,-1
	.loc 1 1560 80 is_stmt 0
	j	.L526
.L520:
	.loc 1 1561 21 is_stmt 1
	addi	a4,s0,-184
	addi	a5,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 1561 48 discriminator 1
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L521
	.loc 1 1561 63 discriminator 1
	li	a5,-1
	.loc 1 1561 63 is_stmt 0
	j	.L526
.L521:
	.loc 1 1562 23 is_stmt 1
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1563 11
	lhu	a5,-360(s0)
	.loc 1 1563 8
	sext.w	a4,a5
	li	a5,3
	beq	a4,a5,.L522
	.loc 1 1563 38 discriminator 1
	li	a5,-1
	.loc 1 1563 38 is_stmt 0
	j	.L526
.L522:
	.loc 1 1564 15 is_stmt 1
	lw	a5,-352(s0)
	.loc 1 1564 9
	sw	a5,-24(s0)
	.loc 1 1564 25
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-388(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	ble	a4,a5,.L523
	.loc 1 1564 39 discriminator 1
	lw	a5,-388(s0)
	sw	a5,-24(s0)
.L523:
	.loc 1 1564 51 discriminator 3
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L524
	.loc 1 1564 61 discriminator 4
	sw	zero,-24(s0)
.L524:
	.loc 1 1565 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	ble	a5,zero,.L525
	.loc 1 1565 16 discriminator 1
	lw	a4,-24(s0)
	addi	a5,s0,-360
	mv	a3,a4
	ld	a2,-384(s0)
	li	a1,0
	mv	a0,a5
	call	read_data
.L525:
	.loc 1 1566 12
	lw	a5,-24(s0)
.L526:
	.loc 1 1567 1
	mv	a0,a5
	ld	ra,392(sp)
	.cfi_restore 1
	ld	s0,384(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 400
	addi	sp,sp,400
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE60:
	.size	fs_readlink, .-fs_readlink
	.align	1
	.globl	fs_lstat
	.type	fs_lstat, @function
fs_lstat:
.LFB61:
	.loc 1 1570 1
	.cfi_startproc
	addi	sp,sp,-368
	.cfi_def_cfa_offset 368
	sd	ra,360(sp)
	sd	s0,352(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,368
	.cfi_def_cfa 8, 0
	sd	a0,-360(s0)
	sd	a1,-368(s0)
	.loc 1 1571 8
	ld	a5,-368(s0)
	bne	a5,zero,.L528
	.loc 1 1571 21 discriminator 1
	li	a5,-1
	.loc 1 1571 21 is_stmt 0
	j	.L535
.L528:
	.loc 1 1572 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-360(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB86:
	.loc 1 1573 51
	sw	zero,-20(s0)
	.loc 1 1573 43
	j	.L530
.L531:
	.loc 1 1573 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-160(a5)
	.loc 1 1573 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L530:
	.loc 1 1573 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L531
.LBE86:
	.loc 1 1574 10
	addi	a3,s0,-176
	addi	a4,s0,-156
	addi	a5,s0,-152
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1574 8 discriminator 1
	bne	a5,zero,.L532
	.loc 1 1574 61 discriminator 1
	li	a5,-1
	.loc 1 1574 61 is_stmt 0
	j	.L535
.L532:
	.loc 1 1575 24 is_stmt 1
	lw	a5,-156(s0)
	addi	a4,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1575 57 discriminator 1
	lhu	a5,-264(s0)
	.loc 1 1575 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L533
	.loc 1 1575 80 discriminator 1
	li	a5,-1
	.loc 1 1575 80 is_stmt 0
	j	.L535
.L533:
	.loc 1 1576 21 is_stmt 1
	addi	a4,s0,-176
	addi	a5,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1576 48 discriminator 1
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L534
	.loc 1 1576 63 discriminator 1
	li	a5,-1
	.loc 1 1576 63 is_stmt 0
	j	.L535
.L534:
	.loc 1 1577 23 is_stmt 1
	addi	a4,s0,-352
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1578 18
	lhu	a4,-352(s0)
	.loc 1 1578 14
	ld	a5,-368(s0)
	sh	a4,0(a5)
	.loc 1 1578 39
	lhu	a4,-346(s0)
	.loc 1 1578 35
	ld	a5,-368(s0)
	sh	a4,2(a5)
	.loc 1 1578 60
	lw	a4,-344(s0)
	.loc 1 1578 56
	ld	a5,-368(s0)
	sw	a4,4(a5)
	.loc 1 1578 76
	ld	a5,-368(s0)
	lw	a4,-24(s0)
	sw	a4,8(a5)
	.loc 1 1579 18
	lw	a4,-340(s0)
	.loc 1 1579 14
	ld	a5,-368(s0)
	sw	a4,12(a5)
	.loc 1 1579 37
	lhu	a4,-336(s0)
	.loc 1 1579 33
	ld	a5,-368(s0)
	sh	a4,16(a5)
	.loc 1 1579 55
	lhu	a4,-334(s0)
	.loc 1 1579 51
	ld	a5,-368(s0)
	sh	a4,18(a5)
	.loc 1 1580 19
	lw	a4,-332(s0)
	.loc 1 1580 15
	ld	a5,-368(s0)
	sw	a4,20(a5)
	.loc 1 1580 41
	lw	a4,-328(s0)
	.loc 1 1580 37
	ld	a5,-368(s0)
	sw	a4,24(a5)
	.loc 1 1580 63
	lw	a4,-324(s0)
	.loc 1 1580 59
	ld	a5,-368(s0)
	sw	a4,28(a5)
	.loc 1 1581 12
	li	a5,0
.L535:
	.loc 1 1582 1
	mv	a0,a5
	ld	ra,360(sp)
	.cfi_restore 1
	ld	s0,352(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 368
	addi	sp,sp,368
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE61:
	.size	fs_lstat, .-fs_lstat
	.align	1
	.globl	fs_chmod
	.type	fs_chmod, @function
fs_chmod:
.LFB62:
	.loc 1 1585 1
	.cfi_startproc
	addi	sp,sp,-272
	.cfi_def_cfa_offset 272
	sd	ra,264(sp)
	sd	s0,256(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,272
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	mv	a5,a1
	sw	a5,-268(s0)
	.loc 1 1586 20
	addi	a5,s0,-160
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1587 21
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1588 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L537
	.loc 1 1588 23 discriminator 1
	li	a5,-1
	.loc 1 1588 23 is_stmt 0
	j	.L540
.L537:
	.loc 1 1589 23 is_stmt 1
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1591 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1591 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1592 12
	ld	a5,-32(s0)
	lhu	a5,1882(a5)
	.loc 1 1592 8
	beq	a5,zero,.L539
	.loc 1 1592 27 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1882(a5)
	.loc 1 1592 38 discriminator 1
	lhu	a5,-232(s0)
	.loc 1 1592 9 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L539
	.loc 1 1592 52 discriminator 2
	li	a5,-1
	.loc 1 1592 52 is_stmt 0
	j	.L540
.L539:
	.loc 1 1593 20 is_stmt 1
	lw	a5,-268(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1593 13
	sw	a5,-236(s0)
	.loc 1 1593 40
	call	fs_now
	mv	a5,a0
	.loc 1 1593 38 discriminator 1
	sw	a5,-220(s0)
	.loc 1 1594 5
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1595 12
	li	a5,0
.L540:
	.loc 1 1596 1
	mv	a0,a5
	ld	ra,264(sp)
	.cfi_restore 1
	ld	s0,256(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 272
	addi	sp,sp,272
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE62:
	.size	fs_chmod, .-fs_chmod
	.align	1
	.globl	fs_chown
	.type	fs_chown, @function
fs_chown:
.LFB63:
	.loc 1 1599 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	mv	a5,a1
	mv	a4,a2
	sh	a5,-250(s0)
	mv	a5,a4
	sh	a5,-252(s0)
	.loc 1 1600 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1601 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1602 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L542
	.loc 1 1602 23 discriminator 1
	li	a5,-1
	.loc 1 1602 23 is_stmt 0
	j	.L545
.L542:
	.loc 1 1603 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1605 14
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1605 27
	lhu	a5,1882(a5)
	.loc 1 1605 8
	beq	a5,zero,.L544
	.loc 1 1605 46 discriminator 1
	li	a5,-1
	.loc 1 1605 46 is_stmt 0
	j	.L545
.L544:
	.loc 1 1606 12 is_stmt 1
	lhu	a5,-250(s0)
	sh	a5,-224(s0)
	.loc 1 1606 26
	lhu	a5,-252(s0)
	sh	a5,-222(s0)
	.loc 1 1606 44
	call	fs_now
	mv	a5,a0
	.loc 1 1606 42 discriminator 1
	sw	a5,-212(s0)
	.loc 1 1607 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1608 12
	li	a5,0
.L545:
	.loc 1 1609 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE63:
	.size	fs_chown, .-fs_chown
	.align	1
	.globl	fs_utimes
	.type	fs_utimes, @function
fs_utimes:
.LFB64:
	.loc 1 1612 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-252(s0)
	mv	a5,a4
	sw	a5,-256(s0)
	.loc 1 1613 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1614 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1615 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L547
	.loc 1 1615 23 discriminator 1
	li	a5,-1
	.loc 1 1615 23 is_stmt 0
	j	.L553
.L547:
	.loc 1 1616 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1617 20
	call	fs_now
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1618 45
	lw	a5,-252(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L549
	.loc 1 1618 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L550
.L549:
	.loc 1 1618 45 discriminator 2
	lw	a5,-252(s0)
.L550:
	.loc 1 1618 14 is_stmt 1 discriminator 4
	sw	a5,-220(s0)
	.loc 1 1619 45
	lw	a5,-256(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L551
	.loc 1 1619 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L552
.L551:
	.loc 1 1619 45 discriminator 2
	lw	a5,-256(s0)
.L552:
	.loc 1 1619 14 is_stmt 1 discriminator 4
	sw	a5,-216(s0)
	.loc 1 1620 14
	lw	a5,-24(s0)
	sw	a5,-212(s0)
	.loc 1 1621 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1622 12
	li	a5,0
.L553:
	.loc 1 1623 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE64:
	.size	fs_utimes, .-fs_utimes
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB65:
	.loc 1 1624 31
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
	.loc 1 1626 12
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 1627 1
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
.LFE65:
	.size	fs_open, .-fs_open
	.section	.rodata
	.align	3
.LC18:
	.string	"/dev/tty"
	.text
	.align	1
	.globl	fs_open2
	.type	fs_open2, @function
fs_open2:
.LFB66:
	.loc 1 1630 53
	.cfi_startproc
	addi	sp,sp,-464
	.cfi_def_cfa_offset 464
	sd	ra,456(sp)
	sd	s0,448(sp)
	sd	s1,440(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,464
	.cfi_def_cfa 8, 0
	sd	a0,-456(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-460(s0)
	mv	a5,a4
	sw	a5,-464(s0)
	.loc 1 1631 32
	call	get_current_file_table
	sd	a0,-72(s0)
	.loc 1 1633 8
	ld	a5,-456(s0)
	beq	a5,zero,.L557
	.loc 1 1633 22 discriminator 1
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1633 15 discriminator 1
	beq	a5,zero,.L557
	.loc 1 1633 42 discriminator 2
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1633 34 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L558
	.loc 1 1633 58 discriminator 3
	ld	a5,-456(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1633 51 discriminator 3
	bne	a5,zero,.L558
.L557:
.LBB87:
	.loc 1 1634 31
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1634 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1635 53
	ld	a5,-80(s0)
	addi	a4,a5,1752
	.loc 1 1635 9
	addi	a5,s0,-216
	mv	a2,a4
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBE87:
	.loc 1 1633 70
	j	.L559
.L558:
	.loc 1 1637 9
	addi	a5,s0,-216
	ld	a2,-456(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.L559:
	.loc 1 1641 9
	addi	a5,s0,-216
	lla	a1,.LC18
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1641 8 discriminator 1
	bne	a5,zero,.L560
.LBB88:
	.loc 1 1642 18
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1642 9
	j	.L561
.L564:
	.loc 1 1643 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1643 16
	bne	a5,zero,.L562
	.loc 1 1644 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1644 33
	call	new_file_table
	mv	a5,a0
	.loc 1 1644 31 discriminator 1
	sd	a5,0(s1)
	.loc 1 1645 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1645 37
	li	a4,5
	sw	a4,0(a5)
	.loc 1 1646 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1646 37
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1647 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1647 37
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1648 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1648 36
	sw	zero,96(a5)
	.loc 1 1649 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1649 42
	sw	zero,116(a5)
	.loc 1 1650 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1650 43
	sw	zero,120(a5)
	.loc 1 1651 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1651 39
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1652 24
	lw	a5,-36(s0)
	j	.L594
.L562:
	.loc 1 1642 46 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L561:
	.loc 1 1642 27 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L564
.LBE88:
	.loc 1 1655 16
	li	a5,-1
	j	.L594
.L560:
	.loc 1 1658 21
	addi	a5,s0,-216
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-40(s0)
	.loc 1 1660 9
	sw	zero,-44(s0)
	.loc 1 1662 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L565
	.loc 1 1664 19
	lw	a5,-460(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1664 12
	beq	a5,zero,.L566
.LBB89:
.LBB90:
	.loc 1 1668 22
	sw	zero,-48(s0)
	.loc 1 1668 13
	j	.L567
.L568:
	.loc 1 1668 49 discriminator 3
	lw	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-296(a5)
	.loc 1 1668 38 discriminator 3
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sw	a5,-48(s0)
.L567:
	.loc 1 1668 27 discriminator 1
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L568
.LBE90:
	.loc 1 1669 18
	addi	a3,s0,-328
	addi	a4,s0,-308
	addi	a5,s0,-216
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1669 16 discriminator 1
	bne	a5,zero,.L569
	.loc 1 1670 24
	li	a5,-1
	j	.L594
.L569:
	.loc 1 1672 33
	call	alloc_inode_T_FILE
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1673 16
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L571
	.loc 1 1673 39 discriminator 1
	li	a5,-1
	.loc 1 1673 39 is_stmt 0
	j	.L594
.L571:
	.loc 1 1674 17 is_stmt 1
	lw	a5,-308(s0)
	lw	a3,-84(s0)
	addi	a4,s0,-328
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1674 16 discriminator 1
	beq	a5,zero,.L572
	.loc 1 1674 65 discriminator 1
	li	a5,-1
	.loc 1 1674 65 is_stmt 0
	j	.L594
.L572:
	.loc 1 1675 18 is_stmt 1
	lw	a5,-84(s0)
	sw	a5,-40(s0)
	.loc 1 1676 13
	addi	a4,s0,-304
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1680 38
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1680 28
	lhu	a5,1880(a5)
	sh	a5,-86(s0)
.LBB91:
	.loc 1 1682 59
	sw	zero,-52(s0)
	.loc 1 1682 51
	j	.L573
.L574:
	.loc 1 1682 91 discriminator 3
	lw	a5,-52(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-320(a5)
	.loc 1 1682 78 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L573:
	.loc 1 1682 66 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L574
.LBE91:
	.loc 1 1683 33
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1683 22
	lhu	a5,1884(a5)
	sh	a5,-54(s0)
	.loc 1 1684 17
	addi	a3,s0,-352
	addi	a4,s0,-332
	addi	a5,s0,-216
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1684 16 discriminator 1
	beq	a5,zero,.L575
.LBB92:
	.loc 1 1685 40
	lw	a5,-332(s0)
	addi	a4,s0,-440
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1686 28
	lw	a5,-428(s0)
	.loc 1 1686 34
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1686 20
	beq	a5,zero,.L575
	.loc 1 1686 49 discriminator 1
	lhu	a5,-422(s0)
	sh	a5,-54(s0)
.L575:
.LBE92:
	.loc 1 1688 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1688 40
	lhu	a5,1882(a5)
	.loc 1 1688 20
	sh	a5,-288(s0)
	.loc 1 1689 20
	lhu	a5,-54(s0)
	sh	a5,-286(s0)
	.loc 1 1690 30
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 1 1690 54
	beq	a5,zero,.L577
	.loc 1 1690 54 is_stmt 0 discriminator 1
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L578
.L577:
	.loc 1 1690 54 discriminator 2
	li	a5,420
.L578:
	.loc 1 1690 64 is_stmt 1 discriminator 4
	lhu	a4,-86(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1690 62 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1690 21 discriminator 4
	sw	a5,-292(s0)
	.loc 1 1691 46
	call	fs_now
	mv	a5,a0
	.loc 1 1691 44 discriminator 1
	sw	a5,-276(s0)
	.loc 1 1691 37 discriminator 1
	lw	a5,-276(s0)
	.loc 1 1691 33 discriminator 1
	sw	a5,-280(s0)
	.loc 1 1691 26 discriminator 1
	lw	a5,-280(s0)
	.loc 1 1691 22 discriminator 1
	sw	a5,-284(s0)
	.loc 1 1692 13
	addi	a4,s0,-304
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1693 25
	li	a5,1
	sw	a5,-44(s0)
.LBE89:
	j	.L579
.L566:
	.loc 1 1695 20
	li	a5,-1
	j	.L594
.L565:
	.loc 1 1698 9
	addi	a4,s0,-304
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L579:
	.loc 1 1701 11
	lhu	a5,-304(s0)
	.loc 1 1701 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L580
	.loc 1 1701 32 discriminator 1
	lhu	a5,-304(s0)
	.loc 1 1701 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L580
	.loc 1 1701 55 discriminator 2
	li	a5,-1
	.loc 1 1701 55 is_stmt 0
	j	.L594
.L580:
	.loc 1 1704 11 is_stmt 1
	lhu	a5,-304(s0)
	.loc 1 1704 8
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L581
.LBB93:
	.loc 1 1705 13
	sw	zero,-60(s0)
	.loc 1 1706 12
	lw	a5,-460(s0)
	sext.w	a5,a5
	bne	a5,zero,.L582
	.loc 1 1706 37 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,4
	sw	a5,-60(s0)
.L582:
	.loc 1 1707 19
	lw	a5,-460(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1707 12
	beq	a5,zero,.L583
	.loc 1 1707 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,2
	sw	a5,-60(s0)
.L583:
	.loc 1 1708 19
	lw	a5,-460(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 1708 12
	beq	a5,zero,.L584
	.loc 1 1708 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,6
	sw	a5,-60(s0)
.L584:
	.loc 1 1711 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L585
	.loc 1 1712 18
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L586
	.loc 1 1712 18 is_stmt 0 discriminator 1
	lw	a5,-60(s0)
	j	.L587
.L586:
	.loc 1 1712 18 discriminator 2
	li	a5,4
.L587:
	.loc 1 1712 18 discriminator 4
	addi	a4,s0,-304
	mv	a1,a5
	mv	a0,a4
	call	check_perm
	mv	a5,a0
	.loc 1 1712 16 is_stmt 1 discriminator 1
	bne	a5,zero,.L585
	.loc 1 1712 64 discriminator 5
	li	a5,-1
	.loc 1 1712 64 is_stmt 0
	j	.L594
.L581:
.LBE93:
	.loc 1 1714 18 is_stmt 1
	lhu	a5,-304(s0)
	.loc 1 1714 15
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L585
	.loc 1 1715 14
	addi	a5,s0,-304
	li	a1,5
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1715 12 discriminator 1
	bne	a5,zero,.L585
	.loc 1 1715 53 discriminator 1
	li	a5,-1
	.loc 1 1715 53 is_stmt 0
	j	.L594
.L585:
.LBB94:
	.loc 1 1718 14 is_stmt 1
	li	a5,3
	sw	a5,-64(s0)
	.loc 1 1718 5
	j	.L588
.L593:
	.loc 1 1719 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1719 12
	bne	a5,zero,.L589
	.loc 1 1720 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1720 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1720 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1722 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1722 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 1723 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1723 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1724 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1724 34
	lw	a4,-40(s0)
	sw	a4,4(a5)
	.loc 1 1725 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1725 34
	ld	t5,-304(s0)
	ld	t4,-296(s0)
	ld	t3,-288(s0)
	ld	t1,-280(s0)
	ld	a7,-272(s0)
	ld	a6,-264(s0)
	ld	a0,-256(s0)
	ld	a1,-248(s0)
	ld	a2,-240(s0)
	ld	a3,-232(s0)
	ld	a4,-224(s0)
	sd	t5,8(a5)
	sd	t4,16(a5)
	sd	t3,24(a5)
	sd	t1,32(a5)
	sd	a7,40(a5)
	sd	a6,48(a5)
	sd	a0,56(a5)
	sd	a1,64(a5)
	sd	a2,72(a5)
	sd	a3,80(a5)
	sd	a4,88(a5)
	.loc 1 1726 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1726 34
	sw	zero,96(a5)
	.loc 1 1727 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1727 40
	sw	zero,116(a5)
	.loc 1 1728 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1728 41
	sw	zero,120(a5)
	.loc 1 1729 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1729 35
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1732 24
	lw	a5,-460(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1732 16
	beq	a5,zero,.L590
	.loc 1 1732 48 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1732 56 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1732 35 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L590
	.loc 1 1733 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1733 41
	sw	zero,16(a5)
	.loc 1 1734 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	s1,0(a5)
	.loc 1 1734 44
	call	fs_now
	mv	a5,a0
	.loc 1 1734 42 discriminator 1
	sw	a5,32(s1)
	.loc 1 1735 46
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1735 35
	addi	a4,a5,8
	.loc 1 1735 17
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1736 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1736 36
	sw	zero,96(a5)
.L590:
	.loc 1 1739 24
	lw	a5,-460(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1739 16
	beq	a5,zero,.L591
	.loc 1 1739 49 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1739 57 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1739 36 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L591
	.loc 1 1740 48
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 1740 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a3,-72(s0)
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 1 1740 56
	lw	a4,16(a4)
	.loc 1 1740 36
	sw	a4,96(a5)
.L591:
	.loc 1 1743 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	beq	a5,zero,.L592
	.loc 1 1744 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1744 36
	ld	t5,-304(s0)
	ld	t4,-296(s0)
	ld	t3,-288(s0)
	ld	t1,-280(s0)
	ld	a7,-272(s0)
	ld	a6,-264(s0)
	ld	a0,-256(s0)
	ld	a1,-248(s0)
	ld	a2,-240(s0)
	ld	a3,-232(s0)
	ld	a4,-224(s0)
	sd	t5,8(a5)
	sd	t4,16(a5)
	sd	t3,24(a5)
	sd	t1,32(a5)
	sd	a7,40(a5)
	sd	a6,48(a5)
	sd	a0,56(a5)
	sd	a1,64(a5)
	sd	a2,72(a5)
	sd	a3,80(a5)
	sd	a4,88(a5)
.L592:
	.loc 1 1746 20
	lw	a5,-64(s0)
	j	.L594
.L589:
	.loc 1 1718 42 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L588:
	.loc 1 1718 23 discriminator 1
	lw	a5,-64(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L593
.LBE94:
	.loc 1 1749 12
	li	a5,-1
.L594:
	.loc 1 1750 1
	mv	a0,a5
	ld	ra,456(sp)
	.cfi_restore 1
	ld	s0,448(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 464
	ld	s1,440(sp)
	.cfi_restore 9
	addi	sp,sp,464
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE66:
	.size	fs_open2, .-fs_open2
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB67:
	.loc 1 1754 50
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
	.loc 1 1755 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1757 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1757 7
	bne	a5,zero,.L596
	.loc 1 1758 16
	li	a5,-1
	j	.L597
.L596:
	.loc 1 1761 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1762 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L598
	.loc 1 1762 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L599
.L598:
	.loc 1 1763 16
	li	a5,-1
	j	.L597
.L599:
	.loc 1 1765 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1765 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1766 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 1766 41
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1766 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 1767 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L600
	.loc 1 1767 32 discriminator 1
	li	a5,0
	.loc 1 1767 32 is_stmt 0
	j	.L597
.L600:
	.loc 1 1769 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L601
	mv	a5,a4
.L601:
	.loc 1 1769 14
	sw	a5,-48(s0)
	.loc 1 1770 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,96(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 1771 6
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1771 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 1773 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1773 18 discriminator 1
	ld	a5,-40(s0)
	sw	a4,28(a5)
	.loc 1 1774 5
	ld	a5,-40(s0)
	lw	a4,4(a5)
	.loc 1 1774 26
	ld	a5,-40(s0)
	addi	a5,a5,8
	.loc 1 1774 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1775 12
	lw	a5,-48(s0)
.L597:
	.loc 1 1776 1
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
.LFE67:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_write
	.type	fs_write, @function
fs_write:
.LFB68:
	.loc 1 1780 57
	.cfi_startproc
	addi	sp,sp,-624
	.cfi_def_cfa_offset 624
	sd	ra,616(sp)
	sd	s0,608(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,624
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-608(s0)
	sd	a2,-616(s0)
	sw	a5,-596(s0)
	.loc 1 1781 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1783 8
	lw	a5,-596(s0)
	sext.w	a5,a5
	blt	a5,zero,.L603
	.loc 1 1783 16 discriminator 2
	lw	a5,-596(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L604
.L603:
	.loc 1 1783 48 discriminator 3
	li	a5,-1
	.loc 1 1783 48 is_stmt 0
	j	.L605
.L604:
	.loc 1 1784 19 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1784 8
	bne	a5,zero,.L606
	.loc 1 1784 40 discriminator 1
	li	a5,-1
	.loc 1 1784 40 is_stmt 0
	j	.L605
.L606:
	.loc 1 1786 32 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1786 18
	ld	a5,0(a5)
	sd	a5,-56(s0)
	.loc 1 1787 10
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 1787 8
	li	a5,3
	beq	a4,a5,.L607
	.loc 1 1787 36 discriminator 1
	li	a5,-1
	.loc 1 1787 36 is_stmt 0
	j	.L605
.L607:
	.loc 1 1788 10 is_stmt 1
	ld	a5,-56(s0)
	addi	a5,a5,8
	li	a1,2
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1788 8 discriminator 1
	bne	a5,zero,.L608
	.loc 1 1788 47 discriminator 1
	li	a5,-1
	.loc 1 1788 47 is_stmt 0
	j	.L605
.L608:
	.loc 1 1791 14 is_stmt 1
	ld	a5,-616(s0)
	sw	a5,-60(s0)
	.loc 1 1793 20
	ld	a5,-608(s0)
	sd	a5,-24(s0)
	.loc 1 1794 14
	lw	a5,-60(s0)
	sw	a5,-28(s0)
	.loc 1 1796 23
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1796 32
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1796 58
	beq	a5,zero,.L609
	.loc 1 1796 58 is_stmt 0 discriminator 1
	ld	a5,-56(s0)
	lw	a5,16(a5)
	j	.L610
.L609:
	.loc 1 1796 58 discriminator 2
	ld	a5,-56(s0)
	lw	a5,96(a5)
.L610:
	.loc 1 1796 14 is_stmt 1 discriminator 4
	sw	a5,-32(s0)
	.loc 1 1797 10
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1797 19
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1797 8
	beq	a5,zero,.L611
	.loc 1 1798 16
	ld	a5,-56(s0)
	lw	a4,-32(s0)
	sw	a4,96(a5)
.L611:
	.loc 1 1800 14
	sw	zero,-36(s0)
	.loc 1 1802 11
	j	.L612
.L616:
.LBB95:
	.loc 1 1803 18
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sw	a5,-64(s0)
	.loc 1 1804 18
	lw	a5,-32(s0)
	andi	a5,a5,511
	sw	a5,-68(s0)
	.loc 1 1805 18
	li	a5,512
	lw	a4,-68(s0)
	subw	a5,a5,a4
	sw	a5,-40(s0)
	.loc 1 1806 12
	lw	a5,-40(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L613
	.loc 1 1806 39 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-40(s0)
.L613:
	.loc 1 1808 29
	ld	a5,-56(s0)
	lw	a4,4(a5)
	ld	a5,-56(s0)
	addi	a5,a5,8
	lw	a3,-64(s0)
	mv	a2,a3
	mv	a1,a5
	mv	a0,a4
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-72(s0)
	.loc 1 1809 12
	lw	a5,-72(s0)
	sext.w	a5,a5
	beq	a5,zero,.L618
	.loc 1 1813 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1814 9
	lwu	a5,-68(s0)
	addi	a4,s0,-592
	add	a5,a4,a5
	lw	a4,-40(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1815 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1817 17
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 1818 17
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 1819 17
	lwu	a5,-40(s0)
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 1820 17
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-36(s0)
.L612:
.LBE95:
	.loc 1 1802 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L616
	j	.L615
.L618:
.LBB96:
	.loc 1 1809 28
	nop
.L615:
.LBE96:
	.loc 1 1823 6
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 1 1823 12
	lw	a4,-36(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,96(a5)
	.loc 1 1825 14
	ld	a5,-56(s0)
	lw	a5,96(a5)
	sw	a5,-76(s0)
	.loc 1 1826 25
	ld	a5,-56(s0)
	lw	a5,16(a5)
	.loc 1 1826 8
	lw	a4,-76(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L617
	.loc 1 1827 21
	ld	a5,-56(s0)
	lw	a4,-76(s0)
	sw	a4,16(a5)
.L617:
	.loc 1 1829 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1829 18 discriminator 1
	ld	a5,-56(s0)
	sw	a4,32(a5)
	.loc 1 1830 5
	ld	a5,-56(s0)
	lw	a4,4(a5)
	.loc 1 1830 26
	ld	a5,-56(s0)
	addi	a5,a5,8
	.loc 1 1830 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1831 12
	lw	a5,-36(s0)
.L605:
	.loc 1 1832 1
	mv	a0,a5
	ld	ra,616(sp)
	.cfi_restore 1
	ld	s0,608(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 624
	addi	sp,sp,624
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE68:
	.size	fs_write, .-fs_write
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB69:
	.loc 1 1834 25
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
	.loc 1 1835 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1837 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1837 7
	bne	a5,zero,.L620
	.loc 1 1838 16
	li	a5,-1
	j	.L621
.L620:
	.loc 1 1841 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1842 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L622
	.loc 1 1842 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L622
	.loc 1 1842 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1842 61 discriminator 2
	lw	a5,100(a5)
	.loc 1 1842 42 discriminator 2
	bne	a5,zero,.L623
.L622:
	.loc 1 1843 16
	li	a5,-1
	j	.L621
.L623:
	.loc 1 1845 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1845 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1846 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L621:
	.loc 1 1847 1
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
.LFE69:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB70:
	.loc 1 1852 36
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
	.loc 1 1853 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 1854 8
	ld	a5,-56(s0)
	blt	a5,zero,.L625
	.loc 1 1854 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,15
	ble	a4,a5,.L626
.L625:
	.loc 1 1854 48 discriminator 3
	li	a5,-1
	.loc 1 1854 48 is_stmt 0
	j	.L627
.L626:
	.loc 1 1855 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1855 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1856 8
	ld	a5,-40(s0)
	bne	a5,zero,.L628
	.loc 1 1856 20 discriminator 1
	li	a5,-1
	.loc 1 1856 20 is_stmt 0
	j	.L627
.L628:
	.loc 1 1859 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1859 12
	sd	zero,0(a5)
	.loc 1 1862 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L629
	.loc 1 1862 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L629:
	.loc 1 1865 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1865 8
	ble	a5,zero,.L630
	.loc 1 1865 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1865 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,100(a5)
.L630:
	.loc 1 1868 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1868 8
	ble	a5,zero,.L631
	.loc 1 1868 29 discriminator 1
	li	a5,0
	.loc 1 1868 29 is_stmt 0
	j	.L627
.L631:
	.loc 1 1871 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,104(a5)
	sd	a5,-48(s0)
	.loc 1 1872 8
	ld	a5,-48(s0)
	beq	a5,zero,.L632
	.loc 1 1873 14
	ld	a5,-40(s0)
	lw	a5,116(a5)
	.loc 1 1873 12
	beq	a5,zero,.L633
	.loc 1 1873 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1873 27 discriminator 1
	ble	a5,zero,.L633
	.loc 1 1873 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1873 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1873 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 1873 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1873 51 discriminator 2
	bne	a5,zero,.L633
	.loc 1 1873 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L633:
	.loc 1 1874 14
	ld	a5,-40(s0)
	lw	a5,120(a5)
	.loc 1 1874 12
	beq	a5,zero,.L634
	.loc 1 1874 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1874 27 discriminator 1
	ble	a5,zero,.L634
	.loc 1 1874 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1874 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1874 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 1874 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1874 51 discriminator 2
	bne	a5,zero,.L634
	.loc 1 1874 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L634:
	.loc 1 1875 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1875 12
	ble	a5,zero,.L635
	.loc 1 1875 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1875 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L635:
	.loc 1 1876 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1876 12
	bne	a5,zero,.L632
.LBB97:
	.loc 1 1878 22
	sw	zero,-20(s0)
	.loc 1 1878 13
	j	.L636
.L638:
	.loc 1 1879 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1879 20
	beq	a5,zero,.L637
	.loc 1 1879 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1879 64 discriminator 1
	sd	zero,104(a5)
.L637:
	.loc 1 1878 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L636:
	.loc 1 1878 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 1878 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L638
.LBE97:
	.loc 1 1881 13
	ld	a0,-48(s0)
	call	free_pipe
.L632:
	.loc 1 1886 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 1887 12
	li	a5,0
.L627:
	.loc 1 1888 1
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
.LFE70:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB71:
	.loc 1 1891 1
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
.LBB98:
	.loc 1 1892 13
	sw	zero,-20(s0)
	.loc 1 1892 5
	j	.L640
.L641:
	.loc 1 1893 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 1892 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L640:
	.loc 1 1892 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L641
.LBE98:
	.loc 1 1895 1
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
.LFE71:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB72:
	.loc 1 1898 1
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
.LBB99:
	.loc 1 1900 13
	sw	zero,-20(s0)
	.loc 1 1900 5
	j	.L643
.L645:
	.loc 1 1901 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1901 11
	beq	a5,zero,.L644
	.loc 1 1902 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 1902 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 1902 29
	ld	a4,0(a4)
	.loc 1 1902 23
	sd	a4,0(a5)
	.loc 1 1903 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1903 22
	lw	a4,100(a5)
	.loc 1 1903 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	.loc 1 1906 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1906 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L644:
	.loc 1 1900 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L643:
	.loc 1 1900 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L645
.LBE99:
	.loc 1 1932 1
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
.LFE72:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB73:
	.loc 1 1935 1
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
	.loc 1 1952 1
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
.LFE73:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB74:
	.loc 1 1954 36
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
	.loc 1 1955 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1956 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L656
	.loc 1 1956 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L656
	.loc 1 1957 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L657
	.loc 1 1957 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L657
	.loc 1 1958 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1958 8
	beq	a5,zero,.L658
	.loc 1 1959 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L659
	.loc 1 1961 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1961 8
	beq	a5,zero,.L655
	.loc 1 1961 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L655:
	.loc 1 1962 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 1962 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 1962 19
	ld	a4,0(a4)
	.loc 1 1962 15
	sd	a4,0(a5)
	.loc 1 1963 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1963 14
	lw	a4,100(a5)
	.loc 1 1963 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	j	.L647
.L656:
	.loc 1 1956 47
	nop
	j	.L647
.L657:
	.loc 1 1957 47
	nop
	j	.L647
.L658:
	.loc 1 1958 28
	nop
	j	.L647
.L659:
	.loc 1 1959 25
	nop
.L647:
	.loc 1 1965 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE74:
	.size	fs_dup2, .-fs_dup2
	.section	.rodata
	.align	3
.LC5:
	.dword	4835703278458516699
	.text
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.file 5 "common.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x38d2
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x2c
	.4byte	.LASF310
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x11
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x11
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x12
	.4byte	.LASF5
	.byte	0x2
	.byte	0x28
	.byte	0x18
	.4byte	0x48
	.uleb128 0x2d
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1f
	.4byte	0x48
	.uleb128 0x11
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x12
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2e
	.byte	0x18
	.4byte	0x71
	.uleb128 0x1f
	.4byte	0x5b
	.uleb128 0x20
	.4byte	0x5b
	.uleb128 0x11
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0x12
	.4byte	.LASF8
	.byte	0x2
	.byte	0x31
	.byte	0x19
	.4byte	0x84
	.uleb128 0x11
	.byte	0x2
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0x12
	.4byte	.LASF10
	.byte	0x2
	.byte	0x34
	.byte	0x19
	.4byte	0x97
	.uleb128 0x11
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0x12
	.4byte	.LASF12
	.byte	0x2
	.byte	0x37
	.byte	0x19
	.4byte	0xaa
	.uleb128 0x11
	.byte	0x8
	.byte	0x7
	.4byte	.LASF13
	.uleb128 0x12
	.4byte	.LASF14
	.byte	0x2
	.byte	0x56
	.byte	0x1a
	.4byte	0xaa
	.uleb128 0x12
	.4byte	.LASF15
	.byte	0x3
	.byte	0xd6
	.byte	0x17
	.4byte	0xaa
	.uleb128 0x11
	.byte	0x8
	.byte	0x5
	.4byte	.LASF16
	.uleb128 0x11
	.byte	0x10
	.byte	0x4
	.4byte	.LASF17
	.uleb128 0x16
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x25
	.4byte	0x13f
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x26
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF19
	.byte	0x4
	.byte	0x27
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF20
	.byte	0x4
	.byte	0x28
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF21
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF22
	.byte	0x4
	.byte	0x2a
	.byte	0xe
	.4byte	0x8b
	.byte	0x10
	.uleb128 0x5
	.4byte	.LASF23
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF24
	.byte	0x4
	.byte	0x2c
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.byte	0
	.uleb128 0x16
	.4byte	.LASF26
	.byte	0x58
	.byte	0x4
	.byte	0x30
	.4byte	0x1e8
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x4
	.byte	0x31
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF28
	.byte	0x4
	.byte	0x32
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF29
	.byte	0x4
	.byte	0x33
	.byte	0xe
	.4byte	0x78
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x4
	.byte	0x34
	.byte	0xe
	.4byte	0x78
	.byte	0x6
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x35
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF31
	.byte	0x4
	.byte	0x36
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x7
	.string	"uid"
	.byte	0x4
	.byte	0x37
	.byte	0xe
	.4byte	0x78
	.byte	0x10
	.uleb128 0x7
	.string	"gid"
	.byte	0x4
	.byte	0x38
	.byte	0xe
	.4byte	0x78
	.byte	0x12
	.uleb128 0x5
	.4byte	.LASF32
	.byte	0x4
	.byte	0x39
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF33
	.byte	0x4
	.byte	0x3a
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.uleb128 0x5
	.4byte	.LASF34
	.byte	0x4
	.byte	0x3b
	.byte	0xe
	.4byte	0x8b
	.byte	0x1c
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x4
	.byte	0x3d
	.byte	0xe
	.4byte	0x1ed
	.byte	0x20
	.byte	0
	.uleb128 0x20
	.4byte	0x13f
	.uleb128 0xc
	.4byte	0x8b
	.4byte	0x1fd
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x16
	.4byte	.LASF36
	.byte	0x10
	.byte	0x4
	.byte	0x41
	.4byte	0x224
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x4
	.byte	0x42
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF38
	.byte	0x4
	.byte	0x43
	.byte	0xe
	.4byte	0x224
	.byte	0x2
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x234
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x11
	.byte	0x1
	.byte	0x8
	.4byte	.LASF39
	.uleb128 0x20
	.4byte	0x234
	.uleb128 0x16
	.4byte	.LASF40
	.byte	0x20
	.byte	0x4
	.byte	0x47
	.4byte	0x2cf
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x4
	.byte	0x48
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x4
	.byte	0x49
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x4a
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x4
	.byte	0x4b
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF31
	.byte	0x4
	.byte	0x4c
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x7
	.string	"uid"
	.byte	0x4
	.byte	0x4d
	.byte	0xe
	.4byte	0x78
	.byte	0x10
	.uleb128 0x7
	.string	"gid"
	.byte	0x4
	.byte	0x4e
	.byte	0xe
	.4byte	0x78
	.byte	0x12
	.uleb128 0x5
	.4byte	.LASF32
	.byte	0x4
	.byte	0x4f
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF33
	.byte	0x4
	.byte	0x50
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.uleb128 0x5
	.4byte	.LASF34
	.byte	0x4
	.byte	0x51
	.byte	0xe
	.4byte	0x8b
	.byte	0x1c
	.byte	0
	.uleb128 0x12
	.4byte	.LASF41
	.byte	0x4
	.byte	0x7c
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x12
	.4byte	.LASF42
	.byte	0x5
	.byte	0x14
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x12
	.4byte	.LASF43
	.byte	0x5
	.byte	0x16
	.byte	0x10
	.4byte	0x2f3
	.uleb128 0xd
	.4byte	0x2db
	.uleb128 0x1a
	.4byte	.LASF44
	.2byte	0x100
	.byte	0x1a
	.4byte	0x488
	.uleb128 0x7
	.string	"ra"
	.byte	0x5
	.byte	0x1b
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x7
	.string	"sp"
	.byte	0x5
	.byte	0x1c
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.uleb128 0x7
	.string	"gp"
	.byte	0x5
	.byte	0x1d
	.byte	0xe
	.4byte	0x9e
	.byte	0x10
	.uleb128 0x7
	.string	"tp"
	.byte	0x5
	.byte	0x1e
	.byte	0xe
	.4byte	0x9e
	.byte	0x18
	.uleb128 0x7
	.string	"t0"
	.byte	0x5
	.byte	0x1f
	.byte	0xe
	.4byte	0x9e
	.byte	0x20
	.uleb128 0x7
	.string	"t1"
	.byte	0x5
	.byte	0x20
	.byte	0xe
	.4byte	0x9e
	.byte	0x28
	.uleb128 0x7
	.string	"t2"
	.byte	0x5
	.byte	0x21
	.byte	0xe
	.4byte	0x9e
	.byte	0x30
	.uleb128 0x7
	.string	"t3"
	.byte	0x5
	.byte	0x22
	.byte	0xe
	.4byte	0x9e
	.byte	0x38
	.uleb128 0x7
	.string	"t4"
	.byte	0x5
	.byte	0x23
	.byte	0xe
	.4byte	0x9e
	.byte	0x40
	.uleb128 0x7
	.string	"t5"
	.byte	0x5
	.byte	0x24
	.byte	0xe
	.4byte	0x9e
	.byte	0x48
	.uleb128 0x7
	.string	"t6"
	.byte	0x5
	.byte	0x25
	.byte	0xe
	.4byte	0x9e
	.byte	0x50
	.uleb128 0x7
	.string	"a0"
	.byte	0x5
	.byte	0x26
	.byte	0xe
	.4byte	0x9e
	.byte	0x58
	.uleb128 0x7
	.string	"a1"
	.byte	0x5
	.byte	0x27
	.byte	0xe
	.4byte	0x9e
	.byte	0x60
	.uleb128 0x7
	.string	"a2"
	.byte	0x5
	.byte	0x28
	.byte	0xe
	.4byte	0x9e
	.byte	0x68
	.uleb128 0x7
	.string	"a3"
	.byte	0x5
	.byte	0x29
	.byte	0xe
	.4byte	0x9e
	.byte	0x70
	.uleb128 0x7
	.string	"a4"
	.byte	0x5
	.byte	0x2a
	.byte	0xe
	.4byte	0x9e
	.byte	0x78
	.uleb128 0x7
	.string	"a5"
	.byte	0x5
	.byte	0x2b
	.byte	0xe
	.4byte	0x9e
	.byte	0x80
	.uleb128 0x7
	.string	"a6"
	.byte	0x5
	.byte	0x2c
	.byte	0xe
	.4byte	0x9e
	.byte	0x88
	.uleb128 0x7
	.string	"a7"
	.byte	0x5
	.byte	0x2d
	.byte	0xe
	.4byte	0x9e
	.byte	0x90
	.uleb128 0x7
	.string	"s0"
	.byte	0x5
	.byte	0x2e
	.byte	0xe
	.4byte	0x9e
	.byte	0x98
	.uleb128 0x7
	.string	"s1"
	.byte	0x5
	.byte	0x2f
	.byte	0xe
	.4byte	0x9e
	.byte	0xa0
	.uleb128 0x7
	.string	"s2"
	.byte	0x5
	.byte	0x30
	.byte	0xe
	.4byte	0x9e
	.byte	0xa8
	.uleb128 0x7
	.string	"s3"
	.byte	0x5
	.byte	0x31
	.byte	0xe
	.4byte	0x9e
	.byte	0xb0
	.uleb128 0x7
	.string	"s4"
	.byte	0x5
	.byte	0x32
	.byte	0xe
	.4byte	0x9e
	.byte	0xb8
	.uleb128 0x7
	.string	"s5"
	.byte	0x5
	.byte	0x33
	.byte	0xe
	.4byte	0x9e
	.byte	0xc0
	.uleb128 0x7
	.string	"s6"
	.byte	0x5
	.byte	0x34
	.byte	0xe
	.4byte	0x9e
	.byte	0xc8
	.uleb128 0x7
	.string	"s7"
	.byte	0x5
	.byte	0x35
	.byte	0xe
	.4byte	0x9e
	.byte	0xd0
	.uleb128 0x7
	.string	"s8"
	.byte	0x5
	.byte	0x36
	.byte	0xe
	.4byte	0x9e
	.byte	0xd8
	.uleb128 0x7
	.string	"s9"
	.byte	0x5
	.byte	0x37
	.byte	0xe
	.4byte	0x9e
	.byte	0xe0
	.uleb128 0x7
	.string	"s10"
	.byte	0x5
	.byte	0x38
	.byte	0xe
	.4byte	0x9e
	.byte	0xe8
	.uleb128 0x7
	.string	"s11"
	.byte	0x5
	.byte	0x39
	.byte	0xe
	.4byte	0x9e
	.byte	0xf0
	.uleb128 0x5
	.4byte	.LASF45
	.byte	0x5
	.byte	0x3a
	.byte	0xe
	.4byte	0x9e
	.byte	0xf8
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF46
	.2byte	0x798
	.byte	0x41
	.4byte	0x5bf
	.uleb128 0x5
	.4byte	.LASF47
	.byte	0x5
	.byte	0x42
	.byte	0x16
	.4byte	0x2f8
	.byte	0
	.uleb128 0x8
	.4byte	.LASF48
	.byte	0x44
	.byte	0x16
	.4byte	0x2f8
	.2byte	0x100
	.uleb128 0x8
	.4byte	.LASF49
	.byte	0x45
	.byte	0x12
	.4byte	0x5bf
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF50
	.byte	0x47
	.byte	0xb
	.4byte	0x5c4
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF51
	.byte	0x48
	.byte	0xe
	.4byte	0x9e
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF52
	.byte	0x49
	.byte	0xe
	.4byte	0x9e
	.2byte	0x218
	.uleb128 0x1b
	.string	"sz"
	.byte	0x4a
	.byte	0xe
	.4byte	0x9e
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF53
	.byte	0x4c
	.byte	0x9
	.4byte	0x48
	.2byte	0x228
	.uleb128 0x8
	.4byte	.LASF54
	.byte	0x4e
	.byte	0x11
	.4byte	0x2e7
	.2byte	0x230
	.uleb128 0x8
	.4byte	.LASF55
	.byte	0x50
	.byte	0xb
	.4byte	0x5c4
	.2byte	0x238
	.uleb128 0x8
	.4byte	.LASF56
	.byte	0x51
	.byte	0x9
	.4byte	0x48
	.2byte	0x240
	.uleb128 0x8
	.4byte	.LASF57
	.byte	0x53
	.byte	0x12
	.4byte	0x5c9
	.2byte	0x248
	.uleb128 0x8
	.4byte	.LASF58
	.byte	0x55
	.byte	0xb
	.4byte	0x694
	.2byte	0x2c8
	.uleb128 0x8
	.4byte	.LASF59
	.byte	0x56
	.byte	0x9
	.4byte	0x48
	.2byte	0x6c8
	.uleb128 0x8
	.4byte	.LASF60
	.byte	0x58
	.byte	0x9
	.4byte	0x48
	.2byte	0x6cc
	.uleb128 0x8
	.4byte	.LASF61
	.byte	0x5a
	.byte	0x12
	.4byte	0x5bf
	.2byte	0x6d0
	.uleb128 0x1b
	.string	"cwd"
	.byte	0x5d
	.byte	0xa
	.4byte	0x6a4
	.2byte	0x6d8
	.uleb128 0x8
	.4byte	.LASF62
	.byte	0x5e
	.byte	0x14
	.4byte	0x84
	.2byte	0x758
	.uleb128 0x1b
	.string	"uid"
	.byte	0x61
	.byte	0xe
	.4byte	0x78
	.2byte	0x75a
	.uleb128 0x1b
	.string	"gid"
	.byte	0x62
	.byte	0xe
	.4byte	0x78
	.2byte	0x75c
	.uleb128 0x8
	.4byte	.LASF63
	.byte	0x63
	.byte	0xe
	.4byte	0x6b4
	.2byte	0x75e
	.uleb128 0x8
	.4byte	.LASF64
	.byte	0x64
	.byte	0x9
	.4byte	0x48
	.2byte	0x770
	.uleb128 0x8
	.4byte	.LASF65
	.byte	0x65
	.byte	0xa
	.4byte	0x6c4
	.2byte	0x774
	.byte	0
	.uleb128 0xd
	.4byte	0x488
	.uleb128 0xd
	.4byte	0x234
	.uleb128 0xc
	.4byte	0x5d9
	.4byte	0x5d9
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0xd
	.4byte	0x5de
	.uleb128 0x1a
	.4byte	.LASF66
	.2byte	0x490
	.byte	0x84
	.4byte	0x694
	.uleb128 0x5
	.4byte	.LASF67
	.byte	0x5
	.byte	0x85
	.byte	0x47
	.4byte	0x794
	.byte	0
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x5
	.byte	0x86
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x7
	.string	"din"
	.byte	0x5
	.byte	0x87
	.byte	0x13
	.4byte	0x13f
	.byte	0x8
	.uleb128 0x7
	.string	"off"
	.byte	0x5
	.byte	0x88
	.byte	0xe
	.4byte	0x8b
	.byte	0x60
	.uleb128 0x5
	.4byte	.LASF68
	.byte	0x5
	.byte	0x89
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x5
	.4byte	.LASF69
	.byte	0x5
	.byte	0x8a
	.byte	0x13
	.4byte	0x78f
	.byte	0x68
	.uleb128 0x5
	.4byte	.LASF70
	.byte	0x5
	.byte	0x8b
	.byte	0x9
	.4byte	0x48
	.byte	0x70
	.uleb128 0x5
	.4byte	.LASF71
	.byte	0x5
	.byte	0x8c
	.byte	0x9
	.4byte	0x48
	.byte	0x74
	.uleb128 0x5
	.4byte	.LASF72
	.byte	0x5
	.byte	0x8d
	.byte	0x9
	.4byte	0x48
	.byte	0x78
	.uleb128 0x5
	.4byte	.LASF73
	.byte	0x5
	.byte	0x90
	.byte	0x9
	.4byte	0x48
	.byte	0x7c
	.uleb128 0x5
	.4byte	.LASF74
	.byte	0x5
	.byte	0x92
	.byte	0x12
	.4byte	0x5d9
	.byte	0x80
	.uleb128 0x5
	.4byte	.LASF75
	.byte	0x5
	.byte	0x94
	.byte	0x12
	.4byte	0x7c7
	.byte	0x88
	.uleb128 0x8
	.4byte	.LASF76
	.byte	0x95
	.byte	0x9
	.4byte	0x48
	.2byte	0x488
	.byte	0
	.uleb128 0xc
	.4byte	0x5c4
	.4byte	0x6a4
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x6b4
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0xc
	.4byte	0x78
	.4byte	0x6c4
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x7
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x6d4
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF77
	.2byte	0x330
	.byte	0x6f
	.4byte	0x770
	.uleb128 0x5
	.4byte	.LASF78
	.byte	0x5
	.byte	0x70
	.byte	0xa
	.4byte	0x770
	.byte	0
	.uleb128 0x8
	.4byte	.LASF79
	.byte	0x71
	.byte	0xe
	.4byte	0x8b
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF80
	.byte	0x72
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF81
	.byte	0x73
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF82
	.byte	0x74
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x8
	.4byte	.LASF83
	.byte	0x75
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF84
	.byte	0x76
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x8
	.4byte	.LASF68
	.byte	0x77
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF85
	.byte	0x79
	.byte	0x12
	.4byte	0x77f
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF86
	.byte	0x7a
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x8
	.4byte	.LASF74
	.byte	0x7c
	.byte	0x13
	.4byte	0x78f
	.2byte	0x328
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x77f
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0xc
	.4byte	0x5d9
	.4byte	0x78f
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xd
	.4byte	0x6d4
	.uleb128 0x2e
	.byte	0x7
	.byte	0x4
	.4byte	0x97
	.byte	0x5
	.byte	0x85
	.byte	0xa
	.4byte	0x7c7
	.uleb128 0x18
	.4byte	.LASF87
	.byte	0
	.uleb128 0x18
	.4byte	.LASF88
	.byte	0x1
	.uleb128 0x18
	.4byte	.LASF89
	.byte	0x2
	.uleb128 0x18
	.4byte	.LASF90
	.byte	0x3
	.uleb128 0x18
	.4byte	.LASF91
	.byte	0x4
	.uleb128 0x18
	.4byte	.LASF92
	.byte	0x5
	.byte	0
	.uleb128 0xc
	.4byte	0x5bf
	.4byte	0x7d7
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0x26
	.4byte	.LASF93
	.byte	0xc0
	.byte	0x15
	.4byte	0x7c7
	.uleb128 0x26
	.4byte	.LASF94
	.byte	0xc2
	.byte	0xc
	.4byte	0x48
	.uleb128 0x2f
	.4byte	.LASF95
	.byte	0x5
	.2byte	0x146
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x16
	.4byte	.LASF96
	.byte	0x10
	.byte	0x1
	.byte	0x57
	.4byte	0x83b
	.uleb128 0x5
	.4byte	.LASF97
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x7
	.string	"len"
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF98
	.byte	0x1
	.byte	0x5a
	.byte	0xe
	.4byte	0x78
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF61
	.byte	0x1
	.byte	0x5b
	.byte	0xe
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x27
	.4byte	.LASF101
	.byte	0x2
	.byte	0x5e
	.4byte	0x86e
	.uleb128 0x5
	.4byte	.LASF98
	.byte	0x1
	.byte	0x5f
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x7
	.string	"idx"
	.byte	0x1
	.byte	0x60
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF99
	.byte	0x1
	.byte	0x61
	.byte	0xe
	.4byte	0x86e
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x78
	.4byte	0x87d
	.uleb128 0x28
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF100
	.byte	0x8
	.byte	0x1
	.byte	0x64
	.4byte	0x8a3
	.uleb128 0x7
	.string	"id"
	.byte	0x1
	.byte	0x64
	.byte	0x23
	.4byte	0x8b
	.byte	0
	.uleb128 0x7
	.string	"len"
	.byte	0x1
	.byte	0x64
	.byte	0x26
	.4byte	0x8b
	.byte	0x4
	.byte	0
	.uleb128 0x27
	.4byte	.LASF102
	.byte	0x4
	.byte	0x65
	.4byte	0x8d6
	.uleb128 0x5
	.4byte	.LASF98
	.byte	0x1
	.byte	0x66
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x7
	.string	"idx"
	.byte	0x1
	.byte	0x67
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF99
	.byte	0x1
	.byte	0x68
	.byte	0x1c
	.4byte	0x8d6
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x87d
	.4byte	0x8e5
	.uleb128 0x28
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF103
	.byte	0x10
	.byte	0x1
	.byte	0x6e
	.4byte	0x919
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x1
	.byte	0x6f
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF104
	.byte	0x1
	.byte	0x70
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF105
	.byte	0x1
	.byte	0x71
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.byte	0
	.uleb128 0xf
	.4byte	.LASF106
	.byte	0x76
	.byte	0x11
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x1c
	.string	"Q"
	.byte	0x77
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0xf
	.4byte	.LASF107
	.byte	0x79
	.byte	0x1c
	.4byte	0x956
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xd
	.4byte	0x7fa
	.uleb128 0xf
	.4byte	.LASF108
	.byte	0x7a
	.byte	0x1c
	.4byte	0x970
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xd
	.4byte	0x83b
	.uleb128 0xf
	.4byte	.LASF68
	.byte	0x7b
	.byte	0x1c
	.4byte	0x98a
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xd
	.4byte	0x8a3
	.uleb128 0xf
	.4byte	.LASF109
	.byte	0x7c
	.byte	0x1c
	.4byte	0x9a4
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xd
	.4byte	0x5b
	.uleb128 0xf
	.4byte	.LASF110
	.byte	0x7e
	.byte	0x11
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x30
	.4byte	.LASF111
	.byte	0x1
	.byte	0x7f
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xc
	.4byte	0x67
	.4byte	0x9e4
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0x1f
	.4byte	0x9d5
	.uleb128 0x31
	.4byte	.LASF112
	.byte	0x1
	.byte	0x80
	.byte	0x1a
	.4byte	0x9e4
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x1c
	.string	"req"
	.byte	0xbf
	.byte	0x1e
	.4byte	0x8e5
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x1
	.string	"sb"
	.2byte	0x101
	.byte	0x1a
	.4byte	0xd7
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xc
	.4byte	0x5b
	.4byte	0xa3a
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0x2
	.4byte	.LASF113
	.2byte	0x102
	.byte	0x17
	.4byte	0xa2b
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xc
	.4byte	0x6d4
	.4byte	0xa60
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF114
	.2byte	0x2e6
	.byte	0xe
	.4byte	0xa50
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xc
	.4byte	0x5de
	.4byte	0xa86
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF115
	.2byte	0x2e7
	.byte	0xd
	.4byte	0xa76
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1d
	.4byte	.LASF116
	.2byte	0x2e9
	.byte	0xf
	.4byte	0x78f
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x1d
	.4byte	.LASF117
	.2byte	0x2ea
	.byte	0xe
	.4byte	0x5d9
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x32
	.4byte	.LASF311
	.byte	0x1
	.2byte	0x3ce
	.byte	0x6
	.4byte	0xad7
	.uleb128 0x22
	.byte	0
	.uleb128 0x33
	.4byte	.LASF118
	.byte	0x1
	.2byte	0x3cd
	.byte	0x6
	.4byte	0xaea
	.uleb128 0xb
	.4byte	0x5c4
	.byte	0
	.uleb128 0x34
	.4byte	.LASF119
	.byte	0x5
	.byte	0xb8
	.byte	0xf
	.4byte	0xafc
	.4byte	0xafc
	.uleb128 0x22
	.byte	0
	.uleb128 0xd
	.4byte	0x5d9
	.uleb128 0x13
	.4byte	.LASF120
	.byte	0x11
	.byte	0x5
	.4byte	0x48
	.4byte	0xb17
	.uleb128 0xb
	.4byte	0xb17
	.uleb128 0x22
	.byte	0
	.uleb128 0xd
	.4byte	0x23b
	.uleb128 0x13
	.4byte	.LASF121
	.byte	0x12
	.byte	0x7
	.4byte	0x5c4
	.4byte	0xb3b
	.uleb128 0xb
	.4byte	0x5c4
	.uleb128 0xb
	.4byte	0xb17
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0x13
	.4byte	.LASF122
	.byte	0x10
	.byte	0x5
	.4byte	0x48
	.4byte	0xb50
	.uleb128 0xb
	.4byte	0xb17
	.byte	0
	.uleb128 0x13
	.4byte	.LASF123
	.byte	0x14
	.byte	0x7
	.4byte	0x5c4
	.4byte	0xb6a
	.uleb128 0xb
	.4byte	0x5c4
	.uleb128 0xb
	.4byte	0xb17
	.byte	0
	.uleb128 0x13
	.4byte	.LASF124
	.byte	0x13
	.byte	0x7
	.4byte	0x5c4
	.4byte	0xb89
	.uleb128 0xb
	.4byte	0x5c4
	.uleb128 0xb
	.4byte	0xb17
	.uleb128 0xb
	.4byte	0x48
	.byte	0
	.uleb128 0x13
	.4byte	.LASF125
	.byte	0x16
	.byte	0x5
	.4byte	0x48
	.4byte	0xba3
	.uleb128 0xb
	.4byte	0xb17
	.uleb128 0xb
	.4byte	0xb17
	.byte	0
	.uleb128 0x13
	.4byte	.LASF126
	.byte	0x17
	.byte	0x5
	.4byte	0x48
	.4byte	0xbc2
	.uleb128 0xb
	.4byte	0xb17
	.uleb128 0xb
	.4byte	0xb17
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF127
	.byte	0xf
	.byte	0x7
	.4byte	0xbe1
	.4byte	0xbe1
	.uleb128 0xb
	.4byte	0xbe1
	.uleb128 0xb
	.4byte	0xbe3
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x35
	.byte	0x8
	.uleb128 0xd
	.4byte	0xbe8
	.uleb128 0x36
	.uleb128 0x13
	.4byte	.LASF128
	.byte	0xe
	.byte	0x7
	.4byte	0xbe1
	.4byte	0xc08
	.uleb128 0xb
	.4byte	0xbe1
	.uleb128 0xb
	.4byte	0x48
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF129
	.byte	0xd
	.byte	0x7
	.4byte	0xbe1
	.4byte	0xc1d
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0x37
	.4byte	.LASF130
	.byte	0x1
	.byte	0x15
	.byte	0xd
	.4byte	0xc2f
	.uleb128 0xb
	.4byte	0xb17
	.byte	0
	.uleb128 0x15
	.4byte	.LASF133
	.2byte	0x7a2
	.8byte	.LFB74
	.8byte	.LFE74-.LFB74
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc79
	.uleb128 0x3
	.4byte	.LASF131
	.2byte	0x7a2
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF132
	.2byte	0x7a2
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ft"
	.2byte	0x7a3
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF134
	.2byte	0x78e
	.8byte	.LFB73
	.8byte	.LFE73-.LFB73
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xca6
	.uleb128 0x3
	.4byte	.LASF57
	.2byte	0x78e
	.byte	0x22
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF135
	.2byte	0x769
	.8byte	.LFB72
	.8byte	.LFE72-.LFB72
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd10
	.uleb128 0x3
	.4byte	.LASF136
	.2byte	0x769
	.byte	0x20
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF137
	.2byte	0x769
	.byte	0x35
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF138
	.2byte	0x769
	.byte	0x4b
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB99
	.8byte	.LBE99-.LBB99
	.uleb128 0x1
	.string	"i"
	.2byte	0x76c
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF139
	.2byte	0x762
	.8byte	.LFB71
	.8byte	.LFE71-.LFB71
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd5c
	.uleb128 0x3
	.4byte	.LASF57
	.2byte	0x762
	.byte	0x1c
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB98
	.8byte	.LBE98-.LBB98
	.uleb128 0x1
	.string	"i"
	.2byte	0x764
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF141
	.2byte	0x73c
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB70
	.8byte	.LFE70-.LFB70
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xde3
	.uleb128 0x6
	.string	"fd"
	.2byte	0x73c
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF140
	.2byte	0x73c
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"ft"
	.2byte	0x73d
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x73f
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"p"
	.2byte	0x74f
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB97
	.8byte	.LBE97-.LBB97
	.uleb128 0x1
	.string	"i"
	.2byte	0x756
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF142
	.2byte	0x72a
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB69
	.8byte	.LFE69-.LFB69
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe3f
	.uleb128 0x6
	.string	"fd"
	.2byte	0x72a
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x72b
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x731
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x735
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x9
	.4byte	.LASF143
	.2byte	0x6f4
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB68
	.8byte	.LFE68-.LFB68
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf5c
	.uleb128 0x6
	.string	"fd"
	.2byte	0x6f4
	.byte	0x16
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"buf"
	.2byte	0x6f4
	.byte	0x26
	.4byte	0xbe3
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x3
	.4byte	.LASF144
	.2byte	0x6f4
	.byte	0x32
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x6f5
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"f"
	.2byte	0x6fa
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF145
	.2byte	0x6ff
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"src"
	.2byte	0x701
	.byte	0x14
	.4byte	0xf5c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x702
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"off"
	.2byte	0x704
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF147
	.2byte	0x708
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF148
	.2byte	0x721
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x19
	.4byte	.LLRL6
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x70b
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x70c
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF151
	.2byte	0x70d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x710
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF153
	.2byte	0x714
	.byte	0x11
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x6c
	.uleb128 0x9
	.4byte	.LASF154
	.2byte	0x6da
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB67
	.8byte	.LFE67-.LFB67
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xffa
	.uleb128 0x6
	.string	"fd"
	.2byte	0x6da
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"buf"
	.2byte	0x6da
	.byte	0x1f
	.4byte	0xbe1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF144
	.2byte	0x6da
	.byte	0x2b
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x6db
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x6e1
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x6e5
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF155
	.2byte	0x6e6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF156
	.2byte	0x6e9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF157
	.2byte	0x65e
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB66
	.8byte	.LFE66-.LFB66
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1212
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x65e
	.byte	0x1a
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x3
	.4byte	.LASF98
	.2byte	0x65e
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -460
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x65e
	.byte	0x2f
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x65f
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF159
	.2byte	0x660
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x67a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"di"
	.2byte	0x67b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x2
	.4byte	.LASF160
	.2byte	0x67c
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xa
	.8byte	.LBB87
	.8byte	.LBE87-.LBB87
	.4byte	0x10bd
	.uleb128 0x1
	.string	"p"
	.2byte	0x662
	.byte	0x16
	.4byte	0x5bf
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0xa
	.8byte	.LBB88
	.8byte	.LBE88-.LBB88
	.4byte	0x10e0
	.uleb128 0x1
	.string	"i"
	.2byte	0x66a
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0xa
	.8byte	.LBB89
	.8byte	.LBE89-.LBB89
	.4byte	0x11cd
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x682
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -308
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x683
	.byte	0x12
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x2
	.4byte	.LASF162
	.2byte	0x688
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.string	"um"
	.2byte	0x690
	.byte	0x1c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -86
	.uleb128 0x2
	.4byte	.LASF163
	.2byte	0x692
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -332
	.uleb128 0x2
	.4byte	.LASF164
	.2byte	0x692
	.byte	0x22
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x1
	.string	"gid"
	.2byte	0x693
	.byte	0x16
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -54
	.uleb128 0xa
	.8byte	.LBB90
	.8byte	.LBE90-.LBB90
	.4byte	0x1186
	.uleb128 0x1
	.string	"i"
	.2byte	0x684
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xa
	.8byte	.LBB91
	.8byte	.LBE91-.LBB91
	.4byte	0x11aa
	.uleb128 0x1
	.string	"ii"
	.2byte	0x692
	.byte	0x3b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB92
	.8byte	.LBE92-.LBB92
	.uleb128 0x2
	.4byte	.LASF165
	.2byte	0x695
	.byte	0x1f
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -440
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB93
	.8byte	.LBE93-.LBB93
	.4byte	0x11f2
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x6a9
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x4
	.8byte	.LBB94
	.8byte	.LBE94-.LBB94
	.uleb128 0x1
	.string	"i"
	.2byte	0x6b6
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x1222
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	.LASF167
	.2byte	0x658
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB65
	.8byte	.LFE65-.LFB65
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1254
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x658
	.byte	0x19
	.4byte	0xb17
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF168
	.2byte	0x64b
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB64
	.8byte	.LFE64-.LFB64
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12e4
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x64b
	.byte	0x1b
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x3
	.4byte	.LASF32
	.2byte	0x64b
	.byte	0x2a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x64b
	.byte	0x3a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x64d
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x64e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x650
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.string	"now"
	.2byte	0x651
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF169
	.2byte	0x63e
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB63
	.8byte	.LFE63-.LFB63
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1365
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x63e
	.byte	0x1a
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"uid"
	.2byte	0x63e
	.byte	0x29
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -250
	.uleb128 0x6
	.string	"gid"
	.2byte	0x63e
	.byte	0x37
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.string	"abs"
	.2byte	0x640
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x641
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x643
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF170
	.2byte	0x630
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB62
	.8byte	.LFE62-.LFB62
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13e3
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x630
	.byte	0x1a
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x630
	.byte	0x29
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.string	"abs"
	.2byte	0x632
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x633
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x635
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x1
	.string	"p"
	.2byte	0x637
	.byte	0x12
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x9
	.4byte	.LASF171
	.2byte	0x621
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB61
	.8byte	.LFE61-.LFB61
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x14a2
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x621
	.byte	0x1a
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x6
	.string	"st"
	.2byte	0x621
	.byte	0x2d
	.4byte	0x14a2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"abs"
	.2byte	0x624
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x625
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x625
	.byte	0x1b
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x627
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x628
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x629
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x4
	.8byte	.LBB86
	.8byte	.LBE86-.LBB86
	.uleb128 0x1
	.string	"i"
	.2byte	0x625
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x240
	.uleb128 0x9
	.4byte	.LASF172
	.2byte	0x612
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB60
	.8byte	.LFE60-.LFB60
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1584
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x612
	.byte	0x1d
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x6
	.string	"buf"
	.2byte	0x612
	.byte	0x29
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x3
	.4byte	.LASF173
	.2byte	0x612
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -388
	.uleb128 0x1
	.string	"abs"
	.2byte	0x615
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x616
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x616
	.byte	0x1b
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x618
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x619
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"di"
	.2byte	0x61a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"n"
	.2byte	0x61c
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB85
	.8byte	.LBE85-.LBB85
	.uleb128 0x1
	.string	"i"
	.2byte	0x616
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF174
	.2byte	0x605
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB59
	.8byte	.LFE59-.LFB59
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15f4
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x605
	.byte	0x19
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"st"
	.2byte	0x605
	.byte	0x2c
	.4byte	0x14a2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x608
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x609
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x60b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF175
	.2byte	0x5e8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB58
	.8byte	.LFE58-.LFB58
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16c4
	.uleb128 0x3
	.4byte	.LASF176
	.2byte	0x5e8
	.byte	0x19
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x3
	.4byte	.LASF177
	.2byte	0x5e8
	.byte	0x2e
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -496
	.uleb128 0x2
	.4byte	.LASF178
	.2byte	0x5ea
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF179
	.2byte	0x5ea
	.byte	0x17
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5ef
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x5f3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x5f6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -372
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x5f6
	.byte	0x1b
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -392
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5fa
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -480
	.uleb128 0x4
	.8byte	.LBB84
	.8byte	.LBE84-.LBB84
	.uleb128 0x1
	.string	"i"
	.2byte	0x5f6
	.byte	0x34
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF180
	.2byte	0x5c1
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB57
	.8byte	.LFE57-.LFB57
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17f7
	.uleb128 0x3
	.4byte	.LASF176
	.2byte	0x5c1
	.byte	0x1b
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF177
	.2byte	0x5c1
	.byte	0x30
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF178
	.2byte	0x5c3
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF179
	.2byte	0x5c3
	.byte	0x17
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5ca
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"op"
	.2byte	0x5ce
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -292
	.uleb128 0x1
	.string	"np"
	.2byte	0x5ce
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x5ce
	.byte	0x1b
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x5ce
	.byte	0x31
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5d4
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"opd"
	.2byte	0x5d7
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0x2
	.4byte	.LASF183
	.2byte	0x5dc
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF184
	.2byte	0x5dd
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0xa
	.8byte	.LBB82
	.8byte	.LBE82-.LBB82
	.4byte	0x17d6
	.uleb128 0x1
	.string	"i"
	.2byte	0x5cf
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB83
	.8byte	.LBE83-.LBB83
	.uleb128 0x1
	.string	"pr"
	.2byte	0x5df
	.byte	0x16
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF185
	.2byte	0x5a4
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB56
	.8byte	.LFE56-.LFB56
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1908
	.uleb128 0x3
	.4byte	.LASF186
	.2byte	0x5a4
	.byte	0x1c
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF187
	.2byte	0x5a4
	.byte	0x30
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5a6
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x5aa
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x5aa
	.byte	0x1b
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5ae
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x5b2
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5b2
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ni"
	.2byte	0x5b5
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x2
	.4byte	.LASF188
	.2byte	0x5b9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"buf"
	.2byte	0x5ba
	.byte	0xd
	.4byte	0x1908
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.uleb128 0xa
	.8byte	.LBB80
	.8byte	.LBE80-.LBB80
	.4byte	0x18e8
	.uleb128 0x1
	.string	"i"
	.2byte	0x5aa
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB81
	.8byte	.LBE81-.LBB81
	.uleb128 0x1
	.string	"i"
	.2byte	0x5b3
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x5b
	.4byte	0x1918
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xef
	.byte	0
	.uleb128 0x14
	.4byte	.LASF206
	.2byte	0x593
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB55
	.8byte	.LFE55-.LFB55
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x19f0
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x593
	.byte	0x26
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"ip"
	.2byte	0x593
	.byte	0x3b
	.4byte	0x19f0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"src"
	.2byte	0x593
	.byte	0x4e
	.4byte	0xf5c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x593
	.byte	0x5c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x595
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x595
	.byte	0x24
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"s"
	.2byte	0x595
	.byte	0x3c
	.4byte	0xf5c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB79
	.8byte	.LBE79-.LBB79
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x597
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x597
	.byte	0x32
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF151
	.2byte	0x598
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x599
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x13f
	.uleb128 0x9
	.4byte	.LASF189
	.2byte	0x568
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB54
	.8byte	.LFE54-.LFB54
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b4c
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x568
	.byte	0x1b
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0x1
	.string	"abs"
	.2byte	0x56a
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x56e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"di"
	.2byte	0x570
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x57e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x57e
	.byte	0x1b
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF190
	.2byte	0x581
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x2
	.4byte	.LASF191
	.2byte	0x584
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF192
	.2byte	0x58d
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0xa
	.8byte	.LBB74
	.8byte	.LBE74-.LBB74
	.4byte	0x1b08
	.uleb128 0x1
	.string	"pi"
	.2byte	0x574
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB75
	.8byte	.LBE75-.LBB75
	.uleb128 0x1
	.string	"ft"
	.2byte	0x576
	.byte	0x17
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB76
	.8byte	.LBE76-.LBB76
	.uleb128 0x1
	.string	"i"
	.2byte	0x577
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB77
	.8byte	.LBE77-.LBB77
	.4byte	0x1b2b
	.uleb128 0x1
	.string	"i"
	.2byte	0x57e
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x4
	.8byte	.LBB78
	.8byte	.LBE78-.LBB78
	.uleb128 0x1
	.string	"pr"
	.2byte	0x586
	.byte	0x16
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF193
	.2byte	0x53f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB53
	.8byte	.LFE53-.LFB53
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1c82
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x53f
	.byte	0x1a
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"abs"
	.2byte	0x541
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x545
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.string	"di"
	.2byte	0x547
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x558
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -276
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x558
	.byte	0x1b
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF194
	.2byte	0x55b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x2
	.4byte	.LASF192
	.2byte	0x562
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0xa
	.8byte	.LBB69
	.8byte	.LBE69-.LBB69
	.4byte	0x1c62
	.uleb128 0x1
	.string	"off"
	.2byte	0x54c
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF195
	.2byte	0x54c
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x19
	.4byte	.LLRL5
	.uleb128 0x1
	.string	"de"
	.2byte	0x54f
	.byte	0x1c
	.4byte	0x1c82
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x550
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.8byte	.LBB71
	.8byte	.LBE71-.LBB71
	.uleb128 0x1
	.string	"i"
	.2byte	0x551
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB73
	.8byte	.LBE73-.LBB73
	.uleb128 0x1
	.string	"i"
	.2byte	0x558
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x1fd
	.uleb128 0x9
	.4byte	.LASF197
	.2byte	0x514
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB52
	.8byte	.LFE52-.LFB52
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d98
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x514
	.byte	0x1a
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x514
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -556
	.uleb128 0x1
	.string	"abs"
	.2byte	0x517
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x51f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x520
	.byte	0xa
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x523
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x528
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x529
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF198
	.2byte	0x52f
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x1
	.string	"um"
	.2byte	0x532
	.byte	0x14
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -30
	.uleb128 0x2
	.4byte	.LASF165
	.2byte	0x533
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0xa
	.8byte	.LBB67
	.8byte	.LBE67-.LBB67
	.4byte	0x1d78
	.uleb128 0x1
	.string	"i"
	.2byte	0x520
	.byte	0x22
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB68
	.8byte	.LBE68-.LBB68
	.uleb128 0x1
	.string	"i"
	.2byte	0x52a
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF238
	.2byte	0x4d4
	.8byte	.LFB51
	.8byte	.LFE51-.LFB51
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1f65
	.uleb128 0x6
	.string	"out"
	.2byte	0x4d4
	.byte	0x28
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1112
	.uleb128 0x3
	.4byte	.LASF199
	.2byte	0x4d4
	.byte	0x34
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1120
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x4d4
	.byte	0x47
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x1
	.string	"p"
	.2byte	0x4d6
	.byte	0x12
	.4byte	0x5bf
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF200
	.2byte	0x4d7
	.byte	0xa
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"tmp"
	.2byte	0x4e7
	.byte	0xa
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -624
	.uleb128 0x1
	.string	"s"
	.2byte	0x4ea
	.byte	0x11
	.4byte	0xb17
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"end"
	.2byte	0x4eb
	.byte	0x11
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x2
	.4byte	.LASF201
	.2byte	0x4ec
	.byte	0x11
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF202
	.2byte	0x4ed
	.byte	0xa
	.4byte	0x1f75
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1104
	.uleb128 0x2
	.4byte	.LASF203
	.2byte	0x4ee
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"pos"
	.2byte	0x503
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0xa
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.4byte	0x1e92
	.uleb128 0x1
	.string	"n"
	.2byte	0x4df
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.uleb128 0x29
	.4byte	.LLRL3
	.4byte	0x1f0f
	.uleb128 0x1
	.string	"len"
	.2byte	0x4f4
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x4
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x2
	.4byte	.LASF204
	.2byte	0x4fa
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xa
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.4byte	0x1eee
	.uleb128 0x1
	.string	"i"
	.2byte	0x4fc
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB61
	.8byte	.LBE61-.LBB61
	.uleb128 0x1
	.string	"i"
	.2byte	0x4fd
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB63
	.8byte	.LBE63-.LBB63
	.uleb128 0x1
	.string	"i"
	.2byte	0x505
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x19
	.4byte	.LLRL4
	.uleb128 0x2
	.4byte	.LASF205
	.2byte	0x506
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB65
	.8byte	.LBE65-.LBB65
	.uleb128 0x1
	.string	"j"
	.2byte	0x509
	.byte	0x12
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x1f75
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xff
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x1f8b
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x1f
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x14
	.4byte	.LASF207
	.2byte	0x4b6
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x204b
	.uleb128 0x3
	.4byte	.LASF208
	.2byte	0x4b6
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x4b6
	.byte	0x3c
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x4b8
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"off"
	.2byte	0x4bc
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF209
	.2byte	0x4bd
	.byte	0xa
	.4byte	0x1212
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x4
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.uleb128 0x1
	.string	"de"
	.2byte	0x4c0
	.byte	0x18
	.4byte	0x1c82
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x4c1
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB56
	.8byte	.LBE56-.LBB56
	.uleb128 0x1
	.string	"i"
	.2byte	0x4c2
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF210
	.2byte	0x476
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x21ec
	.uleb128 0x3
	.4byte	.LASF208
	.2byte	0x476
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -708
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x476
	.byte	0x39
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -720
	.uleb128 0x3
	.4byte	.LASF211
	.2byte	0x476
	.byte	0x48
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x47a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"de"
	.2byte	0x47f
	.byte	0x13
	.4byte	0x1fd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"off"
	.2byte	0x486
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x4a3
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x4a4
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x4a5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x4a6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"buf"
	.2byte	0x4a9
	.byte	0xd
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x4ab
	.byte	0x14
	.4byte	0x1c82
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x2149
	.uleb128 0x1
	.string	"i"
	.2byte	0x482
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x489
	.byte	0x18
	.4byte	0x1c82
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x48a
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB53
	.8byte	.LBE53-.LBB53
	.uleb128 0x1
	.string	"i"
	.2byte	0x48b
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x48f
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x490
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.4byte	.LASF213
	.2byte	0x495
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF214
	.2byte	0x496
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF215
	.2byte	0x460
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2261
	.uleb128 0x1
	.string	"di"
	.2byte	0x462
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x463
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.uleb128 0x2
	.4byte	.LASF198
	.2byte	0x467
	.byte	0x1b
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF216
	.2byte	0x433
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2378
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x433
	.byte	0x2f
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF208
	.2byte	0x433
	.byte	0x3f
	.4byte	0x2378
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x3
	.4byte	.LASF217
	.2byte	0x433
	.byte	0x52
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF218
	.2byte	0x439
	.byte	0xa
	.4byte	0x237d
	.uleb128 0x4
	.byte	0x91
	.sleb128 -144
	.byte	0x6
	.uleb128 0x2
	.4byte	.LASF219
	.2byte	0x43d
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF220
	.2byte	0x43e
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"tok"
	.2byte	0x43f
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"cur"
	.2byte	0x440
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x441
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"n"
	.2byte	0x457
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0xa
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.4byte	0x2357
	.uleb128 0x2
	.4byte	.LASF221
	.2byte	0x445
	.byte	0xf
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF222
	.2byte	0x44d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.byte	0
	.uleb128 0x4
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x1
	.string	"i"
	.2byte	0x459
	.byte	0xe
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x8b
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x2391
	.uleb128 0x38
	.4byte	0xaa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -136
	.byte	0x6
	.byte	0
	.uleb128 0x9
	.4byte	.LASF223
	.2byte	0x404
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2419
	.uleb128 0x6
	.string	"fd"
	.2byte	0x404
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF97
	.2byte	0x404
	.byte	0x1d
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x404
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x406
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x40f
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.uleb128 0x1
	.string	"i"
	.2byte	0x415
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF224
	.2byte	0x3d2
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x24ae
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3d2
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF97
	.2byte	0x3d2
	.byte	0x1c
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x3d2
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x3d4
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x3dd
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"j"
	.2byte	0x3ec
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.uleb128 0x1
	.string	"i"
	.2byte	0x3ed
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF225
	.2byte	0x38f
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2540
	.uleb128 0x6
	.string	"fd1"
	.2byte	0x38f
	.byte	0x15
	.4byte	0x2540
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"fd2"
	.2byte	0x38f
	.byte	0x1f
	.4byte	0x2540
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x390
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pip"
	.2byte	0x392
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x252c
	.uleb128 0x1
	.string	"i"
	.2byte	0x394
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x19
	.4byte	.LLRL2
	.uleb128 0x1
	.string	"i"
	.2byte	0x3ae
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x48
	.uleb128 0x9
	.4byte	.LASF226
	.2byte	0x386
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2592
	.uleb128 0x6
	.string	"fd"
	.2byte	0x386
	.byte	0x10
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x388
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"k"
	.2byte	0x38b
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x9
	.4byte	.LASF227
	.2byte	0x379
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x25d2
	.uleb128 0x6
	.string	"fd"
	.2byte	0x379
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x37b
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF228
	.2byte	0x36d
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2612
	.uleb128 0x6
	.string	"fd"
	.2byte	0x36d
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x36f
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF229
	.2byte	0x358
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2652
	.uleb128 0x6
	.string	"fd"
	.2byte	0x358
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x35a
	.byte	0x13
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF230
	.2byte	0x344
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x267f
	.uleb128 0x3
	.4byte	.LASF57
	.2byte	0x344
	.byte	0x1c
	.4byte	0xafc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x24
	.4byte	.LASF231
	.2byte	0x339
	.byte	0xe
	.4byte	0x5d9
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26b1
	.uleb128 0x2
	.4byte	.LASF137
	.2byte	0x33b
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF232
	.2byte	0x323
	.byte	0xf
	.4byte	0x78f
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26fe
	.uleb128 0x1
	.string	"p"
	.2byte	0x325
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x331
	.byte	0xb
	.4byte	0xbe1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"pa"
	.2byte	0x332
	.byte	0xb
	.4byte	0xbe1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x23
	.4byte	.LASF234
	.2byte	0x31a
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2729
	.uleb128 0x6
	.string	"p"
	.2byte	0x31a
	.byte	0x1d
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF235
	.2byte	0x311
	.byte	0xe
	.4byte	0x5d9
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2759
	.uleb128 0x1
	.string	"p"
	.2byte	0x313
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF236
	.2byte	0x30b
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2784
	.uleb128 0x6
	.string	"p"
	.2byte	0x30b
	.byte	0x1e
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF237
	.2byte	0x300
	.byte	0xf
	.4byte	0x78f
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27b4
	.uleb128 0x1
	.string	"p"
	.2byte	0x302
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x39
	.4byte	.LASF312
	.byte	0x1
	.2byte	0x2ec
	.byte	0x6
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2854
	.uleb128 0xa
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x2815
	.uleb128 0x1
	.string	"i"
	.2byte	0x2f1
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.uleb128 0x1
	.string	"p"
	.2byte	0x2f2
	.byte	0x17
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.uleb128 0x1
	.string	"i"
	.2byte	0x2f8
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x1
	.string	"p"
	.2byte	0x2f9
	.byte	0x16
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF239
	.2byte	0x2d9
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x28c7
	.uleb128 0x6
	.string	"f"
	.2byte	0x2d9
	.byte	0x27
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x2d9
	.byte	0x37
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x2da
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"c"
	.2byte	0x2da
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.uleb128 0x1
	.string	"i"
	.2byte	0x2db
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF240
	.2byte	0x2cb
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2938
	.uleb128 0x6
	.string	"f"
	.2byte	0x2cb
	.byte	0x24
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x2cb
	.byte	0x34
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x2cc
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x29
	.4byte	.LLRL0
	.4byte	0x2924
	.uleb128 0x1
	.string	"i"
	.2byte	0x2ce
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x19
	.4byte	.LLRL1
	.uleb128 0x1
	.string	"i"
	.2byte	0x2d0
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF241
	.2byte	0x2c8
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2968
	.uleb128 0x6
	.string	"f"
	.2byte	0x2c8
	.byte	0x23
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF242
	.2byte	0x2b0
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29c4
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x2b0
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x2b1
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x1
	.string	"i"
	.2byte	0x2b7
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF243
	.2byte	0x287
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b51
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x287
	.byte	0x1d
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1672
	.uleb128 0x6
	.string	"out"
	.2byte	0x287
	.byte	0x29
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1680
	.uleb128 0x3
	.4byte	.LASF199
	.2byte	0x287
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1684
	.uleb128 0x1
	.string	"abs"
	.2byte	0x28a
	.byte	0xa
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"dir"
	.2byte	0x28e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"buf"
	.2byte	0x28f
	.byte	0xa
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x2
	.4byte	.LASF244
	.2byte	0x290
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x290
	.byte	0x18
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF245
	.2byte	0x291
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF246
	.2byte	0x291
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"n"
	.2byte	0x291
	.byte	0x23
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.uleb128 0x2
	.4byte	.LASF61
	.2byte	0x296
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x298
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"l"
	.2byte	0x2a7
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x2b30
	.uleb128 0x2
	.4byte	.LASF247
	.2byte	0x29b
	.byte	0x12
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1568
	.uleb128 0x1
	.string	"len"
	.2byte	0x29b
	.byte	0x21
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF248
	.2byte	0x29d
	.byte	0x12
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1440
	.uleb128 0x1
	.string	"p"
	.2byte	0x29d
	.byte	0x35
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF249
	.2byte	0x29f
	.byte	0x12
	.4byte	0x770
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1184
	.byte	0
	.uleb128 0x4
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x1
	.string	"i"
	.2byte	0x2aa
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF250
	.2byte	0x245
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2c7e
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x245
	.byte	0x2d
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1400
	.uleb128 0x3
	.4byte	.LASF245
	.2byte	0x245
	.byte	0x37
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1404
	.uleb128 0x1
	.string	"ipr"
	.2byte	0x24a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.string	"buf"
	.2byte	0x24e
	.byte	0xa
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -400
	.uleb128 0x2
	.4byte	.LASF244
	.2byte	0x250
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x251
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cur"
	.2byte	0x252
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF251
	.2byte	0x253
	.byte	0xa
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -656
	.uleb128 0x4
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x2
	.4byte	.LASF61
	.2byte	0x25a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x25c
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1384
	.uleb128 0x4
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x2
	.4byte	.LASF247
	.2byte	0x25f
	.byte	0x12
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1296
	.uleb128 0x1
	.string	"n"
	.2byte	0x260
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF248
	.2byte	0x264
	.byte	0x12
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1168
	.uleb128 0x1
	.string	"p"
	.2byte	0x266
	.byte	0x13
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF249
	.2byte	0x26c
	.byte	0x12
	.4byte	0x1f65
	.uleb128 0x3
	.byte	0x91
	.sleb128 -912
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF252
	.2byte	0x241
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2cb0
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x241
	.byte	0x22
	.4byte	0xb17
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF253
	.2byte	0x22a
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2d5f
	.uleb128 0x3
	.4byte	.LASF49
	.2byte	0x22a
	.byte	0x24
	.4byte	0x19f0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x22a
	.byte	0x38
	.4byte	0xb17
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"off"
	.2byte	0x22b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF209
	.2byte	0x22c
	.byte	0xa
	.4byte	0x1212
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x1
	.string	"de"
	.2byte	0x230
	.byte	0x18
	.4byte	0x1c82
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x231
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.uleb128 0x1
	.string	"i"
	.2byte	0x232
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF254
	.2byte	0x212
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2e34
	.uleb128 0x6
	.string	"ip"
	.2byte	0x212
	.byte	0x1f
	.4byte	0x19f0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF255
	.2byte	0x212
	.byte	0x2c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.string	"buf"
	.2byte	0x212
	.byte	0x3d
	.4byte	0x9a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x212
	.byte	0x4b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x213
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x214
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"dst"
	.2byte	0x215
	.byte	0xe
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x218
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x219
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF156
	.2byte	0x21a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x21d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF256
	.2byte	0x1c9
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3035
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1c9
	.byte	0x2b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1c9
	.byte	0x40
	.4byte	0x19f0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x6
	.string	"idx"
	.2byte	0x1c9
	.byte	0x4d
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"di"
	.2byte	0x1ed
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF257
	.2byte	0x1ee
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF258
	.2byte	0x1ef
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF259
	.2byte	0x1f1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF260
	.2byte	0x1fa
	.byte	0xd
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF261
	.2byte	0x1fc
	.byte	0xf
	.4byte	0x2378
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF262
	.2byte	0x1fd
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF263
	.2byte	0x206
	.byte	0xd
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x2
	.4byte	.LASF264
	.2byte	0x208
	.byte	0xf
	.4byte	0x2378
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x2f32
	.uleb128 0x1
	.string	"b"
	.2byte	0x1cd
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.byte	0
	.uleb128 0xa
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x2fcb
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x1d6
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1df
	.byte	0x11
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x1e1
	.byte	0x13
	.4byte	0x2378
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"i"
	.2byte	0x1e2
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x2fa9
	.uleb128 0x1
	.string	"nb"
	.2byte	0x1d8
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0x4
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.uleb128 0x1
	.string	"db"
	.2byte	0x1e4
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x2fef
	.uleb128 0x1
	.string	"nb"
	.2byte	0x1f3
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.uleb128 0xa
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x3013
	.uleb128 0x1
	.string	"nb"
	.2byte	0x1ff
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x4
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.uleb128 0x1
	.string	"db"
	.2byte	0x20a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF266
	.2byte	0x1a9
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3118
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1a9
	.byte	0x2e
	.4byte	0x19f0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.string	"idx"
	.2byte	0x1a9
	.byte	0x3b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0x30ab
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x1af
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x1b2
	.byte	0x13
	.4byte	0x2378
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x1b7
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF268
	.2byte	0x1b8
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF259
	.2byte	0x1ba
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF261
	.2byte	0x1be
	.byte	0x13
	.4byte	0x2378
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF262
	.2byte	0x1bf
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF264
	.2byte	0x1c4
	.byte	0x13
	.4byte	0x2378
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF269
	.2byte	0x198
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3198
	.uleb128 0x2
	.4byte	.LASF270
	.2byte	0x19a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF271
	.2byte	0x19b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x1
	.string	"b"
	.2byte	0x19c
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x1
	.string	"z"
	.2byte	0x1a0
	.byte	0x15
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF272
	.2byte	0x16a
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x32fb
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x16a
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"ip"
	.2byte	0x16a
	.byte	0x3d
	.4byte	0x19f0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0xa
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x31f7
	.uleb128 0x1
	.string	"i"
	.2byte	0x16d
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xa
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x324a
	.uleb128 0x2
	.4byte	.LASF273
	.2byte	0x176
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x178
	.byte	0x13
	.4byte	0x2378
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x1
	.string	"i"
	.2byte	0x179
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x2
	.4byte	.LASF274
	.2byte	0x182
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF246
	.2byte	0x184
	.byte	0x13
	.4byte	0x2378
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.uleb128 0x1
	.string	"i"
	.2byte	0x185
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x2
	.4byte	.LASF275
	.2byte	0x187
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF276
	.2byte	0x188
	.byte	0x15
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF277
	.2byte	0x18a
	.byte	0x17
	.4byte	0x2378
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"j"
	.2byte	0x18b
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF278
	.2byte	0x15e
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3354
	.uleb128 0x6
	.string	"b"
	.2byte	0x15e
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x161
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x162
	.byte	0xd
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x164
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF280
	.2byte	0x154
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33ad
	.uleb128 0x6
	.string	"b"
	.2byte	0x154
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x156
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x157
	.byte	0xd
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x159
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF281
	.2byte	0x14b
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x340b
	.uleb128 0x6
	.string	"b"
	.2byte	0x14b
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x14d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x14e
	.byte	0xd
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x150
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF282
	.2byte	0x13d
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3495
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x13d
	.byte	0x22
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x6
	.string	"src"
	.2byte	0x13d
	.byte	0x3d
	.4byte	0x3495
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x140
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x141
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF255
	.2byte	0x142
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"buf"
	.2byte	0x144
	.byte	0xd
	.4byte	0xa2b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"dip"
	.2byte	0x146
	.byte	0x14
	.4byte	0x19f0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	0x1e8
	.uleb128 0x1e
	.4byte	.LASF285
	.2byte	0x13b
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x34ca
	.uleb128 0x6
	.string	"b"
	.2byte	0x13b
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x15
	.4byte	.LASF286
	.2byte	0x126
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3542
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x126
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF287
	.2byte	0x126
	.byte	0x2f
	.4byte	0x19f0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x12d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x12f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF255
	.2byte	0x131
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"dip"
	.2byte	0x134
	.byte	0x14
	.4byte	0x19f0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x3a
	.4byte	.LASF313
	.byte	0x1
	.2byte	0x121
	.byte	0x6
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1e
	.4byte	.LASF288
	.2byte	0x10d
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3617
	.uleb128 0x6
	.string	"ip"
	.2byte	0x10d
	.byte	0x26
	.4byte	0x19f0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF166
	.2byte	0x10d
	.byte	0x2e
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"p"
	.2byte	0x10f
	.byte	0x12
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF31
	.2byte	0x110
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF289
	.2byte	0x111
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF290
	.2byte	0x119
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x2
	.4byte	.LASF291
	.2byte	0x115
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x1
	.string	"i"
	.2byte	0x116
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF292
	.2byte	0x106
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3647
	.uleb128 0x1
	.string	"x"
	.2byte	0x106
	.byte	0x30
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x25
	.4byte	.LASF293
	.byte	0xf8
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3680
	.uleb128 0x10
	.string	"blk"
	.byte	0xf8
	.byte	0x1b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x10
	.string	"src"
	.byte	0xf8
	.byte	0x2c
	.4byte	0xbe3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF294
	.byte	0xdf
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36b9
	.uleb128 0x2b
	.4byte	.LASF105
	.byte	0xdf
	.byte	0x27
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"src"
	.byte	0xdf
	.byte	0x3b
	.4byte	0xbe3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x25
	.4byte	.LASF295
	.byte	0xda
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36f2
	.uleb128 0x10
	.string	"blk"
	.byte	0xda
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x10
	.string	"dst"
	.byte	0xda
	.byte	0x25
	.4byte	0xbe1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF296
	.byte	0xc1
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x372b
	.uleb128 0x2b
	.4byte	.LASF105
	.byte	0xc1
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"dst"
	.byte	0xc1
	.byte	0x34
	.4byte	0xbe1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3b
	.4byte	.LASF297
	.byte	0x1
	.byte	0xb9
	.byte	0x14
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3771
	.uleb128 0x10
	.string	"f0"
	.byte	0xb9
	.byte	0x27
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x10
	.string	"f1"
	.byte	0xb9
	.byte	0x33
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x10
	.string	"f2"
	.byte	0xb9
	.byte	0x3f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x25
	.4byte	.LASF298
	.byte	0x85
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x385b
	.uleb128 0xf
	.4byte	.LASF299
	.byte	0x92
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1c
	.string	"st"
	.byte	0x96
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xf
	.4byte	.LASF300
	.byte	0x9e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xf
	.4byte	.LASF301
	.byte	0x9f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xf
	.4byte	.LASF302
	.byte	0xa4
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xf
	.4byte	.LASF303
	.byte	0xa5
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xf
	.4byte	.LASF304
	.byte	0xa6
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xf
	.4byte	.LASF305
	.byte	0xa7
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xf
	.4byte	.LASF306
	.byte	0xa8
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xf
	.4byte	.LASF307
	.byte	0xb2
	.byte	0xe
	.4byte	0x9e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1c
	.string	"s"
	.byte	0x87
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0xf
	.4byte	.LASF308
	.byte	0x88
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3c
	.4byte	.LASF309
	.byte	0x1
	.byte	0x83
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3896
	.uleb128 0x10
	.string	"b"
	.byte	0x83
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"o"
	.byte	0x83
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x3d
	.4byte	.LASF314
	.byte	0x1
	.byte	0x82
	.byte	0x14
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x10
	.string	"b"
	.byte	0x82
	.byte	0x22
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"o"
	.byte	0x82
	.byte	0x2d
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x10
	.string	"v"
	.byte	0x82
	.byte	0x38
	.4byte	0x8b
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
	.uleb128 0x6
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
	.uleb128 0x7
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
	.uleb128 0x8
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
	.uleb128 0x9
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
	.uleb128 0xa
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
	.uleb128 0xb
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
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
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xf
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
	.uleb128 0x10
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
	.uleb128 0x11
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
	.uleb128 0x12
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
	.uleb128 0x13
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
	.uleb128 0x14
	.uleb128 0x2e
	.byte	0x1
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
	.uleb128 0x17
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 13
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
	.uleb128 0x18
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
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
	.uleb128 0x1b
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0x1c
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
	.uleb128 0x1d
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
	.uleb128 0x1e
	.uleb128 0x2e
	.byte	0x1
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
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x21
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x23
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
	.uleb128 0x24
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
	.uleb128 0x25
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
	.uleb128 0x26
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
	.uleb128 0x27
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
	.uleb128 0x28
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x29
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2a
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
	.uleb128 0x21
	.sleb128 13
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
	.uleb128 0x2b
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
	.uleb128 0x2c
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
	.uleb128 0x2d
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
	.uleb128 0x2e
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
	.uleb128 0x2f
	.uleb128 0x34
	.byte	0
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x30
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
	.uleb128 0x31
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
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x33
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
	.uleb128 0x34
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
	.uleb128 0x35
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x36
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x37
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
	.uleb128 0x38
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x39
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
	.uleb128 0x3a
	.uleb128 0x2e
	.byte	0
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
	.uleb128 0x7c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x3b
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
	.uleb128 0x3c
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
	.uleb128 0x3d
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
	.uleb128 .LBB33-.Ltext0
	.uleb128 .LBE33-.Ltext0
	.byte	0x4
	.uleb128 .LBB35-.Ltext0
	.uleb128 .LBE35-.Ltext0
	.byte	0
.LLRL1:
	.byte	0x4
	.uleb128 .LBB34-.Ltext0
	.uleb128 .LBE34-.Ltext0
	.byte	0x4
	.uleb128 .LBB36-.Ltext0
	.uleb128 .LBE36-.Ltext0
	.byte	0
.LLRL2:
	.byte	0x4
	.uleb128 .LBB43-.Ltext0
	.uleb128 .LBE43-.Ltext0
	.byte	0x4
	.uleb128 .LBB44-.Ltext0
	.uleb128 .LBE44-.Ltext0
	.byte	0
.LLRL3:
	.byte	0x4
	.uleb128 .LBB58-.Ltext0
	.uleb128 .LBE58-.Ltext0
	.byte	0x4
	.uleb128 .LBB62-.Ltext0
	.uleb128 .LBE62-.Ltext0
	.byte	0
.LLRL4:
	.byte	0x4
	.uleb128 .LBB64-.Ltext0
	.uleb128 .LBE64-.Ltext0
	.byte	0x4
	.uleb128 .LBB66-.Ltext0
	.uleb128 .LBE66-.Ltext0
	.byte	0
.LLRL5:
	.byte	0x4
	.uleb128 .LBB70-.Ltext0
	.uleb128 .LBE70-.Ltext0
	.byte	0x4
	.uleb128 .LBB72-.Ltext0
	.uleb128 .LBE72-.Ltext0
	.byte	0
.LLRL6:
	.byte	0x4
	.uleb128 .LBB95-.Ltext0
	.uleb128 .LBE95-.Ltext0
	.byte	0x4
	.uleb128 .LBB96-.Ltext0
	.uleb128 .LBE96-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF198:
	.string	"newi"
.LASF119:
	.string	"get_current_file_table"
.LASF146:
	.string	"left"
.LASF220:
	.string	"last"
.LASF142:
	.string	"fs_size"
.LASF180:
	.string	"fs_rename"
.LASF51:
	.string	"vaddr"
.LASF160:
	.string	"created_new"
.LASF227:
	.string	"is_stdout"
.LASF131:
	.string	"oldfd"
.LASF266:
	.string	"inode_blockno"
.LASF122:
	.string	"strlen"
.LASF132:
	.string	"newfd"
.LASF126:
	.string	"strncmp"
.LASF314:
	.string	"mw32"
.LASF98:
	.string	"flags"
.LASF269:
	.string	"alloc_data_block"
.LASF263:
	.string	"secondbuf"
.LASF309:
	.string	"mr32"
.LASF100:
	.string	"virtq_used_elem"
.LASF11:
	.string	"unsigned int"
.LASF61:
	.string	"next"
.LASF217:
	.string	"leafname"
.LASF192:
	.string	"zero"
.LASF35:
	.string	"addrs"
.LASF129:
	.string	"kalloc_pages"
.LASF169:
	.string	"fs_chown"
.LASF207:
	.string	"remove_dirent"
.LASF189:
	.string	"fs_unlink"
.LASF258:
	.string	"idx2"
.LASF167:
	.string	"fs_open"
.LASF238:
	.string	"build_abs_normalized"
.LASF165:
	.string	"pdi_inh"
.LASF200:
	.string	"merged"
.LASF219:
	.string	"save"
.LASF230:
	.string	"fs_init"
.LASF52:
	.string	"memsz"
.LASF31:
	.string	"mode"
.LASF300:
	.string	"devQ"
.LASF96:
	.string	"virtq_desc"
.LASF95:
	.string	"g_time_offset"
.LASF203:
	.string	"compn"
.LASF202:
	.string	"comps"
.LASF212:
	.string	"ents"
.LASF175:
	.string	"fs_link"
.LASF90:
	.string	"FK_FILE"
.LASF10:
	.string	"uint32_t"
.LASF99:
	.string	"ring"
.LASF292:
	.string	"fs_now"
.LASF170:
	.string	"fs_chmod"
.LASF145:
	.string	"to_total"
.LASF268:
	.string	"dbl_index1"
.LASF229:
	.string	"is_pipe"
.LASF272:
	.string	"free_inode_blocks"
.LASF289:
	.string	"shift"
.LASF50:
	.string	"stack_top"
.LASF91:
	.string	"FK_PIPE"
.LASF62:
	.string	"umask"
.LASF137:
	.string	"result"
.LASF57:
	.string	"file_table"
.LASF177:
	.string	"newpath"
.LASF208:
	.string	"parent_inum"
.LASF42:
	.string	"pte_t"
.LASF124:
	.string	"strncpy"
.LASF82:
	.string	"write_open"
.LASF21:
	.string	"nlog"
.LASF153:
	.string	"bufblk"
.LASF213:
	.string	"cur_entries"
.LASF121:
	.string	"strncat"
.LASF279:
	.string	"bmapblk"
.LASF67:
	.string	"kind"
.LASF259:
	.string	"dindirect_blk"
.LASF194:
	.string	"pdi2"
.LASF34:
	.string	"ctime"
.LASF183:
	.string	"oldpd"
.LASF298:
	.string	"virtio_blk_init"
.LASF69:
	.string	"pipe"
.LASF136:
	.string	"owner"
.LASF249:
	.string	"joined"
.LASF243:
	.string	"fs_realpath"
.LASF40:
	.string	"stat"
.LASF247:
	.string	"lbuf"
.LASF56:
	.string	"xstatus"
.LASF68:
	.string	"used"
.LASF262:
	.string	"first_blk"
.LASF286:
	.string	"read_inode"
.LASF130:
	.string	"puts"
.LASF251:
	.string	"prefix"
.LASF15:
	.string	"size_t"
.LASF274:
	.string	"dblk"
.LASF255:
	.string	"offset"
.LASF296:
	.string	"virtio_blk_read"
.LASF232:
	.string	"pipealloc"
.LASF222:
	.string	"next_inum"
.LASF111:
	.string	"status_byte"
.LASF280:
	.string	"bitmap_set"
.LASF55:
	.string	"program"
.LASF210:
	.string	"add_dirent"
.LASF157:
	.string	"fs_open2"
.LASF149:
	.string	"blk_idx"
.LASF135:
	.string	"fs_dup_table"
.LASF63:
	.string	"supp_gids"
.LASF171:
	.string	"fs_lstat"
.LASF76:
	.string	"num_owner_process"
.LASF117:
	.string	"gFreeFiles"
.LASF28:
	.string	"major"
.LASF187:
	.string	"linkpath"
.LASF158:
	.string	"path"
.LASF246:
	.string	"first"
.LASF106:
	.string	"vbase"
.LASF277:
	.string	"second"
.LASF252:
	.string	"path_lookup"
.LASF191:
	.string	"pdir"
.LASF144:
	.string	"count"
.LASF241:
	.string	"owner_cap"
.LASF113:
	.string	"block_buf"
.LASF161:
	.string	"leaf"
.LASF101:
	.string	"virtq_avail"
.LASF293:
	.string	"write_block"
.LASF39:
	.string	"char"
.LASF133:
	.string	"fs_dup2"
.LASF253:
	.string	"dir_lookup"
.LASF89:
	.string	"FK_STDERR"
.LASF173:
	.string	"bufsz"
.LASF239:
	.string	"owner_remove"
.LASF288:
	.string	"check_perm"
.LASF53:
	.string	"zombie"
.LASF78:
	.string	"data"
.LASF281:
	.string	"bitmap_test"
.LASF105:
	.string	"sector"
.LASF256:
	.string	"inode_bmap_alloc"
.LASF204:
	.string	"llen"
.LASF41:
	.string	"ssize_t"
.LASF66:
	.string	"file"
.LASF181:
	.string	"oname"
.LASF6:
	.string	"uint8_t"
.LASF305:
	.string	"sz_total"
.LASF276:
	.string	"sbuf"
.LASF92:
	.string	"FK_TTY"
.LASF109:
	.string	"vq_area"
.LASF116:
	.string	"gFreePipes"
.LASF20:
	.string	"ninodes"
.LASF233:
	.string	"user_va"
.LASF115:
	.string	"gFiles"
.LASF84:
	.string	"nwriter"
.LASF77:
	.string	"spipe"
.LASF307:
	.string	"vq_phys"
.LASF94:
	.string	"gActiveProc"
.LASF261:
	.string	"first_entries"
.LASF257:
	.string	"idx1"
.LASF16:
	.string	"long long int"
.LASF311:
	.string	"yield"
.LASF118:
	.string	"panic"
.LASF24:
	.string	"bmapstart"
.LASF209:
	.string	"namebuf"
.LASF120:
	.string	"printf"
.LASF197:
	.string	"fs_mkdir"
.LASF179:
	.string	"newabs"
.LASF245:
	.string	"depth"
.LASF223:
	.string	"pipewrite"
.LASF48:
	.string	"context"
.LASF250:
	.string	"path_lookup_lim"
.LASF224:
	.string	"piperead"
.LASF226:
	.string	"is_tty"
.LASF152:
	.string	"disk_blk"
.LASF154:
	.string	"fs_read"
.LASF295:
	.string	"read_block"
.LASF148:
	.string	"newsize"
.LASF128:
	.string	"memset"
.LASF260:
	.string	"firstbuf"
.LASF156:
	.string	"to_read"
.LASF306:
	.string	"npages"
.LASF172:
	.string	"fs_readlink"
.LASF18:
	.string	"size"
.LASF74:
	.string	"free_next"
.LASF231:
	.string	"new_file_table"
.LASF29:
	.string	"minor"
.LASF141:
	.string	"fs_close"
.LASF47:
	.string	"trapframe"
.LASF54:
	.string	"pagetable"
.LASF88:
	.string	"FK_STDOUT"
.LASF185:
	.string	"fs_symlink"
.LASF70:
	.string	"pipe_used"
.LASF264:
	.string	"second_entries"
.LASF283:
	.string	"inodes_per_blk"
.LASF188:
	.string	"tlen"
.LASF221:
	.string	"nexttok"
.LASF235:
	.string	"alloc_file"
.LASF304:
	.string	"sz_used"
.LASF81:
	.string	"read_open"
.LASF294:
	.string	"virtio_blk_write"
.LASF17:
	.string	"long double"
.LASF26:
	.string	"dinode"
.LASF8:
	.string	"uint16_t"
.LASF218:
	.string	"copy"
.LASF151:
	.string	"to_write"
.LASF299:
	.string	"devfeat"
.LASF36:
	.string	"dirent"
.LASF248:
	.string	"remain"
.LASF71:
	.string	"read_pipe"
.LASF43:
	.string	"pagetable_t"
.LASF301:
	.string	"drvQ"
.LASF162:
	.string	"new_inum"
.LASF290:
	.string	"perms"
.LASF49:
	.string	"parent"
.LASF242:
	.string	"dump_inode"
.LASF3:
	.string	"short int"
.LASF313:
	.string	"read_superblock"
.LASF184:
	.string	"filedi"
.LASF4:
	.string	"long int"
.LASF80:
	.string	"nwrite"
.LASF176:
	.string	"oldpath"
.LASF65:
	.string	"username"
.LASF44:
	.string	"context_t"
.LASF108:
	.string	"avail"
.LASF278:
	.string	"bitmap_clear"
.LASF86:
	.string	"num_linked_file"
.LASF273:
	.string	"iblk"
.LASF12:
	.string	"uint64_t"
.LASF228:
	.string	"is_stdin"
.LASF134:
	.string	"free_fs_table"
.LASF312:
	.string	"file_system_init"
.LASF201:
	.string	"tok_start"
.LASF155:
	.string	"remaining"
.LASF234:
	.string	"free_file"
.LASF125:
	.string	"strcmp"
.LASF186:
	.string	"target"
.LASF60:
	.string	"deleted"
.LASF178:
	.string	"oldabs"
.LASF143:
	.string	"fs_write"
.LASF114:
	.string	"gPipes"
.LASF174:
	.string	"fs_stat"
.LASF38:
	.string	"name"
.LASF140:
	.string	"massive"
.LASF72:
	.string	"write_pipe"
.LASF236:
	.string	"free_pipe"
.LASF59:
	.string	"num_process_kalloc_address"
.LASF14:
	.string	"uintptr_t"
.LASF270:
	.string	"bmapblocks"
.LASF73:
	.string	"oflags"
.LASF46:
	.string	"proc"
.LASF33:
	.string	"mtime"
.LASF139:
	.string	"fs_exit"
.LASF190:
	.string	"pdi3"
.LASF13:
	.string	"long unsigned int"
.LASF22:
	.string	"logstart"
.LASF291:
	.string	"member"
.LASF302:
	.string	"sz_desc"
.LASF240:
	.string	"owner_add"
.LASF182:
	.string	"nname"
.LASF5:
	.string	"int32_t"
.LASF93:
	.string	"gProc"
.LASF254:
	.string	"read_data"
.LASF138:
	.string	"orig"
.LASF205:
	.string	"need"
.LASF310:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mno-small-data-limit=0 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -fno-pie -ffreestanding"
.LASF303:
	.string	"sz_avail"
.LASF199:
	.string	"outsz"
.LASF75:
	.string	"owner_processes"
.LASF267:
	.string	"dbl_index0"
.LASF308:
	.string	"base"
.LASF64:
	.string	"nsupp"
.LASF27:
	.string	"type"
.LASF25:
	.string	"superblock"
.LASF7:
	.string	"unsigned char"
.LASF285:
	.string	"BBLOCK"
.LASF150:
	.string	"blk_off"
.LASF103:
	.string	"virtio_blk_req"
.LASF37:
	.string	"inum"
.LASF110:
	.string	"aidx"
.LASF237:
	.string	"alloc_pipe"
.LASF23:
	.string	"inodestart"
.LASF215:
	.string	"alloc_inode_T_FILE"
.LASF123:
	.string	"strtok"
.LASF85:
	.string	"linked_file"
.LASF164:
	.string	"leafx"
.LASF97:
	.string	"addr"
.LASF275:
	.string	"sblk"
.LASF284:
	.string	"blkno"
.LASF58:
	.string	"process_kalloc_address"
.LASF282:
	.string	"write_inode"
.LASF216:
	.string	"path_parent_lookup_abs"
.LASF30:
	.string	"nlink"
.LASF271:
	.string	"datastart"
.LASF19:
	.string	"nblocks"
.LASF79:
	.string	"nread"
.LASF163:
	.string	"pinum"
.LASF2:
	.string	"signed char"
.LASF193:
	.string	"fs_rmdir"
.LASF265:
	.string	"indirect_blk"
.LASF9:
	.string	"short unsigned int"
.LASF166:
	.string	"want"
.LASF127:
	.string	"memcpy"
.LASF112:
	.string	"dma_buf"
.LASF196:
	.string	"entries"
.LASF214:
	.string	"abs_idx"
.LASF104:
	.string	"reserved"
.LASF211:
	.string	"child_inum"
.LASF147:
	.string	"written"
.LASF159:
	.string	"path2"
.LASF225:
	.string	"pipe_open"
.LASF102:
	.string	"virtq_used"
.LASF244:
	.string	"rest"
.LASF83:
	.string	"nreader"
.LASF45:
	.string	"mepc"
.LASF168:
	.string	"fs_utimes"
.LASF297:
	.string	"set_flags"
.LASF107:
	.string	"desc"
.LASF32:
	.string	"atime"
.LASF195:
	.string	"has_entries"
.LASF287:
	.string	"dest"
.LASF206:
	.string	"write_data_inode"
.LASF87:
	.string	"FK_STDIN"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
