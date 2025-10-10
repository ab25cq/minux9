	.file	"fs.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/ab25cq/minux9-dev" "fs.c"
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
	.loc 1 197 1
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
	.loc 1 198 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 199 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 200 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 201 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 203 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 203 20
	lla	a4,req
	.loc 1 203 18
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
	.loc 1 203 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 203 51
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
	.loc 1 203 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 203 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 204 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 204 20
	lla	a4,dma_buf
	.loc 1 204 18
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
	.loc 1 204 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 204 51
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
	.loc 1 204 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 204 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 205 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 205 20
	lla	a4,status_byte
	.loc 1 205 18
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
	.loc 1 205 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 205 57
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
	.loc 1 207 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 209 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 209 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 209 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 210 5
	fence	rw,rw
	.loc 1 211 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 211 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 211 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 211 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 213 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 215 10
	j	.L25
.L26:
	.loc 1 216 9
	fence	rw,rw
.L25:
	.loc 1 215 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 218 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 219 1
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
	.local	bcache
	.comm	bcache,16896,8
	.local	bcache_time
	.comm	bcache_time,4,4
	.local	bcache_hits
	.comm	bcache_hits,4,4
	.local	bcache_misses
	.comm	bcache_misses,4,4
	.align	1
	.globl	bcache_init
	.type	bcache_init, @function
bcache_init:
.LFB7:
	.loc 1 241 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
.LBB4:
	.loc 1 242 14
	sw	zero,-20(s0)
	.loc 1 242 5
	j	.L28
.L29:
	.loc 1 243 25
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 1 244 26
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,516(a5)
	.loc 1 245 25
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 1 246 28
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,524(a5)
	.loc 1 242 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L28:
	.loc 1 242 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L29
.LBE4:
	.loc 1 248 17
	lla	a5,bcache_hits
	sw	zero,0(a5)
	.loc 1 249 19
	lla	a5,bcache_misses
	sw	zero,0(a5)
	.loc 1 250 1
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
	.size	bcache_init, .-bcache_init
	.section	.rodata
	.align	3
.LC5:
	.string	"Block cache stats: hits=%u misses=%u hit_rate=%u%%\n"
	.text
	.align	1
	.globl	bcache_stats
	.type	bcache_stats, @function
bcache_stats:
.LFB8:
	.loc 1 253 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 254 5
	lla	a5,bcache_hits
	lw	a1,0(a5)
	lla	a5,bcache_misses
	lw	a2,0(a5)
	.loc 1 256 25
	lla	a5,bcache_hits
	lw	a4,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 254 5
	beq	a5,zero,.L31
	.loc 1 256 61
	lla	a5,bcache_hits
	lw	a4,0(a5)
	li	a5,100
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 256 82
	lla	a5,bcache_hits
	lw	a3,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 254 5 discriminator 1
	divuw	a5,a4,a5
	sext.w	a5,a5
	j	.L32
.L31:
	.loc 1 254 5 is_stmt 0 discriminator 2
	li	a5,0
.L32:
	.loc 1 254 5 discriminator 4
	mv	a3,a5
	lla	a0,.LC5
	call	printf
	.loc 1 257 1 is_stmt 1
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
.LFE8:
	.size	bcache_stats, .-bcache_stats
	.align	1
	.type	bcache_evict, @function
bcache_evict:
.LFB9:
	.loc 1 261 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 262 9
	li	a5,-1
	sw	a5,-20(s0)
	.loc 1 263 14
	li	a5,-1
	sw	a5,-24(s0)
.LBB5:
	.loc 1 266 14
	sw	zero,-28(s0)
	.loc 1 266 5
	j	.L34
.L36:
	.loc 1 267 22
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 1 267 12
	bne	a5,zero,.L35
	.loc 1 267 47 discriminator 1
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,524(a5)
	.loc 1 267 35 discriminator 1
	lw	a4,-24(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L35
	.loc 1 268 20
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,524(a5)
	sw	a5,-24(s0)
	.loc 1 269 20
	lw	a5,-28(s0)
	sw	a5,-20(s0)
.L35:
	.loc 1 266 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L34:
	.loc 1 266 23 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L36
.LBE5:
	.loc 1 273 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L37
	.loc 1 275 27
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 1 275 12
	beq	a5,zero,.L38
	.loc 1 275 51 discriminator 1
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 275 34 discriminator 1
	beq	a5,zero,.L38
	.loc 1 276 44
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 276 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 1 276 66
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 276 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L38:
	.loc 1 278 30
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 1 279 30
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
.L37:
	.loc 1 282 12
	lw	a5,-20(s0)
	.loc 1 283 1
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
.LFE9:
	.size	bcache_evict, .-bcache_evict
	.align	1
	.type	bcache_get, @function
bcache_get:
.LFB10:
	.loc 1 287 1
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
	.loc 1 288 16
	lla	a5,bcache_time
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_time
	sw	a4,0(a5)
.LBB6:
	.loc 1 291 14
	sw	zero,-20(s0)
	.loc 1 291 5
	j	.L41
.L44:
	.loc 1 292 22
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 292 12
	lw	a4,-36(s0)
	sext.w	a4,a4
	bne	a4,a5,.L42
	.loc 1 293 22
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 1 293 29
	addiw	a5,a5,1
	sext.w	a3,a5
	lla	a2,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,516(a5)
	.loc 1 294 32
	lla	a5,bcache_time
	lw	a3,0(a5)
	lla	a2,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,524(a5)
	.loc 1 295 24
	lla	a5,bcache_hits
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_hits
	sw	a4,0(a5)
	.loc 1 296 20
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	j	.L43
.L42:
	.loc 1 291 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L41:
	.loc 1 291 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L44
.LBE6:
	.loc 1 301 18
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_misses
	sw	a4,0(a5)
	.loc 1 302 9
	li	a5,-1
	sw	a5,-24(s0)
.LBB7:
	.loc 1 303 14
	sw	zero,-28(s0)
	.loc 1 303 5
	j	.L45
.L48:
	.loc 1 304 22
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 304 12
	bne	a5,zero,.L46
	.loc 1 305 18
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 306 13
	j	.L47
.L46:
	.loc 1 303 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L45:
	.loc 1 303 23 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L48
.L47:
.LBE7:
	.loc 1 311 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L49
	.loc 1 312 16
	call	bcache_evict
	mv	a5,a0
	sw	a5,-24(s0)
.L49:
	.loc 1 315 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L50
	.loc 1 317 14
	sw	zero,-24(s0)
	.loc 1 318 25
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 1 318 12
	beq	a5,zero,.L50
	.loc 1 319 42
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 319 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 1 319 62
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 319 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L50:
	.loc 1 324 24
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 325 24
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 1 326 25
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	li	a4,1
	sw	a4,516(a5)
	.loc 1 327 27
	lla	a5,bcache_time
	lw	a3,0(a5)
	lla	a2,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,524(a5)
	.loc 1 328 5
	lwu	a3,-36(s0)
	.loc 1 328 40
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 328 5
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_read
	.loc 1 330 12
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.L43:
	.loc 1 331 1
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
.LFE10:
	.size	bcache_get, .-bcache_get
	.align	1
	.type	bcache_release, @function
bcache_release:
.LFB11:
	.loc 1 335 1
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
	.loc 1 336 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 336 8
	beq	a5,zero,.L53
	.loc 1 337 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 337 19
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-24(s0)
	sw	a4,516(a5)
.L53:
	.loc 1 339 1
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
.LFE11:
	.size	bcache_release, .-bcache_release
	.align	1
	.globl	read_block
	.type	read_block, @function
read_block:
.LFB12:
	.loc 1 342 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 343 31
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	sd	a0,-24(s0)
	.loc 1 344 19
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 344 5
	li	a2,512
	mv	a1,a5
	ld	a0,-48(s0)
	call	memcpy
	.loc 1 345 5
	ld	a0,-24(s0)
	call	bcache_release
	.loc 1 346 1
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
.LFE12:
	.size	read_block, .-read_block
	.align	1
	.type	virtio_blk_write, @function
virtio_blk_write:
.LFB13:
	.loc 1 349 1
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
	.loc 1 350 14
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 351 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 352 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 353 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 355 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 357 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 357 20
	lla	a4,req
	.loc 1 357 18
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
	.loc 1 357 47
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 357 55
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
	.loc 1 357 77
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 357 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 358 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 358 20
	lla	a4,dma_buf
	.loc 1 358 18
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
	.loc 1 358 47
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 358 55
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
	.loc 1 358 77
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 358 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 359 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 359 20
	lla	a4,status_byte
	.loc 1 359 18
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
	.loc 1 359 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 359 56
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
	.loc 1 361 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 363 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 363 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 363 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 364 5
	fence	rw,rw
	.loc 1 365 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 365 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 365 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 365 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 367 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 369 10
	j	.L56
.L57:
	.loc 1 370 9
	fence	rw,rw
.L56:
	.loc 1 369 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L57
	.loc 1 371 1
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
.LFE13:
	.size	virtio_blk_write, .-virtio_blk_write
	.align	1
	.globl	write_block
	.type	write_block, @function
write_block:
.LFB14:
	.loc 1 374 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 375 31
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	sd	a0,-24(s0)
	.loc 1 376 14
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 376 5
	li	a2,512
	ld	a1,-48(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 377 15
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 378 5
	ld	a0,-24(s0)
	call	bcache_release
	.loc 1 379 1
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
.LFE14:
	.size	write_block, .-write_block
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.type	fs_now, @function
fs_now:
.LFB15:
	.loc 1 390 37
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 390 51
 #APP
# 390 "fs.c" 1
	csrr a5, time
# 0 "" 2
 #NO_APP
	sd	a5,-24(s0)
	.loc 1 390 128
	ld	a4,-24(s0)
	lla	a5,.LC6
	ld	a5,0(a5)
	mulhu	a5,a4,a5
	srli	a5,a5,18
	.loc 1 390 115
	sext.w	a4,a5
	.loc 1 390 113
	lla	a5,g_time_offset
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 390 143
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
.LFE15:
	.size	fs_now, .-fs_now
	.align	1
	.type	check_perm, @function
check_perm:
.LFB16:
	.loc 1 398 1
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
	.loc 1 399 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 399 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 400 23
	ld	a5,-56(s0)
	lw	a5,12(a5)
	.loc 1 400 14
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 401 9
	li	a5,6
	sw	a5,-20(s0)
	.loc 1 402 10
	ld	a5,-40(s0)
	lhu	a4,994(a5)
	.loc 1 402 21
	ld	a5,-56(s0)
	lhu	a5,16(a5)
	.loc 1 402 8
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L62
	.loc 1 402 34 discriminator 1
	li	a5,6
	sw	a5,-20(s0)
	j	.L63
.L62:
	.loc 1 403 15
	ld	a5,-40(s0)
	lhu	a4,996(a5)
	.loc 1 403 26
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 403 13
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L64
	.loc 1 403 39 discriminator 1
	li	a5,3
	sw	a5,-20(s0)
	j	.L63
.L64:
.LBB8:
	.loc 1 405 13
	sw	zero,-24(s0)
.LBB9:
	.loc 1 406 18
	sw	zero,-28(s0)
	.loc 1 406 9
	j	.L65
.L68:
	.loc 1 406 54 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-28(s0)
	addi	a5,a5,496
	slli	a5,a5,1
	add	a5,a4,a5
	lhu	a4,6(a5)
	.loc 1 406 63 discriminator 5
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 406 41 discriminator 5
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L66
	.loc 1 406 78 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 406 82
	j	.L67
.L66:
	.loc 1 406 34 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L65:
	.loc 1 406 25 discriminator 4
	ld	a5,-40(s0)
	lw	a5,1016(a5)
	.loc 1 406 23 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L68
.L67:
.LBE9:
	.loc 1 407 28
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L69
	.loc 1 407 28 is_stmt 0 discriminator 1
	li	a5,3
	j	.L70
.L69:
	.loc 1 407 28 discriminator 2
	li	a5,0
.L70:
	.loc 1 407 15 is_stmt 1 discriminator 4
	sw	a5,-20(s0)
.L63:
.LBE8:
	.loc 1 409 23
	lw	a5,-20(s0)
	lw	a4,-44(s0)
	srlw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 409 9
	andi	a5,a5,7
	sw	a5,-48(s0)
	.loc 1 411 15
	lw	a5,-60(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 411 8
	beq	a5,zero,.L71
	.loc 1 411 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 411 26 discriminator 1
	bne	a5,zero,.L71
	.loc 1 411 50 discriminator 2
	li	a5,0
	.loc 1 411 50 is_stmt 0
	j	.L72
.L71:
	.loc 1 412 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 412 8
	beq	a5,zero,.L73
	.loc 1 412 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 412 26 discriminator 1
	bne	a5,zero,.L73
	.loc 1 412 50 discriminator 2
	li	a5,0
	.loc 1 412 50 is_stmt 0
	j	.L72
.L73:
	.loc 1 413 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 413 8
	beq	a5,zero,.L74
	.loc 1 413 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 413 26 discriminator 1
	bne	a5,zero,.L74
	.loc 1 413 50 discriminator 2
	li	a5,0
	.loc 1 413 50 is_stmt 0
	j	.L72
.L74:
	.loc 1 414 12 is_stmt 1
	li	a5,1
.L72:
	.loc 1 415 1
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
.LFE16:
	.size	check_perm, .-check_perm
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB17:
	.loc 1 417 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 418 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 419 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 420 1
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
.LFE17:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB18:
	.loc 1 422 53
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
	.loc 1 423 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L77
	.loc 1 423 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 423 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L78
.L77:
	.loc 1 424 9
	li	a2,88
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 425 9
	j	.L76
.L78:
	.loc 1 429 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 431 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 431 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 431 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 431 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 433 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 433 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 433 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 435 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 436 26
	lwu	a4,-28(s0)
	.loc 1 436 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 437 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L76:
	.loc 1 438 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE18:
	.size	read_inode, .-read_inode
	.align	1
	.type	BBLOCK, @function
BBLOCK:
.LFB19:
	.loc 1 443 42
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
	.loc 1 443 53
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 443 69
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 1 443 64
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 443 77
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
	.size	BBLOCK, .-BBLOCK
	.align	1
	.type	write_inode, @function
write_inode:
.LFB20:
	.loc 1 446 1
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
	.loc 1 447 8
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L87
	.loc 1 447 30 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 447 18 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L87
	.loc 1 448 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 449 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 449 45
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 449 50
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 449 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 450 30
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 450 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 450 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 453 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 454 26
	lwu	a5,-28(s0)
	.loc 1 454 20
	addi	a4,s0,-552
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 455 10
	ld	a4,-40(s0)
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 456 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L82
.L87:
	.loc 1 447 40
	nop
.L82:
	.loc 1 457 1
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE20:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB21:
	.loc 1 460 1
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
	.loc 1 461 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 463 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 464 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 465 19
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 465 16
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 1 465 29
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 465 23
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 465 34
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 466 1
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
.LFE21:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB22:
	.loc 1 469 1
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
	.loc 1 470 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 472 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 473 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 474 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 474 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 474 27
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 474 21
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 474 15
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
	.loc 1 475 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 476 1
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
.LFE22:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	bitmap_clear, @function
bitmap_clear:
.LFB23:
	.loc 1 479 1
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
	.loc 1 480 8
	lw	a5,-548(s0)
	sext.w	a5,a5
	beq	a5,zero,.L95
	.loc 1 481 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 483 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 484 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 485 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 485 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 485 28
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 485 22
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 485 15
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
	.loc 1 486 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L91
.L95:
	.loc 1 480 17
	nop
.L91:
	.loc 1 487 1
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE23:
	.size	bitmap_clear, .-bitmap_clear
	.align	1
	.type	free_inode_blocks, @function
free_inode_blocks:
.LFB24:
	.loc 1 491 1
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
.LBB10:
	.loc 1 493 14
	sw	zero,-20(s0)
	.loc 1 493 5
	j	.L97
.L99:
	.loc 1 494 22
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 494 12
	beq	a5,zero,.L98
	.loc 1 495 13
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 496 26
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L98:
	.loc 1 493 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L97:
	.loc 1 493 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L99
.LBE10:
	.loc 1 501 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	.loc 1 501 8
	beq	a5,zero,.L100
.LBB11:
	.loc 1 502 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	sw	a5,-36(s0)
	.loc 1 503 9
	lw	a5,-36(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 504 19
	lla	a5,block_buf
	sd	a5,-48(s0)
.LBB12:
	.loc 1 505 18
	sw	zero,-24(s0)
	.loc 1 505 9
	j	.L101
.L103:
	.loc 1 506 21
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 506 16
	beq	a5,zero,.L102
	.loc 1 506 43 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 506 26 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L102:
	.loc 1 505 41 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L101:
	.loc 1 505 27 discriminator 1
	lw	a4,-24(s0)
	li	a5,127
	bleu	a4,a5,.L103
.LBE12:
	.loc 1 508 9
	lw	a5,-36(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 509 28
	ld	a5,-608(s0)
	sw	zero,80(a5)
.L100:
.LBE11:
	.loc 1 513 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	.loc 1 513 8
	beq	a5,zero,.L104
.LBB13:
	.loc 1 514 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	sw	a5,-52(s0)
	.loc 1 515 9
	lw	a5,-52(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 516 19
	lla	a5,block_buf
	sd	a5,-64(s0)
.LBB14:
	.loc 1 517 18
	sw	zero,-28(s0)
	.loc 1 517 9
	j	.L105
.L112:
.LBB15:
	.loc 1 518 23
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 518 16
	beq	a5,zero,.L113
	.loc 1 519 34
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 519 22
	lw	a5,0(a5)
	sw	a5,-68(s0)
	.loc 1 521 13
	addi	a4,s0,-592
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 522 23
	addi	a5,s0,-592
	sd	a5,-80(s0)
.LBB16:
	.loc 1 523 22
	sw	zero,-32(s0)
	.loc 1 523 13
	j	.L108
.L110:
	.loc 1 524 27
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 524 20
	beq	a5,zero,.L109
	.loc 1 524 51 discriminator 1
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	.loc 1 524 32 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L109:
	.loc 1 523 45 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L108:
	.loc 1 523 31 discriminator 1
	lw	a4,-32(s0)
	li	a5,127
	bleu	a4,a5,.L110
.LBE16:
	.loc 1 526 13
	lw	a5,-68(s0)
	mv	a0,a5
	call	bitmap_clear
	j	.L111
.L113:
	.loc 1 518 28
	nop
.L111:
.LBE15:
	.loc 1 517 41 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L105:
	.loc 1 517 27 discriminator 1
	lw	a4,-28(s0)
	li	a5,127
	bleu	a4,a5,.L112
.LBE14:
	.loc 1 528 9
	lw	a5,-52(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 529 30
	ld	a5,-608(s0)
	sw	zero,84(a5)
.L104:
.LBE13:
	.loc 1 532 14
	ld	a5,-608(s0)
	sw	zero,8(a5)
	.loc 1 533 5
	lw	a5,-596(s0)
	ld	a1,-608(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 534 1
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
.LFE24:
	.size	free_inode_blocks, .-free_inode_blocks
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB25:
	.loc 1 537 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 538 30
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 538 42
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 538 14
	srliw	a5,a5,12
	sw	a5,-24(s0)
	.loc 1 539 29
	lla	a5,sb
	lw	a5,24(a5)
	.loc 1 539 14
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
.LBB17:
	.loc 1 540 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
	.loc 1 540 5
	j	.L115
.L118:
	.loc 1 541 14
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 541 12 discriminator 1
	bne	a5,zero,.L116
.LBB18:
	.loc 1 542 13
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 545 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 546 13
	addi	a4,s0,-544
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 547 20
	lw	a5,-20(s0)
	j	.L117
.L116:
.LBE18:
	.loc 1 540 48 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L115:
	.loc 1 540 40 discriminator 1
	lla	a5,sb
	lw	a5,0(a5)
	.loc 1 540 36 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L118
.LBE17:
	.loc 1 550 12
	li	a5,0
.L117:
	.loc 1 551 1
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
.LFE25:
	.size	alloc_data_block, .-alloc_data_block
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB26:
	.loc 1 553 64
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
	.loc 1 554 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L120
	.loc 1 556 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L121
.L120:
	.loc 1 557 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L122
.LBB19:
	.loc 1 559 18
	ld	a5,-88(s0)
	lw	a5,80(a5)
	sw	a5,-60(s0)
	.loc 1 560 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L123
	.loc 1 560 39 discriminator 1
	li	a5,0
	.loc 1 560 39 is_stmt 0
	j	.L121
.L123:
	.loc 1 561 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 562 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 563 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 563 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L121
.L122:
.LBE19:
.LBB20:
	.loc 1 566 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 567 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 568 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 570 18
	ld	a5,-88(s0)
	lw	a5,84(a5)
	sw	a5,-28(s0)
	.loc 1 571 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L124
	.loc 1 571 40 discriminator 1
	li	a5,0
	.loc 1 571 40 is_stmt 0
	j	.L121
.L124:
	.loc 1 573 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 574 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 575 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 575 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 576 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L125
	.loc 1 576 36 discriminator 1
	li	a5,0
	.loc 1 576 36 is_stmt 0
	j	.L121
.L125:
	.loc 1 579 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 580 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 581 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L121:
.LBE20:
	.loc 1 583 1
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
.LFE26:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB27:
	.loc 1 586 1
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
	.loc 1 587 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L127
	.loc 1 588 22
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 588 12
	bne	a5,zero,.L128
.LBB21:
	.loc 1 589 26
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-100(s0)
	.loc 1 590 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L129
	.loc 1 590 28 discriminator 1
	li	a5,0
	.loc 1 590 28 is_stmt 0
	j	.L143
.L129:
	.loc 1 591 28 is_stmt 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a4,-100(s0)
	sw	a4,0(a5)
	.loc 1 592 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L128:
.LBE21:
	.loc 1 594 25
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L143
.L127:
	.loc 1 597 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L131
.LBB22:
	.loc 1 598 18
	ld	a5,-1664(s0)
	lw	a5,80(a5)
	sw	a5,-20(s0)
	.loc 1 599 12
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L132
.LBB23:
	.loc 1 600 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-80(s0)
	.loc 1 601 16
	lw	a5,-80(s0)
	sext.w	a5,a5
	bne	a5,zero,.L133
	.loc 1 601 29 discriminator 1
	li	a5,0
	.loc 1 601 29 is_stmt 0
	j	.L143
.L133:
	.loc 1 603 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-80(s0)
	sw	a4,80(a5)
	.loc 1 604 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 605 26
	lw	a5,-80(s0)
	sw	a5,-20(s0)
.L132:
.LBE23:
	.loc 1 608 9
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 609 19
	addi	a5,s0,-1640
	sd	a5,-88(s0)
	.loc 1 610 18
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sw	a5,-92(s0)
	.loc 1 611 20
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 611 12
	bne	a5,zero,.L135
.LBB24:
	.loc 1 612 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-96(s0)
	.loc 1 613 16
	lw	a5,-96(s0)
	sext.w	a5,a5
	bne	a5,zero,.L136
	.loc 1 613 29 discriminator 1
	li	a5,0
	.loc 1 613 29 is_stmt 0
	j	.L143
.L136:
	.loc 1 614 20 is_stmt 1
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	.loc 1 614 24
	lw	a4,-96(s0)
	sw	a4,0(a5)
	.loc 1 615 13
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L135:
.LBE24:
	.loc 1 617 23
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L143
.L131:
.LBE22:
	.loc 1 621 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sw	a5,-32(s0)
	.loc 1 622 14
	lw	a5,-32(s0)
	srliw	a5,a5,7
	sw	a5,-36(s0)
	.loc 1 623 14
	lw	a5,-32(s0)
	andi	a5,a5,127
	sw	a5,-40(s0)
	.loc 1 625 14
	ld	a5,-1664(s0)
	lw	a5,84(a5)
	sw	a5,-24(s0)
	.loc 1 626 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L137
.LBB25:
	.loc 1 627 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 628 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L138
	.loc 1 628 25 discriminator 1
	li	a5,0
	.loc 1 628 25 is_stmt 0
	j	.L143
.L138:
	.loc 1 629 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-44(s0)
	sw	a4,84(a5)
	.loc 1 630 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 631 23
	lw	a5,-44(s0)
	sw	a5,-24(s0)
.L137:
.LBE25:
	.loc 1 635 5
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 636 15
	addi	a5,s0,-616
	sd	a5,-56(s0)
	.loc 1 637 39
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 637 14
	lw	a5,0(a5)
	sw	a5,-28(s0)
	.loc 1 638 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L139
.LBB26:
	.loc 1 639 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 640 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L140
	.loc 1 640 25 discriminator 1
	li	a5,0
	.loc 1 640 25 is_stmt 0
	j	.L143
.L140:
	.loc 1 641 22 is_stmt 1
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 641 29
	lw	a4,-60(s0)
	sw	a4,0(a5)
	.loc 1 642 9
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 643 19
	lw	a5,-60(s0)
	sw	a5,-28(s0)
.L139:
.LBE26:
	.loc 1 647 5
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 648 15
	addi	a5,s0,-1128
	sd	a5,-72(s0)
	.loc 1 649 23
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 649 8
	bne	a5,zero,.L141
.LBB27:
	.loc 1 650 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 651 12
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L142
	.loc 1 651 25 discriminator 1
	li	a5,0
	.loc 1 651 25 is_stmt 0
	j	.L143
.L142:
	.loc 1 652 23 is_stmt 1
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 652 30
	lw	a4,-76(s0)
	sw	a4,0(a5)
	.loc 1 653 9
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L141:
.LBE27:
	.loc 1 655 26
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L143:
	.loc 1 656 1
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
.LFE27:
	.size	inode_bmap_alloc, .-inode_bmap_alloc
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB28:
	.loc 1 658 81
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
	.loc 1 659 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 660 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 661 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 663 11
	j	.L145
.L149:
.LBB28:
	.loc 1 664 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 665 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 666 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 667 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L146
	.loc 1 667 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L146:
	.loc 1 669 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 670 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L147
	.loc 1 671 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L148
.L147:
	.loc 1 673 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 674 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L148:
	.loc 1 676 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 677 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 678 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L145:
.LBE28:
	.loc 1 663 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L149
	.loc 1 680 1
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
.LFE28:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB29:
	.loc 1 682 62
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
	.loc 1 683 14
	sw	zero,-20(s0)
	.loc 1 686 11
	j	.L151
.L157:
.LBB29:
	.loc 1 687 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 688 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 689 13
	li	a5,32
	sw	a5,-36(s0)
.LBB30:
	.loc 1 690 18
	sw	zero,-24(s0)
	.loc 1 690 9
	j	.L152
.L156:
	.loc 1 691 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 691 22
	lhu	a5,0(a5)
	.loc 1 691 16
	beq	a5,zero,.L159
	.loc 1 692 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 692 34
	addi	a4,a5,2
	.loc 1 692 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 693 29
	sb	zero,-42(s0)
	.loc 1 694 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 694 16 discriminator 1
	bne	a5,zero,.L154
	.loc 1 695 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 695 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L158
.L159:
	.loc 1 691 34
	nop
.L154:
	.loc 1 690 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L152:
	.loc 1 690 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L156
.LBE30:
	.loc 1 698 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L151:
.LBE29:
	.loc 1 686 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 686 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L157
	.loc 1 700 12
	li	a5,0
.L158:
	.loc 1 701 1
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
.LFE29:
	.size	dir_lookup, .-dir_lookup
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB30:
	.loc 1 705 40
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
	.loc 1 706 12
	li	a1,8
	ld	a0,-24(s0)
	call	path_lookup_lim
	mv	a5,a0
	.loc 1 707 1
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
.LFE30:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC7:
	.string	"/"
	.text
	.align	1
	.type	path_lookup_lim, @function
path_lookup_lim:
.LFB31:
	.loc 1 709 62
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
	.loc 1 710 8
	lw	a5,-1404(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L163
	.loc 1 710 28 discriminator 1
	li	a5,0
	.loc 1 710 28 is_stmt 0
	j	.L187
.L163:
	.loc 1 711 8 is_stmt 1
	ld	a5,-1400(s0)
	beq	a5,zero,.L165
	.loc 1 711 22 discriminator 2
	ld	a5,-1400(s0)
	lbu	a5,0(a5)
	.loc 1 711 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L166
.L165:
	.loc 1 711 41 discriminator 3
	li	a5,0
	.loc 1 711 41 is_stmt 0
	j	.L187
.L166:
	.loc 1 712 9 is_stmt 1
	lla	a1,.LC7
	ld	a0,-1400(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 712 8 discriminator 1
	bne	a5,zero,.L167
	.loc 1 712 40 discriminator 1
	li	a5,1
	.loc 1 712 40 is_stmt 0
	j	.L187
.L167:
	.loc 1 715 5 is_stmt 1
	addi	a5,s0,-144
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 716 12
	lhu	a5,-144(s0)
	.loc 1 716 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L168
	.loc 1 716 35 discriminator 1
	li	a5,0
	.loc 1 716 35 is_stmt 0
	j	.L187
.L168:
	.loc 1 719 5 is_stmt 1
	addi	a5,s0,-400
	li	a2,255
	ld	a1,-1400(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 719 59 discriminator 1
	sb	zero,-145(s0)
	.loc 1 720 11
	addi	a5,s0,-400
	sd	a5,-24(s0)
	.loc 1 722 14
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 723 33
	li	a5,47
	sb	a5,-656(s0)
	.loc 1 723 50
	sb	zero,-655(s0)
	.loc 1 725 11
	j	.L169
.L186:
.LBB31:
	.loc 1 726 14
	sd	zero,-24(s0)
	.loc 1 727 16
	lhu	a5,-144(s0)
	.loc 1 727 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L170
	.loc 1 727 39 discriminator 1
	li	a5,0
	.loc 1 727 39 is_stmt 0
	j	.L187
.L170:
	.loc 1 729 14 is_stmt 1
	addi	a5,s0,-144
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 729 12 discriminator 1
	bne	a5,zero,.L172
	.loc 1 729 47 discriminator 1
	li	a5,0
	.loc 1 729 47 is_stmt 0
	j	.L187
.L172:
	.loc 1 730 25 is_stmt 1
	addi	a5,s0,-144
	ld	a1,-48(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 731 12
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L173
	.loc 1 731 31 discriminator 1
	li	a5,0
	.loc 1 731 31 is_stmt 0
	j	.L187
.L173:
	.loc 1 732 28 is_stmt 1
	addi	a4,s0,-1384
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 733 16
	lhu	a5,-1384(s0)
	.loc 1 733 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L174
.LBB32:
	.loc 1 736 24
	lw	a5,-1376(s0)
	.loc 1 736 17
	sw	a5,-32(s0)
	.loc 1 736 34
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L175
	.loc 1 736 61 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L175:
	.loc 1 737 13
	lw	a3,-32(s0)
	addi	a4,s0,-1296
	addi	a5,s0,-1384
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 738 21
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1280(a5)
	.loc 1 741 23
	sb	zero,-1168(s0)
	.loc 1 742 23
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 743 19
	j	.L176
.L178:
	.loc 1 744 27
	lbu	a5,-1168(s0)
	.loc 1 744 20
	beq	a5,zero,.L177
	.loc 1 744 68 discriminator 1
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 744 32 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L177:
	.loc 1 745 51
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 745 51 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 745 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 746 21
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L176:
	.loc 1 743 20
	ld	a5,-40(s0)
	bne	a5,zero,.L178
	.loc 1 749 21
	lbu	a5,-1296(s0)
	.loc 1 749 16
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L179
	.loc 1 750 17
	addi	a4,s0,-1296
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 751 42
	sb	zero,-657(s0)
	j	.L180
.L179:
	.loc 1 754 17
	addi	a4,s0,-656
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 755 42
	sb	zero,-657(s0)
	.loc 1 756 29
	lbu	a5,-912(s0)
	.loc 1 756 20
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L181
	.loc 1 756 47 discriminator 2
	lbu	a5,-911(s0)
	.loc 1 756 21 discriminator 2
	beq	a5,zero,.L182
.L181:
	.loc 1 756 95 discriminator 3
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 756 95 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 756 59 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L182:
	.loc 1 757 54
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 757 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 757 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1296
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L180:
	.loc 1 759 23
	lbu	a5,-1168(s0)
	.loc 1 759 16
	beq	a5,zero,.L183
	.loc 1 760 53
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 760 53 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 760 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
	.loc 1 761 56
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 761 56 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 761 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1168
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L183:
	.loc 1 763 20
	lw	a5,-1404(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	addi	a5,s0,-912
	mv	a1,a4
	mv	a0,a5
	call	path_lookup_lim
	mv	a5,a0
	j	.L187
.L174:
.LBE32:
	.loc 1 766 13
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 766 25
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
	.loc 1 768 21
	lbu	a5,-656(s0)
	.loc 1 768 12
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L184
	.loc 1 768 39 discriminator 2
	lbu	a5,-655(s0)
	.loc 1 768 13 discriminator 2
	beq	a5,zero,.L185
.L184:
	.loc 1 768 87 discriminator 3
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 768 87 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 768 51 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L185:
	.loc 1 769 45
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 769 45 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 769 9 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	ld	a1,-48(s0)
	mv	a0,a5
	call	strncat
.L169:
.LBE31:
	.loc 1 725 19
	lla	a1,.LC7
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-48(s0)
	.loc 1 725 38 discriminator 1
	ld	a5,-48(s0)
	bne	a5,zero,.L186
	.loc 1 771 12
	lw	a5,-28(s0)
.L187:
	.loc 1 772 1
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
.LFE31:
	.size	path_lookup_lim, .-path_lookup_lim
	.align	1
	.globl	fs_realpath
	.type	fs_realpath, @function
fs_realpath:
.LFB32:
	.loc 1 776 1
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
	.loc 1 777 8
	ld	a5,-1680(s0)
	beq	a5,zero,.L189
	.loc 1 777 14 discriminator 2
	lw	a5,-1684(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L190
.L189:
	.loc 1 777 36 discriminator 3
	li	a5,-1
	.loc 1 777 36 is_stmt 0
	j	.L218
.L190:
	.loc 1 778 20 is_stmt 1
	addi	a5,s0,-328
	ld	a2,-1672(s0)
	li	a1,256
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 780 12
	lbu	a5,-328(s0)
	.loc 1 780 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L192
	.loc 1 780 31 discriminator 1
	li	a5,-1
	.loc 1 780 31 is_stmt 0
	j	.L218
.L192:
	.loc 1 781 9 is_stmt 1
	addi	a5,s0,-328
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 781 8 discriminator 1
	bne	a5,zero,.L193
	.loc 1 781 37 discriminator 1
	lw	a5,-1684(s0)
	sext.w	a4,a5
	li	a5,1
	ble	a4,a5,.L194
	.loc 1 781 57 discriminator 2
	ld	a5,-1680(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 781 66 discriminator 2
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 781 69 discriminator 2
	sb	zero,0(a5)
	.loc 1 781 83 discriminator 2
	li	a5,0
	.loc 1 781 83 is_stmt 0
	j	.L218
.L194:
	.loc 1 781 94 is_stmt 1 discriminator 3
	li	a5,-1
	.loc 1 781 94 is_stmt 0
	j	.L218
.L193:
	.loc 1 782 24 is_stmt 1
	addi	a5,s0,-416
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 783 20
	addi	a4,s0,-328
	addi	a5,s0,-672
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 783 72 discriminator 1
	sb	zero,-417(s0)
	.loc 1 784 11
	addi	a5,s0,-672
	sd	a5,-24(s0)
	.loc 1 785 9
	li	a5,8
	sw	a5,-48(s0)
	.loc 1 785 22
	li	a5,1
	sw	a5,-52(s0)
	.loc 1 785 35
	sw	zero,-28(s0)
	.loc 1 785 45
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 785 43
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 785 48
	li	a4,47
	sb	a4,0(a5)
	.loc 1 785 57
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 785 60
	sb	zero,0(a5)
	.loc 1 786 11
	j	.L195
.L217:
.LBB33:
	.loc 1 787 14
	sd	zero,-24(s0)
	.loc 1 788 16
	lhu	a5,-416(s0)
	.loc 1 788 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L196
	.loc 1 788 39 discriminator 1
	li	a5,-1
	.loc 1 788 39 is_stmt 0
	j	.L218
.L196:
	.loc 1 789 14 is_stmt 1
	addi	a5,s0,-416
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 789 12 discriminator 1
	bne	a5,zero,.L198
	.loc 1 789 47 discriminator 1
	li	a5,-1
	.loc 1 789 47 is_stmt 0
	j	.L218
.L198:
	.loc 1 790 25 is_stmt 1
	addi	a5,s0,-416
	ld	a1,-64(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-68(s0)
	.loc 1 791 12
	lw	a5,-68(s0)
	sext.w	a5,a5
	bne	a5,zero,.L199
	.loc 1 791 27 discriminator 1
	li	a5,-1
	.loc 1 791 27 is_stmt 0
	j	.L218
.L199:
	.loc 1 792 28 is_stmt 1
	addi	a4,s0,-1656
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 793 16
	lhu	a5,-1656(s0)
	.loc 1 793 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L200
.LBB34:
	.loc 1 794 16
	lw	a5,-48(s0)
	addiw	a5,a5,-1
	sw	a5,-48(s0)
	lw	a5,-48(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L201
	.loc 1 794 38 discriminator 1
	li	a5,-1
	.loc 1 794 38 is_stmt 0
	j	.L218
.L201:
	.loc 1 795 40 is_stmt 1
	lw	a5,-1648(s0)
	.loc 1 795 33
	sw	a5,-32(s0)
	.loc 1 795 49
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L203
	.loc 1 795 78 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L203:
	.loc 1 796 13
	lw	a3,-32(s0)
	addi	a4,s0,-1568
	addi	a5,s0,-1656
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 796 63 discriminator 1
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1552(a5)
	.loc 1 797 40
	sb	zero,-1440(s0)
	.loc 1 797 55
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 798 18
	j	.L204
.L206:
	.loc 1 798 32 discriminator 5
	lbu	a5,-1440(s0)
	.loc 1 798 25 discriminator 5
	beq	a5,zero,.L205
	.loc 1 798 73 discriminator 1
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 798 37 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L205:
	.loc 1 798 126 discriminator 3
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 798 126 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 798 92 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 798 147 discriminator 2
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L204:
	.loc 1 798 19 discriminator 4
	ld	a5,-40(s0)
	bne	a5,zero,.L206
	.loc 1 799 39
	lbu	a5,-1568(s0)
	.loc 1 799 34
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L207
	.loc 1 799 51 discriminator 1
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	li	a2,511
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L208
.L207:
	.loc 1 801 26
	sb	zero,-1184(s0)
	.loc 1 801 33
	addi	a5,s0,-1184
	li	a2,511
	ld	a1,-1680(s0)
	mv	a0,a5
	call	strncat
	.loc 1 801 84 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 801 98 discriminator 2
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 801 83 discriminator 2
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 801 76 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L209
	.loc 1 801 146 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 801 110 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L209:
	.loc 1 801 202 discriminator 3
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 801 202 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 801 165 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L208:
	.loc 1 803 23
	lbu	a5,-1440(s0)
	.loc 1 803 16
	beq	a5,zero,.L210
	.loc 1 803 41 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 803 55 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 803 40 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 803 33 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L211
	.loc 1 803 103 discriminator 2
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 803 103 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 803 67 is_stmt 1 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC7
	mv	a0,a5
	call	strncat
.L211:
	.loc 1 803 161 discriminator 4
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 803 161 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 803 122 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1440
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L210:
	.loc 1 804 20
	lw	a4,-1684(s0)
	addi	a5,s0,-1184
	mv	a2,a4
	ld	a1,-1680(s0)
	mv	a0,a5
	call	fs_realpath
	mv	a5,a0
	j	.L218
.L200:
.LBE34:
	.loc 1 807 17
	ld	a0,-64(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-72(s0)
	.loc 1 808 15
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 808 19
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 808 12
	lw	a4,-1684(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L212
	.loc 1 808 40 discriminator 1
	li	a5,-1
	.loc 1 808 40 is_stmt 0
	j	.L218
.L212:
	.loc 1 809 12 is_stmt 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L213
	.loc 1 809 26 discriminator 2
	ld	a5,-1680(s0)
	lbu	a5,0(a5)
	.loc 1 809 13 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L214
.L213:
	.loc 1 809 42 discriminator 3
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 809 40 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 809 45 discriminator 3
	li	a4,47
	sb	a4,0(a5)
.L214:
.LBB35:
	.loc 1 810 17
	sw	zero,-44(s0)
	.loc 1 810 9
	j	.L215
.L216:
	.loc 1 810 42 discriminator 3
	lw	a5,-44(s0)
	ld	a4,-64(s0)
	add	a4,a4,a5
	.loc 1 810 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a3,a5,1
	sw	a3,-28(s0)
	mv	a3,a5
	.loc 1 810 33 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a3
	.loc 1 810 42 discriminator 3
	lbu	a4,0(a4)
	.loc 1 810 38 discriminator 3
	sb	a4,0(a5)
	.loc 1 810 26 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L215:
	.loc 1 810 22 discriminator 1
	lw	a5,-44(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L216
.LBE35:
	.loc 1 810 50 discriminator 4
	lw	a5,-28(s0)
	ld	a4,-1680(s0)
	add	a5,a4,a5
	.loc 1 810 53 discriminator 4
	sb	zero,0(a5)
	.loc 1 811 13
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
.L195:
.LBE33:
	.loc 1 786 19
	lla	a1,.LC7
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-64(s0)
	.loc 1 786 38 discriminator 1
	ld	a5,-64(s0)
	bne	a5,zero,.L217
	.loc 1 813 12
	li	a5,0
.L218:
	.loc 1 814 1
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
.LFE32:
	.size	fs_realpath, .-fs_realpath
	.section	.rodata
	.align	3
.LC8:
	.string	"== i-node %u ==\n"
	.align	3
.LC9:
	.string	"  type  = %u\n"
	.align	3
.LC10:
	.string	"  size  = %u\n"
	.align	3
.LC11:
	.string	"  addrs ="
	.align	3
.LC12:
	.string	" %u"
	.align	3
.LC13:
	.string	" [indirect %u]"
	.align	3
.LC14:
	.string	" [double-indirect %u]"
	.align	3
.LC15:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB33:
	.loc 1 816 32
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
	.loc 1 818 5
	addi	a4,s0,-112
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 819 5
	lw	a5,-116(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 820 32
	lhu	a5,-112(s0)
	.loc 1 820 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC9
	call	printf
	.loc 1 821 5
	lw	a5,-104(s0)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
	.loc 1 822 5
	lla	a0,.LC11
	call	printf
.LBB36:
	.loc 1 823 14
	sw	zero,-20(s0)
	.loc 1 823 5
	j	.L220
.L222:
	.loc 1 824 21
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 824 12
	beq	a5,zero,.L221
	.loc 1 824 31 discriminator 1
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L221:
	.loc 1 823 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L220:
	.loc 1 823 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L222
.LBE36:
	.loc 1 826 17
	lw	a5,-32(s0)
	.loc 1 826 8
	beq	a5,zero,.L223
	.loc 1 827 9
	lw	a5,-32(s0)
	mv	a1,a5
	lla	a0,.LC13
	call	printf
.L223:
	.loc 1 829 17
	lw	a5,-28(s0)
	.loc 1 829 8
	beq	a5,zero,.L224
	.loc 1 830 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC14
	call	printf
.L224:
	.loc 1 832 5
	lla	a0,.LC15
	call	printf
	.loc 1 833 1
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
.LFE33:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB34:
	.loc 1 840 38
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
	.loc 1 841 12
	li	a5,128
	.loc 1 842 1
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
.LFE34:
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB35:
	.loc 1 843 55
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
	.loc 1 844 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB37:
	.loc 1 846 14
	sw	zero,-20(s0)
	.loc 1 846 5
	j	.L228
.L231:
	.loc 1 846 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 846 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L236
	.loc 1 846 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L228:
	.loc 1 846 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L231
.LBE37:
.LBB38:
	.loc 1 848 14
	sw	zero,-24(s0)
	.loc 1 848 5
	j	.L232
.L235:
	.loc 1 849 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 849 12
	bne	a5,zero,.L233
	.loc 1 850 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 851 18
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 851 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L237
	.loc 1 851 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 851 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,1160(a5)
	.loc 1 852 13
	j	.L237
.L233:
	.loc 1 848 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L232:
	.loc 1 848 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L235
	j	.L227
.L236:
.LBE38:
.LBB39:
	.loc 1 846 67
	nop
	j	.L227
.L237:
.LBE39:
.LBB40:
	.loc 1 852 13
	nop
.L227:
.LBE40:
	.loc 1 856 1
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
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB36:
	.loc 1 857 58
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
	.loc 1 858 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 858 29 discriminator 1
	sw	zero,-20(s0)
.LBB41:
	.loc 1 859 14
	sw	zero,-24(s0)
	.loc 1 859 5
	j	.L239
.L242:
	.loc 1 860 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 860 12
	ld	a4,-48(s0)
	bne	a4,a5,.L240
	.loc 1 860 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L240:
	.loc 1 861 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 861 12
	beq	a5,zero,.L241
	.loc 1 861 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L241:
	.loc 1 859 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L239:
	.loc 1 859 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L242
.LBE41:
	.loc 1 863 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,1160(a5)
	.loc 1 864 1
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
.LFE36:
	.size	owner_remove, .-owner_remove
	.globl	gPipes
	.bss
	.align	3
	.type	gPipes, @object
	.size	gPipes, 26112
gPipes:
	.zero	26112
	.globl	gFiles
	.align	3
	.type	gFiles, @object
	.size	gFiles, 37376
gFiles:
	.zero	37376
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
.LFB37:
	.loc 1 877 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 878 5
	li	a5,24576
	addi	a2,a5,1536
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 879 5
	li	a5,36864
	addi	a2,a5,512
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB42:
	.loc 1 881 13
	sw	zero,-20(s0)
	.loc 1 881 5
	j	.L244
.L245:
.LBB43:
	.loc 1 882 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 884 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 885 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE43:
	.loc 1 881 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L244:
	.loc 1 881 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L245
.LBE42:
.LBB44:
	.loc 1 888 13
	sw	zero,-24(s0)
	.loc 1 888 5
	j	.L246
.L247:
.LBB45:
	.loc 1 889 22
	lw	a4,-24(s0)
	li	a5,1168
	mul	a4,a4,a5
	lla	a5,gFiles
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 891 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,128(a5)
	.loc 1 892 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE45:
	.loc 1 888 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L246:
	.loc 1 888 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L247
.LBE44:
	.loc 1 894 1
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
.LFE37:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB38:
	.loc 1 897 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 898 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 900 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 900 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 902 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 904 12
	ld	a5,-24(s0)
	.loc 1 905 1
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
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB39:
	.loc 1 908 1
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
	.loc 1 909 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 910 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 911 1
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
.LFE39:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB40:
	.loc 1 913 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 914 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 914 8
	bne	a5,zero,.L252
	.loc 1 914 29 discriminator 1
	li	a5,0
	.loc 1 914 29 is_stmt 0
	j	.L253
.L252:
	.loc 1 915 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 916 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,128(a5)
	.loc 1 916 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 917 5
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 918 12
	ld	a5,-24(s0)
.L253:
	.loc 1 919 1
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
.LFE40:
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB41:
	.loc 1 923 1
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
	.loc 1 924 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,128(a5)
	.loc 1 925 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 926 1
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
.LFE41:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB42:
	.loc 1 932 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 933 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 935 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 936 8
	ld	a5,-24(s0)
	bne	a5,zero,.L256
	.loc 1 937 16
	li	a5,0
	j	.L257
.L256:
	.loc 1 938 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 939 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 940 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 941 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 942 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 943 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 945 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 946 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 948 12
	ld	a5,-24(s0)
.L257:
	.loc 1 949 1
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
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB43:
	.loc 1 954 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 955 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 956 8
	ld	a5,-24(s0)
	bne	a5,zero,.L259
	.loc 1 956 25 discriminator 1
	li	a5,0
	.loc 1 956 25 is_stmt 0
	j	.L260
.L259:
	.loc 1 958 5 is_stmt 1
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 960 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 962 12
	ld	a5,-24(s0)
.L260:
	.loc 1 963 1
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
.LFE43:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB44:
	.loc 1 966 1
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
	.loc 1 967 5
	li	a2,256
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 969 21
	call	new_file_table
	mv	a4,a0
	.loc 1 969 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 971 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 971 25
	sw	zero,0(a5)
	.loc 1 972 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 972 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 974 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 974 21
	call	new_file_table
	mv	a5,a0
	.loc 1 974 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 976 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 976 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 977 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 977 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 979 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 979 21
	call	new_file_table
	mv	a5,a0
	.loc 1 979 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 981 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 981 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 982 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 982 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 983 1
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
.LFE44:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB45:
	.loc 1 986 1
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
	.loc 1 987 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 996 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L263
	.loc 1 996 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L264
.L263:
	.loc 1 996 48 discriminator 3
	li	a5,0
	.loc 1 996 48 is_stmt 0
	j	.L265
.L264:
	.loc 1 997 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 997 8
	bne	a5,zero,.L266
	.loc 1 997 33 discriminator 1
	li	a5,0
	.loc 1 997 33 is_stmt 0
	j	.L265
.L266:
	.loc 1 998 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 998 24
	lw	a5,100(a5)
	.loc 1 998 8
	bne	a5,zero,.L267
	.loc 1 998 39 discriminator 1
	li	a5,0
	.loc 1 998 39 is_stmt 0
	j	.L265
.L267:
	.loc 1 1000 19 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1000 23
	lw	a4,0(a5)
	.loc 1 1000 8
	li	a5,4
	bne	a4,a5,.L268
	.loc 1 1000 54 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1000 58 discriminator 1
	ld	a5,104(a5)
	.loc 1 1000 41 discriminator 1
	beq	a5,zero,.L268
	.loc 1 1001 16
	li	a5,1
	j	.L265
.L268:
	.loc 1 1003 12
	li	a5,0
.L265:
	.loc 1 1004 1
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
.LFE45:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB46:
	.loc 1 1007 1
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
	.loc 1 1008 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1009 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1009 8
	beq	a5,zero,.L270
	.loc 1 1009 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1009 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 1009 24 discriminator 1
	beq	a5,zero,.L270
	.loc 1 1010 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1010 26
	lw	a5,0(a5)
	.loc 1 1010 11
	bne	a5,zero,.L270
	.loc 1 1011 20
	li	a5,1
	j	.L271
.L270:
	.loc 1 1015 12
	li	a5,0
.L271:
	.loc 1 1016 1
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
.LFE46:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB47:
	.loc 1 1019 1
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
	.loc 1 1020 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1022 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1022 8
	beq	a5,zero,.L273
	.loc 1 1022 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1022 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 1022 24 discriminator 1
	beq	a5,zero,.L273
	.loc 1 1023 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1023 26
	lw	a4,0(a5)
	.loc 1 1023 11
	li	a5,1
	bne	a4,a5,.L273
	.loc 1 1024 20
	li	a5,1
	j	.L274
.L273:
	.loc 1 1028 12
	li	a5,0
.L274:
	.loc 1 1029 1
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
.LFE47:
	.size	is_stdout, .-is_stdout
	.align	1
	.globl	is_tty
	.type	is_tty, @function
is_tty:
.LFB48:
	.loc 1 1032 1
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
	.loc 1 1033 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1034 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L276
	.loc 1 1034 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L277
.L276:
	.loc 1 1034 48 discriminator 3
	li	a5,0
	.loc 1 1034 48 is_stmt 0
	j	.L278
.L277:
	.loc 1 1035 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1035 8
	bne	a5,zero,.L279
	.loc 1 1035 33 discriminator 1
	li	a5,0
	.loc 1 1035 33 is_stmt 0
	j	.L278
.L279:
	.loc 1 1036 23 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1036 27
	lw	a5,0(a5)
	.loc 1 1036 9
	sw	a5,-28(s0)
	.loc 1 1037 63
	lw	a5,-28(s0)
	sext.w	a5,a5
	beq	a5,zero,.L280
	.loc 1 1037 27 discriminator 2
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L280
	.loc 1 1037 45 discriminator 4
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L280
	.loc 1 1037 63 discriminator 6
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,5
	bne	a4,a5,.L281
.L280:
	.loc 1 1037 63 is_stmt 0 discriminator 7
	li	a5,1
	.loc 1 1037 63
	j	.L278
.L281:
	.loc 1 1037 63 discriminator 8
	li	a5,0
.L278:
	.loc 1 1038 1 is_stmt 1
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
.LFE48:
	.size	is_tty, .-is_tty
	.section	.rodata
	.align	3
.LC16:
	.string	"PIPE LINKED MAX"
	.text
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB49:
	.loc 1 1040 36
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
	.loc 1 1041 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1043 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB46:
	.loc 1 1045 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1045 5
	j	.L284
.L289:
	.loc 1 1046 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1046 12
	bne	a5,zero,.L285
	.loc 1 1047 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 1047 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1047 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1049 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1049 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 1050 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1050 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1051 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1051 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1052 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1052 34
	sw	zero,96(a5)
	.loc 1 1053 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1053 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 1054 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1054 38
	li	a4,1
	sw	a4,116(a5)
	.loc 1 1055 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1055 41
	sw	zero,120(a5)
	.loc 1 1056 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 1058 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 1058 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 1059 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 1059 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 1059 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 1059 66
	ld	a4,0(a4)
	.loc 1 1059 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 1060 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 1060 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 1062 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 1062 15
	li	a5,31
	ble	a4,a5,.L296
	.loc 1 1063 17
	lla	a0,.LC16
	call	puts
.L287:
	.loc 1 1064 22
	j	.L287
.L285:
	.loc 1 1045 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L284:
	.loc 1 1045 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L289
	j	.L288
.L296:
	.loc 1 1068 13
	nop
.L288:
.LBE46:
.LBB47:
	.loc 1 1071 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 1071 5
	j	.L290
.L295:
	.loc 1 1072 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1072 12
	bne	a5,zero,.L291
	.loc 1 1073 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 1073 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1073 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1075 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1075 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 1076 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1076 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1077 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1077 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1079 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1079 34
	sw	zero,96(a5)
	.loc 1 1080 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1080 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 1081 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1081 39
	li	a4,1
	sw	a4,120(a5)
	.loc 1 1082 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1082 38
	sw	zero,116(a5)
	.loc 1 1083 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 1085 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 1085 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 1086 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 1086 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 1086 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 1086 66
	ld	a4,0(a4)
	.loc 1 1086 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 1087 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 1087 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 1089 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 1089 15
	li	a5,31
	ble	a4,a5,.L297
	.loc 1 1090 17
	lla	a0,.LC16
	call	puts
.L293:
	.loc 1 1091 22
	j	.L293
.L291:
	.loc 1 1071 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L290:
	.loc 1 1071 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L295
.LBE47:
	.loc 1 1098 1
	j	.L298
.L297:
.LBB48:
	.loc 1 1095 13
	nop
.L298:
.LBE48:
	.loc 1 1098 1
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
.LFE49:
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
.LFB50:
	.loc 1 1108 1
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
	.loc 1 1109 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1111 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1111 8
	bne	a5,zero,.L300
	.loc 1 1112 9
	lla	a0,.LC17
	call	panic
.L300:
	.loc 1 1115 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L301
	.loc 1 1115 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L302
.L301:
	.loc 1 1116 9
	lla	a0,.LC17
	call	panic
.L302:
	.loc 1 1118 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1118 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1120 7
	ld	a5,-32(s0)
	bne	a5,zero,.L304
	.loc 1 1121 9
	lla	a0,.LC17
	call	panic
	.loc 1 1124 11
	j	.L304
.L306:
	.loc 1 1125 8
	call	yield
.L304:
	.loc 1 1124 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1124 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1124 34
	bne	a4,a5,.L305
	.loc 1 1124 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1124 34 discriminator 1
	bne	a5,zero,.L306
.L305:
	.loc 1 1128 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1128 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1128 8
	bne	a4,a5,.L307
	.loc 1 1128 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1128 31 discriminator 1
	bne	a5,zero,.L307
	.loc 1 1129 16
	li	a5,0
	j	.L308
.L307:
	.loc 1 1133 18
	sw	zero,-36(s0)
.LBB49:
	.loc 1 1134 23
	sw	zero,-40(s0)
	.loc 1 1134 5
	j	.L309
.L312:
	.loc 1 1136 12
	call	yield
.L310:
	.loc 1 1135 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1135 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1135 38
	bne	a4,a5,.L311
	.loc 1 1135 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1135 38 discriminator 1
	bne	a5,zero,.L312
.L311:
	.loc 1 1140 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1140 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1140 12
	bne	a4,a5,.L313
	.loc 1 1140 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1140 35 discriminator 1
	beq	a5,zero,.L316
.L313:
	.loc 1 1144 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1144 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 1144 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 1144 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 1144 17
	sb	a4,0(a5)
	.loc 1 1145 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1145 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 1148 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 1134 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L309:
	.loc 1 1134 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 1134 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L314
	.loc 1 1134 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1134 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1134 36 discriminator 3
	bltu	a4,a5,.L310
	j	.L314
.L316:
	.loc 1 1141 13
	nop
.L314:
.LBE49:
	.loc 1 1152 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L308:
	.loc 1 1153 1
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
.LFE50:
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
.LFB51:
	.loc 1 1158 1
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
	.loc 1 1159 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1161 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1161 8
	bne	a5,zero,.L318
	.loc 1 1162 9
	lla	a0,.LC18
	call	panic
.L318:
	.loc 1 1165 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L319
	.loc 1 1165 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L320
.L319:
	.loc 1 1166 9
	lla	a0,.LC18
	call	panic
.L320:
	.loc 1 1168 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1168 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1170 7
	ld	a5,-32(s0)
	bne	a5,zero,.L321
	.loc 1 1171 9
	lla	a0,.LC18
	call	panic
.L321:
.LBB50:
	.loc 1 1174 23
	sw	zero,-36(s0)
	.loc 1 1174 5
	j	.L322
.L325:
	.loc 1 1177 11
	call	yield
.L323:
	.loc 1 1176 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 1176 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1176 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 1176 48
	li	a5,512
	bne	a4,a5,.L324
	.loc 1 1176 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1176 48 discriminator 1
	bne	a5,zero,.L325
.L324:
	.loc 1 1180 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1180 10
	bne	a5,zero,.L326
	.loc 1 1182 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1182 30
	ble	a5,zero,.L327
	.loc 1 1182 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1182 30
	j	.L329
.L327:
	.loc 1 1182 30 discriminator 2
	li	a5,-1
	.loc 1 1182 30
	j	.L329
.L326:
	.loc 1 1184 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 1184 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 1184 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 1184 44
	lbu	a4,0(a5)
	.loc 1 1184 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 1185 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1185 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 1174 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L322:
	.loc 1 1174 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L323
.LBE50:
	.loc 1 1192 12
	lw	a5,-56(s0)
.L329:
	.loc 1 1193 1
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
.LFE51:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB52:
	.loc 1 1205 1
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
	.loc 1 1205 1
	mv	a5,sp
	mv	s1,a5
	.loc 1 1206 8
	ld	a5,-264(s0)
	beq	a5,zero,.L332
	.loc 1 1206 22 discriminator 2
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 1 1206 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L333
.L332:
	.loc 1 1206 41 discriminator 3
	li	a5,0
	.loc 1 1206 41 is_stmt 0
	j	.L334
.L333:
	.loc 1 1207 9 is_stmt 1
	lla	a1,.LC7
	ld	a0,-264(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 1207 8 discriminator 1
	bne	a5,zero,.L335
	.loc 1 1207 40 discriminator 1
	li	a5,0
	.loc 1 1207 40 is_stmt 0
	j	.L334
.L335:
	.loc 1 1210 15 is_stmt 1
	ld	a0,-264(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1210 28 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 1210 10 discriminator 1
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
	.loc 1 1211 5
	mv	a2,a5
	ld	a1,-264(s0)
	ld	a0,-144(s0)
	call	strncpy
	.loc 1 1214 11
	ld	a5,-144(s0)
	sd	a5,-152(s0)
	.loc 1 1215 11
	sd	zero,-104(s0)
	.loc 1 1216 17
	lla	a1,.LC7
	ld	a0,-152(s0)
	call	strtok
	sd	a0,-112(s0)
	.loc 1 1217 14
	li	a5,1
	sw	a5,-116(s0)
	.loc 1 1219 5
	addi	a4,s0,-256
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1221 11
	j	.L336
.L341:
.LBB51:
	.loc 1 1222 25
	lla	a1,.LC7
	li	a0,0
	call	strtok
	sd	a0,-160(s0)
	.loc 1 1223 12
	ld	a5,-160(s0)
	bne	a5,zero,.L337
	.loc 1 1225 18
	ld	a5,-112(s0)
	sd	a5,-104(s0)
	.loc 1 1226 13
	j	.L338
.L337:
	.loc 1 1229 15
	lhu	a5,-256(s0)
	.loc 1 1229 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L339
	.loc 1 1229 38 discriminator 1
	li	a5,0
	.loc 1 1229 38 is_stmt 0
	j	.L334
.L339:
	.loc 1 1230 30 is_stmt 1
	addi	a5,s0,-256
	ld	a1,-112(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 1231 12
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L340
	.loc 1 1231 36 discriminator 1
	li	a5,0
	.loc 1 1231 36 is_stmt 0
	j	.L334
.L340:
	.loc 1 1232 9 is_stmt 1
	addi	a4,s0,-256
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1233 13
	lw	a5,-164(s0)
	sw	a5,-116(s0)
	.loc 1 1234 13
	ld	a5,-160(s0)
	sd	a5,-112(s0)
.L336:
.LBE51:
	.loc 1 1221 12
	ld	a5,-112(s0)
	bne	a5,zero,.L341
.L338:
	.loc 1 1237 8
	ld	a5,-104(s0)
	bne	a5,zero,.L342
	.loc 1 1237 23 discriminator 1
	li	a5,0
	.loc 1 1237 23 is_stmt 0
	j	.L334
.L342:
	.loc 1 1238 18 is_stmt 1
	ld	a5,-272(s0)
	lw	a4,-116(s0)
	sw	a4,0(a5)
	.loc 1 1240 13
	ld	a0,-104(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-120(s0)
	.loc 1 1241 8
	lw	a5,-120(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L343
	.loc 1 1241 23 discriminator 1
	li	a5,14
	sw	a5,-120(s0)
.L343:
.LBB52:
	.loc 1 1242 14
	sw	zero,-124(s0)
	.loc 1 1242 5
	j	.L344
.L345:
	.loc 1 1242 46 discriminator 3
	lw	a5,-124(s0)
	ld	a4,-280(s0)
	add	a5,a4,a5
	.loc 1 1242 50 discriminator 3
	sb	zero,0(a5)
	.loc 1 1242 34 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L344:
	.loc 1 1242 23 discriminator 1
	lw	a5,-124(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L345
.LBE52:
	.loc 1 1243 5
	lw	a5,-120(s0)
	mv	a2,a5
	ld	a1,-104(s0)
	ld	a0,-280(s0)
	call	strncpy
	.loc 1 1244 12
	li	a5,1
.L334:
	mv	sp,s1
	.loc 1 1245 1
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
.LFE52:
	.size	path_parent_lookup_abs, .-path_parent_lookup_abs
	.align	1
	.type	alloc_inode_T_FILE, @function
alloc_inode_T_FILE:
.LFB53:
	.loc 1 1250 1
	.cfi_startproc
	addi	sp,sp,-208
	.cfi_def_cfa_offset 208
	sd	ra,200(sp)
	sd	s0,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,208
	.cfi_def_cfa 8, 0
.LBB53:
	.loc 1 1252 19
	li	a5,1
	sw	a5,-20(s0)
	.loc 1 1252 5
	j	.L348
.L351:
	.loc 1 1253 9
	addi	a4,s0,-112
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1254 15
	lhu	a5,-112(s0)
	.loc 1 1254 12
	bne	a5,zero,.L349
.LBB54:
	.loc 1 1257 13
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1258 23
	li	a5,2
	sh	a5,-200(s0)
	.loc 1 1259 24
	li	a5,1
	sh	a5,-194(s0)
	.loc 1 1260 23
	sw	zero,-192(s0)
	.loc 1 1261 23
	li	a5,420
	sw	a5,-188(s0)
	.loc 1 1261 39
	sh	zero,-184(s0)
	.loc 1 1261 51
	sh	zero,-182(s0)
	.loc 1 1261 94
	call	fs_now
	mv	a5,a0
	.loc 1 1261 92 discriminator 1
	sw	a5,-172(s0)
	.loc 1 1261 85 discriminator 1
	lw	a5,-172(s0)
	.loc 1 1261 79 discriminator 1
	sw	a5,-176(s0)
	.loc 1 1261 72 discriminator 1
	lw	a5,-176(s0)
	.loc 1 1261 66 discriminator 1
	sw	a5,-180(s0)
	.loc 1 1262 13
	addi	a4,s0,-200
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1263 20
	lw	a5,-20(s0)
	j	.L352
.L349:
.LBE54:
	.loc 1 1252 53 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L348:
	.loc 1 1252 39 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1252 34 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L351
.LBE53:
	.loc 1 1266 12
	li	a5,0
.L352:
	.loc 1 1267 1
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
.LFE53:
	.size	alloc_inode_T_FILE, .-alloc_inode_T_FILE
	.align	1
	.type	add_dirent, @function
add_dirent:
.LFB54:
	.loc 1 1272 1
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
	.loc 1 1273 8
	ld	a5,-720(s0)
	beq	a5,zero,.L354
	.loc 1 1273 22 discriminator 2
	ld	a5,-720(s0)
	lbu	a5,0(a5)
	.loc 1 1273 15 discriminator 2
	bne	a5,zero,.L355
.L354:
	.loc 1 1273 42 discriminator 3
	li	a5,-1
	.loc 1 1273 42 is_stmt 0
	j	.L368
.L355:
	.loc 1 1276 5 is_stmt 1
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1277 12
	lhu	a5,-176(s0)
	.loc 1 1277 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L357
	.loc 1 1277 35 discriminator 1
	li	a5,-1
	.loc 1 1277 35 is_stmt 0
	j	.L368
.L357:
	.loc 1 1281 15 is_stmt 1
	lw	a5,-712(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 1281 13
	sh	a5,-192(s0)
.LBB55:
	.loc 1 1283 14
	sw	zero,-20(s0)
	.loc 1 1283 5
	j	.L358
.L359:
	.loc 1 1283 49 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-174(a5)
	.loc 1 1283 34 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L358:
	.loc 1 1283 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L359
.LBE55:
	.loc 1 1284 5
	addi	a5,s0,-192
	addi	a5,a5,2
	li	a2,14
	ld	a1,-720(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1287 14
	sw	zero,-24(s0)
	.loc 1 1288 11
	j	.L360
.L366:
.LBB56:
	.loc 1 1289 9
	lw	a4,-24(s0)
	addi	a5,s0,-176
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1290 24
	lla	a5,block_buf
	sd	a5,-64(s0)
	.loc 1 1291 13
	li	a5,32
	sw	a5,-68(s0)
.LBB57:
	.loc 1 1292 18
	sw	zero,-28(s0)
	.loc 1 1292 9
	j	.L361
.L365:
	.loc 1 1293 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1293 24
	lhu	a5,0(a5)
	.loc 1 1293 16
	bne	a5,zero,.L362
.LBB58:
	.loc 1 1294 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1294 25
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
	.loc 1 1296 26
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-72(s0)
	.loc 1 1297 37
	lw	a3,-72(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 1298 20
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L363
	.loc 1 1298 39 discriminator 1
	li	a5,-1
	.loc 1 1298 39 is_stmt 0
	j	.L368
.L363:
	.loc 1 1299 17 is_stmt 1
	lw	a5,-76(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_block
	.loc 1 1302 43
	lw	a5,-168(s0)
	.loc 1 1302 26
	srliw	a5,a5,4
	sw	a5,-80(s0)
	.loc 1 1303 41
	lw	a5,-24(s0)
	srliw	a5,a5,4
	sext.w	a4,a5
	.loc 1 1303 78
	lw	a5,-28(s0)
	.loc 1 1303 26
	addw	a5,a4,a5
	sw	a5,-84(s0)
	.loc 1 1304 20
	lw	a5,-84(s0)
	mv	a4,a5
	lw	a5,-80(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bltu	a4,a5,.L364
	.loc 1 1305 41
	lw	a5,-84(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 1305 46
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1305 30
	sw	a5,-168(s0)
	.loc 1 1306 33
	call	fs_now
	mv	a5,a0
	.loc 1 1306 31 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1307 21
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
.L364:
	.loc 1 1309 24
	li	a5,0
	j	.L368
.L362:
.LBE58:
	.loc 1 1292 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L361:
	.loc 1 1292 27 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-68(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L365
.LBE57:
	.loc 1 1312 13
	lw	a5,-24(s0)
	addiw	a5,a5,512
	sw	a5,-24(s0)
.L360:
.LBE56:
	.loc 1 1288 21
	lw	a5,-168(s0)
	.loc 1 1288 16
	lw	a4,-24(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L366
	.loc 1 1316 23
	lw	a5,-168(s0)
	.loc 1 1316 14
	srliw	a5,a5,4
	sw	a5,-32(s0)
	.loc 1 1317 29
	lwu	a5,-32(s0)
	slli	a5,a5,4
	.loc 1 1317 54
	srli	a5,a5,9
	.loc 1 1317 14
	sw	a5,-36(s0)
	.loc 1 1318 29
	lw	a5,-32(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1318 14
	andi	a5,a5,496
	sw	a5,-40(s0)
	.loc 1 1319 25
	lw	a3,-36(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 1320 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L367
	.loc 1 1320 27 discriminator 1
	li	a5,-1
	.loc 1 1320 27 is_stmt 0
	j	.L368
.L367:
	.loc 1 1323 5 is_stmt 1
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1324 20
	addi	a5,s0,-704
	sd	a5,-56(s0)
	.loc 1 1325 19
	lw	a5,-40(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 1325 9
	slli	a5,a5,4
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 1325 45
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
	.loc 1 1326 5
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1328 8
	lw	a5,-168(s0)
	.loc 1 1328 14
	addiw	a5,a5,16
	sext.w	a5,a5
	sw	a5,-168(s0)
	.loc 1 1329 17
	call	fs_now
	mv	a5,a0
	.loc 1 1329 15 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1330 5
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1331 12
	li	a5,0
.L368:
	.loc 1 1332 1
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
.LFE54:
	.size	add_dirent, .-add_dirent
	.align	1
	.type	remove_dirent, @function
remove_dirent:
.LFB55:
	.loc 1 1336 1
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
	.loc 1 1338 5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1339 12
	lhu	a5,-128(s0)
	.loc 1 1339 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L370
	.loc 1 1339 35 discriminator 1
	li	a5,-1
	.loc 1 1339 35 is_stmt 0
	j	.L378
.L370:
	.loc 1 1341 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1343 11
	j	.L372
.L377:
.LBB59:
	.loc 1 1344 9
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
	.loc 1 1344 9 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1345 24 is_stmt 1
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 1346 13
	li	a5,32
	sw	a5,-36(s0)
.LBB60:
	.loc 1 1347 18
	sw	zero,-24(s0)
	.loc 1 1347 9
	j	.L373
.L376:
	.loc 1 1348 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1348 22
	lhu	a5,0(a5)
	.loc 1 1348 16
	beq	a5,zero,.L379
	.loc 1 1349 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1349 34
	addi	a4,a5,2
	.loc 1 1349 13
	addi	a5,s0,-144
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 1350 29
	sb	zero,-130(s0)
	.loc 1 1351 17
	addi	a5,s0,-144
	li	a2,14
	ld	a1,-160(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 1351 16 discriminator 1
	bne	a5,zero,.L375
	.loc 1 1352 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1352 28
	sh	zero,0(a5)
	.loc 1 1353 17
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
	.loc 1 1353 17 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1354 29 is_stmt 1
	call	fs_now
	mv	a5,a0
	.loc 1 1354 27 discriminator 1
	sw	a5,-104(s0)
	.loc 1 1355 17
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1356 24
	li	a5,0
	j	.L378
.L379:
	.loc 1 1348 34
	nop
.L375:
	.loc 1 1347 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L373:
	.loc 1 1347 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L376
.LBE60:
	.loc 1 1359 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L372:
.LBE59:
	.loc 1 1343 21
	lw	a5,-120(s0)
	.loc 1 1343 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L377
	.loc 1 1361 12
	li	a5,-1
.L378:
	.loc 1 1362 1
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
.LFE55:
	.size	remove_dirent, .-remove_dirent
	.align	1
	.type	build_abs_normalized, @function
build_abs_normalized:
.LFB56:
	.loc 1 1366 1
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
	.loc 1 1367 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1367 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1369 8
	ld	a5,-1128(s0)
	beq	a5,zero,.L381
	.loc 1 1369 21 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1369 14 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L381
	.loc 1 1370 9
	addi	a5,s0,-368
	li	a2,255
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1371 34
	sb	zero,-113(s0)
	j	.L382
.L381:
.LBB61:
	.loc 1 1374 26
	ld	a5,-80(s0)
	addi	a4,a5,864
	.loc 1 1374 9
	addi	a5,s0,-368
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1375 34
	sb	zero,-113(s0)
	.loc 1 1376 17
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1377 12
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L383
	.loc 1 1377 31 discriminator 1
	lbu	a5,-368(s0)
	.loc 1 1377 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L384
.L383:
	.loc 1 1378 16
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,254
	bgt	a4,a5,.L384
	.loc 1 1378 54 discriminator 1
	lw	a5,-84(s0)
	addiw	a4,a5,1
	sw	a4,-84(s0)
	.loc 1 1378 58 discriminator 1
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-336(a5)
	.loc 1 1378 75 discriminator 1
	lw	a5,-84(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-336(a5)
.L384:
	.loc 1 1380 12
	ld	a5,-1128(s0)
	beq	a5,zero,.L382
	.loc 1 1380 25 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1380 18 discriminator 1
	beq	a5,zero,.L382
	.loc 1 1380 67 discriminator 2
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1380 67 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1380 30 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-368
	mv	a2,a4
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncat
.L382:
.LBE61:
	.loc 1 1385 5
	addi	a4,s0,-368
	addi	a5,s0,-624
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1386 24
	sb	zero,-369(s0)
	.loc 1 1387 17
	addi	a5,s0,-624
	sd	a5,-40(s0)
	.loc 1 1388 29
	addi	a5,s0,-624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1388 29 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1388 17 is_stmt 1 discriminator 1
	addi	a5,s0,-624
	add	a5,a5,a4
	sd	a5,-96(s0)
	.loc 1 1391 9
	sw	zero,-44(s0)
	.loc 1 1392 11
	j	.L385
.L387:
.LBB62:
	.loc 1 1393 28 discriminator 2
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L386:
	.loc 1 1393 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1393 19 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L387
	.loc 1 1394 13
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1394 12
	beq	a5,zero,.L414
	.loc 1 1395 19
	ld	a5,-40(s0)
	sd	a5,-104(s0)
	.loc 1 1396 15
	j	.L390
.L392:
	.loc 1 1396 34 discriminator 3
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L390:
	.loc 1 1396 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1396 19 discriminator 1
	beq	a5,zero,.L391
	.loc 1 1396 22 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1396 19 discriminator 2
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L392
.L391:
	.loc 1 1397 21
	ld	a4,-40(s0)
	ld	a5,-104(s0)
	sub	a5,a4,a5
	.loc 1 1397 13
	sw	a5,-108(s0)
	.loc 1 1398 12
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L393
	.loc 1 1398 34 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1398 22 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L393
	.loc 1 1398 22 is_stmt 0
	j	.L385
.L393:
	.loc 1 1400 19 is_stmt 1
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L394
	.loc 1 1400 41 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1400 29 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L394
	.loc 1 1400 64 discriminator 2
	ld	a5,-104(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1400 52 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L394
	.loc 1 1401 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	ble	a5,zero,.L385
	.loc 1 1401 33 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,-1
	sw	a5,-44(s0)
	.loc 1 1401 16
	j	.L385
.L394:
	.loc 1 1402 19
	lw	a5,-108(s0)
	sext.w	a5,a5
	ble	a5,zero,.L385
.LBB63:
	.loc 1 1403 17
	lw	a5,-108(s0)
	sw	a5,-48(s0)
	.loc 1 1404 16
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L396
	.loc 1 1404 37 discriminator 1
	li	a5,14
	sw	a5,-48(s0)
.L396:
.LBB64:
	.loc 1 1405 22
	sw	zero,-52(s0)
	.loc 1 1405 13
	j	.L397
.L398:
	.loc 1 1405 57 discriminator 3
	lw	a3,-52(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1405 38 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L397:
	.loc 1 1405 27 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L398
.LBE64:
.LBB65:
	.loc 1 1406 22
	sw	zero,-56(s0)
	.loc 1 1406 13
	j	.L399
.L400:
	.loc 1 1406 65 discriminator 3
	lw	a5,-56(s0)
	ld	a4,-104(s0)
	add	a5,a4,a5
	lbu	a3,0(a5)
	.loc 1 1406 54 discriminator 3
	lw	a2,-56(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	sb	a3,-1072(a5)
	.loc 1 1406 34 discriminator 3
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L399:
	.loc 1 1406 27 discriminator 1
	lw	a5,-56(s0)
	mv	a4,a5
	lw	a5,-48(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L400
.LBE65:
	.loc 1 1407 32
	lw	a3,-48(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1408 16
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,30
	bgt	a4,a5,.L385
	.loc 1 1408 34 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L385:
.LBE63:
.LBE62:
	.loc 1 1392 14
	ld	a4,-40(s0)
	ld	a5,-96(s0)
	bltu	a4,a5,.L386
	j	.L389
.L414:
.LBB66:
	.loc 1 1394 25
	nop
.L389:
.LBE66:
	.loc 1 1412 9
	sw	zero,-60(s0)
	.loc 1 1413 8
	ld	a5,-1120(s0)
	beq	a5,zero,.L402
	.loc 1 1413 27 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1413 23 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1413 30 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L402:
.LBB67:
	.loc 1 1414 14
	sw	zero,-64(s0)
	.loc 1 1414 5
	j	.L403
.L410:
.LBB68:
	.loc 1 1415 24
	lw	a5,-64(s0)
	sext.w	a5,a5
	snez	a5,a5
	andi	a5,a5,0xff
	sext.w	s1,a5
	.loc 1 1415 42
	addi	a3,s0,-1104
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	add	a5,a3,a5
	.loc 1 1415 30
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1415 13 discriminator 1
	addw	a5,s1,a5
	sw	a5,-112(s0)
	.loc 1 1416 13
	lw	a4,-60(s0)
	.loc 1 1416 25
	lw	a5,-112(s0)
	add	a5,a4,a5
	.loc 1 1416 12
	ld	a4,-1120(s0)
	bleu	a4,a5,.L415
	.loc 1 1417 12
	lw	a5,-64(s0)
	sext.w	a5,a5
	beq	a5,zero,.L406
	.loc 1 1417 23 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1417 19 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1417 27 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L406:
.LBB69:
	.loc 1 1418 18
	sw	zero,-68(s0)
	.loc 1 1418 9
	j	.L407
.L409:
	.loc 1 1418 73 discriminator 4
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1418 69 discriminator 4
	ld	a5,-1112(s0)
	add	a3,a5,a4
	.loc 1 1418 87 discriminator 4
	lw	a2,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	lbu	a5,-1072(a5)
	.loc 1 1418 77 discriminator 4
	sb	a5,0(a3)
	.loc 1 1418 62 discriminator 4
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L407:
	.loc 1 1418 31 discriminator 1
	lw	a3,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	lbu	a5,-1072(a5)
	.loc 1 1418 35 discriminator 1
	beq	a5,zero,.L408
	.loc 1 1418 38 discriminator 3
	lw	a4,-60(s0)
	.loc 1 1418 57 discriminator 3
	ld	a5,-1120(s0)
	addi	a5,a5,-1
	.loc 1 1418 35 discriminator 3
	bltu	a4,a5,.L409
.L408:
.LBE69:
.LBE68:
	.loc 1 1414 27 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L403:
	.loc 1 1414 19 discriminator 1
	lw	a5,-64(s0)
	mv	a4,a5
	lw	a5,-44(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L410
	j	.L405
.L415:
.LBB70:
	.loc 1 1416 42
	nop
.L405:
.LBE70:
.LBE67:
	.loc 1 1420 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L411
	.loc 1 1421 12
	ld	a4,-1120(s0)
	li	a5,1
	bleu	a4,a5,.L412
	.loc 1 1421 33 discriminator 1
	ld	a5,-1112(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 1421 42 discriminator 1
	ld	a5,-1112(s0)
	addi	a5,a5,1
	.loc 1 1421 45 discriminator 1
	sb	zero,0(a5)
	.loc 1 1426 1
	j	.L416
.L412:
	.loc 1 1422 17
	ld	a5,-1120(s0)
	beq	a5,zero,.L416
	.loc 1 1422 34 discriminator 1
	ld	a5,-1112(s0)
	sb	zero,0(a5)
	.loc 1 1426 1
	j	.L416
.L411:
	.loc 1 1424 12
	lw	a5,-60(s0)
	ld	a4,-1112(s0)
	add	a5,a4,a5
	.loc 1 1424 17
	sb	zero,0(a5)
.L416:
	.loc 1 1426 1
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
.LFE56:
	.size	build_abs_normalized, .-build_abs_normalized
	.align	1
	.globl	fs_mkdir
	.type	fs_mkdir, @function
fs_mkdir:
.LFB57:
	.loc 1 1430 1
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
	.loc 1 1433 5
	addi	a5,s0,-160
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1434 9
	addi	a5,s0,-160
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1434 8 discriminator 1
	bne	a5,zero,.L418
	.loc 1 1434 39 discriminator 1
	li	a5,-1
	.loc 1 1434 39 is_stmt 0
	j	.L437
.L418:
	.loc 1 1437 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1437 8 discriminator 1
	beq	a5,zero,.L420
	.loc 1 1437 39 discriminator 1
	li	a5,-1
	.loc 1 1437 39 is_stmt 0
	j	.L437
.L420:
.LBB71:
	.loc 1 1441 34 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1441 26
	j	.L421
.L422:
	.loc 1 1441 61 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1441 50 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L421:
	.loc 1 1441 39 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L422
.LBE71:
	.loc 1 1442 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1442 8 discriminator 1
	bne	a5,zero,.L423
	.loc 1 1442 61 discriminator 1
	li	a5,-1
	.loc 1 1442 61 is_stmt 0
	j	.L437
.L423:
	.loc 1 1444 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1445 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1445 8 discriminator 1
	bne	a5,zero,.L424
	.loc 1 1445 51 discriminator 1
	li	a5,-1
	.loc 1 1445 51 is_stmt 0
	j	.L437
.L424:
	.loc 1 1446 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1446 8
	bne	a5,zero,.L425
	.loc 1 1446 33 discriminator 1
	li	a5,-1
	.loc 1 1446 33 is_stmt 0
	j	.L437
.L425:
	.loc 1 1450 14 is_stmt 1
	sw	zero,-24(s0)
.LBB72:
	.loc 1 1451 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1451 5
	j	.L426
.L429:
	.loc 1 1452 9
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1453 15
	lhu	a5,-360(s0)
	.loc 1 1453 12
	bne	a5,zero,.L427
	.loc 1 1453 34 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1453 39
	j	.L428
.L427:
	.loc 1 1451 44 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L426:
	.loc 1 1451 33 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1451 28 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L429
.L428:
.LBE72:
	.loc 1 1455 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L430
	.loc 1 1455 23 discriminator 1
	li	a5,-1
	.loc 1 1455 23 is_stmt 0
	j	.L437
.L430:
	.loc 1 1456 25 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1457 15
	li	a5,1
	sh	a5,-448(s0)
	.loc 1 1457 35
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1457 50
	sw	zero,-440(s0)
	.loc 1 1457 68
	call	fs_now
	mv	a5,a0
	.loc 1 1457 66 discriminator 1
	sw	a5,-424(s0)
	.loc 1 1457 95 discriminator 1
	lw	a5,-424(s0)
	.loc 1 1457 89 discriminator 1
	sw	a5,-420(s0)
	.loc 1 1459 30
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1459 20
	lhu	a5,992(a5)
	sh	a5,-30(s0)
	.loc 1 1460 28
	lw	a5,-164(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1461 22
	lw	a5,-424(s0)
	.loc 1 1461 16
	sw	a5,-428(s0)
	.loc 1 1461 46
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1461 59
	lhu	a5,994(a5)
	.loc 1 1461 39
	sh	a5,-432(s0)
	.loc 1 1462 24
	lw	a5,-524(s0)
	.loc 1 1462 30
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1462 14
	beq	a5,zero,.L431
	.loc 1 1462 14 is_stmt 0 discriminator 1
	lhu	a5,-518(s0)
	j	.L432
.L431:
	.loc 1 1462 62 is_stmt 1 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1462 14 discriminator 2
	lhu	a5,996(a5)
.L432:
	.loc 1 1462 14 is_stmt 0 discriminator 4
	sh	a5,-430(s0)
	.loc 1 1463 40 is_stmt 1
	lw	a5,-556(s0)
	sext.w	a5,a5
	beq	a5,zero,.L433
	.loc 1 1463 40 is_stmt 0 discriminator 1
	lw	a5,-556(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L434
.L433:
	.loc 1 1463 40 discriminator 2
	li	a5,493
.L434:
	.loc 1 1463 50 is_stmt 1 discriminator 4
	lhu	a4,-30(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1463 48 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1463 15 discriminator 4
	sw	a5,-436(s0)
	.loc 1 1464 16
	lw	a5,-524(s0)
	.loc 1 1464 22
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1464 8
	beq	a5,zero,.L435
	.loc 1 1464 37 discriminator 1
	lw	a5,-436(s0)
	.loc 1 1464 43 discriminator 1
	ori	a5,a5,1024
	sext.w	a5,a5
	sw	a5,-436(s0)
.L435:
	.loc 1 1465 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1467 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1467 8 discriminator 1
	beq	a5,zero,.L436
	.loc 1 1467 53 discriminator 1
	li	a5,-1
	.loc 1 1467 53 is_stmt 0
	j	.L437
.L436:
	.loc 1 1468 12 is_stmt 1
	li	a5,0
.L437:
	.loc 1 1469 1
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
.LFE57:
	.size	fs_mkdir, .-fs_mkdir
	.align	1
	.globl	fs_rmdir
	.type	fs_rmdir, @function
fs_rmdir:
.LFB58:
	.loc 1 1473 1
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
	.loc 1 1475 5
	addi	a5,s0,-184
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1476 9
	addi	a5,s0,-184
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1476 8 discriminator 1
	bne	a5,zero,.L439
	.loc 1 1476 39 discriminator 1
	li	a5,-1
	.loc 1 1476 39 is_stmt 0
	j	.L457
.L439:
	.loc 1 1478 21 is_stmt 1
	addi	a5,s0,-184
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 1479 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L441
	.loc 1 1479 27 discriminator 1
	li	a5,-1
	.loc 1 1479 27 is_stmt 0
	j	.L457
.L441:
	.loc 1 1480 23 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1481 11
	lhu	a5,-272(s0)
	.loc 1 1481 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L442
	.loc 1 1481 34 discriminator 1
	li	a5,-1
	.loc 1 1481 34 is_stmt 0
	j	.L457
.L442:
	.loc 1 1483 11 is_stmt 1
	lw	a5,-264(s0)
	.loc 1 1483 8
	beq	a5,zero,.L443
.LBB73:
	.loc 1 1485 18
	sw	zero,-20(s0)
	.loc 1 1485 29
	sw	zero,-24(s0)
	.loc 1 1486 15
	j	.L444
.L451:
.LBB74:
	.loc 1 1487 13
	lw	a4,-20(s0)
	addi	a5,s0,-272
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1488 28
	lla	a5,block_buf
	sd	a5,-48(s0)
	.loc 1 1489 17
	li	a5,32
	sw	a5,-52(s0)
.LBB75:
	.loc 1 1490 21
	sw	zero,-28(s0)
	.loc 1 1490 13
	j	.L445
.L448:
	.loc 1 1490 46 discriminator 5
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1490 49 discriminator 5
	lhu	a5,0(a5)
	.loc 1 1490 43 discriminator 5
	beq	a5,zero,.L446
	.loc 1 1490 69 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 1490 73
	j	.L447
.L446:
	.loc 1 1490 36 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L445:
	.loc 1 1490 26 discriminator 4
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-52(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L448
.L447:
.LBE75:
	.loc 1 1491 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L458
	.loc 1 1492 17
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L444:
.LBE74:
	.loc 1 1486 24
	lw	a5,-264(s0)
	.loc 1 1486 20
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L451
	j	.L450
.L458:
.LBB76:
	.loc 1 1491 29
	nop
.L450:
.LBE76:
	.loc 1 1494 12
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L443
	.loc 1 1494 33 discriminator 1
	li	a5,-1
	.loc 1 1494 33 is_stmt 0
	j	.L457
.L443:
.LBE73:
.LBB77:
	.loc 1 1497 51 is_stmt 1
	sw	zero,-32(s0)
	.loc 1 1497 43
	j	.L452
.L453:
	.loc 1 1497 78 discriminator 3
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-280(a5)
	.loc 1 1497 67 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L452:
	.loc 1 1497 56 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L453
.LBE77:
	.loc 1 1498 10
	addi	a3,s0,-296
	addi	a4,s0,-276
	addi	a5,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1498 8 discriminator 1
	bne	a5,zero,.L454
	.loc 1 1498 61 discriminator 1
	li	a5,-1
	.loc 1 1498 61 is_stmt 0
	j	.L457
.L454:
	.loc 1 1500 25 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-384
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1501 10
	addi	a5,s0,-384
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1501 8 discriminator 1
	bne	a5,zero,.L455
	.loc 1 1501 52 discriminator 1
	li	a5,-1
	.loc 1 1501 52 is_stmt 0
	j	.L457
.L455:
	.loc 1 1502 9 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1502 8 discriminator 1
	beq	a5,zero,.L456
	.loc 1 1502 50 discriminator 1
	li	a5,-1
	.loc 1 1502 50 is_stmt 0
	j	.L457
.L456:
	.loc 1 1505 5 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1507 25
	addi	a5,s0,-472
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1508 5
	addi	a4,s0,-472
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1509 12
	li	a5,0
.L457:
	.loc 1 1510 1
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
	.size	fs_rmdir, .-fs_rmdir
	.align	1
	.globl	fs_unlink
	.type	fs_unlink, @function
fs_unlink:
.LFB59:
	.loc 1 1514 1
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
	.loc 1 1516 5
	addi	a5,s0,-176
	ld	a2,-568(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1517 9
	addi	a5,s0,-176
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1517 8 discriminator 1
	bne	a5,zero,.L460
	.loc 1 1517 39 discriminator 1
	li	a5,-1
	.loc 1 1517 39 is_stmt 0
	j	.L477
.L460:
	.loc 1 1519 21 is_stmt 1
	addi	a5,s0,-176
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-32(s0)
	.loc 1 1520 8
	lw	a5,-32(s0)
	sext.w	a5,a5
	bne	a5,zero,.L462
	.loc 1 1520 27 discriminator 1
	li	a5,-1
	.loc 1 1520 27 is_stmt 0
	j	.L477
.L462:
	.loc 1 1521 23 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1522 11
	lhu	a5,-264(s0)
	.loc 1 1522 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L463
	.loc 1 1522 35 discriminator 1
	li	a5,-1
	.loc 1 1522 35 is_stmt 0
	j	.L477
.L463:
.LBB78:
	.loc 1 1525 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1525 5
	j	.L464
.L470:
.LBB79:
	.loc 1 1526 19
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1526 12
	beq	a5,zero,.L478
	.loc 1 1527 33
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1527 23
	addi	a5,a5,584
	sd	a5,-48(s0)
.LBB80:
	.loc 1 1528 18
	sw	zero,-24(s0)
	.loc 1 1528 9
	j	.L467
.L469:
	.loc 1 1529 19
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1529 16
	beq	a5,zero,.L468
	.loc 1 1529 28 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1529 31 discriminator 1
	lw	a4,0(a5)
	.loc 1 1529 23 discriminator 1
	li	a5,3
	bne	a4,a5,.L468
	.loc 1 1529 54 discriminator 2
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1529 57 discriminator 2
	lw	a5,4(a5)
	.loc 1 1529 49 discriminator 2
	lw	a4,-32(s0)
	sext.w	a4,a4
	bne	a4,a5,.L468
	.loc 1 1530 24
	li	a5,-1
	j	.L477
.L468:
	.loc 1 1528 46 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L467:
	.loc 1 1528 27 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L469
	j	.L466
.L478:
.LBE80:
	.loc 1 1526 25
	nop
.L466:
.LBE79:
	.loc 1 1525 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L464:
	.loc 1 1525 25 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L470
.LBE78:
.LBB81:
	.loc 1 1535 51
	sw	zero,-28(s0)
	.loc 1 1535 43
	j	.L471
.L472:
	.loc 1 1535 78 discriminator 3
	lw	a5,-28(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-272(a5)
	.loc 1 1535 67 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L471:
	.loc 1 1535 56 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L472
.LBE81:
	.loc 1 1536 10
	addi	a3,s0,-288
	addi	a4,s0,-268
	addi	a5,s0,-176
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1536 8 discriminator 1
	bne	a5,zero,.L473
	.loc 1 1536 61 discriminator 1
	li	a5,-1
	.loc 1 1536 61 is_stmt 0
	j	.L477
.L473:
	.loc 1 1538 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-376
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1539 10
	addi	a5,s0,-376
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1539 8 discriminator 1
	bne	a5,zero,.L474
	.loc 1 1539 52 discriminator 1
	li	a5,-1
	.loc 1 1539 52 is_stmt 0
	j	.L477
.L474:
	.loc 1 1541 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-464
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1542 13
	lw	a5,-452(s0)
	.loc 1 1542 19
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1542 8
	beq	a5,zero,.L475
.LBB82:
	.loc 1 1543 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1543 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1544 17
	ld	a5,-40(s0)
	lhu	a5,994(a5)
	.loc 1 1544 12
	beq	a5,zero,.L475
	.loc 1 1544 33 discriminator 1
	ld	a5,-40(s0)
	lhu	a4,994(a5)
	.loc 1 1544 44 discriminator 1
	lhu	a5,-248(s0)
	.loc 1 1544 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L475
	.loc 1 1544 54 discriminator 2
	ld	a5,-40(s0)
	lhu	a4,994(a5)
	.loc 1 1544 67 discriminator 2
	lhu	a5,-448(s0)
	.loc 1 1544 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L475
	.loc 1 1544 81 discriminator 3
	li	a5,-1
	.loc 1 1544 81 is_stmt 0
	j	.L477
.L475:
.LBE82:
	.loc 1 1546 9 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-288
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1546 8 discriminator 1
	beq	a5,zero,.L476
	.loc 1 1546 50 discriminator 1
	li	a5,-1
	.loc 1 1546 50 is_stmt 0
	j	.L477
.L476:
	.loc 1 1549 5 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1550 25
	addi	a5,s0,-552
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1551 5
	addi	a4,s0,-552
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1552 12
	li	a5,0
.L477:
	.loc 1 1553 1
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
.LFE59:
	.size	fs_unlink, .-fs_unlink
	.align	1
	.type	write_data_inode, @function
write_data_inode:
.LFB60:
	.loc 1 1557 1
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
	.loc 1 1558 14
	lw	a5,-56(s0)
	sw	a5,-20(s0)
	.loc 1 1558 36
	sw	zero,-24(s0)
	.loc 1 1558 60
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 1559 11
	j	.L480
.L484:
.LBB83:
	.loc 1 1560 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 1560 50
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 1561 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 1561 49
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L481
	.loc 1 1561 76 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L481:
	.loc 1 1562 29
	lw	a4,-40(s0)
	lw	a5,-52(s0)
	mv	a2,a4
	ld	a1,-64(s0)
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 1563 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L482
	.loc 1 1563 31 discriminator 1
	li	a5,-1
	.loc 1 1563 31 is_stmt 0
	j	.L483
.L482:
	.loc 1 1564 9 is_stmt 1
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1565 9
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	ld	a1,-32(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1566 9
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1567 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 1567 31
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 1567 46
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L480:
.LBE83:
	.loc 1 1559 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L484
	.loc 1 1569 14
	ld	a5,-64(s0)
	lw	a4,-56(s0)
	sw	a4,8(a5)
	.loc 1 1569 34
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1569 32 discriminator 1
	ld	a5,-64(s0)
	sw	a4,24(a5)
	.loc 1 1569 44 discriminator 1
	lw	a5,-52(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1569 74 discriminator 2
	li	a5,0
.L483:
	.loc 1 1570 1
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
.LFE60:
	.size	write_data_inode, .-write_data_inode
	.align	1
	.globl	fs_symlink
	.type	fs_symlink, @function
fs_symlink:
.LFB61:
	.loc 1 1574 1
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
	.loc 1 1575 20
	addi	a5,s0,-160
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1576 9
	addi	a5,s0,-160
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1576 8 discriminator 1
	bne	a5,zero,.L486
	.loc 1 1576 39 discriminator 1
	li	a5,-1
	.loc 1 1576 39 is_stmt 0
	j	.L502
.L486:
	.loc 1 1577 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1577 8 discriminator 1
	beq	a5,zero,.L488
	.loc 1 1577 39 discriminator 1
	li	a5,-1
	.loc 1 1577 39 is_stmt 0
	j	.L502
.L488:
.LBB84:
	.loc 1 1579 51 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1579 43
	j	.L489
.L490:
	.loc 1 1579 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1579 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L489:
	.loc 1 1579 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L490
.LBE84:
	.loc 1 1580 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1580 8 discriminator 1
	bne	a5,zero,.L491
	.loc 1 1580 61 discriminator 1
	li	a5,-1
	.loc 1 1580 61 is_stmt 0
	j	.L502
.L491:
	.loc 1 1581 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1581 8
	bne	a5,zero,.L492
	.loc 1 1581 33 discriminator 1
	li	a5,-1
	.loc 1 1581 33 is_stmt 0
	j	.L502
.L492:
	.loc 1 1583 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1584 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1584 8 discriminator 1
	bne	a5,zero,.L493
	.loc 1 1584 51 discriminator 1
	li	a5,-1
	.loc 1 1584 51 is_stmt 0
	j	.L502
.L493:
	.loc 1 1587 32 is_stmt 1
	sw	zero,-24(s0)
.LBB85:
	.loc 1 1588 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1588 5
	j	.L494
.L497:
	.loc 1 1588 43 discriminator 5
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1588 67 discriminator 5
	lhu	a5,-360(s0)
	.loc 1 1588 64 discriminator 5
	bne	a5,zero,.L495
	.loc 1 1588 82 discriminator 2
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1588 86
	j	.L496
.L495:
	.loc 1 1588 38 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L494:
	.loc 1 1588 28 discriminator 4
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1588 24 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L497
.L496:
.LBE85:
	.loc 1 1589 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L498
	.loc 1 1589 23 discriminator 1
	li	a5,-1
	.loc 1 1589 23 is_stmt 0
	j	.L502
.L498:
	.loc 1 1590 23 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1590 56 discriminator 1
	li	a5,3
	sh	a5,-448(s0)
	.loc 1 1590 76 discriminator 1
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1590 87 discriminator 1
	sw	zero,-440(s0)
	.loc 1 1590 100 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 1 1590 99 discriminator 2
	sw	a5,-424(s0)
	.loc 1 1590 121 discriminator 2
	lw	a5,-424(s0)
	.loc 1 1590 118 discriminator 2
	sw	a5,-420(s0)
	.loc 1 1590 129 discriminator 2
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1592 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1592 8 discriminator 1
	beq	a5,zero,.L499
	.loc 1 1592 53 discriminator 1
	li	a5,-1
	.loc 1 1592 53 is_stmt 0
	j	.L502
.L499:
	.loc 1 1594 21 is_stmt 1
	ld	a0,-696(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1594 14 discriminator 1
	sw	a5,-32(s0)
	.loc 1 1594 40 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,240
	bleu	a4,a5,.L500
	.loc 1 1594 58 discriminator 1
	li	a5,240
	sw	a5,-32(s0)
.L500:
	.loc 1 1595 23
	addi	a5,s0,-688
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1595 50 discriminator 1
	lw	a4,-32(s0)
	addi	a5,s0,-688
	mv	a2,a4
	ld	a1,-696(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1596 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1597 9
	lw	a3,-32(s0)
	addi	a2,s0,-688
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_data_inode
	mv	a5,a0
	.loc 1 1597 8 discriminator 1
	beq	a5,zero,.L501
	.loc 1 1597 61 discriminator 1
	li	a5,-1
	.loc 1 1597 61 is_stmt 0
	j	.L502
.L501:
	.loc 1 1598 12 is_stmt 1
	li	a5,0
.L502:
	.loc 1 1599 1
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
.LFE61:
	.size	fs_symlink, .-fs_symlink
	.align	1
	.globl	fs_rename
	.type	fs_rename, @function
fs_rename:
.LFB62:
	.loc 1 1603 1
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
	.loc 1 1605 5
	addi	a5,s0,-160
	ld	a2,-696(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1606 5
	addi	a5,s0,-288
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1608 9
	addi	a4,s0,-288
	addi	a5,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1608 8 discriminator 1
	bne	a5,zero,.L504
	.loc 1 1608 45 discriminator 1
	li	a5,0
	.loc 1 1608 45 is_stmt 0
	j	.L521
.L504:
	.loc 1 1609 9 is_stmt 1
	addi	a5,s0,-160
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1609 8 discriminator 1
	bne	a5,zero,.L506
	.loc 1 1609 42 discriminator 1
	li	a5,-1
	.loc 1 1609 42 is_stmt 0
	j	.L521
.L506:
	.loc 1 1611 21 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1612 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L507
	.loc 1 1612 27 discriminator 1
	li	a5,-1
	.loc 1 1612 27 is_stmt 0
	j	.L521
.L507:
	.loc 1 1613 9 is_stmt 1
	addi	a5,s0,-288
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1613 8 discriminator 1
	beq	a5,zero,.L508
	.loc 1 1613 42 discriminator 1
	li	a5,-1
	.loc 1 1613 42 is_stmt 0
	j	.L521
.L508:
.LBB86:
	.loc 1 1616 13 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1616 5
	j	.L509
.L510:
	.loc 1 1616 42 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-296(a5)
	.loc 1 1616 54 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-312(a5)
	.loc 1 1616 29 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L509:
	.loc 1 1616 18 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L510
.LBE86:
	.loc 1 1617 10
	addi	a3,s0,-312
	addi	a4,s0,-292
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1617 8 discriminator 1
	bne	a5,zero,.L511
	.loc 1 1617 61 discriminator 1
	li	a5,-1
	.loc 1 1617 61 is_stmt 0
	j	.L521
.L511:
	.loc 1 1618 10 is_stmt 1
	addi	a3,s0,-328
	addi	a4,s0,-296
	addi	a5,s0,-288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1618 8 discriminator 1
	bne	a5,zero,.L512
	.loc 1 1618 62 discriminator 1
	li	a5,-1
	.loc 1 1618 62 is_stmt 0
	j	.L521
.L512:
	.loc 1 1619 14 is_stmt 1
	lbu	a5,-312(s0)
	.loc 1 1619 8
	beq	a5,zero,.L513
	.loc 1 1619 34 discriminator 2
	lbu	a5,-328(s0)
	.loc 1 1619 26 discriminator 2
	bne	a5,zero,.L514
.L513:
	.loc 1 1619 54 discriminator 3
	li	a5,-1
	.loc 1 1619 54 is_stmt 0
	j	.L521
.L514:
	.loc 1 1621 24 is_stmt 1
	lw	a5,-296(s0)
	addi	a4,s0,-416
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1622 12
	lhu	a5,-416(s0)
	.loc 1 1622 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L515
	.loc 1 1622 35 discriminator 1
	li	a5,-1
	.loc 1 1622 35 is_stmt 0
	j	.L521
.L515:
	.loc 1 1624 24 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-504
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1625 10
	addi	a5,s0,-504
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1625 8 discriminator 1
	bne	a5,zero,.L516
	.loc 1 1625 51 discriminator 1
	li	a5,-1
	.loc 1 1625 51 is_stmt 0
	j	.L521
.L516:
	.loc 1 1626 10 is_stmt 1
	addi	a5,s0,-416
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1626 8 discriminator 1
	bne	a5,zero,.L517
	.loc 1 1626 51 discriminator 1
	li	a5,-1
	.loc 1 1626 51 is_stmt 0
	j	.L521
.L517:
	.loc 1 1629 26 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-592
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1630 27
	addi	a4,s0,-680
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1631 14
	lw	a5,-580(s0)
	.loc 1 1631 20
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1631 8
	beq	a5,zero,.L518
.LBB87:
	.loc 1 1632 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1632 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1633 17
	ld	a5,-32(s0)
	lhu	a5,994(a5)
	.loc 1 1633 12
	beq	a5,zero,.L518
	.loc 1 1633 33 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,994(a5)
	.loc 1 1633 48 discriminator 1
	lhu	a5,-664(s0)
	.loc 1 1633 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L518
	.loc 1 1633 58 discriminator 2
	ld	a5,-32(s0)
	lhu	a4,994(a5)
	.loc 1 1633 72 discriminator 2
	lhu	a5,-576(s0)
	.loc 1 1633 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L518
	.loc 1 1633 86 discriminator 3
	li	a5,-1
	.loc 1 1633 86 is_stmt 0
	j	.L521
.L518:
.LBE87:
	.loc 1 1635 9 is_stmt 1
	lw	a5,-296(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-328
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1635 8 discriminator 1
	beq	a5,zero,.L519
	.loc 1 1635 50 discriminator 1
	li	a5,-1
	.loc 1 1635 50 is_stmt 0
	j	.L521
.L519:
	.loc 1 1636 9 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1636 8 discriminator 1
	beq	a5,zero,.L520
	.loc 1 1636 47 discriminator 1
	li	a5,-1
	.loc 1 1636 47 is_stmt 0
	j	.L521
.L520:
	.loc 1 1637 12 is_stmt 1
	li	a5,0
.L521:
	.loc 1 1638 1
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
.LFE62:
	.size	fs_rename, .-fs_rename
	.align	1
	.globl	fs_link
	.type	fs_link, @function
fs_link:
.LFB63:
	.loc 1 1642 1
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
	.loc 1 1644 5
	addi	a5,s0,-152
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1645 5
	addi	a5,s0,-280
	ld	a2,-496(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1647 9
	addi	a5,s0,-280
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1647 8 discriminator 1
	beq	a5,zero,.L523
	.loc 1 1647 37 discriminator 2
	addi	a5,s0,-152
	lla	a1,.LC7
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1647 34 discriminator 1
	bne	a5,zero,.L524
.L523:
	.loc 1 1647 70 discriminator 3
	li	a5,-1
	.loc 1 1647 70 is_stmt 0
	j	.L535
.L524:
	.loc 1 1648 21 is_stmt 1
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1649 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L526
	.loc 1 1649 27 discriminator 1
	li	a5,-1
	.loc 1 1649 27 is_stmt 0
	j	.L535
.L526:
	.loc 1 1650 9 is_stmt 1
	addi	a5,s0,-280
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1650 8 discriminator 1
	beq	a5,zero,.L527
	.loc 1 1650 42 discriminator 1
	li	a5,-1
	.loc 1 1650 42 is_stmt 0
	j	.L535
.L527:
	.loc 1 1652 23 is_stmt 1
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1653 11
	lhu	a5,-368(s0)
	.loc 1 1653 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L528
	.loc 1 1653 35 discriminator 1
	li	a5,-1
	.loc 1 1653 35 is_stmt 0
	j	.L535
.L528:
.LBB88:
	.loc 1 1655 52 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1655 43
	j	.L529
.L530:
	.loc 1 1655 79 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-376(a5)
	.loc 1 1655 68 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L529:
	.loc 1 1655 57 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L530
.LBE88:
	.loc 1 1656 10
	addi	a3,s0,-392
	addi	a4,s0,-372
	addi	a5,s0,-280
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1656 8 discriminator 1
	bne	a5,zero,.L531
	.loc 1 1656 64 discriminator 1
	li	a5,-1
	.loc 1 1656 64 is_stmt 0
	j	.L535
.L531:
	.loc 1 1657 13 is_stmt 1
	lbu	a5,-392(s0)
	.loc 1 1657 8
	bne	a5,zero,.L532
	.loc 1 1657 33 discriminator 1
	li	a5,-1
	.loc 1 1657 33 is_stmt 0
	j	.L535
.L532:
	.loc 1 1659 24 is_stmt 1
	lw	a5,-372(s0)
	addi	a4,s0,-480
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1660 10
	addi	a5,s0,-480
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1660 8 discriminator 1
	bne	a5,zero,.L533
	.loc 1 1660 51 discriminator 1
	li	a5,-1
	.loc 1 1660 51 is_stmt 0
	j	.L535
.L533:
	.loc 1 1662 9 is_stmt 1
	lw	a5,-372(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-392
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1662 8 discriminator 1
	beq	a5,zero,.L534
	.loc 1 1662 53 discriminator 1
	li	a5,-1
	.loc 1 1662 53 is_stmt 0
	j	.L535
.L534:
	.loc 1 1664 7 is_stmt 1
	lhu	a5,-362(s0)
	.loc 1 1664 13
	addiw	a5,a5,1
	slli	a5,a5,48
	srli	a5,a5,48
	sh	a5,-362(s0)
	.loc 1 1665 16
	call	fs_now
	mv	a5,a0
	.loc 1 1665 14 discriminator 1
	sw	a5,-340(s0)
	.loc 1 1666 5
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1667 12
	li	a5,0
.L535:
	.loc 1 1668 1
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
.LFE63:
	.size	fs_link, .-fs_link
	.align	1
	.globl	fs_stat
	.type	fs_stat, @function
fs_stat:
.LFB64:
	.loc 1 1671 1
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
	.loc 1 1672 8
	ld	a5,-256(s0)
	bne	a5,zero,.L537
	.loc 1 1672 21 discriminator 1
	li	a5,-1
	.loc 1 1672 21 is_stmt 0
	j	.L540
.L537:
	.loc 1 1673 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1674 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1675 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L539
	.loc 1 1675 23 discriminator 1
	li	a5,-1
	.loc 1 1675 23 is_stmt 0
	j	.L540
.L539:
	.loc 1 1676 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1677 18
	lhu	a4,-240(s0)
	.loc 1 1677 14
	ld	a5,-256(s0)
	sh	a4,0(a5)
	.loc 1 1677 39
	lhu	a4,-234(s0)
	.loc 1 1677 35
	ld	a5,-256(s0)
	sh	a4,2(a5)
	.loc 1 1677 60
	lw	a4,-232(s0)
	.loc 1 1677 56
	ld	a5,-256(s0)
	sw	a4,4(a5)
	.loc 1 1677 76
	ld	a5,-256(s0)
	lw	a4,-20(s0)
	sw	a4,8(a5)
	.loc 1 1678 18
	lw	a4,-228(s0)
	.loc 1 1678 14
	ld	a5,-256(s0)
	sw	a4,12(a5)
	.loc 1 1678 37
	lhu	a4,-224(s0)
	.loc 1 1678 33
	ld	a5,-256(s0)
	sh	a4,16(a5)
	.loc 1 1678 55
	lhu	a4,-222(s0)
	.loc 1 1678 51
	ld	a5,-256(s0)
	sh	a4,18(a5)
	.loc 1 1679 19
	lw	a4,-220(s0)
	.loc 1 1679 15
	ld	a5,-256(s0)
	sw	a4,20(a5)
	.loc 1 1679 41
	lw	a4,-216(s0)
	.loc 1 1679 37
	ld	a5,-256(s0)
	sw	a4,24(a5)
	.loc 1 1679 63
	lw	a4,-212(s0)
	.loc 1 1679 59
	ld	a5,-256(s0)
	sw	a4,28(a5)
	.loc 1 1680 12
	li	a5,0
.L540:
	.loc 1 1681 1
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
	.size	fs_stat, .-fs_stat
	.align	1
	.globl	fs_readlink
	.type	fs_readlink, @function
fs_readlink:
.LFB65:
	.loc 1 1684 1
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
	.loc 1 1685 8
	ld	a5,-384(s0)
	beq	a5,zero,.L542
	.loc 1 1685 14 discriminator 2
	lw	a5,-388(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L543
.L542:
	.loc 1 1685 36 discriminator 3
	li	a5,-1
	.loc 1 1685 36 is_stmt 0
	j	.L554
.L543:
	.loc 1 1686 20 is_stmt 1
	addi	a5,s0,-160
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB89:
	.loc 1 1687 51
	sw	zero,-20(s0)
	.loc 1 1687 43
	j	.L545
.L546:
	.loc 1 1687 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1687 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L545:
	.loc 1 1687 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L546
.LBE89:
	.loc 1 1688 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1688 8 discriminator 1
	bne	a5,zero,.L547
	.loc 1 1688 61 discriminator 1
	li	a5,-1
	.loc 1 1688 61 is_stmt 0
	j	.L554
.L547:
	.loc 1 1689 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1689 57 discriminator 1
	lhu	a5,-272(s0)
	.loc 1 1689 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L548
	.loc 1 1689 80 discriminator 1
	li	a5,-1
	.loc 1 1689 80 is_stmt 0
	j	.L554
.L548:
	.loc 1 1690 21 is_stmt 1
	addi	a4,s0,-184
	addi	a5,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 1690 48 discriminator 1
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L549
	.loc 1 1690 63 discriminator 1
	li	a5,-1
	.loc 1 1690 63 is_stmt 0
	j	.L554
.L549:
	.loc 1 1691 23 is_stmt 1
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1692 11
	lhu	a5,-360(s0)
	.loc 1 1692 8
	sext.w	a4,a5
	li	a5,3
	beq	a4,a5,.L550
	.loc 1 1692 38 discriminator 1
	li	a5,-1
	.loc 1 1692 38 is_stmt 0
	j	.L554
.L550:
	.loc 1 1693 15 is_stmt 1
	lw	a5,-352(s0)
	.loc 1 1693 9
	sw	a5,-24(s0)
	.loc 1 1693 25
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-388(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	ble	a4,a5,.L551
	.loc 1 1693 39 discriminator 1
	lw	a5,-388(s0)
	sw	a5,-24(s0)
.L551:
	.loc 1 1693 51 discriminator 3
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L552
	.loc 1 1693 61 discriminator 4
	sw	zero,-24(s0)
.L552:
	.loc 1 1694 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	ble	a5,zero,.L553
	.loc 1 1694 16 discriminator 1
	lw	a4,-24(s0)
	addi	a5,s0,-360
	mv	a3,a4
	ld	a2,-384(s0)
	li	a1,0
	mv	a0,a5
	call	read_data
.L553:
	.loc 1 1695 12
	lw	a5,-24(s0)
.L554:
	.loc 1 1696 1
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
.LFE65:
	.size	fs_readlink, .-fs_readlink
	.align	1
	.globl	fs_lstat
	.type	fs_lstat, @function
fs_lstat:
.LFB66:
	.loc 1 1699 1
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
	.loc 1 1700 8
	ld	a5,-368(s0)
	bne	a5,zero,.L556
	.loc 1 1700 21 discriminator 1
	li	a5,-1
	.loc 1 1700 21 is_stmt 0
	j	.L563
.L556:
	.loc 1 1701 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-360(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB90:
	.loc 1 1702 51
	sw	zero,-20(s0)
	.loc 1 1702 43
	j	.L558
.L559:
	.loc 1 1702 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-160(a5)
	.loc 1 1702 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L558:
	.loc 1 1702 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L559
.LBE90:
	.loc 1 1703 10
	addi	a3,s0,-176
	addi	a4,s0,-156
	addi	a5,s0,-152
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1703 8 discriminator 1
	bne	a5,zero,.L560
	.loc 1 1703 61 discriminator 1
	li	a5,-1
	.loc 1 1703 61 is_stmt 0
	j	.L563
.L560:
	.loc 1 1704 24 is_stmt 1
	lw	a5,-156(s0)
	addi	a4,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1704 57 discriminator 1
	lhu	a5,-264(s0)
	.loc 1 1704 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L561
	.loc 1 1704 80 discriminator 1
	li	a5,-1
	.loc 1 1704 80 is_stmt 0
	j	.L563
.L561:
	.loc 1 1705 21 is_stmt 1
	addi	a4,s0,-176
	addi	a5,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1705 48 discriminator 1
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L562
	.loc 1 1705 63 discriminator 1
	li	a5,-1
	.loc 1 1705 63 is_stmt 0
	j	.L563
.L562:
	.loc 1 1706 23 is_stmt 1
	addi	a4,s0,-352
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1707 18
	lhu	a4,-352(s0)
	.loc 1 1707 14
	ld	a5,-368(s0)
	sh	a4,0(a5)
	.loc 1 1707 39
	lhu	a4,-346(s0)
	.loc 1 1707 35
	ld	a5,-368(s0)
	sh	a4,2(a5)
	.loc 1 1707 60
	lw	a4,-344(s0)
	.loc 1 1707 56
	ld	a5,-368(s0)
	sw	a4,4(a5)
	.loc 1 1707 76
	ld	a5,-368(s0)
	lw	a4,-24(s0)
	sw	a4,8(a5)
	.loc 1 1708 18
	lw	a4,-340(s0)
	.loc 1 1708 14
	ld	a5,-368(s0)
	sw	a4,12(a5)
	.loc 1 1708 37
	lhu	a4,-336(s0)
	.loc 1 1708 33
	ld	a5,-368(s0)
	sh	a4,16(a5)
	.loc 1 1708 55
	lhu	a4,-334(s0)
	.loc 1 1708 51
	ld	a5,-368(s0)
	sh	a4,18(a5)
	.loc 1 1709 19
	lw	a4,-332(s0)
	.loc 1 1709 15
	ld	a5,-368(s0)
	sw	a4,20(a5)
	.loc 1 1709 41
	lw	a4,-328(s0)
	.loc 1 1709 37
	ld	a5,-368(s0)
	sw	a4,24(a5)
	.loc 1 1709 63
	lw	a4,-324(s0)
	.loc 1 1709 59
	ld	a5,-368(s0)
	sw	a4,28(a5)
	.loc 1 1710 12
	li	a5,0
.L563:
	.loc 1 1711 1
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
.LFE66:
	.size	fs_lstat, .-fs_lstat
	.align	1
	.globl	fs_chmod
	.type	fs_chmod, @function
fs_chmod:
.LFB67:
	.loc 1 1714 1
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
	.loc 1 1715 20
	addi	a5,s0,-160
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1716 21
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1717 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L565
	.loc 1 1717 23 discriminator 1
	li	a5,-1
	.loc 1 1717 23 is_stmt 0
	j	.L568
.L565:
	.loc 1 1718 23 is_stmt 1
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1720 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1720 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1721 12
	ld	a5,-32(s0)
	lhu	a5,994(a5)
	.loc 1 1721 8
	beq	a5,zero,.L567
	.loc 1 1721 27 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,994(a5)
	.loc 1 1721 38 discriminator 1
	lhu	a5,-232(s0)
	.loc 1 1721 9 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L567
	.loc 1 1721 52 discriminator 2
	li	a5,-1
	.loc 1 1721 52 is_stmt 0
	j	.L568
.L567:
	.loc 1 1722 20 is_stmt 1
	lw	a5,-268(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1722 13
	sw	a5,-236(s0)
	.loc 1 1722 40
	call	fs_now
	mv	a5,a0
	.loc 1 1722 38 discriminator 1
	sw	a5,-220(s0)
	.loc 1 1723 5
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1724 12
	li	a5,0
.L568:
	.loc 1 1725 1
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
.LFE67:
	.size	fs_chmod, .-fs_chmod
	.align	1
	.globl	fs_chown
	.type	fs_chown, @function
fs_chown:
.LFB68:
	.loc 1 1728 1
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
	.loc 1 1729 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1730 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1731 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L570
	.loc 1 1731 23 discriminator 1
	li	a5,-1
	.loc 1 1731 23 is_stmt 0
	j	.L573
.L570:
	.loc 1 1732 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1734 14
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1734 27
	lhu	a5,994(a5)
	.loc 1 1734 8
	beq	a5,zero,.L572
	.loc 1 1734 46 discriminator 1
	li	a5,-1
	.loc 1 1734 46 is_stmt 0
	j	.L573
.L572:
	.loc 1 1735 12 is_stmt 1
	lhu	a5,-250(s0)
	sh	a5,-224(s0)
	.loc 1 1735 26
	lhu	a5,-252(s0)
	sh	a5,-222(s0)
	.loc 1 1735 44
	call	fs_now
	mv	a5,a0
	.loc 1 1735 42 discriminator 1
	sw	a5,-212(s0)
	.loc 1 1736 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1737 12
	li	a5,0
.L573:
	.loc 1 1738 1
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
.LFE68:
	.size	fs_chown, .-fs_chown
	.align	1
	.globl	fs_utimes
	.type	fs_utimes, @function
fs_utimes:
.LFB69:
	.loc 1 1741 1
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
	.loc 1 1742 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1743 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1744 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L575
	.loc 1 1744 23 discriminator 1
	li	a5,-1
	.loc 1 1744 23 is_stmt 0
	j	.L581
.L575:
	.loc 1 1745 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1746 20
	call	fs_now
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1747 45
	lw	a5,-252(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L577
	.loc 1 1747 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L578
.L577:
	.loc 1 1747 45 discriminator 2
	lw	a5,-252(s0)
.L578:
	.loc 1 1747 14 is_stmt 1 discriminator 4
	sw	a5,-220(s0)
	.loc 1 1748 45
	lw	a5,-256(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L579
	.loc 1 1748 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L580
.L579:
	.loc 1 1748 45 discriminator 2
	lw	a5,-256(s0)
.L580:
	.loc 1 1748 14 is_stmt 1 discriminator 4
	sw	a5,-216(s0)
	.loc 1 1749 14
	lw	a5,-24(s0)
	sw	a5,-212(s0)
	.loc 1 1750 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1751 12
	li	a5,0
.L581:
	.loc 1 1752 1
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
.LFE69:
	.size	fs_utimes, .-fs_utimes
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB70:
	.loc 1 1753 31
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
	.loc 1 1755 12
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 1756 1
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
.LFE70:
	.size	fs_open, .-fs_open
	.section	.rodata
	.align	3
.LC19:
	.string	"/dev/tty"
	.text
	.align	1
	.globl	fs_open2
	.type	fs_open2, @function
fs_open2:
.LFB71:
	.loc 1 1759 53
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
	.loc 1 1760 32
	call	get_current_file_table
	sd	a0,-72(s0)
	.loc 1 1762 8
	ld	a5,-456(s0)
	beq	a5,zero,.L585
	.loc 1 1762 22 discriminator 1
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1762 15 discriminator 1
	beq	a5,zero,.L585
	.loc 1 1762 42 discriminator 2
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1762 34 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L586
	.loc 1 1762 58 discriminator 3
	ld	a5,-456(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1762 51 discriminator 3
	bne	a5,zero,.L586
.L585:
.LBB91:
	.loc 1 1763 31
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1763 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1764 53
	ld	a5,-80(s0)
	addi	a4,a5,864
	.loc 1 1764 9
	addi	a5,s0,-224
	mv	a2,a4
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBE91:
	.loc 1 1762 70
	j	.L587
.L586:
	.loc 1 1766 9
	addi	a5,s0,-224
	ld	a2,-456(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.L587:
	.loc 1 1770 9
	addi	a5,s0,-224
	lla	a1,.LC19
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1770 8 discriminator 1
	bne	a5,zero,.L588
.LBB92:
	.loc 1 1771 18
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1771 9
	j	.L589
.L592:
	.loc 1 1772 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1772 16
	bne	a5,zero,.L590
	.loc 1 1773 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1773 33
	call	new_file_table
	mv	a5,a0
	.loc 1 1773 31 discriminator 1
	sd	a5,0(s1)
	.loc 1 1774 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1774 37
	li	a4,5
	sw	a4,0(a5)
	.loc 1 1775 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1775 37
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1776 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1776 37
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1777 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1777 36
	sw	zero,96(a5)
	.loc 1 1778 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1778 42
	sw	zero,116(a5)
	.loc 1 1779 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1779 43
	sw	zero,120(a5)
	.loc 1 1780 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1780 39
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1781 24
	lw	a5,-36(s0)
	j	.L622
.L590:
	.loc 1 1771 46 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L589:
	.loc 1 1771 27 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L592
.LBE92:
	.loc 1 1784 16
	li	a5,-1
	j	.L622
.L588:
	.loc 1 1787 21
	addi	a5,s0,-224
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-40(s0)
	.loc 1 1789 9
	sw	zero,-44(s0)
	.loc 1 1791 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L593
	.loc 1 1793 19
	lw	a5,-460(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1793 12
	beq	a5,zero,.L594
.LBB93:
.LBB94:
	.loc 1 1797 22
	sw	zero,-48(s0)
	.loc 1 1797 13
	j	.L595
.L596:
	.loc 1 1797 49 discriminator 3
	lw	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-304(a5)
	.loc 1 1797 38 discriminator 3
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sw	a5,-48(s0)
.L595:
	.loc 1 1797 27 discriminator 1
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L596
.LBE94:
	.loc 1 1798 18
	addi	a3,s0,-336
	addi	a4,s0,-316
	addi	a5,s0,-224
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1798 16 discriminator 1
	bne	a5,zero,.L597
	.loc 1 1799 24
	li	a5,-1
	j	.L622
.L597:
	.loc 1 1801 33
	call	alloc_inode_T_FILE
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1802 16
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L599
	.loc 1 1802 39 discriminator 1
	li	a5,-1
	.loc 1 1802 39 is_stmt 0
	j	.L622
.L599:
	.loc 1 1803 17 is_stmt 1
	lw	a5,-316(s0)
	lw	a3,-84(s0)
	addi	a4,s0,-336
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1803 16 discriminator 1
	beq	a5,zero,.L600
	.loc 1 1803 65 discriminator 1
	li	a5,-1
	.loc 1 1803 65 is_stmt 0
	j	.L622
.L600:
	.loc 1 1804 18 is_stmt 1
	lw	a5,-84(s0)
	sw	a5,-40(s0)
	.loc 1 1805 13
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1809 38
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1809 28
	lhu	a5,992(a5)
	sh	a5,-86(s0)
.LBB95:
	.loc 1 1811 59
	sw	zero,-52(s0)
	.loc 1 1811 51
	j	.L601
.L602:
	.loc 1 1811 91 discriminator 3
	lw	a5,-52(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-328(a5)
	.loc 1 1811 78 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L601:
	.loc 1 1811 66 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L602
.LBE95:
	.loc 1 1812 33
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1812 22
	lhu	a5,996(a5)
	sh	a5,-54(s0)
	.loc 1 1813 17
	addi	a3,s0,-360
	addi	a4,s0,-340
	addi	a5,s0,-224
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1813 16 discriminator 1
	beq	a5,zero,.L603
.LBB96:
	.loc 1 1814 40
	lw	a5,-340(s0)
	addi	a4,s0,-448
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1815 28
	lw	a5,-436(s0)
	.loc 1 1815 34
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1815 20
	beq	a5,zero,.L603
	.loc 1 1815 49 discriminator 1
	lhu	a5,-430(s0)
	sh	a5,-54(s0)
.L603:
.LBE96:
	.loc 1 1817 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1817 40
	lhu	a5,994(a5)
	.loc 1 1817 20
	sh	a5,-296(s0)
	.loc 1 1818 20
	lhu	a5,-54(s0)
	sh	a5,-294(s0)
	.loc 1 1819 30
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 1 1819 54
	beq	a5,zero,.L605
	.loc 1 1819 54 is_stmt 0 discriminator 1
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L606
.L605:
	.loc 1 1819 54 discriminator 2
	li	a5,420
.L606:
	.loc 1 1819 64 is_stmt 1 discriminator 4
	lhu	a4,-86(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1819 62 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1819 21 discriminator 4
	sw	a5,-300(s0)
	.loc 1 1820 46
	call	fs_now
	mv	a5,a0
	.loc 1 1820 44 discriminator 1
	sw	a5,-284(s0)
	.loc 1 1820 37 discriminator 1
	lw	a5,-284(s0)
	.loc 1 1820 33 discriminator 1
	sw	a5,-288(s0)
	.loc 1 1820 26 discriminator 1
	lw	a5,-288(s0)
	.loc 1 1820 22 discriminator 1
	sw	a5,-292(s0)
	.loc 1 1821 13
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1822 25
	li	a5,1
	sw	a5,-44(s0)
.LBE93:
	j	.L607
.L594:
	.loc 1 1824 20
	li	a5,-1
	j	.L622
.L593:
	.loc 1 1827 9
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L607:
	.loc 1 1830 11
	lhu	a5,-312(s0)
	.loc 1 1830 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L608
	.loc 1 1830 32 discriminator 1
	lhu	a5,-312(s0)
	.loc 1 1830 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L608
	.loc 1 1830 55 discriminator 2
	li	a5,-1
	.loc 1 1830 55 is_stmt 0
	j	.L622
.L608:
	.loc 1 1833 11 is_stmt 1
	lhu	a5,-312(s0)
	.loc 1 1833 8
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L609
.LBB97:
	.loc 1 1834 13
	sw	zero,-60(s0)
	.loc 1 1835 12
	lw	a5,-460(s0)
	sext.w	a5,a5
	bne	a5,zero,.L610
	.loc 1 1835 37 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,4
	sw	a5,-60(s0)
.L610:
	.loc 1 1836 19
	lw	a5,-460(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1836 12
	beq	a5,zero,.L611
	.loc 1 1836 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,2
	sw	a5,-60(s0)
.L611:
	.loc 1 1837 19
	lw	a5,-460(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 1837 12
	beq	a5,zero,.L612
	.loc 1 1837 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,6
	sw	a5,-60(s0)
.L612:
	.loc 1 1840 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L613
	.loc 1 1841 18
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L614
	.loc 1 1841 18 is_stmt 0 discriminator 1
	lw	a5,-60(s0)
	j	.L615
.L614:
	.loc 1 1841 18 discriminator 2
	li	a5,4
.L615:
	.loc 1 1841 18 discriminator 4
	addi	a4,s0,-312
	mv	a1,a5
	mv	a0,a4
	call	check_perm
	mv	a5,a0
	.loc 1 1841 16 is_stmt 1 discriminator 1
	bne	a5,zero,.L613
	.loc 1 1841 64 discriminator 5
	li	a5,-1
	.loc 1 1841 64 is_stmt 0
	j	.L622
.L609:
.LBE97:
	.loc 1 1843 18 is_stmt 1
	lhu	a5,-312(s0)
	.loc 1 1843 15
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L613
	.loc 1 1844 14
	addi	a5,s0,-312
	li	a1,5
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1844 12 discriminator 1
	bne	a5,zero,.L613
	.loc 1 1844 53 discriminator 1
	li	a5,-1
	.loc 1 1844 53 is_stmt 0
	j	.L622
.L613:
.LBB98:
	.loc 1 1847 14 is_stmt 1
	li	a5,3
	sw	a5,-64(s0)
	.loc 1 1847 5
	j	.L616
.L621:
	.loc 1 1848 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1848 12
	bne	a5,zero,.L617
	.loc 1 1849 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1849 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1849 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1851 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1851 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 1852 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1852 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1853 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1853 34
	lw	a4,-40(s0)
	sw	a4,4(a5)
	.loc 1 1854 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1854 34
	ld	t5,-312(s0)
	ld	t4,-304(s0)
	ld	t3,-296(s0)
	ld	t1,-288(s0)
	ld	a7,-280(s0)
	ld	a6,-272(s0)
	ld	a0,-264(s0)
	ld	a1,-256(s0)
	ld	a2,-248(s0)
	ld	a3,-240(s0)
	ld	a4,-232(s0)
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
	.loc 1 1855 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1855 34
	sw	zero,96(a5)
	.loc 1 1856 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1856 40
	sw	zero,116(a5)
	.loc 1 1857 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1857 41
	sw	zero,120(a5)
	.loc 1 1858 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1858 35
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1861 24
	lw	a5,-460(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1861 16
	beq	a5,zero,.L618
	.loc 1 1861 48 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1861 56 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1861 35 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L618
.LBB99:
	.loc 1 1862 52
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1862 17
	addi	a4,a5,8
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1863 32
	call	fs_now
	mv	a5,a0
	sw	a5,-92(s0)
	.loc 1 1864 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1864 42
	lw	a4,-92(s0)
	sw	a4,32(a5)
	.loc 1 1865 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1865 42
	lw	a4,-92(s0)
	sw	a4,36(a5)
	.loc 1 1866 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1866 42
	lw	a4,-92(s0)
	sw	a4,28(a5)
	.loc 1 1867 46
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1867 35
	addi	a4,a5,8
	.loc 1 1867 17
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1868 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1868 36
	sw	zero,96(a5)
.L618:
.LBE99:
	.loc 1 1871 24
	lw	a5,-460(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1871 16
	beq	a5,zero,.L619
	.loc 1 1871 49 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1871 57 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1871 36 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L619
	.loc 1 1872 48
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 1872 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a3,-72(s0)
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 1 1872 56
	lw	a4,16(a4)
	.loc 1 1872 36
	sw	a4,96(a5)
.L619:
	.loc 1 1875 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	beq	a5,zero,.L620
	.loc 1 1876 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1876 36
	ld	t5,-312(s0)
	ld	t4,-304(s0)
	ld	t3,-296(s0)
	ld	t1,-288(s0)
	ld	a7,-280(s0)
	ld	a6,-272(s0)
	ld	a0,-264(s0)
	ld	a1,-256(s0)
	ld	a2,-248(s0)
	ld	a3,-240(s0)
	ld	a4,-232(s0)
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
.L620:
	.loc 1 1878 20
	lw	a5,-64(s0)
	j	.L622
.L617:
	.loc 1 1847 42 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L616:
	.loc 1 1847 23 discriminator 1
	lw	a5,-64(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L621
.LBE98:
	.loc 1 1881 12
	li	a5,-1
.L622:
	.loc 1 1882 1
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
.LFE71:
	.size	fs_open2, .-fs_open2
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB72:
	.loc 1 1886 50
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
	.loc 1 1887 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1889 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1889 7
	bne	a5,zero,.L624
	.loc 1 1890 16
	li	a5,-1
	j	.L625
.L624:
	.loc 1 1893 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1894 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L626
	.loc 1 1894 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L627
.L626:
	.loc 1 1895 16
	li	a5,-1
	j	.L625
.L627:
	.loc 1 1897 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1897 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1898 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 1898 41
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1898 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 1899 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L628
	.loc 1 1899 32 discriminator 1
	li	a5,0
	.loc 1 1899 32 is_stmt 0
	j	.L625
.L628:
	.loc 1 1901 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L629
	mv	a5,a4
.L629:
	.loc 1 1901 14
	sw	a5,-48(s0)
	.loc 1 1902 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,96(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 1903 6
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1903 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 1905 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1905 18 discriminator 1
	ld	a5,-40(s0)
	sw	a4,28(a5)
	.loc 1 1906 5
	ld	a5,-40(s0)
	lw	a4,4(a5)
	.loc 1 1906 26
	ld	a5,-40(s0)
	addi	a5,a5,8
	.loc 1 1906 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1907 12
	lw	a5,-48(s0)
.L625:
	.loc 1 1908 1
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
.LFE72:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_write
	.type	fs_write, @function
fs_write:
.LFB73:
	.loc 1 1912 57
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
	.loc 1 1913 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1915 8
	lw	a5,-596(s0)
	sext.w	a5,a5
	blt	a5,zero,.L631
	.loc 1 1915 16 discriminator 2
	lw	a5,-596(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L632
.L631:
	.loc 1 1915 48 discriminator 3
	li	a5,-1
	.loc 1 1915 48 is_stmt 0
	j	.L633
.L632:
	.loc 1 1916 19 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1916 8
	bne	a5,zero,.L634
	.loc 1 1916 40 discriminator 1
	li	a5,-1
	.loc 1 1916 40 is_stmt 0
	j	.L633
.L634:
	.loc 1 1918 32 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1918 18
	ld	a5,0(a5)
	sd	a5,-56(s0)
	.loc 1 1919 10
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 1919 8
	li	a5,3
	beq	a4,a5,.L635
	.loc 1 1919 36 discriminator 1
	li	a5,-1
	.loc 1 1919 36 is_stmt 0
	j	.L633
.L635:
	.loc 1 1920 10 is_stmt 1
	ld	a5,-56(s0)
	addi	a5,a5,8
	li	a1,2
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1920 8 discriminator 1
	bne	a5,zero,.L636
	.loc 1 1920 47 discriminator 1
	li	a5,-1
	.loc 1 1920 47 is_stmt 0
	j	.L633
.L636:
	.loc 1 1923 14 is_stmt 1
	ld	a5,-616(s0)
	sw	a5,-60(s0)
	.loc 1 1925 20
	ld	a5,-608(s0)
	sd	a5,-24(s0)
	.loc 1 1926 14
	lw	a5,-60(s0)
	sw	a5,-28(s0)
	.loc 1 1928 23
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1928 32
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1928 58
	beq	a5,zero,.L637
	.loc 1 1928 58 is_stmt 0 discriminator 1
	ld	a5,-56(s0)
	lw	a5,16(a5)
	j	.L638
.L637:
	.loc 1 1928 58 discriminator 2
	ld	a5,-56(s0)
	lw	a5,96(a5)
.L638:
	.loc 1 1928 14 is_stmt 1 discriminator 4
	sw	a5,-32(s0)
	.loc 1 1929 10
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1929 19
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1929 8
	beq	a5,zero,.L639
	.loc 1 1930 16
	ld	a5,-56(s0)
	lw	a4,-32(s0)
	sw	a4,96(a5)
.L639:
	.loc 1 1932 14
	sw	zero,-36(s0)
	.loc 1 1934 11
	j	.L640
.L644:
.LBB100:
	.loc 1 1935 18
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sw	a5,-64(s0)
	.loc 1 1936 18
	lw	a5,-32(s0)
	andi	a5,a5,511
	sw	a5,-68(s0)
	.loc 1 1937 18
	li	a5,512
	lw	a4,-68(s0)
	subw	a5,a5,a4
	sw	a5,-40(s0)
	.loc 1 1938 12
	lw	a5,-40(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L641
	.loc 1 1938 39 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-40(s0)
.L641:
	.loc 1 1940 29
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
	.loc 1 1941 12
	lw	a5,-72(s0)
	sext.w	a5,a5
	beq	a5,zero,.L646
	.loc 1 1945 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1946 9
	lwu	a5,-68(s0)
	addi	a4,s0,-592
	add	a5,a4,a5
	lw	a4,-40(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1947 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1949 17
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 1950 17
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 1951 17
	lwu	a5,-40(s0)
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 1952 17
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-36(s0)
.L640:
.LBE100:
	.loc 1 1934 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L644
	j	.L643
.L646:
.LBB101:
	.loc 1 1941 28
	nop
.L643:
.LBE101:
	.loc 1 1955 6
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 1 1955 12
	lw	a4,-36(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,96(a5)
	.loc 1 1957 14
	ld	a5,-56(s0)
	lw	a5,96(a5)
	sw	a5,-76(s0)
	.loc 1 1958 25
	ld	a5,-56(s0)
	lw	a5,16(a5)
	.loc 1 1958 8
	lw	a4,-76(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L645
	.loc 1 1959 21
	ld	a5,-56(s0)
	lw	a4,-76(s0)
	sw	a4,16(a5)
.L645:
	.loc 1 1961 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1961 18 discriminator 1
	ld	a5,-56(s0)
	sw	a4,32(a5)
	.loc 1 1962 5
	ld	a5,-56(s0)
	lw	a4,4(a5)
	.loc 1 1962 26
	ld	a5,-56(s0)
	addi	a5,a5,8
	.loc 1 1962 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1963 12
	lw	a5,-36(s0)
.L633:
	.loc 1 1964 1
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
.LFE73:
	.size	fs_write, .-fs_write
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB74:
	.loc 1 1966 25
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
	.loc 1 1967 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1969 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1969 7
	bne	a5,zero,.L648
	.loc 1 1970 16
	li	a5,-1
	j	.L649
.L648:
	.loc 1 1973 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1974 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L650
	.loc 1 1974 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L650
	.loc 1 1974 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1974 61 discriminator 2
	lw	a5,100(a5)
	.loc 1 1974 42 discriminator 2
	bne	a5,zero,.L651
.L650:
	.loc 1 1975 16
	li	a5,-1
	j	.L649
.L651:
	.loc 1 1977 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1977 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1978 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L649:
	.loc 1 1979 1
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
.LFE74:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB75:
	.loc 1 1984 36
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
	.loc 1 1985 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 1986 8
	ld	a5,-56(s0)
	blt	a5,zero,.L653
	.loc 1 1986 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,31
	ble	a4,a5,.L654
.L653:
	.loc 1 1986 48 discriminator 3
	li	a5,-1
	.loc 1 1986 48 is_stmt 0
	j	.L655
.L654:
	.loc 1 1987 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1987 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1988 8
	ld	a5,-40(s0)
	bne	a5,zero,.L656
	.loc 1 1988 20 discriminator 1
	li	a5,-1
	.loc 1 1988 20 is_stmt 0
	j	.L655
.L656:
	.loc 1 1991 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1991 12
	sd	zero,0(a5)
	.loc 1 1994 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L657
	.loc 1 1994 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L657:
	.loc 1 1997 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1997 8
	ble	a5,zero,.L658
	.loc 1 1997 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1997 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,100(a5)
.L658:
	.loc 1 2000 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 2000 8
	ble	a5,zero,.L659
	.loc 1 2000 29 discriminator 1
	li	a5,0
	.loc 1 2000 29 is_stmt 0
	j	.L655
.L659:
	.loc 1 2003 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,104(a5)
	sd	a5,-48(s0)
	.loc 1 2004 8
	ld	a5,-48(s0)
	beq	a5,zero,.L660
	.loc 1 2005 14
	ld	a5,-40(s0)
	lw	a5,116(a5)
	.loc 1 2005 12
	beq	a5,zero,.L661
	.loc 1 2005 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2005 27 discriminator 1
	ble	a5,zero,.L661
	.loc 1 2005 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2005 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 2005 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 2005 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2005 51 discriminator 2
	bne	a5,zero,.L661
	.loc 1 2005 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L661:
	.loc 1 2006 14
	ld	a5,-40(s0)
	lw	a5,120(a5)
	.loc 1 2006 12
	beq	a5,zero,.L662
	.loc 1 2006 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2006 27 discriminator 1
	ble	a5,zero,.L662
	.loc 1 2006 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2006 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 2006 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 2006 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2006 51 discriminator 2
	bne	a5,zero,.L662
	.loc 1 2006 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L662:
	.loc 1 2007 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2007 12
	ble	a5,zero,.L663
	.loc 1 2007 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2007 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L663:
	.loc 1 2008 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2008 12
	bne	a5,zero,.L660
.LBB102:
	.loc 1 2010 22
	sw	zero,-20(s0)
	.loc 1 2010 13
	j	.L664
.L666:
	.loc 1 2011 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2011 20
	beq	a5,zero,.L665
	.loc 1 2011 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2011 64 discriminator 1
	sd	zero,104(a5)
.L665:
	.loc 1 2010 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L664:
	.loc 1 2010 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 2010 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L666
.LBE102:
	.loc 1 2013 13
	ld	a0,-48(s0)
	call	free_pipe
.L660:
	.loc 1 2018 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 2019 12
	li	a5,0
.L655:
	.loc 1 2020 1
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
.LFE75:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB76:
	.loc 1 2023 1
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
.LBB103:
	.loc 1 2024 13
	sw	zero,-20(s0)
	.loc 1 2024 5
	j	.L668
.L669:
	.loc 1 2025 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 2024 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L668:
	.loc 1 2024 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L669
.LBE103:
	.loc 1 2027 1
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
.LFE76:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB77:
	.loc 1 2030 1
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
.LBB104:
	.loc 1 2032 13
	sw	zero,-20(s0)
	.loc 1 2032 5
	j	.L671
.L673:
	.loc 1 2033 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2033 11
	beq	a5,zero,.L672
	.loc 1 2034 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 2034 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 2034 29
	ld	a4,0(a4)
	.loc 1 2034 23
	sd	a4,0(a5)
	.loc 1 2035 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2035 22
	lw	a4,100(a5)
	.loc 1 2035 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	.loc 1 2038 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 2038 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L672:
	.loc 1 2032 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L671:
	.loc 1 2032 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L673
.LBE104:
	.loc 1 2064 1
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
.LFE77:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB78:
	.loc 1 2067 1
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
	.loc 1 2082 1
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
.LFE78:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB79:
	.loc 1 2084 36
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
	.loc 1 2085 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 2086 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L684
	.loc 1 2086 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L684
	.loc 1 2087 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L685
	.loc 1 2087 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L685
	.loc 1 2088 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2088 8
	beq	a5,zero,.L686
	.loc 1 2089 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L687
	.loc 1 2091 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2091 8
	beq	a5,zero,.L683
	.loc 1 2091 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L683:
	.loc 1 2092 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 2092 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 2092 19
	ld	a4,0(a4)
	.loc 1 2092 15
	sd	a4,0(a5)
	.loc 1 2093 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2093 14
	lw	a4,100(a5)
	.loc 1 2093 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	j	.L675
.L684:
	.loc 1 2086 47
	nop
	j	.L675
.L685:
	.loc 1 2087 47
	nop
	j	.L675
.L686:
	.loc 1 2088 28
	nop
	j	.L675
.L687:
	.loc 1 2089 25
	nop
.L675:
	.loc 1 2095 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE79:
	.size	fs_dup2, .-fs_dup2
	.align	1
	.globl	fs_fstat_fd
	.type	fs_fstat_fd, @function
fs_fstat_fd:
.LFB80:
	.loc 1 2099 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 2100 8
	ld	a5,-48(s0)
	bne	a5,zero,.L689
	.loc 1 2100 21 discriminator 1
	li	a5,-1
	.loc 1 2100 21 is_stmt 0
	j	.L690
.L689:
	.loc 1 2102 24 is_stmt 1
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 2103 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L691
	.loc 1 2103 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L692
.L691:
	.loc 1 2103 48 discriminator 3
	li	a5,-1
	.loc 1 2103 48 is_stmt 0
	j	.L690
.L692:
	.loc 1 2104 24 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 2104 18
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 2105 8
	ld	a5,-32(s0)
	beq	a5,zero,.L693
	.loc 1 2105 17 discriminator 2
	ld	a5,-32(s0)
	lw	a5,100(a5)
	.loc 1 2105 12 discriminator 2
	bne	a5,zero,.L694
.L693:
	.loc 1 2105 32 discriminator 3
	li	a5,-1
	.loc 1 2105 32 is_stmt 0
	j	.L690
.L694:
	.loc 1 2109 5 is_stmt 1
	li	a2,32
	li	a1,0
	ld	a0,-48(s0)
	call	memset
	.loc 1 2121 22
	ld	a5,-32(s0)
	lhu	a4,8(a5)
	.loc 1 2121 14
	ld	a5,-48(s0)
	sh	a4,0(a5)
	.loc 1 2121 47
	ld	a5,-32(s0)
	lhu	a4,14(a5)
	.loc 1 2121 39
	ld	a5,-48(s0)
	sh	a4,2(a5)
	.loc 1 2121 72
	ld	a5,-32(s0)
	lw	a4,16(a5)
	.loc 1 2121 64
	ld	a5,-48(s0)
	sw	a4,4(a5)
	.loc 1 2122 22
	ld	a5,-32(s0)
	lw	a4,20(a5)
	.loc 1 2122 14
	ld	a5,-48(s0)
	sw	a4,12(a5)
	.loc 1 2122 45
	ld	a5,-32(s0)
	lhu	a4,24(a5)
	.loc 1 2122 37
	ld	a5,-48(s0)
	sh	a4,16(a5)
	.loc 1 2122 67
	ld	a5,-32(s0)
	lhu	a4,26(a5)
	.loc 1 2122 59
	ld	a5,-48(s0)
	sh	a4,18(a5)
	.loc 1 2123 23
	ld	a5,-32(s0)
	lw	a4,28(a5)
	.loc 1 2123 15
	ld	a5,-48(s0)
	sw	a4,20(a5)
	.loc 1 2123 49
	ld	a5,-32(s0)
	lw	a4,32(a5)
	.loc 1 2123 41
	ld	a5,-48(s0)
	sw	a4,24(a5)
	.loc 1 2123 75
	ld	a5,-32(s0)
	lw	a4,36(a5)
	.loc 1 2123 67
	ld	a5,-48(s0)
	sw	a4,28(a5)
	.loc 1 2125 12
	li	a5,0
.L690:
	.loc 1 2126 1
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
.LFE80:
	.size	fs_fstat_fd, .-fs_fstat_fd
	.align	1
	.globl	fs_lseek
	.type	fs_lseek, @function
fs_lseek:
.LFB81:
	.loc 1 2130 48
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
	.loc 1 2131 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L696
	.loc 1 2131 16 discriminator 2
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L697
.L696:
	.loc 1 2131 48 discriminator 3
	li	a5,-1
	.loc 1 2131 48 is_stmt 0
	j	.L698
.L697:
	.loc 1 2132 24 is_stmt 1
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 2133 24
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 2133 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 2134 8
	ld	a5,-40(s0)
	bne	a5,zero,.L699
	.loc 1 2134 20 discriminator 1
	li	a5,-1
	.loc 1 2134 20 is_stmt 0
	j	.L698
.L699:
	.loc 1 2137 5 is_stmt 1
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L700
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	bgt	a4,a5,.L701
	lw	a5,-56(s0)
	sext.w	a5,a5
	beq	a5,zero,.L702
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L703
	j	.L701
.L702:
	.loc 1 2138 25
	sd	zero,-24(s0)
	.loc 1 2138 30
	j	.L704
.L700:
	.loc 1 2139 34
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 2139 25
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-24(s0)
	.loc 1 2139 41
	j	.L704
.L703:
	.loc 1 2140 39
	ld	a5,-40(s0)
	lw	a5,16(a5)
	.loc 1 2140 25
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-24(s0)
	.loc 1 2140 46
	j	.L704
.L701:
	.loc 1 2141 21
	li	a5,-1
	j	.L698
.L704:
	.loc 1 2144 10
	ld	a4,-24(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	sd	a5,-48(s0)
	.loc 1 2145 8
	ld	a5,-48(s0)
	bge	a5,zero,.L705
	.loc 1 2145 28 discriminator 1
	li	a5,-1
	.loc 1 2145 28 is_stmt 0
	j	.L698
.L705:
	.loc 1 2147 14 is_stmt 1
	ld	a5,-48(s0)
	sext.w	a4,a5
	.loc 1 2147 12
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 2148 19
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 2148 12
	slli	a5,a5,32
	srli	a5,a5,32
.L698:
	.loc 1 2149 1
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
.LFE81:
	.size	fs_lseek, .-fs_lseek
	.section	.rodata
	.align	3
.LC6:
	.dword	4835703278458516699
	.text
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.file 5 "common.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x3c85
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x2a
	.4byte	.LASF337
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
	.uleb128 0x2b
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
	.uleb128 0x17
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
	.uleb128 0x17
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
	.uleb128 0xd
	.4byte	0x8b
	.4byte	0x1fd
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x17
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
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x234
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x11
	.byte	0x1
	.byte	0x8
	.4byte	.LASF39
	.uleb128 0x20
	.4byte	0x234
	.uleb128 0x17
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
	.byte	0x7d
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x25
	.4byte	0x97
	.byte	0x4
	.byte	0x81
	.byte	0x6
	.4byte	0x2fa
	.uleb128 0x15
	.4byte	.LASF42
	.byte	0
	.uleb128 0x15
	.4byte	.LASF43
	.byte	0x1
	.uleb128 0x15
	.4byte	.LASF44
	.byte	0x2
	.byte	0
	.uleb128 0x12
	.4byte	.LASF45
	.byte	0x5
	.byte	0x14
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x12
	.4byte	.LASF46
	.byte	0x5
	.byte	0x16
	.byte	0x10
	.4byte	0x312
	.uleb128 0xc
	.4byte	0x2fa
	.uleb128 0x19
	.4byte	.LASF47
	.2byte	0x100
	.byte	0x5
	.byte	0x1a
	.4byte	0x4a8
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
	.4byte	.LASF48
	.byte	0x5
	.byte	0x3a
	.byte	0xe
	.4byte	0x9e
	.byte	0xf8
	.byte	0
	.uleb128 0x17
	.4byte	.LASF49
	.byte	0x10
	.byte	0x5
	.byte	0x41
	.4byte	0x4cf
	.uleb128 0x5
	.4byte	.LASF50
	.byte	0x5
	.byte	0x43
	.byte	0xc
	.4byte	0x4cf
	.byte	0
	.uleb128 0x5
	.4byte	.LASF51
	.byte	0x5
	.byte	0x44
	.byte	0x9
	.4byte	0x48
	.byte	0x8
	.byte	0
	.uleb128 0xc
	.4byte	0x4d4
	.uleb128 0xc
	.4byte	0x234
	.uleb128 0x19
	.4byte	.LASF52
	.2byte	0x420
	.byte	0x5
	.byte	0x47
	.4byte	0x631
	.uleb128 0x5
	.4byte	.LASF53
	.byte	0x5
	.byte	0x48
	.byte	0x16
	.4byte	0x317
	.byte	0
	.uleb128 0x8
	.4byte	.LASF54
	.byte	0x5
	.byte	0x4a
	.byte	0x16
	.4byte	0x317
	.2byte	0x100
	.uleb128 0x8
	.4byte	.LASF55
	.byte	0x5
	.byte	0x4b
	.byte	0x12
	.4byte	0x631
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF56
	.byte	0x5
	.byte	0x4d
	.byte	0xb
	.4byte	0x4d4
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF57
	.byte	0x5
	.byte	0x4e
	.byte	0xe
	.4byte	0x9e
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF58
	.byte	0x5
	.byte	0x4f
	.byte	0xe
	.4byte	0x9e
	.2byte	0x218
	.uleb128 0x1c
	.string	"sz"
	.byte	0x50
	.byte	0xe
	.4byte	0x9e
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF59
	.byte	0x5
	.byte	0x52
	.byte	0x9
	.4byte	0x48
	.2byte	0x228
	.uleb128 0x8
	.4byte	.LASF60
	.byte	0x5
	.byte	0x54
	.byte	0x11
	.4byte	0x306
	.2byte	0x230
	.uleb128 0x8
	.4byte	.LASF61
	.byte	0x5
	.byte	0x56
	.byte	0xb
	.4byte	0x4d4
	.2byte	0x238
	.uleb128 0x8
	.4byte	.LASF62
	.byte	0x5
	.byte	0x57
	.byte	0x9
	.4byte	0x48
	.2byte	0x240
	.uleb128 0x8
	.4byte	.LASF63
	.byte	0x5
	.byte	0x58
	.byte	0x9
	.4byte	0x48
	.2byte	0x244
	.uleb128 0x8
	.4byte	.LASF64
	.byte	0x5
	.byte	0x5a
	.byte	0x12
	.4byte	0x636
	.2byte	0x248
	.uleb128 0x8
	.4byte	.LASF49
	.byte	0x5
	.byte	0x5c
	.byte	0x1c
	.4byte	0x703
	.2byte	0x348
	.uleb128 0x8
	.4byte	.LASF65
	.byte	0x5
	.byte	0x5d
	.byte	0x9
	.4byte	0x48
	.2byte	0x350
	.uleb128 0x8
	.4byte	.LASF66
	.byte	0x5
	.byte	0x5f
	.byte	0x9
	.4byte	0x48
	.2byte	0x354
	.uleb128 0x8
	.4byte	.LASF67
	.byte	0x5
	.byte	0x61
	.byte	0x12
	.4byte	0x631
	.2byte	0x358
	.uleb128 0x1c
	.string	"cwd"
	.byte	0x64
	.byte	0xa
	.4byte	0x70d
	.2byte	0x360
	.uleb128 0x8
	.4byte	.LASF68
	.byte	0x5
	.byte	0x65
	.byte	0x14
	.4byte	0x84
	.2byte	0x3e0
	.uleb128 0x1c
	.string	"uid"
	.byte	0x68
	.byte	0xe
	.4byte	0x78
	.2byte	0x3e2
	.uleb128 0x1c
	.string	"gid"
	.byte	0x69
	.byte	0xe
	.4byte	0x78
	.2byte	0x3e4
	.uleb128 0x8
	.4byte	.LASF69
	.byte	0x5
	.byte	0x6a
	.byte	0xe
	.4byte	0x71d
	.2byte	0x3e6
	.uleb128 0x8
	.4byte	.LASF70
	.byte	0x5
	.byte	0x6b
	.byte	0x9
	.4byte	0x48
	.2byte	0x3f8
	.uleb128 0x8
	.4byte	.LASF71
	.byte	0x5
	.byte	0x6c
	.byte	0xa
	.4byte	0x72d
	.2byte	0x3fc
	.byte	0
	.uleb128 0xc
	.4byte	0x4d9
	.uleb128 0xd
	.4byte	0x646
	.4byte	0x646
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xc
	.4byte	0x64b
	.uleb128 0x19
	.4byte	.LASF72
	.2byte	0x490
	.byte	0x5
	.byte	0x8b
	.4byte	0x703
	.uleb128 0x5
	.4byte	.LASF73
	.byte	0x5
	.byte	0x8c
	.byte	0x47
	.4byte	0x7f8
	.byte	0
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x5
	.byte	0x8d
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x7
	.string	"din"
	.byte	0x5
	.byte	0x8e
	.byte	0x13
	.4byte	0x13f
	.byte	0x8
	.uleb128 0x7
	.string	"off"
	.byte	0x5
	.byte	0x8f
	.byte	0xe
	.4byte	0x8b
	.byte	0x60
	.uleb128 0x5
	.4byte	.LASF74
	.byte	0x5
	.byte	0x90
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x5
	.4byte	.LASF75
	.byte	0x5
	.byte	0x91
	.byte	0x13
	.4byte	0x7f3
	.byte	0x68
	.uleb128 0x5
	.4byte	.LASF76
	.byte	0x5
	.byte	0x92
	.byte	0x9
	.4byte	0x48
	.byte	0x70
	.uleb128 0x5
	.4byte	.LASF77
	.byte	0x5
	.byte	0x93
	.byte	0x9
	.4byte	0x48
	.byte	0x74
	.uleb128 0x5
	.4byte	.LASF78
	.byte	0x5
	.byte	0x94
	.byte	0x9
	.4byte	0x48
	.byte	0x78
	.uleb128 0x5
	.4byte	.LASF79
	.byte	0x5
	.byte	0x97
	.byte	0x9
	.4byte	0x48
	.byte	0x7c
	.uleb128 0x5
	.4byte	.LASF80
	.byte	0x5
	.byte	0x99
	.byte	0x12
	.4byte	0x646
	.byte	0x80
	.uleb128 0x5
	.4byte	.LASF81
	.byte	0x5
	.byte	0x9b
	.byte	0x12
	.4byte	0x829
	.byte	0x88
	.uleb128 0x8
	.4byte	.LASF82
	.byte	0x5
	.byte	0x9c
	.byte	0x9
	.4byte	0x48
	.2byte	0x488
	.byte	0
	.uleb128 0xc
	.4byte	0x708
	.uleb128 0xc
	.4byte	0x4a8
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x71d
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0xd
	.4byte	0x78
	.4byte	0x72d
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x73d
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x19
	.4byte	.LASF83
	.2byte	0x330
	.byte	0x5
	.byte	0x76
	.4byte	0x7e4
	.uleb128 0x5
	.4byte	.LASF84
	.byte	0x5
	.byte	0x77
	.byte	0xa
	.4byte	0x7e4
	.byte	0
	.uleb128 0x8
	.4byte	.LASF85
	.byte	0x5
	.byte	0x78
	.byte	0xe
	.4byte	0x8b
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF86
	.byte	0x5
	.byte	0x79
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF87
	.byte	0x5
	.byte	0x7a
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF88
	.byte	0x5
	.byte	0x7b
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x8
	.4byte	.LASF89
	.byte	0x5
	.byte	0x7c
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF90
	.byte	0x5
	.byte	0x7d
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x8
	.4byte	.LASF74
	.byte	0x5
	.byte	0x7e
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF91
	.byte	0x5
	.byte	0x80
	.byte	0x12
	.4byte	0x636
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF92
	.byte	0x5
	.byte	0x81
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x8
	.4byte	.LASF80
	.byte	0x5
	.byte	0x83
	.byte	0x13
	.4byte	0x7f3
	.2byte	0x328
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x7f3
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0xc
	.4byte	0x73d
	.uleb128 0x25
	.4byte	0x97
	.byte	0x5
	.byte	0x8c
	.byte	0xa
	.4byte	0x829
	.uleb128 0x15
	.4byte	.LASF93
	.byte	0
	.uleb128 0x15
	.4byte	.LASF94
	.byte	0x1
	.uleb128 0x15
	.4byte	.LASF95
	.byte	0x2
	.uleb128 0x15
	.4byte	.LASF96
	.byte	0x3
	.uleb128 0x15
	.4byte	.LASF97
	.byte	0x4
	.uleb128 0x15
	.4byte	.LASF98
	.byte	0x5
	.byte	0
	.uleb128 0xd
	.4byte	0x631
	.4byte	0x839
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0x26
	.4byte	.LASF99
	.byte	0xc7
	.byte	0x15
	.4byte	0x829
	.uleb128 0x26
	.4byte	.LASF100
	.byte	0xc9
	.byte	0xc
	.4byte	0x48
	.uleb128 0x2c
	.4byte	.LASF101
	.byte	0x5
	.2byte	0x14d
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x17
	.4byte	.LASF102
	.byte	0x10
	.byte	0x1
	.byte	0x57
	.4byte	0x89d
	.uleb128 0x5
	.4byte	.LASF103
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
	.4byte	.LASF104
	.byte	0x1
	.byte	0x5a
	.byte	0xe
	.4byte	0x78
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF67
	.byte	0x1
	.byte	0x5b
	.byte	0xe
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x27
	.4byte	.LASF107
	.byte	0x2
	.byte	0x5e
	.4byte	0x8d0
	.uleb128 0x5
	.4byte	.LASF104
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
	.4byte	.LASF105
	.byte	0x1
	.byte	0x61
	.byte	0xe
	.4byte	0x8d0
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x78
	.4byte	0x8df
	.uleb128 0x28
	.4byte	0xaa
	.byte	0
	.uleb128 0x17
	.4byte	.LASF106
	.byte	0x8
	.byte	0x1
	.byte	0x64
	.4byte	0x905
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
	.4byte	.LASF108
	.byte	0x4
	.byte	0x65
	.4byte	0x938
	.uleb128 0x5
	.4byte	.LASF104
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
	.4byte	.LASF105
	.byte	0x1
	.byte	0x68
	.byte	0x1c
	.4byte	0x938
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x8df
	.4byte	0x947
	.uleb128 0x28
	.4byte	0xaa
	.byte	0
	.uleb128 0x17
	.4byte	.LASF109
	.byte	0x10
	.byte	0x1
	.byte	0x6e
	.4byte	0x97b
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x1
	.byte	0x6f
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF110
	.byte	0x1
	.byte	0x70
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF111
	.byte	0x1
	.byte	0x71
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.byte	0
	.uleb128 0xe
	.4byte	.LASF112
	.byte	0x76
	.byte	0x11
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x1a
	.string	"Q"
	.byte	0x77
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0xe
	.4byte	.LASF113
	.byte	0x79
	.byte	0x1c
	.4byte	0x9b8
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xc
	.4byte	0x85c
	.uleb128 0xe
	.4byte	.LASF114
	.byte	0x7a
	.byte	0x1c
	.4byte	0x9d2
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xc
	.4byte	0x89d
	.uleb128 0xe
	.4byte	.LASF74
	.byte	0x7b
	.byte	0x1c
	.4byte	0x9ec
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xc
	.4byte	0x905
	.uleb128 0xe
	.4byte	.LASF115
	.byte	0x7c
	.byte	0x1c
	.4byte	0xa06
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xc
	.4byte	0x5b
	.uleb128 0xe
	.4byte	.LASF116
	.byte	0x7e
	.byte	0x11
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2d
	.4byte	.LASF117
	.byte	0x1
	.byte	0x7f
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xd
	.4byte	0x67
	.4byte	0xa46
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0x1f
	.4byte	0xa37
	.uleb128 0x2e
	.4byte	.LASF118
	.byte	0x1
	.byte	0x80
	.byte	0x1a
	.4byte	0xa46
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x1a
	.string	"req"
	.byte	0xbf
	.byte	0x1e
	.4byte	0x947
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x19
	.4byte	.LASF119
	.2byte	0x210
	.byte	0x1
	.byte	0xe3
	.4byte	0xaca
	.uleb128 0x5
	.4byte	.LASF120
	.byte	0x1
	.byte	0xe4
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF84
	.byte	0x1
	.byte	0xe5
	.byte	0xd
	.4byte	0xaca
	.byte	0x4
	.uleb128 0x8
	.4byte	.LASF121
	.byte	0x1
	.byte	0xe6
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF122
	.byte	0x1
	.byte	0xe7
	.byte	0xe
	.4byte	0x8b
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF123
	.byte	0x1
	.byte	0xe8
	.byte	0xe
	.4byte	0x8b
	.2byte	0x20c
	.byte	0
	.uleb128 0xd
	.4byte	0x5b
	.4byte	0xad9
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0xd
	.4byte	0xa78
	.4byte	0xae9
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xe
	.4byte	.LASF124
	.byte	0xeb
	.byte	0x1c
	.4byte	0xad9
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache
	.uleb128 0xe
	.4byte	.LASF125
	.byte	0xec
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_time
	.uleb128 0xe
	.4byte	.LASF126
	.byte	0xed
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_hits
	.uleb128 0xe
	.4byte	.LASF127
	.byte	0xee
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_misses
	.uleb128 0x1
	.string	"sb"
	.2byte	0x181
	.byte	0x1a
	.4byte	0xd7
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0x2
	.4byte	.LASF128
	.2byte	0x182
	.byte	0x17
	.4byte	0xaca
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xd
	.4byte	0x73d
	.4byte	0xb78
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF129
	.2byte	0x366
	.byte	0xe
	.4byte	0xb68
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xd
	.4byte	0x64b
	.4byte	0xb9e
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF130
	.2byte	0x367
	.byte	0xd
	.4byte	0xb8e
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1d
	.4byte	.LASF131
	.2byte	0x369
	.byte	0xf
	.4byte	0x7f3
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x1d
	.4byte	.LASF132
	.2byte	0x36a
	.byte	0xe
	.4byte	0x646
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x2f
	.4byte	.LASF338
	.byte	0x1
	.2byte	0x44f
	.byte	0x6
	.4byte	0xbef
	.uleb128 0x22
	.byte	0
	.uleb128 0x30
	.4byte	.LASF133
	.byte	0x1
	.2byte	0x44e
	.byte	0x6
	.4byte	0xc02
	.uleb128 0xb
	.4byte	0x4d4
	.byte	0
	.uleb128 0x31
	.4byte	.LASF134
	.byte	0x5
	.byte	0xbf
	.byte	0xf
	.4byte	0xc14
	.4byte	0xc14
	.uleb128 0x22
	.byte	0
	.uleb128 0xc
	.4byte	0x646
	.uleb128 0x13
	.4byte	.LASF135
	.byte	0x12
	.byte	0x7
	.4byte	0x4d4
	.4byte	0xc38
	.uleb128 0xb
	.4byte	0x4d4
	.uleb128 0xb
	.4byte	0xc38
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0xc
	.4byte	0x23b
	.uleb128 0x13
	.4byte	.LASF136
	.byte	0x10
	.byte	0x5
	.4byte	0x48
	.4byte	0xc52
	.uleb128 0xb
	.4byte	0xc38
	.byte	0
	.uleb128 0x13
	.4byte	.LASF137
	.byte	0x14
	.byte	0x7
	.4byte	0x4d4
	.4byte	0xc6c
	.uleb128 0xb
	.4byte	0x4d4
	.uleb128 0xb
	.4byte	0xc38
	.byte	0
	.uleb128 0x13
	.4byte	.LASF138
	.byte	0x13
	.byte	0x7
	.4byte	0x4d4
	.4byte	0xc8b
	.uleb128 0xb
	.4byte	0x4d4
	.uleb128 0xb
	.4byte	0xc38
	.uleb128 0xb
	.4byte	0x48
	.byte	0
	.uleb128 0x13
	.4byte	.LASF139
	.byte	0x16
	.byte	0x5
	.4byte	0x48
	.4byte	0xca5
	.uleb128 0xb
	.4byte	0xc38
	.uleb128 0xb
	.4byte	0xc38
	.byte	0
	.uleb128 0x13
	.4byte	.LASF140
	.byte	0x17
	.byte	0x5
	.4byte	0x48
	.4byte	0xcc4
	.uleb128 0xb
	.4byte	0xc38
	.uleb128 0xb
	.4byte	0xc38
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF141
	.byte	0x11
	.byte	0x5
	.4byte	0x48
	.4byte	0xcda
	.uleb128 0xb
	.4byte	0xc38
	.uleb128 0x22
	.byte	0
	.uleb128 0x13
	.4byte	.LASF142
	.byte	0xf
	.byte	0x7
	.4byte	0xcf9
	.4byte	0xcf9
	.uleb128 0xb
	.4byte	0xcf9
	.uleb128 0xb
	.4byte	0xcfb
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x32
	.byte	0x8
	.uleb128 0xc
	.4byte	0xd00
	.uleb128 0x33
	.uleb128 0x13
	.4byte	.LASF143
	.byte	0xe
	.byte	0x7
	.4byte	0xcf9
	.4byte	0xd20
	.uleb128 0xb
	.4byte	0xcf9
	.uleb128 0xb
	.4byte	0x48
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF144
	.byte	0xd
	.byte	0x7
	.4byte	0xcf9
	.4byte	0xd35
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0x34
	.4byte	.LASF145
	.byte	0x1
	.byte	0x15
	.byte	0xd
	.4byte	0xd47
	.uleb128 0xb
	.4byte	0xc38
	.byte	0
	.uleb128 0x9
	.4byte	.LASF150
	.2byte	0x852
	.byte	0x6
	.4byte	0x54
	.8byte	.LFB81
	.8byte	.LFE81-.LFB81
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdcf
	.uleb128 0x6
	.string	"fd"
	.2byte	0x852
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF146
	.2byte	0x852
	.byte	0x1c
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF147
	.2byte	0x852
	.byte	0x28
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"ft"
	.2byte	0x854
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x855
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF148
	.2byte	0x858
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x860
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF151
	.2byte	0x832
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB80
	.8byte	.LFE80-.LFB80
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe29
	.uleb128 0x6
	.string	"fd"
	.2byte	0x832
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"st"
	.2byte	0x832
	.byte	0x26
	.4byte	0xe29
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"ft"
	.2byte	0x836
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"f"
	.2byte	0x838
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xc
	.4byte	0x240
	.uleb128 0x14
	.4byte	.LASF154
	.2byte	0x824
	.8byte	.LFB79
	.8byte	.LFE79-.LFB79
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe78
	.uleb128 0x3
	.4byte	.LASF152
	.2byte	0x824
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF153
	.2byte	0x824
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ft"
	.2byte	0x825
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF155
	.2byte	0x812
	.8byte	.LFB78
	.8byte	.LFE78-.LFB78
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xea5
	.uleb128 0x3
	.4byte	.LASF64
	.2byte	0x812
	.byte	0x22
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF156
	.2byte	0x7ed
	.8byte	.LFB77
	.8byte	.LFE77-.LFB77
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf0f
	.uleb128 0x3
	.4byte	.LASF157
	.2byte	0x7ed
	.byte	0x20
	.4byte	0x631
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x7ed
	.byte	0x35
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF159
	.2byte	0x7ed
	.byte	0x4b
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB104
	.8byte	.LBE104-.LBB104
	.uleb128 0x1
	.string	"i"
	.2byte	0x7f0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF160
	.2byte	0x7e6
	.8byte	.LFB76
	.8byte	.LFE76-.LFB76
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf5b
	.uleb128 0x3
	.4byte	.LASF64
	.2byte	0x7e6
	.byte	0x1c
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB103
	.8byte	.LBE103-.LBB103
	.uleb128 0x1
	.string	"i"
	.2byte	0x7e8
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF161
	.2byte	0x7c0
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB75
	.8byte	.LFE75-.LFB75
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfe2
	.uleb128 0x6
	.string	"fd"
	.2byte	0x7c0
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF162
	.2byte	0x7c0
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"ft"
	.2byte	0x7c1
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x7c3
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"p"
	.2byte	0x7d3
	.byte	0x13
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB102
	.8byte	.LBE102-.LBB102
	.uleb128 0x1
	.string	"i"
	.2byte	0x7da
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF163
	.2byte	0x7ae
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB74
	.8byte	.LFE74-.LFB74
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x103e
	.uleb128 0x6
	.string	"fd"
	.2byte	0x7ae
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x7af
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x7b5
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x7b9
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x9
	.4byte	.LASF164
	.2byte	0x778
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB73
	.8byte	.LFE73-.LFB73
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x115b
	.uleb128 0x6
	.string	"fd"
	.2byte	0x778
	.byte	0x16
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"buf"
	.2byte	0x778
	.byte	0x26
	.4byte	0xcfb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x3
	.4byte	.LASF165
	.2byte	0x778
	.byte	0x32
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x779
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"f"
	.2byte	0x77e
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x783
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"src"
	.2byte	0x785
	.byte	0x14
	.4byte	0x115b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF167
	.2byte	0x786
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"off"
	.2byte	0x788
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF168
	.2byte	0x78c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x7a5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x1b
	.4byte	.LLRL6
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x78f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x790
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x791
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF173
	.2byte	0x794
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF174
	.2byte	0x798
	.byte	0x11
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x6c
	.uleb128 0x9
	.4byte	.LASF175
	.2byte	0x75e
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB72
	.8byte	.LFE72-.LFB72
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11f9
	.uleb128 0x6
	.string	"fd"
	.2byte	0x75e
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"buf"
	.2byte	0x75e
	.byte	0x1f
	.4byte	0xcf9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF165
	.2byte	0x75e
	.byte	0x2b
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x75f
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x765
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x769
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF176
	.2byte	0x76a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF177
	.2byte	0x76d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF178
	.2byte	0x6df
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB71
	.8byte	.LFE71-.LFB71
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1433
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x6df
	.byte	0x1a
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x3
	.4byte	.LASF104
	.2byte	0x6df
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -460
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x6df
	.byte	0x2f
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x6e0
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF180
	.2byte	0x6e1
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6fb
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"di"
	.2byte	0x6fc
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x6fd
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xa
	.8byte	.LBB91
	.8byte	.LBE91-.LBB91
	.4byte	0x12bc
	.uleb128 0x1
	.string	"p"
	.2byte	0x6e3
	.byte	0x16
	.4byte	0x631
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0xa
	.8byte	.LBB92
	.8byte	.LBE92-.LBB92
	.4byte	0x12df
	.uleb128 0x1
	.string	"i"
	.2byte	0x6eb
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0xa
	.8byte	.LBB93
	.8byte	.LBE93-.LBB93
	.4byte	0x13cc
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x703
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -316
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x704
	.byte	0x12
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x2
	.4byte	.LASF183
	.2byte	0x709
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.string	"um"
	.2byte	0x711
	.byte	0x1c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -86
	.uleb128 0x2
	.4byte	.LASF184
	.2byte	0x713
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -340
	.uleb128 0x2
	.4byte	.LASF185
	.2byte	0x713
	.byte	0x22
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"gid"
	.2byte	0x714
	.byte	0x16
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -54
	.uleb128 0xa
	.8byte	.LBB94
	.8byte	.LBE94-.LBB94
	.4byte	0x1385
	.uleb128 0x1
	.string	"i"
	.2byte	0x705
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xa
	.8byte	.LBB95
	.8byte	.LBE95-.LBB95
	.4byte	0x13a9
	.uleb128 0x1
	.string	"ii"
	.2byte	0x713
	.byte	0x3b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB96
	.8byte	.LBE96-.LBB96
	.uleb128 0x2
	.4byte	.LASF186
	.2byte	0x716
	.byte	0x1f
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB97
	.8byte	.LBE97-.LBB97
	.4byte	0x13f1
	.uleb128 0x2
	.4byte	.LASF187
	.2byte	0x72a
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x4
	.8byte	.LBB98
	.8byte	.LBE98-.LBB98
	.uleb128 0x1
	.string	"i"
	.2byte	0x737
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB99
	.8byte	.LBE99-.LBB99
	.uleb128 0x1
	.string	"now"
	.2byte	0x747
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x1443
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	.LASF188
	.2byte	0x6d9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB70
	.8byte	.LFE70-.LFB70
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1475
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x6d9
	.byte	0x19
	.4byte	0xc38
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF189
	.2byte	0x6cc
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB69
	.8byte	.LFE69-.LFB69
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1505
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x6cc
	.byte	0x1b
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x3
	.4byte	.LASF32
	.2byte	0x6cc
	.byte	0x2a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x6cc
	.byte	0x3a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6ce
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6cf
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6d1
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.string	"now"
	.2byte	0x6d2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF190
	.2byte	0x6bf
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB68
	.8byte	.LFE68-.LFB68
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1586
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x6bf
	.byte	0x1a
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"uid"
	.2byte	0x6bf
	.byte	0x29
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -250
	.uleb128 0x6
	.string	"gid"
	.2byte	0x6bf
	.byte	0x37
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6c1
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6c2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6c4
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF191
	.2byte	0x6b1
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB67
	.8byte	.LFE67-.LFB67
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1604
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x6b1
	.byte	0x1a
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x6b1
	.byte	0x29
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6b3
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6b4
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6b6
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x1
	.string	"p"
	.2byte	0x6b8
	.byte	0x12
	.4byte	0x631
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x9
	.4byte	.LASF192
	.2byte	0x6a2
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB66
	.8byte	.LFE66-.LFB66
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16c3
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x6a2
	.byte	0x1a
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x6
	.string	"st"
	.2byte	0x6a2
	.byte	0x2d
	.4byte	0xe29
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6a5
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x6a6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x6a6
	.byte	0x1b
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x6a8
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6a9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x6aa
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x4
	.8byte	.LBB90
	.8byte	.LBE90-.LBB90
	.uleb128 0x1
	.string	"i"
	.2byte	0x6a6
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF193
	.2byte	0x693
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB65
	.8byte	.LFE65-.LFB65
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17a0
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x693
	.byte	0x1d
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x6
	.string	"buf"
	.2byte	0x693
	.byte	0x29
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x3
	.4byte	.LASF194
	.2byte	0x693
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -388
	.uleb128 0x1
	.string	"abs"
	.2byte	0x696
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x697
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x697
	.byte	0x1b
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x699
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x69a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"di"
	.2byte	0x69b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"n"
	.2byte	0x69d
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB89
	.8byte	.LBE89-.LBB89
	.uleb128 0x1
	.string	"i"
	.2byte	0x697
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF195
	.2byte	0x686
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB64
	.8byte	.LFE64-.LFB64
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1810
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x686
	.byte	0x19
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"st"
	.2byte	0x686
	.byte	0x2c
	.4byte	0xe29
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x689
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x68a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x68c
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF196
	.2byte	0x669
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB63
	.8byte	.LFE63-.LFB63
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18e0
	.uleb128 0x3
	.4byte	.LASF197
	.2byte	0x669
	.byte	0x19
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x3
	.4byte	.LASF198
	.2byte	0x669
	.byte	0x2e
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -496
	.uleb128 0x2
	.4byte	.LASF199
	.2byte	0x66b
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF200
	.2byte	0x66b
	.byte	0x17
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x670
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x674
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x677
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -372
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x677
	.byte	0x1b
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -392
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x67b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -480
	.uleb128 0x4
	.8byte	.LBB88
	.8byte	.LBE88-.LBB88
	.uleb128 0x1
	.string	"i"
	.2byte	0x677
	.byte	0x34
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF201
	.2byte	0x642
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB62
	.8byte	.LFE62-.LFB62
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1a13
	.uleb128 0x3
	.4byte	.LASF197
	.2byte	0x642
	.byte	0x1b
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF198
	.2byte	0x642
	.byte	0x30
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF199
	.2byte	0x644
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF200
	.2byte	0x644
	.byte	0x17
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x64b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"op"
	.2byte	0x64f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -292
	.uleb128 0x1
	.string	"np"
	.2byte	0x64f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF202
	.2byte	0x64f
	.byte	0x1b
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF203
	.2byte	0x64f
	.byte	0x31
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x655
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"opd"
	.2byte	0x658
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0x2
	.4byte	.LASF204
	.2byte	0x65d
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF205
	.2byte	0x65e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0xa
	.8byte	.LBB86
	.8byte	.LBE86-.LBB86
	.4byte	0x19f2
	.uleb128 0x1
	.string	"i"
	.2byte	0x650
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB87
	.8byte	.LBE87-.LBB87
	.uleb128 0x1
	.string	"pr"
	.2byte	0x660
	.byte	0x16
	.4byte	0x631
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF206
	.2byte	0x625
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB61
	.8byte	.LFE61-.LFB61
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b24
	.uleb128 0x3
	.4byte	.LASF207
	.2byte	0x625
	.byte	0x1c
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF208
	.2byte	0x625
	.byte	0x30
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x1
	.string	"abs"
	.2byte	0x627
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x62b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x62b
	.byte	0x1b
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x62f
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x633
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x633
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ni"
	.2byte	0x636
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x2
	.4byte	.LASF209
	.2byte	0x63a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"buf"
	.2byte	0x63b
	.byte	0xd
	.4byte	0x1b24
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.uleb128 0xa
	.8byte	.LBB84
	.8byte	.LBE84-.LBB84
	.4byte	0x1b04
	.uleb128 0x1
	.string	"i"
	.2byte	0x62b
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB85
	.8byte	.LBE85-.LBB85
	.uleb128 0x1
	.string	"i"
	.2byte	0x634
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x5b
	.4byte	0x1b34
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xef
	.byte	0
	.uleb128 0x10
	.4byte	.LASF227
	.2byte	0x614
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB60
	.8byte	.LFE60-.LFB60
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1c0c
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x614
	.byte	0x26
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"ip"
	.2byte	0x614
	.byte	0x3b
	.4byte	0x1c0c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"src"
	.2byte	0x614
	.byte	0x4e
	.4byte	0x115b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x614
	.byte	0x5c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF167
	.2byte	0x616
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x616
	.byte	0x24
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"s"
	.2byte	0x616
	.byte	0x3c
	.4byte	0x115b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB83
	.8byte	.LBE83-.LBB83
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x618
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x618
	.byte	0x32
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x619
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF173
	.2byte	0x61a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x13f
	.uleb128 0x9
	.4byte	.LASF210
	.2byte	0x5e9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB59
	.8byte	.LFE59-.LFB59
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d68
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x5e9
	.byte	0x1b
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5eb
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5ef
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"di"
	.2byte	0x5f1
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x5ff
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x5ff
	.byte	0x1b
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF211
	.2byte	0x602
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x605
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF213
	.2byte	0x60e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0xa
	.8byte	.LBB78
	.8byte	.LBE78-.LBB78
	.4byte	0x1d24
	.uleb128 0x1
	.string	"pi"
	.2byte	0x5f5
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB79
	.8byte	.LBE79-.LBB79
	.uleb128 0x1
	.string	"ft"
	.2byte	0x5f7
	.byte	0x17
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB80
	.8byte	.LBE80-.LBB80
	.uleb128 0x1
	.string	"i"
	.2byte	0x5f8
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB81
	.8byte	.LBE81-.LBB81
	.4byte	0x1d47
	.uleb128 0x1
	.string	"i"
	.2byte	0x5ff
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x4
	.8byte	.LBB82
	.8byte	.LBE82-.LBB82
	.uleb128 0x1
	.string	"pr"
	.2byte	0x607
	.byte	0x16
	.4byte	0x631
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF214
	.2byte	0x5c0
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB58
	.8byte	.LFE58-.LFB58
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1e9e
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x5c0
	.byte	0x1a
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5c2
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5c6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.string	"di"
	.2byte	0x5c8
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x5d9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -276
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x5d9
	.byte	0x1b
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF215
	.2byte	0x5dc
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x2
	.4byte	.LASF213
	.2byte	0x5e3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0xa
	.8byte	.LBB73
	.8byte	.LBE73-.LBB73
	.4byte	0x1e7e
	.uleb128 0x1
	.string	"off"
	.2byte	0x5cd
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x5cd
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1b
	.4byte	.LLRL5
	.uleb128 0x1
	.string	"de"
	.2byte	0x5d0
	.byte	0x1c
	.4byte	0x1e9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF217
	.2byte	0x5d1
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.8byte	.LBB75
	.8byte	.LBE75-.LBB75
	.uleb128 0x1
	.string	"i"
	.2byte	0x5d2
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB77
	.8byte	.LBE77-.LBB77
	.uleb128 0x1
	.string	"i"
	.2byte	0x5d9
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x1fd
	.uleb128 0x9
	.4byte	.LASF218
	.2byte	0x595
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB57
	.8byte	.LFE57-.LFB57
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1fb4
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x595
	.byte	0x1a
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x595
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -556
	.uleb128 0x1
	.string	"abs"
	.2byte	0x598
	.byte	0xa
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF55
	.2byte	0x5a0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x5a1
	.byte	0xa
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5a4
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x5a9
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5aa
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF219
	.2byte	0x5b0
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x1
	.string	"um"
	.2byte	0x5b3
	.byte	0x14
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -30
	.uleb128 0x2
	.4byte	.LASF186
	.2byte	0x5b4
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0xa
	.8byte	.LBB71
	.8byte	.LBE71-.LBB71
	.4byte	0x1f94
	.uleb128 0x1
	.string	"i"
	.2byte	0x5a1
	.byte	0x22
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB72
	.8byte	.LBE72-.LBB72
	.uleb128 0x1
	.string	"i"
	.2byte	0x5ab
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF259
	.2byte	0x555
	.8byte	.LFB56
	.8byte	.LFE56-.LFB56
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2181
	.uleb128 0x6
	.string	"out"
	.2byte	0x555
	.byte	0x28
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1112
	.uleb128 0x3
	.4byte	.LASF220
	.2byte	0x555
	.byte	0x34
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1120
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x555
	.byte	0x47
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x1
	.string	"p"
	.2byte	0x557
	.byte	0x12
	.4byte	0x631
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF221
	.2byte	0x558
	.byte	0xa
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"tmp"
	.2byte	0x568
	.byte	0xa
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -624
	.uleb128 0x1
	.string	"s"
	.2byte	0x56b
	.byte	0x11
	.4byte	0xc38
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"end"
	.2byte	0x56c
	.byte	0x11
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x2
	.4byte	.LASF222
	.2byte	0x56d
	.byte	0x11
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF223
	.2byte	0x56e
	.byte	0xa
	.4byte	0x2191
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1104
	.uleb128 0x2
	.4byte	.LASF224
	.2byte	0x56f
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"pos"
	.2byte	0x584
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0xa
	.8byte	.LBB61
	.8byte	.LBE61-.LBB61
	.4byte	0x20ae
	.uleb128 0x1
	.string	"n"
	.2byte	0x560
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.uleb128 0x29
	.4byte	.LLRL3
	.4byte	0x212b
	.uleb128 0x1
	.string	"len"
	.2byte	0x575
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x4
	.8byte	.LBB63
	.8byte	.LBE63-.LBB63
	.uleb128 0x2
	.4byte	.LASF225
	.2byte	0x57b
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xa
	.8byte	.LBB64
	.8byte	.LBE64-.LBB64
	.4byte	0x210a
	.uleb128 0x1
	.string	"i"
	.2byte	0x57d
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB65
	.8byte	.LBE65-.LBB65
	.uleb128 0x1
	.string	"i"
	.2byte	0x57e
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB67
	.8byte	.LBE67-.LBB67
	.uleb128 0x1
	.string	"i"
	.2byte	0x586
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1b
	.4byte	.LLRL4
	.uleb128 0x2
	.4byte	.LASF226
	.2byte	0x587
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB69
	.8byte	.LBE69-.LBB69
	.uleb128 0x1
	.string	"j"
	.2byte	0x58a
	.byte	0x12
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x2191
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xff
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x21a7
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x10
	.4byte	.LASF228
	.2byte	0x537
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB55
	.8byte	.LFE55-.LFB55
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2267
	.uleb128 0x3
	.4byte	.LASF229
	.2byte	0x537
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x537
	.byte	0x3c
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x539
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"off"
	.2byte	0x53d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF230
	.2byte	0x53e
	.byte	0xa
	.4byte	0x1433
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x4
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x1
	.string	"de"
	.2byte	0x541
	.byte	0x18
	.4byte	0x1e9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF217
	.2byte	0x542
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.uleb128 0x1
	.string	"i"
	.2byte	0x543
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF231
	.2byte	0x4f7
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB54
	.8byte	.LFE54-.LFB54
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2408
	.uleb128 0x3
	.4byte	.LASF229
	.2byte	0x4f7
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -708
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x4f7
	.byte	0x39
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -720
	.uleb128 0x3
	.4byte	.LASF232
	.2byte	0x4f7
	.byte	0x48
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x4fb
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"de"
	.2byte	0x500
	.byte	0x13
	.4byte	0x1fd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"off"
	.2byte	0x507
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x524
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x525
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x526
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF173
	.2byte	0x527
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"buf"
	.2byte	0x52a
	.byte	0xd
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x52c
	.byte	0x14
	.4byte	0x1e9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.4byte	0x2365
	.uleb128 0x1
	.string	"i"
	.2byte	0x503
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB56
	.8byte	.LBE56-.LBB56
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x50a
	.byte	0x18
	.4byte	0x1e9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF217
	.2byte	0x50b
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.uleb128 0x1
	.string	"i"
	.2byte	0x50c
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB58
	.8byte	.LBE58-.LBB58
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x510
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF173
	.2byte	0x511
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.4byte	.LASF234
	.2byte	0x516
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF235
	.2byte	0x517
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF236
	.2byte	0x4e1
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB53
	.8byte	.LFE53-.LFB53
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x247d
	.uleb128 0x1
	.string	"di"
	.2byte	0x4e3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB53
	.8byte	.LBE53-.LBB53
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x4e4
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.uleb128 0x2
	.4byte	.LASF219
	.2byte	0x4e8
	.byte	0x1b
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF237
	.2byte	0x4b4
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB52
	.8byte	.LFE52-.LFB52
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2594
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x4b4
	.byte	0x2f
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF229
	.2byte	0x4b4
	.byte	0x3f
	.4byte	0x2594
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x3
	.4byte	.LASF238
	.2byte	0x4b4
	.byte	0x52
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF239
	.2byte	0x4ba
	.byte	0xa
	.4byte	0x2599
	.uleb128 0x4
	.byte	0x91
	.sleb128 -144
	.byte	0x6
	.uleb128 0x2
	.4byte	.LASF240
	.2byte	0x4be
	.byte	0xb
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF241
	.2byte	0x4bf
	.byte	0xb
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"tok"
	.2byte	0x4c0
	.byte	0xb
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"cur"
	.2byte	0x4c1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x4c2
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"n"
	.2byte	0x4d8
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0xa
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x2573
	.uleb128 0x2
	.4byte	.LASF242
	.2byte	0x4c6
	.byte	0xf
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF243
	.2byte	0x4ce
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.byte	0
	.uleb128 0x4
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.uleb128 0x1
	.string	"i"
	.2byte	0x4da
	.byte	0xe
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x8b
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x25ad
	.uleb128 0x35
	.4byte	0xaa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -136
	.byte	0x6
	.byte	0
	.uleb128 0x9
	.4byte	.LASF244
	.2byte	0x485
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB51
	.8byte	.LFE51-.LFB51
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2635
	.uleb128 0x6
	.string	"fd"
	.2byte	0x485
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF103
	.2byte	0x485
	.byte	0x1d
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x485
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x487
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x490
	.byte	0x13
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.uleb128 0x1
	.string	"i"
	.2byte	0x496
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF245
	.2byte	0x453
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26ca
	.uleb128 0x6
	.string	"fd"
	.2byte	0x453
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF103
	.2byte	0x453
	.byte	0x1c
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x453
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x455
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x45e
	.byte	0x13
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"j"
	.2byte	0x46d
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x1
	.string	"i"
	.2byte	0x46e
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF246
	.2byte	0x410
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x275c
	.uleb128 0x6
	.string	"fd1"
	.2byte	0x410
	.byte	0x15
	.4byte	0x275c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"fd2"
	.2byte	0x410
	.byte	0x1f
	.4byte	0x275c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x411
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pip"
	.2byte	0x413
	.byte	0x13
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.4byte	0x2748
	.uleb128 0x1
	.string	"i"
	.2byte	0x415
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x1b
	.4byte	.LLRL2
	.uleb128 0x1
	.string	"i"
	.2byte	0x42f
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x48
	.uleb128 0x9
	.4byte	.LASF247
	.2byte	0x407
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27ae
	.uleb128 0x6
	.string	"fd"
	.2byte	0x407
	.byte	0x10
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x409
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"k"
	.2byte	0x40c
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x9
	.4byte	.LASF248
	.2byte	0x3fa
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27ee
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3fa
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x3fc
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF249
	.2byte	0x3ee
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x282e
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3ee
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x3f0
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF250
	.2byte	0x3d9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x286e
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3d9
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF64
	.2byte	0x3db
	.byte	0x13
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF251
	.2byte	0x3c5
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x289b
	.uleb128 0x3
	.4byte	.LASF64
	.2byte	0x3c5
	.byte	0x1c
	.4byte	0xc14
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x24
	.4byte	.LASF252
	.2byte	0x3b9
	.byte	0xe
	.4byte	0x646
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x28cd
	.uleb128 0x2
	.4byte	.LASF158
	.2byte	0x3bb
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF253
	.2byte	0x3a3
	.byte	0xf
	.4byte	0x7f3
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x291a
	.uleb128 0x1
	.string	"p"
	.2byte	0x3a5
	.byte	0x13
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF254
	.2byte	0x3b1
	.byte	0xb
	.4byte	0xcf9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"pa"
	.2byte	0x3b2
	.byte	0xb
	.4byte	0xcf9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x23
	.4byte	.LASF255
	.2byte	0x39a
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2945
	.uleb128 0x6
	.string	"p"
	.2byte	0x39a
	.byte	0x1d
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF256
	.2byte	0x391
	.byte	0xe
	.4byte	0x646
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2975
	.uleb128 0x1
	.string	"p"
	.2byte	0x393
	.byte	0x12
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF257
	.2byte	0x38b
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29a0
	.uleb128 0x6
	.string	"p"
	.2byte	0x38b
	.byte	0x1e
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF258
	.2byte	0x380
	.byte	0xf
	.4byte	0x7f3
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29d0
	.uleb128 0x1
	.string	"p"
	.2byte	0x382
	.byte	0x13
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x36
	.4byte	.LASF339
	.byte	0x1
	.2byte	0x36c
	.byte	0x6
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2a70
	.uleb128 0xa
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x2a31
	.uleb128 0x1
	.string	"i"
	.2byte	0x371
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.uleb128 0x1
	.string	"p"
	.2byte	0x372
	.byte	0x17
	.4byte	0x7f3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.uleb128 0x1
	.string	"i"
	.2byte	0x378
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.uleb128 0x1
	.string	"p"
	.2byte	0x379
	.byte	0x16
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF260
	.2byte	0x359
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2ae3
	.uleb128 0x6
	.string	"f"
	.2byte	0x359
	.byte	0x27
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x359
	.byte	0x37
	.4byte	0x631
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x35a
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"c"
	.2byte	0x35a
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x1
	.string	"i"
	.2byte	0x35b
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF261
	.2byte	0x34b
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b54
	.uleb128 0x6
	.string	"f"
	.2byte	0x34b
	.byte	0x24
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x34b
	.byte	0x34
	.4byte	0x631
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x34c
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x29
	.4byte	.LLRL0
	.4byte	0x2b40
	.uleb128 0x1
	.string	"i"
	.2byte	0x34e
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1b
	.4byte	.LLRL1
	.uleb128 0x1
	.string	"i"
	.2byte	0x350
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF262
	.2byte	0x348
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b84
	.uleb128 0x6
	.string	"f"
	.2byte	0x348
	.byte	0x23
	.4byte	0x646
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF263
	.2byte	0x330
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2be0
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x330
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x331
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x1
	.string	"i"
	.2byte	0x337
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF264
	.2byte	0x307
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2d6d
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x307
	.byte	0x1d
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1672
	.uleb128 0x6
	.string	"out"
	.2byte	0x307
	.byte	0x29
	.4byte	0x4d4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1680
	.uleb128 0x3
	.4byte	.LASF220
	.2byte	0x307
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1684
	.uleb128 0x1
	.string	"abs"
	.2byte	0x30a
	.byte	0xa
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"dir"
	.2byte	0x30e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"buf"
	.2byte	0x30f
	.byte	0xa
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x310
	.byte	0xb
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x310
	.byte	0x18
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF266
	.2byte	0x311
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x311
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"n"
	.2byte	0x311
	.byte	0x23
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x2
	.4byte	.LASF67
	.2byte	0x316
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x318
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"l"
	.2byte	0x327
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x2d4c
	.uleb128 0x2
	.4byte	.LASF268
	.2byte	0x31b
	.byte	0x12
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1568
	.uleb128 0x1
	.string	"len"
	.2byte	0x31b
	.byte	0x21
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF269
	.2byte	0x31d
	.byte	0x12
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1440
	.uleb128 0x1
	.string	"p"
	.2byte	0x31d
	.byte	0x35
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF270
	.2byte	0x31f
	.byte	0x12
	.4byte	0x7e4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1184
	.byte	0
	.uleb128 0x4
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x1
	.string	"i"
	.2byte	0x32a
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF271
	.2byte	0x2c5
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2e9a
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x2c5
	.byte	0x2d
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1400
	.uleb128 0x3
	.4byte	.LASF266
	.2byte	0x2c5
	.byte	0x37
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1404
	.uleb128 0x1
	.string	"ipr"
	.2byte	0x2ca
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.string	"buf"
	.2byte	0x2ce
	.byte	0xa
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -400
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x2d0
	.byte	0xb
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x2d1
	.byte	0xb
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cur"
	.2byte	0x2d2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF272
	.2byte	0x2d3
	.byte	0xa
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -656
	.uleb128 0x4
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x2
	.4byte	.LASF67
	.2byte	0x2da
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x2dc
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1384
	.uleb128 0x4
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x2
	.4byte	.LASF268
	.2byte	0x2df
	.byte	0x12
	.4byte	0x70d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1296
	.uleb128 0x1
	.string	"n"
	.2byte	0x2e0
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF269
	.2byte	0x2e4
	.byte	0x12
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1168
	.uleb128 0x1
	.string	"p"
	.2byte	0x2e6
	.byte	0x13
	.4byte	0x4d4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF270
	.2byte	0x2ec
	.byte	0x12
	.4byte	0x2181
	.uleb128 0x3
	.byte	0x91
	.sleb128 -912
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF273
	.2byte	0x2c1
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2ecc
	.uleb128 0x3
	.4byte	.LASF179
	.2byte	0x2c1
	.byte	0x22
	.4byte	0xc38
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF274
	.2byte	0x2aa
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2f7b
	.uleb128 0x3
	.4byte	.LASF55
	.2byte	0x2aa
	.byte	0x24
	.4byte	0x1c0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x2aa
	.byte	0x38
	.4byte	0xc38
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"off"
	.2byte	0x2ab
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF230
	.2byte	0x2ac
	.byte	0xa
	.4byte	0x1433
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.uleb128 0x1
	.string	"de"
	.2byte	0x2b0
	.byte	0x18
	.4byte	0x1e9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF217
	.2byte	0x2b1
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.uleb128 0x1
	.string	"i"
	.2byte	0x2b2
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF275
	.2byte	0x292
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3050
	.uleb128 0x6
	.string	"ip"
	.2byte	0x292
	.byte	0x1f
	.4byte	0x1c0c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF146
	.2byte	0x292
	.byte	0x2c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.string	"buf"
	.2byte	0x292
	.byte	0x3d
	.4byte	0xa06
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x292
	.byte	0x4b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF167
	.2byte	0x293
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x294
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"dst"
	.2byte	0x295
	.byte	0xe
	.4byte	0xa06
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x298
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x299
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF177
	.2byte	0x29a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF173
	.2byte	0x29d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF276
	.2byte	0x249
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3251
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x249
	.byte	0x2b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x6
	.string	"ip"
	.2byte	0x249
	.byte	0x40
	.4byte	0x1c0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x6
	.string	"idx"
	.2byte	0x249
	.byte	0x4d
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"di"
	.2byte	0x26d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF277
	.2byte	0x26e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF278
	.2byte	0x26f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x271
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF280
	.2byte	0x27a
	.byte	0xd
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF281
	.2byte	0x27c
	.byte	0xf
	.4byte	0x2594
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF282
	.2byte	0x27d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x286
	.byte	0xd
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x288
	.byte	0xf
	.4byte	0x2594
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x314e
	.uleb128 0x1
	.string	"b"
	.2byte	0x24d
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.byte	0
	.uleb128 0xa
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x31e7
	.uleb128 0x2
	.4byte	.LASF285
	.2byte	0x256
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x25f
	.byte	0x11
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.uleb128 0x2
	.4byte	.LASF217
	.2byte	0x261
	.byte	0x13
	.4byte	0x2594
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"i"
	.2byte	0x262
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x31c5
	.uleb128 0x1
	.string	"nb"
	.2byte	0x258
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0x4
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x1
	.string	"db"
	.2byte	0x264
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0x320b
	.uleb128 0x1
	.string	"nb"
	.2byte	0x273
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.uleb128 0xa
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x322f
	.uleb128 0x1
	.string	"nb"
	.2byte	0x27f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x4
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x1
	.string	"db"
	.2byte	0x28a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF286
	.2byte	0x229
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3334
	.uleb128 0x6
	.string	"ip"
	.2byte	0x229
	.byte	0x2e
	.4byte	0x1c0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.string	"idx"
	.2byte	0x229
	.byte	0x3b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x32c7
	.uleb128 0x2
	.4byte	.LASF285
	.2byte	0x22f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.4byte	.LASF217
	.2byte	0x232
	.byte	0x13
	.4byte	0x2594
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x4
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.uleb128 0x2
	.4byte	.LASF287
	.2byte	0x237
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF288
	.2byte	0x238
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x23a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF281
	.2byte	0x23e
	.byte	0x13
	.4byte	0x2594
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF282
	.2byte	0x23f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x244
	.byte	0x13
	.4byte	0x2594
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF289
	.2byte	0x218
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33b4
	.uleb128 0x2
	.4byte	.LASF290
	.2byte	0x21a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF291
	.2byte	0x21b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x1
	.string	"b"
	.2byte	0x21c
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"z"
	.2byte	0x220
	.byte	0x15
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF292
	.2byte	0x1ea
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3517
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1ea
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1ea
	.byte	0x3d
	.4byte	0x1c0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0xa
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x3413
	.uleb128 0x1
	.string	"i"
	.2byte	0x1ed
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xa
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x3466
	.uleb128 0x2
	.4byte	.LASF293
	.2byte	0x1f6
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x1f8
	.byte	0x13
	.4byte	0x2594
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"i"
	.2byte	0x1f9
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x2
	.4byte	.LASF294
	.2byte	0x202
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x204
	.byte	0x13
	.4byte	0x2594
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x1
	.string	"i"
	.2byte	0x205
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x2
	.4byte	.LASF295
	.2byte	0x207
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF296
	.2byte	0x208
	.byte	0x15
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF297
	.2byte	0x20a
	.byte	0x17
	.4byte	0x2594
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.string	"j"
	.2byte	0x20b
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
	.uleb128 0x18
	.4byte	.LASF298
	.2byte	0x1de
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3570
	.uleb128 0x6
	.string	"b"
	.2byte	0x1de
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF299
	.2byte	0x1e1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1e2
	.byte	0xd
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1e4
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x18
	.4byte	.LASF300
	.2byte	0x1d4
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x35c9
	.uleb128 0x6
	.string	"b"
	.2byte	0x1d4
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF299
	.2byte	0x1d6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1d7
	.byte	0xd
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1d9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x10
	.4byte	.LASF301
	.2byte	0x1cb
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3627
	.uleb128 0x6
	.string	"b"
	.2byte	0x1cb
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF299
	.2byte	0x1cd
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1ce
	.byte	0xd
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1d0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x18
	.4byte	.LASF302
	.2byte	0x1bd
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36b1
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1bd
	.byte	0x22
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x6
	.string	"src"
	.2byte	0x1bd
	.byte	0x3d
	.4byte	0x36b1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x2
	.4byte	.LASF303
	.2byte	0x1c0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF120
	.2byte	0x1c1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x1c2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1c4
	.byte	0xd
	.4byte	0xaca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"dip"
	.2byte	0x1c6
	.byte	0x14
	.4byte	0x1c0c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xc
	.4byte	0x1e8
	.uleb128 0x1e
	.4byte	.LASF304
	.2byte	0x1bb
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36e6
	.uleb128 0x6
	.string	"b"
	.2byte	0x1bb
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x14
	.4byte	.LASF305
	.2byte	0x1a6
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x375e
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1a6
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF306
	.2byte	0x1a6
	.byte	0x2f
	.4byte	0x1c0c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF303
	.2byte	0x1ad
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF120
	.2byte	0x1af
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x1b1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"dip"
	.2byte	0x1b4
	.byte	0x14
	.4byte	0x1c0c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x37
	.4byte	.LASF321
	.byte	0x1
	.2byte	0x1a1
	.byte	0x6
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1e
	.4byte	.LASF307
	.2byte	0x18d
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3833
	.uleb128 0x6
	.string	"ip"
	.2byte	0x18d
	.byte	0x26
	.4byte	0x1c0c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF187
	.2byte	0x18d
	.byte	0x2e
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"p"
	.2byte	0x18f
	.byte	0x12
	.4byte	0x631
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF31
	.2byte	0x190
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF308
	.2byte	0x191
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF309
	.2byte	0x199
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x2
	.4byte	.LASF310
	.2byte	0x195
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x1
	.string	"i"
	.2byte	0x196
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF311
	.2byte	0x186
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3863
	.uleb128 0x1
	.string	"x"
	.2byte	0x186
	.byte	0x30
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF312
	.2byte	0x175
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x38ad
	.uleb128 0x6
	.string	"blk"
	.2byte	0x175
	.byte	0x1b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"src"
	.2byte	0x175
	.byte	0x2c
	.4byte	0xcfb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"be"
	.2byte	0x177
	.byte	0x1a
	.4byte	0x38ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xc
	.4byte	0xa78
	.uleb128 0x18
	.4byte	.LASF313
	.2byte	0x15c
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x38ee
	.uleb128 0x3
	.4byte	.LASF111
	.2byte	0x15c
	.byte	0x27
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.string	"src"
	.2byte	0x15c
	.byte	0x3b
	.4byte	0xcfb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x14
	.4byte	.LASF314
	.2byte	0x155
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3938
	.uleb128 0x6
	.string	"blk"
	.2byte	0x155
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"dst"
	.2byte	0x155
	.byte	0x25
	.4byte	0xcf9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"be"
	.2byte	0x157
	.byte	0x1a
	.4byte	0x38ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x38
	.4byte	.LASF315
	.byte	0x1
	.2byte	0x14e
	.byte	0xd
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3966
	.uleb128 0x6
	.string	"be"
	.2byte	0x14e
	.byte	0x31
	.4byte	0x38ad
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x10
	.4byte	.LASF316
	.2byte	0x11e
	.byte	0x1d
	.4byte	0x38ad
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x39e9
	.uleb128 0x3
	.4byte	.LASF120
	.2byte	0x11e
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF317
	.2byte	0x12e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x39c9
	.uleb128 0x1
	.string	"i"
	.2byte	0x123
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x1
	.string	"i"
	.2byte	0x12f
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF318
	.2byte	0x104
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3a49
	.uleb128 0x2
	.4byte	.LASF319
	.2byte	0x106
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF320
	.2byte	0x107
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x1
	.string	"i"
	.2byte	0x10a
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x39
	.4byte	.LASF322
	.byte	0x1
	.byte	0xfc
	.byte	0x6
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x3a
	.4byte	.LASF323
	.byte	0x1
	.byte	0xf0
	.byte	0x6
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3aa0
	.uleb128 0x4
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x1a
	.string	"i"
	.byte	0xf2
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x3b
	.4byte	.LASF324
	.byte	0x1
	.byte	0xc4
	.byte	0xd
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3adc
	.uleb128 0x3c
	.4byte	.LASF111
	.byte	0x1
	.byte	0xc4
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x16
	.string	"dst"
	.byte	0xc4
	.byte	0x34
	.4byte	0xcf9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3d
	.4byte	.LASF325
	.byte	0x1
	.byte	0xb9
	.byte	0x14
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3b22
	.uleb128 0x16
	.string	"f0"
	.byte	0xb9
	.byte	0x27
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x16
	.string	"f1"
	.byte	0xb9
	.byte	0x33
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x16
	.string	"f2"
	.byte	0xb9
	.byte	0x3f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x3e
	.4byte	.LASF326
	.byte	0x1
	.byte	0x85
	.byte	0x6
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3c0e
	.uleb128 0xe
	.4byte	.LASF327
	.byte	0x92
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1a
	.string	"st"
	.byte	0x96
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xe
	.4byte	.LASF328
	.byte	0x9e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xe
	.4byte	.LASF329
	.byte	0x9f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xe
	.4byte	.LASF330
	.byte	0xa4
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xe
	.4byte	.LASF331
	.byte	0xa5
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xe
	.4byte	.LASF332
	.byte	0xa6
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xe
	.4byte	.LASF333
	.byte	0xa7
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xe
	.4byte	.LASF334
	.byte	0xa8
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xe
	.4byte	.LASF335
	.byte	0xb2
	.byte	0xe
	.4byte	0x9e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1a
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
	.uleb128 0xe
	.4byte	.LASF148
	.byte	0x88
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3f
	.4byte	.LASF336
	.byte	0x1
	.byte	0x83
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3c49
	.uleb128 0x16
	.string	"b"
	.byte	0x83
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x16
	.string	"o"
	.byte	0x83
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x40
	.4byte	.LASF340
	.byte	0x1
	.byte	0x82
	.byte	0x14
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x16
	.string	"b"
	.byte	0x82
	.byte	0x22
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x16
	.string	"o"
	.byte	0x82
	.byte	0x2d
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x16
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
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
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
	.uleb128 0xf
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x10
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
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x16
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
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
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
	.uleb128 0x19
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
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
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
	.uleb128 0x1b
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x1c
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
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3e
	.uleb128 0x21
	.sleb128 7
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 4
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
	.uleb128 0x2b
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
	.uleb128 0x2c
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
	.uleb128 0x2d
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
	.uleb128 0x2e
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
	.uleb128 0x3c
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
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x31
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
	.uleb128 0x32
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x33
	.uleb128 0x26
	.byte	0
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
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x35
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x36
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
	.uleb128 0x37
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
	.uleb128 0x38
	.uleb128 0x2e
	.byte	0x1
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
	.uleb128 0x39
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
	.uleb128 0x3a
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
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3c
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
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3e
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
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3f
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
	.uleb128 0x40
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
	.uleb128 .LBB37-.Ltext0
	.uleb128 .LBE37-.Ltext0
	.byte	0x4
	.uleb128 .LBB39-.Ltext0
	.uleb128 .LBE39-.Ltext0
	.byte	0
.LLRL1:
	.byte	0x4
	.uleb128 .LBB38-.Ltext0
	.uleb128 .LBE38-.Ltext0
	.byte	0x4
	.uleb128 .LBB40-.Ltext0
	.uleb128 .LBE40-.Ltext0
	.byte	0
.LLRL2:
	.byte	0x4
	.uleb128 .LBB47-.Ltext0
	.uleb128 .LBE47-.Ltext0
	.byte	0x4
	.uleb128 .LBB48-.Ltext0
	.uleb128 .LBE48-.Ltext0
	.byte	0
.LLRL3:
	.byte	0x4
	.uleb128 .LBB62-.Ltext0
	.uleb128 .LBE62-.Ltext0
	.byte	0x4
	.uleb128 .LBB66-.Ltext0
	.uleb128 .LBE66-.Ltext0
	.byte	0
.LLRL4:
	.byte	0x4
	.uleb128 .LBB68-.Ltext0
	.uleb128 .LBE68-.Ltext0
	.byte	0x4
	.uleb128 .LBB70-.Ltext0
	.uleb128 .LBE70-.Ltext0
	.byte	0
.LLRL5:
	.byte	0x4
	.uleb128 .LBB74-.Ltext0
	.uleb128 .LBE74-.Ltext0
	.byte	0x4
	.uleb128 .LBB76-.Ltext0
	.uleb128 .LBE76-.Ltext0
	.byte	0
.LLRL6:
	.byte	0x4
	.uleb128 .LBB100-.Ltext0
	.uleb128 .LBE100-.Ltext0
	.byte	0x4
	.uleb128 .LBB101-.Ltext0
	.uleb128 .LBE101-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF219:
	.string	"newi"
.LASF134:
	.string	"get_current_file_table"
.LASF167:
	.string	"left"
.LASF241:
	.string	"last"
.LASF163:
	.string	"fs_size"
.LASF201:
	.string	"fs_rename"
.LASF57:
	.string	"vaddr"
.LASF181:
	.string	"created_new"
.LASF248:
	.string	"is_stdout"
.LASF148:
	.string	"base"
.LASF152:
	.string	"oldfd"
.LASF286:
	.string	"inode_blockno"
.LASF136:
	.string	"strlen"
.LASF153:
	.string	"newfd"
.LASF140:
	.string	"strncmp"
.LASF62:
	.string	"program_size"
.LASF147:
	.string	"whence"
.LASF315:
	.string	"bcache_release"
.LASF104:
	.string	"flags"
.LASF289:
	.string	"alloc_data_block"
.LASF283:
	.string	"secondbuf"
.LASF336:
	.string	"mr32"
.LASF106:
	.string	"virtq_used_elem"
.LASF11:
	.string	"unsigned int"
.LASF67:
	.string	"next"
.LASF238:
	.string	"leafname"
.LASF213:
	.string	"zero"
.LASF35:
	.string	"addrs"
.LASF42:
	.string	"SEEK_SET"
.LASF144:
	.string	"kalloc_pages"
.LASF190:
	.string	"fs_chown"
.LASF228:
	.string	"remove_dirent"
.LASF210:
	.string	"fs_unlink"
.LASF278:
	.string	"idx2"
.LASF188:
	.string	"fs_open"
.LASF259:
	.string	"build_abs_normalized"
.LASF186:
	.string	"pdi_inh"
.LASF43:
	.string	"SEEK_END"
.LASF221:
	.string	"merged"
.LASF240:
	.string	"save"
.LASF251:
	.string	"fs_init"
.LASF58:
	.string	"memsz"
.LASF31:
	.string	"mode"
.LASF328:
	.string	"devQ"
.LASF102:
	.string	"virtq_desc"
.LASF65:
	.string	"num_process_pages"
.LASF101:
	.string	"g_time_offset"
.LASF224:
	.string	"compn"
.LASF223:
	.string	"comps"
.LASF127:
	.string	"bcache_misses"
.LASF233:
	.string	"ents"
.LASF196:
	.string	"fs_link"
.LASF96:
	.string	"FK_FILE"
.LASF10:
	.string	"uint32_t"
.LASF105:
	.string	"ring"
.LASF317:
	.string	"slot"
.LASF311:
	.string	"fs_now"
.LASF191:
	.string	"fs_chmod"
.LASF166:
	.string	"to_total"
.LASF288:
	.string	"dbl_index1"
.LASF250:
	.string	"is_pipe"
.LASF292:
	.string	"free_inode_blocks"
.LASF308:
	.string	"shift"
.LASF56:
	.string	"stack_top"
.LASF97:
	.string	"FK_PIPE"
.LASF68:
	.string	"umask"
.LASF158:
	.string	"result"
.LASF64:
	.string	"file_table"
.LASF198:
	.string	"newpath"
.LASF229:
	.string	"parent_inum"
.LASF45:
	.string	"pte_t"
.LASF138:
	.string	"strncpy"
.LASF88:
	.string	"write_open"
.LASF21:
	.string	"nlog"
.LASF174:
	.string	"bufblk"
.LASF234:
	.string	"cur_entries"
.LASF135:
	.string	"strncat"
.LASF299:
	.string	"bmapblk"
.LASF73:
	.string	"kind"
.LASF279:
	.string	"dindirect_blk"
.LASF215:
	.string	"pdi2"
.LASF34:
	.string	"ctime"
.LASF204:
	.string	"oldpd"
.LASF326:
	.string	"virtio_blk_init"
.LASF75:
	.string	"pipe"
.LASF157:
	.string	"owner"
.LASF270:
	.string	"joined"
.LASF264:
	.string	"fs_realpath"
.LASF40:
	.string	"stat"
.LASF268:
	.string	"lbuf"
.LASF63:
	.string	"xstatus"
.LASF74:
	.string	"used"
.LASF282:
	.string	"first_blk"
.LASF305:
	.string	"read_inode"
.LASF119:
	.string	"bcache_entry"
.LASF149:
	.string	"newoff"
.LASF145:
	.string	"puts"
.LASF272:
	.string	"prefix"
.LASF15:
	.string	"size_t"
.LASF294:
	.string	"dblk"
.LASF146:
	.string	"offset"
.LASF324:
	.string	"virtio_blk_read"
.LASF253:
	.string	"pipealloc"
.LASF243:
	.string	"next_inum"
.LASF117:
	.string	"status_byte"
.LASF300:
	.string	"bitmap_set"
.LASF61:
	.string	"program"
.LASF231:
	.string	"add_dirent"
.LASF178:
	.string	"fs_open2"
.LASF170:
	.string	"blk_idx"
.LASF156:
	.string	"fs_dup_table"
.LASF69:
	.string	"supp_gids"
.LASF323:
	.string	"bcache_init"
.LASF192:
	.string	"fs_lstat"
.LASF82:
	.string	"num_owner_process"
.LASF132:
	.string	"gFreeFiles"
.LASF28:
	.string	"major"
.LASF208:
	.string	"linkpath"
.LASF179:
	.string	"path"
.LASF267:
	.string	"first"
.LASF112:
	.string	"vbase"
.LASF340:
	.string	"mw32"
.LASF297:
	.string	"second"
.LASF273:
	.string	"path_lookup"
.LASF212:
	.string	"pdir"
.LASF165:
	.string	"count"
.LASF262:
	.string	"owner_cap"
.LASF128:
	.string	"block_buf"
.LASF182:
	.string	"leaf"
.LASF107:
	.string	"virtq_avail"
.LASF256:
	.string	"alloc_file"
.LASF312:
	.string	"write_block"
.LASF39:
	.string	"char"
.LASF154:
	.string	"fs_dup2"
.LASF274:
	.string	"dir_lookup"
.LASF95:
	.string	"FK_STDERR"
.LASF194:
	.string	"bufsz"
.LASF260:
	.string	"owner_remove"
.LASF307:
	.string	"check_perm"
.LASF122:
	.string	"dirty"
.LASF59:
	.string	"zombie"
.LASF84:
	.string	"data"
.LASF301:
	.string	"bitmap_test"
.LASF111:
	.string	"sector"
.LASF124:
	.string	"bcache"
.LASF320:
	.string	"oldest"
.LASF225:
	.string	"llen"
.LASF41:
	.string	"ssize_t"
.LASF72:
	.string	"file"
.LASF202:
	.string	"oname"
.LASF6:
	.string	"uint8_t"
.LASF333:
	.string	"sz_total"
.LASF296:
	.string	"sbuf"
.LASF98:
	.string	"FK_TTY"
.LASF115:
	.string	"vq_area"
.LASF319:
	.string	"victim"
.LASF131:
	.string	"gFreePipes"
.LASF20:
	.string	"ninodes"
.LASF254:
	.string	"user_va"
.LASF130:
	.string	"gFiles"
.LASF90:
	.string	"nwriter"
.LASF83:
	.string	"spipe"
.LASF322:
	.string	"bcache_stats"
.LASF335:
	.string	"vq_phys"
.LASF100:
	.string	"gActiveProc"
.LASF281:
	.string	"first_entries"
.LASF277:
	.string	"idx1"
.LASF16:
	.string	"long long int"
.LASF338:
	.string	"yield"
.LASF133:
	.string	"panic"
.LASF24:
	.string	"bmapstart"
.LASF230:
	.string	"namebuf"
.LASF141:
	.string	"printf"
.LASF218:
	.string	"fs_mkdir"
.LASF316:
	.string	"bcache_get"
.LASF200:
	.string	"newabs"
.LASF266:
	.string	"depth"
.LASF244:
	.string	"pipewrite"
.LASF54:
	.string	"context"
.LASF271:
	.string	"path_lookup_lim"
.LASF245:
	.string	"piperead"
.LASF126:
	.string	"bcache_hits"
.LASF247:
	.string	"is_tty"
.LASF173:
	.string	"disk_blk"
.LASF175:
	.string	"fs_read"
.LASF125:
	.string	"bcache_time"
.LASF314:
	.string	"read_block"
.LASF169:
	.string	"newsize"
.LASF143:
	.string	"memset"
.LASF280:
	.string	"firstbuf"
.LASF177:
	.string	"to_read"
.LASF334:
	.string	"npages"
.LASF193:
	.string	"fs_readlink"
.LASF18:
	.string	"size"
.LASF80:
	.string	"free_next"
.LASF252:
	.string	"new_file_table"
.LASF29:
	.string	"minor"
.LASF318:
	.string	"bcache_evict"
.LASF161:
	.string	"fs_close"
.LASF53:
	.string	"trapframe"
.LASF60:
	.string	"pagetable"
.LASF94:
	.string	"FK_STDOUT"
.LASF206:
	.string	"fs_symlink"
.LASF76:
	.string	"pipe_used"
.LASF150:
	.string	"fs_lseek"
.LASF284:
	.string	"second_entries"
.LASF303:
	.string	"inodes_per_blk"
.LASF209:
	.string	"tlen"
.LASF242:
	.string	"nexttok"
.LASF151:
	.string	"fs_fstat_fd"
.LASF332:
	.string	"sz_used"
.LASF87:
	.string	"read_open"
.LASF313:
	.string	"virtio_blk_write"
.LASF17:
	.string	"long double"
.LASF26:
	.string	"dinode"
.LASF8:
	.string	"uint16_t"
.LASF239:
	.string	"copy"
.LASF172:
	.string	"to_write"
.LASF327:
	.string	"devfeat"
.LASF36:
	.string	"dirent"
.LASF269:
	.string	"remain"
.LASF77:
	.string	"read_pipe"
.LASF46:
	.string	"pagetable_t"
.LASF329:
	.string	"drvQ"
.LASF183:
	.string	"new_inum"
.LASF309:
	.string	"perms"
.LASF55:
	.string	"parent"
.LASF263:
	.string	"dump_inode"
.LASF3:
	.string	"short int"
.LASF321:
	.string	"read_superblock"
.LASF205:
	.string	"filedi"
.LASF4:
	.string	"long int"
.LASF86:
	.string	"nwrite"
.LASF197:
	.string	"oldpath"
.LASF71:
	.string	"username"
.LASF47:
	.string	"context_t"
.LASF114:
	.string	"avail"
.LASF298:
	.string	"bitmap_clear"
.LASF92:
	.string	"num_linked_file"
.LASF293:
	.string	"iblk"
.LASF12:
	.string	"uint64_t"
.LASF249:
	.string	"is_stdin"
.LASF155:
	.string	"free_fs_table"
.LASF339:
	.string	"file_system_init"
.LASF222:
	.string	"tok_start"
.LASF121:
	.string	"refcnt"
.LASF176:
	.string	"remaining"
.LASF255:
	.string	"free_file"
.LASF139:
	.string	"strcmp"
.LASF207:
	.string	"target"
.LASF66:
	.string	"deleted"
.LASF199:
	.string	"oldabs"
.LASF164:
	.string	"fs_write"
.LASF129:
	.string	"gPipes"
.LASF195:
	.string	"fs_stat"
.LASF38:
	.string	"name"
.LASF123:
	.string	"last_use"
.LASF162:
	.string	"massive"
.LASF78:
	.string	"write_pipe"
.LASF257:
	.string	"free_pipe"
.LASF51:
	.string	"num_process_kalloc_address"
.LASF330:
	.string	"sz_desc"
.LASF14:
	.string	"uintptr_t"
.LASF79:
	.string	"oflags"
.LASF52:
	.string	"proc"
.LASF33:
	.string	"mtime"
.LASF160:
	.string	"fs_exit"
.LASF211:
	.string	"pdi3"
.LASF13:
	.string	"long unsigned int"
.LASF22:
	.string	"logstart"
.LASF310:
	.string	"member"
.LASF44:
	.string	"SEEK_CUR"
.LASF261:
	.string	"owner_add"
.LASF203:
	.string	"nname"
.LASF5:
	.string	"int32_t"
.LASF99:
	.string	"gProc"
.LASF275:
	.string	"read_data"
.LASF159:
	.string	"orig"
.LASF226:
	.string	"need"
.LASF337:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mno-small-data-limit=0 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -fno-pie -ffreestanding"
.LASF331:
	.string	"sz_avail"
.LASF220:
	.string	"outsz"
.LASF81:
	.string	"owner_processes"
.LASF287:
	.string	"dbl_index0"
.LASF70:
	.string	"nsupp"
.LASF27:
	.string	"type"
.LASF25:
	.string	"superblock"
.LASF7:
	.string	"unsigned char"
.LASF304:
	.string	"BBLOCK"
.LASF49:
	.string	"process_pages"
.LASF171:
	.string	"blk_off"
.LASF109:
	.string	"virtio_blk_req"
.LASF37:
	.string	"inum"
.LASF116:
	.string	"aidx"
.LASF258:
	.string	"alloc_pipe"
.LASF23:
	.string	"inodestart"
.LASF236:
	.string	"alloc_inode_T_FILE"
.LASF137:
	.string	"strtok"
.LASF91:
	.string	"linked_file"
.LASF185:
	.string	"leafx"
.LASF103:
	.string	"addr"
.LASF295:
	.string	"sblk"
.LASF120:
	.string	"blkno"
.LASF50:
	.string	"process_kalloc_address"
.LASF302:
	.string	"write_inode"
.LASF237:
	.string	"path_parent_lookup_abs"
.LASF30:
	.string	"nlink"
.LASF291:
	.string	"datastart"
.LASF19:
	.string	"nblocks"
.LASF85:
	.string	"nread"
.LASF184:
	.string	"pinum"
.LASF2:
	.string	"signed char"
.LASF214:
	.string	"fs_rmdir"
.LASF285:
	.string	"indirect_blk"
.LASF9:
	.string	"short unsigned int"
.LASF187:
	.string	"want"
.LASF142:
	.string	"memcpy"
.LASF118:
	.string	"dma_buf"
.LASF217:
	.string	"entries"
.LASF235:
	.string	"abs_idx"
.LASF110:
	.string	"reserved"
.LASF232:
	.string	"child_inum"
.LASF168:
	.string	"written"
.LASF180:
	.string	"path2"
.LASF246:
	.string	"pipe_open"
.LASF108:
	.string	"virtq_used"
.LASF265:
	.string	"rest"
.LASF89:
	.string	"nreader"
.LASF48:
	.string	"mepc"
.LASF189:
	.string	"fs_utimes"
.LASF325:
	.string	"set_flags"
.LASF276:
	.string	"inode_bmap_alloc"
.LASF113:
	.string	"desc"
.LASF32:
	.string	"atime"
.LASF216:
	.string	"has_entries"
.LASF290:
	.string	"bmapblocks"
.LASF306:
	.string	"dest"
.LASF227:
	.string	"write_data_inode"
.LASF93:
	.string	"FK_STDIN"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"fs.c"
.LASF1:
	.string	"/Users/ab25cq/minux9-dev"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
