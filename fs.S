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
.LFB0:
	.file 1 "fs.c"
	.loc 1 128 59
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
	.loc 1 128 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 128 62
	mv	a4,a5
	.loc 1 128 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 128 91
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
	.loc 1 129 60
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
	.loc 1 129 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 129 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 129 97
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
	.loc 1 132 1
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
	.loc 1 133 13
	sw	zero,-20(s0)
	.loc 1 133 5
	j	.L5
.L9:
.LBB3:
	.loc 1 134 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 134 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 135 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 135 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 136 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 136 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 136 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 136 58
	j	.L8
.L22:
	.loc 1 135 47
	nop
.L7:
.LBE3:
	.loc 1 133 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 133 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 138 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 138 7
	bne	a5,zero,.L10
	.loc 1 138 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 138 54
	j	.L11
.L10:
	.loc 1 139 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 139 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 139 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 139 70
	j	.L13
.L12:
	.loc 1 141 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 142 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 144 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 146 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 148 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 148 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 149 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 150 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 150 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 150 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 151 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 151 46
	j	.L15
.L14:
	.loc 1 154 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 155 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 156 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 157 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 158 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 159 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 160 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 160 7
	beq	a5,zero,.L17
	.loc 1 160 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 160 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 160 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 160 65
	j	.L19
.L18:
	.loc 1 162 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 162 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 163 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 163 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 164 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 164 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 165 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 165 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 166 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 166 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 168 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 168 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 169 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 169 8
	bne	a5,zero,.L20
	.loc 1 169 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 169 57
	j	.L21
.L20:
	.loc 1 170 5
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
	.loc 1 172 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 173 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 173 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 174 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 174 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 176 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 176 14
	sd	a5,-96(s0)
	.loc 1 177 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 178 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 178 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 178 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 180 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 181 1
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
	.loc 1 183 66
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
	.loc 1 184 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 184 19
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
	.loc 1 185 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 185 19
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
	.loc 1 186 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 186 19
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
	.loc 1 187 1
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
	.loc 1 192 1
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
	.loc 1 193 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 194 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 195 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 196 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 198 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 198 20
	lla	a4,req
	.loc 1 198 18
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
	.loc 1 198 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 198 51
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
	.loc 1 198 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 198 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 199 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 199 20
	lla	a4,dma_buf
	.loc 1 199 18
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
	.loc 1 199 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 199 51
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
	.loc 1 199 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 199 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 200 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 200 20
	lla	a4,status_byte
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
	.loc 1 200 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 200 57
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
	.loc 1 202 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 204 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 204 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 204 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 205 5
	fence	rw,rw
	.loc 1 206 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 206 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 206 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 206 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 208 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 210 10
	j	.L25
.L26:
	.loc 1 211 9
	fence	rw,rw
.L25:
	.loc 1 210 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 213 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 214 1
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
	.loc 1 217 1
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
	.loc 1 218 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
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
.LFE5:
	.size	read_block, .-read_block
	.align	1
	.type	virtio_blk_write, @function
virtio_blk_write:
.LFB6:
	.loc 1 222 1
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
	.loc 1 223 14
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 224 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 225 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 226 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 228 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 230 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 230 20
	lla	a4,req
	.loc 1 230 18
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
	.loc 1 230 47
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 230 55
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
	.loc 1 230 77
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 230 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 231 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 231 20
	lla	a4,dma_buf
	.loc 1 231 18
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
	.loc 1 231 47
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 231 55
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
	.loc 1 231 77
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 231 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 232 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 232 20
	lla	a4,status_byte
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
	.loc 1 232 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 232 56
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
	.loc 1 234 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 236 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 236 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 236 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 237 5
	fence	rw,rw
	.loc 1 238 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 238 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 238 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 238 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 240 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 242 10
	j	.L29
.L30:
	.loc 1 243 9
	fence	rw,rw
.L29:
	.loc 1 242 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L30
	.loc 1 244 1
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
.LFE6:
	.size	virtio_blk_write, .-virtio_blk_write
	.align	1
	.globl	write_block
	.type	write_block, @function
write_block:
.LFB7:
	.loc 1 247 1
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
	.loc 1 248 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_write
	.loc 1 249 1
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
	.size	write_block, .-write_block
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.type	fs_now, @function
fs_now:
.LFB8:
	.loc 1 260 37
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 260 51
 #APP
# 260 "fs.c" 1
	csrr a5, time
# 0 "" 2
 #NO_APP
	sd	a5,-24(s0)
	.loc 1 260 128
	ld	a4,-24(s0)
	lla	a5,.LC5
	ld	a5,0(a5)
	mulhu	a5,a4,a5
	srli	a5,a5,18
	.loc 1 260 115
	sext.w	a4,a5
	.loc 1 260 113
	lla	a5,g_time_offset
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 260 143
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
.LFE8:
	.size	fs_now, .-fs_now
	.align	1
	.type	check_perm, @function
check_perm:
.LFB9:
	.loc 1 268 1
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
	.loc 1 269 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 269 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 270 23
	ld	a5,-56(s0)
	lw	a5,12(a5)
	.loc 1 270 14
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 271 9
	li	a5,6
	sw	a5,-20(s0)
	.loc 1 272 10
	ld	a5,-40(s0)
	lhu	a4,1882(a5)
	.loc 1 272 21
	ld	a5,-56(s0)
	lhu	a5,16(a5)
	.loc 1 272 8
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L35
	.loc 1 272 34 discriminator 1
	li	a5,6
	sw	a5,-20(s0)
	j	.L36
.L35:
	.loc 1 273 15
	ld	a5,-40(s0)
	lhu	a4,1884(a5)
	.loc 1 273 26
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 273 13
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L37
	.loc 1 273 39 discriminator 1
	li	a5,3
	sw	a5,-20(s0)
	j	.L36
.L37:
.LBB4:
	.loc 1 275 13
	sw	zero,-24(s0)
.LBB5:
	.loc 1 276 18
	sw	zero,-28(s0)
	.loc 1 276 9
	j	.L38
.L41:
	.loc 1 276 54 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-28(s0)
	addi	a5,a5,936
	slli	a5,a5,1
	add	a5,a4,a5
	lhu	a4,14(a5)
	.loc 1 276 63 discriminator 5
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 276 41 discriminator 5
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L39
	.loc 1 276 78 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 276 82
	j	.L40
.L39:
	.loc 1 276 34 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L38:
	.loc 1 276 25 discriminator 4
	ld	a5,-40(s0)
	lw	a5,1904(a5)
	.loc 1 276 23 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L41
.L40:
.LBE5:
	.loc 1 277 28
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L42
	.loc 1 277 28 is_stmt 0 discriminator 1
	li	a5,3
	j	.L43
.L42:
	.loc 1 277 28 discriminator 2
	li	a5,0
.L43:
	.loc 1 277 15 is_stmt 1 discriminator 4
	sw	a5,-20(s0)
.L36:
.LBE4:
	.loc 1 279 23
	lw	a5,-20(s0)
	lw	a4,-44(s0)
	srlw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 279 9
	andi	a5,a5,7
	sw	a5,-48(s0)
	.loc 1 281 15
	lw	a5,-60(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 281 8
	beq	a5,zero,.L44
	.loc 1 281 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 281 26 discriminator 1
	bne	a5,zero,.L44
	.loc 1 281 50 discriminator 2
	li	a5,0
	.loc 1 281 50 is_stmt 0
	j	.L45
.L44:
	.loc 1 282 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 282 8
	beq	a5,zero,.L46
	.loc 1 282 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 282 26 discriminator 1
	bne	a5,zero,.L46
	.loc 1 282 50 discriminator 2
	li	a5,0
	.loc 1 282 50 is_stmt 0
	j	.L45
.L46:
	.loc 1 283 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 283 8
	beq	a5,zero,.L47
	.loc 1 283 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 283 26 discriminator 1
	bne	a5,zero,.L47
	.loc 1 283 50 discriminator 2
	li	a5,0
	.loc 1 283 50 is_stmt 0
	j	.L45
.L47:
	.loc 1 284 12 is_stmt 1
	li	a5,1
.L45:
	.loc 1 285 1
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
.LFE9:
	.size	check_perm, .-check_perm
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB10:
	.loc 1 287 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 288 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 289 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 290 1
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
.LFE10:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB11:
	.loc 1 292 53
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
	.loc 1 293 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L50
	.loc 1 293 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 293 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L51
.L50:
	.loc 1 294 9
	li	a2,88
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 295 9
	j	.L49
.L51:
	.loc 1 299 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 301 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 301 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 301 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 301 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 303 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 303 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 303 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 305 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 306 26
	lwu	a4,-28(s0)
	.loc 1 306 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 307 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L49:
	.loc 1 308 1
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
	.size	read_inode, .-read_inode
	.align	1
	.type	BBLOCK, @function
BBLOCK:
.LFB12:
	.loc 1 313 42
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
	.loc 1 313 53
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 313 69
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 1 313 64
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 313 77
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
.LFE12:
	.size	BBLOCK, .-BBLOCK
	.align	1
	.type	write_inode, @function
write_inode:
.LFB13:
	.loc 1 316 1
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
	.loc 1 317 8
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L60
	.loc 1 317 30 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 317 18 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L60
	.loc 1 318 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 319 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 319 45
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 319 50
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 319 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 320 30
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 320 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 320 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 323 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 324 26
	lwu	a5,-28(s0)
	.loc 1 324 20
	addi	a4,s0,-552
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 325 10
	ld	a4,-40(s0)
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 326 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L55
.L60:
	.loc 1 317 40
	nop
.L55:
	.loc 1 327 1
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE13:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB14:
	.loc 1 330 1
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
	.loc 1 331 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 333 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 334 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 335 19
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 335 16
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 1 335 29
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 335 23
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 335 34
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 336 1
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
.LFE14:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB15:
	.loc 1 339 1
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
	.loc 1 340 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 342 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 343 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 344 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 344 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 344 27
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 344 21
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 344 15
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
	.loc 1 345 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 346 1
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
.LFE15:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	bitmap_clear, @function
bitmap_clear:
.LFB16:
	.loc 1 349 1
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
	.loc 1 350 8
	lw	a5,-548(s0)
	sext.w	a5,a5
	beq	a5,zero,.L68
	.loc 1 351 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 353 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 354 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 355 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 355 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 355 28
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 355 22
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 355 15
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
	.loc 1 356 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L64
.L68:
	.loc 1 350 17
	nop
.L64:
	.loc 1 357 1
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
	.size	bitmap_clear, .-bitmap_clear
	.align	1
	.type	free_inode_blocks, @function
free_inode_blocks:
.LFB17:
	.loc 1 361 1
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
	.loc 1 363 14
	sw	zero,-20(s0)
	.loc 1 363 5
	j	.L70
.L72:
	.loc 1 364 22
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 364 12
	beq	a5,zero,.L71
	.loc 1 365 13
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 366 26
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L71:
	.loc 1 363 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L70:
	.loc 1 363 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L72
.LBE6:
	.loc 1 371 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	.loc 1 371 8
	beq	a5,zero,.L73
.LBB7:
	.loc 1 372 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	sw	a5,-36(s0)
	.loc 1 373 9
	lw	a5,-36(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 374 19
	lla	a5,block_buf
	sd	a5,-48(s0)
.LBB8:
	.loc 1 375 18
	sw	zero,-24(s0)
	.loc 1 375 9
	j	.L74
.L76:
	.loc 1 376 21
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 376 16
	beq	a5,zero,.L75
	.loc 1 376 43 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 376 26 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L75:
	.loc 1 375 41 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L74:
	.loc 1 375 27 discriminator 1
	lw	a4,-24(s0)
	li	a5,127
	bleu	a4,a5,.L76
.LBE8:
	.loc 1 378 9
	lw	a5,-36(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 379 28
	ld	a5,-608(s0)
	sw	zero,80(a5)
.L73:
.LBE7:
	.loc 1 383 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	.loc 1 383 8
	beq	a5,zero,.L77
.LBB9:
	.loc 1 384 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	sw	a5,-52(s0)
	.loc 1 385 9
	lw	a5,-52(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 386 19
	lla	a5,block_buf
	sd	a5,-64(s0)
.LBB10:
	.loc 1 387 18
	sw	zero,-28(s0)
	.loc 1 387 9
	j	.L78
.L85:
.LBB11:
	.loc 1 388 23
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 388 16
	beq	a5,zero,.L86
	.loc 1 389 34
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 389 22
	lw	a5,0(a5)
	sw	a5,-68(s0)
	.loc 1 391 13
	addi	a4,s0,-592
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 392 23
	addi	a5,s0,-592
	sd	a5,-80(s0)
.LBB12:
	.loc 1 393 22
	sw	zero,-32(s0)
	.loc 1 393 13
	j	.L81
.L83:
	.loc 1 394 27
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 394 20
	beq	a5,zero,.L82
	.loc 1 394 51 discriminator 1
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	.loc 1 394 32 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L82:
	.loc 1 393 45 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L81:
	.loc 1 393 31 discriminator 1
	lw	a4,-32(s0)
	li	a5,127
	bleu	a4,a5,.L83
.LBE12:
	.loc 1 396 13
	lw	a5,-68(s0)
	mv	a0,a5
	call	bitmap_clear
	j	.L84
.L86:
	.loc 1 388 28
	nop
.L84:
.LBE11:
	.loc 1 387 41 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L78:
	.loc 1 387 27 discriminator 1
	lw	a4,-28(s0)
	li	a5,127
	bleu	a4,a5,.L85
.LBE10:
	.loc 1 398 9
	lw	a5,-52(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 399 30
	ld	a5,-608(s0)
	sw	zero,84(a5)
.L77:
.LBE9:
	.loc 1 402 14
	ld	a5,-608(s0)
	sw	zero,8(a5)
	.loc 1 403 5
	lw	a5,-596(s0)
	ld	a1,-608(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 404 1
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
.LFE17:
	.size	free_inode_blocks, .-free_inode_blocks
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB18:
	.loc 1 407 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 408 30
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 408 42
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 408 14
	srliw	a5,a5,12
	sw	a5,-24(s0)
	.loc 1 409 29
	lla	a5,sb
	lw	a5,24(a5)
	.loc 1 409 14
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
.LBB13:
	.loc 1 410 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
	.loc 1 410 5
	j	.L88
.L91:
	.loc 1 411 14
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 411 12 discriminator 1
	bne	a5,zero,.L89
.LBB14:
	.loc 1 412 13
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 415 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 416 13
	addi	a4,s0,-544
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 417 20
	lw	a5,-20(s0)
	j	.L90
.L89:
.LBE14:
	.loc 1 410 48 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L88:
	.loc 1 410 40 discriminator 1
	lla	a5,sb
	lw	a5,0(a5)
	.loc 1 410 36 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L91
.LBE13:
	.loc 1 420 12
	li	a5,0
.L90:
	.loc 1 421 1
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
.LFE18:
	.size	alloc_data_block, .-alloc_data_block
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB19:
	.loc 1 423 64
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
	.loc 1 424 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L93
	.loc 1 426 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L94
.L93:
	.loc 1 427 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L95
.LBB15:
	.loc 1 429 18
	ld	a5,-88(s0)
	lw	a5,80(a5)
	sw	a5,-60(s0)
	.loc 1 430 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L96
	.loc 1 430 39 discriminator 1
	li	a5,0
	.loc 1 430 39 is_stmt 0
	j	.L94
.L96:
	.loc 1 431 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 432 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 433 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 433 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L94
.L95:
.LBE15:
.LBB16:
	.loc 1 436 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 437 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 438 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 440 18
	ld	a5,-88(s0)
	lw	a5,84(a5)
	sw	a5,-28(s0)
	.loc 1 441 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L97
	.loc 1 441 40 discriminator 1
	li	a5,0
	.loc 1 441 40 is_stmt 0
	j	.L94
.L97:
	.loc 1 443 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 444 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 445 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 445 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 446 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L98
	.loc 1 446 36 discriminator 1
	li	a5,0
	.loc 1 446 36 is_stmt 0
	j	.L94
.L98:
	.loc 1 449 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 450 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 451 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L94:
.LBE16:
	.loc 1 453 1
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
.LFE19:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB20:
	.loc 1 456 1
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
	.loc 1 457 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L100
	.loc 1 458 22
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 458 12
	bne	a5,zero,.L101
.LBB17:
	.loc 1 459 26
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-100(s0)
	.loc 1 460 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L102
	.loc 1 460 28 discriminator 1
	li	a5,0
	.loc 1 460 28 is_stmt 0
	j	.L116
.L102:
	.loc 1 461 28 is_stmt 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a4,-100(s0)
	sw	a4,0(a5)
	.loc 1 462 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L101:
.LBE17:
	.loc 1 464 25
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L116
.L100:
	.loc 1 467 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L104
.LBB18:
	.loc 1 468 18
	ld	a5,-1664(s0)
	lw	a5,80(a5)
	sw	a5,-20(s0)
	.loc 1 469 12
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L105
.LBB19:
	.loc 1 470 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-80(s0)
	.loc 1 471 16
	lw	a5,-80(s0)
	sext.w	a5,a5
	bne	a5,zero,.L106
	.loc 1 471 29 discriminator 1
	li	a5,0
	.loc 1 471 29 is_stmt 0
	j	.L116
.L106:
	.loc 1 473 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-80(s0)
	sw	a4,80(a5)
	.loc 1 474 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 475 26
	lw	a5,-80(s0)
	sw	a5,-20(s0)
.L105:
.LBE19:
	.loc 1 478 9
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 479 19
	addi	a5,s0,-1640
	sd	a5,-88(s0)
	.loc 1 480 18
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sw	a5,-92(s0)
	.loc 1 481 20
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 481 12
	bne	a5,zero,.L108
.LBB20:
	.loc 1 482 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-96(s0)
	.loc 1 483 16
	lw	a5,-96(s0)
	sext.w	a5,a5
	bne	a5,zero,.L109
	.loc 1 483 29 discriminator 1
	li	a5,0
	.loc 1 483 29 is_stmt 0
	j	.L116
.L109:
	.loc 1 484 20 is_stmt 1
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	.loc 1 484 24
	lw	a4,-96(s0)
	sw	a4,0(a5)
	.loc 1 485 13
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L108:
.LBE20:
	.loc 1 487 23
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L116
.L104:
.LBE18:
	.loc 1 491 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sw	a5,-32(s0)
	.loc 1 492 14
	lw	a5,-32(s0)
	srliw	a5,a5,7
	sw	a5,-36(s0)
	.loc 1 493 14
	lw	a5,-32(s0)
	andi	a5,a5,127
	sw	a5,-40(s0)
	.loc 1 495 14
	ld	a5,-1664(s0)
	lw	a5,84(a5)
	sw	a5,-24(s0)
	.loc 1 496 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L110
.LBB21:
	.loc 1 497 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 498 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L111
	.loc 1 498 25 discriminator 1
	li	a5,0
	.loc 1 498 25 is_stmt 0
	j	.L116
.L111:
	.loc 1 499 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-44(s0)
	sw	a4,84(a5)
	.loc 1 500 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 501 23
	lw	a5,-44(s0)
	sw	a5,-24(s0)
.L110:
.LBE21:
	.loc 1 505 5
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 506 15
	addi	a5,s0,-616
	sd	a5,-56(s0)
	.loc 1 507 39
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 507 14
	lw	a5,0(a5)
	sw	a5,-28(s0)
	.loc 1 508 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L112
.LBB22:
	.loc 1 509 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 510 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L113
	.loc 1 510 25 discriminator 1
	li	a5,0
	.loc 1 510 25 is_stmt 0
	j	.L116
.L113:
	.loc 1 511 22 is_stmt 1
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 511 29
	lw	a4,-60(s0)
	sw	a4,0(a5)
	.loc 1 512 9
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 513 19
	lw	a5,-60(s0)
	sw	a5,-28(s0)
.L112:
.LBE22:
	.loc 1 517 5
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 518 15
	addi	a5,s0,-1128
	sd	a5,-72(s0)
	.loc 1 519 23
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 519 8
	bne	a5,zero,.L114
.LBB23:
	.loc 1 520 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 521 12
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L115
	.loc 1 521 25 discriminator 1
	li	a5,0
	.loc 1 521 25 is_stmt 0
	j	.L116
.L115:
	.loc 1 522 23 is_stmt 1
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 522 30
	lw	a4,-76(s0)
	sw	a4,0(a5)
	.loc 1 523 9
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L114:
.LBE23:
	.loc 1 525 26
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L116:
	.loc 1 526 1
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
.LFE20:
	.size	inode_bmap_alloc, .-inode_bmap_alloc
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB21:
	.loc 1 528 81
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
	.loc 1 529 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 530 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 531 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 533 11
	j	.L118
.L122:
.LBB24:
	.loc 1 534 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 535 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 536 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 537 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L119
	.loc 1 537 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L119:
	.loc 1 539 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 540 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L120
	.loc 1 541 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L121
.L120:
	.loc 1 543 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 544 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L121:
	.loc 1 546 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 547 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 548 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L118:
.LBE24:
	.loc 1 533 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L122
	.loc 1 550 1
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
.LFE21:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB22:
	.loc 1 552 62
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
	.loc 1 553 14
	sw	zero,-20(s0)
	.loc 1 556 11
	j	.L124
.L130:
.LBB25:
	.loc 1 557 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 558 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 559 13
	li	a5,32
	sw	a5,-36(s0)
.LBB26:
	.loc 1 560 18
	sw	zero,-24(s0)
	.loc 1 560 9
	j	.L125
.L129:
	.loc 1 561 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 561 22
	lhu	a5,0(a5)
	.loc 1 561 16
	beq	a5,zero,.L132
	.loc 1 562 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 562 34
	addi	a4,a5,2
	.loc 1 562 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 563 29
	sb	zero,-42(s0)
	.loc 1 564 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 564 16 discriminator 1
	bne	a5,zero,.L127
	.loc 1 565 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 565 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L131
.L132:
	.loc 1 561 34
	nop
.L127:
	.loc 1 560 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L125:
	.loc 1 560 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L129
.LBE26:
	.loc 1 568 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L124:
.LBE25:
	.loc 1 556 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 556 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L130
	.loc 1 570 12
	li	a5,0
.L131:
	.loc 1 571 1
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
.LFE22:
	.size	dir_lookup, .-dir_lookup
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB23:
	.loc 1 575 40
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
	.loc 1 576 12
	li	a1,8
	ld	a0,-24(s0)
	call	path_lookup_lim
	mv	a5,a0
	.loc 1 577 1
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
.LFE23:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC6:
	.string	"/"
	.text
	.align	1
	.type	path_lookup_lim, @function
path_lookup_lim:
.LFB24:
	.loc 1 579 62
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
	.loc 1 580 8
	lw	a5,-1404(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L136
	.loc 1 580 28 discriminator 1
	li	a5,0
	.loc 1 580 28 is_stmt 0
	j	.L160
.L136:
	.loc 1 581 8 is_stmt 1
	ld	a5,-1400(s0)
	beq	a5,zero,.L138
	.loc 1 581 22 discriminator 2
	ld	a5,-1400(s0)
	lbu	a5,0(a5)
	.loc 1 581 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L139
.L138:
	.loc 1 581 41 discriminator 3
	li	a5,0
	.loc 1 581 41 is_stmt 0
	j	.L160
.L139:
	.loc 1 582 9 is_stmt 1
	lla	a1,.LC6
	ld	a0,-1400(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 582 8 discriminator 1
	bne	a5,zero,.L140
	.loc 1 582 40 discriminator 1
	li	a5,1
	.loc 1 582 40 is_stmt 0
	j	.L160
.L140:
	.loc 1 585 5 is_stmt 1
	addi	a5,s0,-144
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 586 12
	lhu	a5,-144(s0)
	.loc 1 586 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L141
	.loc 1 586 35 discriminator 1
	li	a5,0
	.loc 1 586 35 is_stmt 0
	j	.L160
.L141:
	.loc 1 589 5 is_stmt 1
	addi	a5,s0,-400
	li	a2,255
	ld	a1,-1400(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 589 59 discriminator 1
	sb	zero,-145(s0)
	.loc 1 590 11
	addi	a5,s0,-400
	sd	a5,-24(s0)
	.loc 1 592 14
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 593 33
	li	a5,47
	sb	a5,-656(s0)
	.loc 1 593 50
	sb	zero,-655(s0)
	.loc 1 595 11
	j	.L142
.L159:
.LBB27:
	.loc 1 596 14
	sd	zero,-24(s0)
	.loc 1 597 16
	lhu	a5,-144(s0)
	.loc 1 597 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L143
	.loc 1 597 39 discriminator 1
	li	a5,0
	.loc 1 597 39 is_stmt 0
	j	.L160
.L143:
	.loc 1 599 14 is_stmt 1
	addi	a5,s0,-144
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 599 12 discriminator 1
	bne	a5,zero,.L145
	.loc 1 599 47 discriminator 1
	li	a5,0
	.loc 1 599 47 is_stmt 0
	j	.L160
.L145:
	.loc 1 600 25 is_stmt 1
	addi	a5,s0,-144
	ld	a1,-48(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 601 12
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L146
	.loc 1 601 31 discriminator 1
	li	a5,0
	.loc 1 601 31 is_stmt 0
	j	.L160
.L146:
	.loc 1 602 28 is_stmt 1
	addi	a4,s0,-1384
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 603 16
	lhu	a5,-1384(s0)
	.loc 1 603 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L147
.LBB28:
	.loc 1 606 24
	lw	a5,-1376(s0)
	.loc 1 606 17
	sw	a5,-32(s0)
	.loc 1 606 34
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L148
	.loc 1 606 61 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L148:
	.loc 1 607 13
	lw	a3,-32(s0)
	addi	a4,s0,-1296
	addi	a5,s0,-1384
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 608 21
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1280(a5)
	.loc 1 611 23
	sb	zero,-1168(s0)
	.loc 1 612 23
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 613 19
	j	.L149
.L151:
	.loc 1 614 27
	lbu	a5,-1168(s0)
	.loc 1 614 20
	beq	a5,zero,.L150
	.loc 1 614 68 discriminator 1
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 614 32 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L150:
	.loc 1 615 51
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 615 51 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 615 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 616 21
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L149:
	.loc 1 613 20
	ld	a5,-40(s0)
	bne	a5,zero,.L151
	.loc 1 619 21
	lbu	a5,-1296(s0)
	.loc 1 619 16
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L152
	.loc 1 620 17
	addi	a4,s0,-1296
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 621 42
	sb	zero,-657(s0)
	j	.L153
.L152:
	.loc 1 624 17
	addi	a4,s0,-656
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 625 42
	sb	zero,-657(s0)
	.loc 1 626 29
	lbu	a5,-912(s0)
	.loc 1 626 20
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L154
	.loc 1 626 47 discriminator 2
	lbu	a5,-911(s0)
	.loc 1 626 21 discriminator 2
	beq	a5,zero,.L155
.L154:
	.loc 1 626 95 discriminator 3
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 626 95 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 626 59 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L155:
	.loc 1 627 54
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 627 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 627 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1296
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L153:
	.loc 1 629 23
	lbu	a5,-1168(s0)
	.loc 1 629 16
	beq	a5,zero,.L156
	.loc 1 630 53
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 630 53 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 630 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
	.loc 1 631 56
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 631 56 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 631 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1168
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L156:
	.loc 1 633 20
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
	.loc 1 636 13
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 636 25
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
	.loc 1 638 21
	lbu	a5,-656(s0)
	.loc 1 638 12
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L157
	.loc 1 638 39 discriminator 2
	lbu	a5,-655(s0)
	.loc 1 638 13 discriminator 2
	beq	a5,zero,.L158
.L157:
	.loc 1 638 87 discriminator 3
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 638 87 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 638 51 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L158:
	.loc 1 639 45
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 639 45 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 639 9 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	ld	a1,-48(s0)
	mv	a0,a5
	call	strncat
.L142:
.LBE27:
	.loc 1 595 19
	lla	a1,.LC6
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-48(s0)
	.loc 1 595 38 discriminator 1
	ld	a5,-48(s0)
	bne	a5,zero,.L159
	.loc 1 641 12
	lw	a5,-28(s0)
.L160:
	.loc 1 642 1
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
.LFE24:
	.size	path_lookup_lim, .-path_lookup_lim
	.align	1
	.globl	fs_realpath
	.type	fs_realpath, @function
fs_realpath:
.LFB25:
	.loc 1 646 1
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
	.loc 1 647 8
	ld	a5,-1680(s0)
	beq	a5,zero,.L162
	.loc 1 647 14 discriminator 2
	lw	a5,-1684(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L163
.L162:
	.loc 1 647 36 discriminator 3
	li	a5,-1
	.loc 1 647 36 is_stmt 0
	j	.L191
.L163:
	.loc 1 648 20 is_stmt 1
	addi	a5,s0,-328
	ld	a2,-1672(s0)
	li	a1,256
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 650 12
	lbu	a5,-328(s0)
	.loc 1 650 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L165
	.loc 1 650 31 discriminator 1
	li	a5,-1
	.loc 1 650 31 is_stmt 0
	j	.L191
.L165:
	.loc 1 651 9 is_stmt 1
	addi	a5,s0,-328
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 651 8 discriminator 1
	bne	a5,zero,.L166
	.loc 1 651 37 discriminator 1
	lw	a5,-1684(s0)
	sext.w	a4,a5
	li	a5,1
	ble	a4,a5,.L167
	.loc 1 651 57 discriminator 2
	ld	a5,-1680(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 651 66 discriminator 2
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 651 69 discriminator 2
	sb	zero,0(a5)
	.loc 1 651 83 discriminator 2
	li	a5,0
	.loc 1 651 83 is_stmt 0
	j	.L191
.L167:
	.loc 1 651 94 is_stmt 1 discriminator 3
	li	a5,-1
	.loc 1 651 94 is_stmt 0
	j	.L191
.L166:
	.loc 1 652 24 is_stmt 1
	addi	a5,s0,-416
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 653 20
	addi	a4,s0,-328
	addi	a5,s0,-672
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 653 72 discriminator 1
	sb	zero,-417(s0)
	.loc 1 654 11
	addi	a5,s0,-672
	sd	a5,-24(s0)
	.loc 1 655 9
	li	a5,8
	sw	a5,-48(s0)
	.loc 1 655 22
	li	a5,1
	sw	a5,-52(s0)
	.loc 1 655 35
	sw	zero,-28(s0)
	.loc 1 655 45
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 655 43
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 655 48
	li	a4,47
	sb	a4,0(a5)
	.loc 1 655 57
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 655 60
	sb	zero,0(a5)
	.loc 1 656 11
	j	.L168
.L190:
.LBB29:
	.loc 1 657 14
	sd	zero,-24(s0)
	.loc 1 658 16
	lhu	a5,-416(s0)
	.loc 1 658 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L169
	.loc 1 658 39 discriminator 1
	li	a5,-1
	.loc 1 658 39 is_stmt 0
	j	.L191
.L169:
	.loc 1 659 14 is_stmt 1
	addi	a5,s0,-416
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 659 12 discriminator 1
	bne	a5,zero,.L171
	.loc 1 659 47 discriminator 1
	li	a5,-1
	.loc 1 659 47 is_stmt 0
	j	.L191
.L171:
	.loc 1 660 25 is_stmt 1
	addi	a5,s0,-416
	ld	a1,-64(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-68(s0)
	.loc 1 661 12
	lw	a5,-68(s0)
	sext.w	a5,a5
	bne	a5,zero,.L172
	.loc 1 661 27 discriminator 1
	li	a5,-1
	.loc 1 661 27 is_stmt 0
	j	.L191
.L172:
	.loc 1 662 28 is_stmt 1
	addi	a4,s0,-1656
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 663 16
	lhu	a5,-1656(s0)
	.loc 1 663 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L173
.LBB30:
	.loc 1 664 16
	lw	a5,-48(s0)
	addiw	a5,a5,-1
	sw	a5,-48(s0)
	lw	a5,-48(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L174
	.loc 1 664 38 discriminator 1
	li	a5,-1
	.loc 1 664 38 is_stmt 0
	j	.L191
.L174:
	.loc 1 665 40 is_stmt 1
	lw	a5,-1648(s0)
	.loc 1 665 33
	sw	a5,-32(s0)
	.loc 1 665 49
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L176
	.loc 1 665 78 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L176:
	.loc 1 666 13
	lw	a3,-32(s0)
	addi	a4,s0,-1568
	addi	a5,s0,-1656
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 666 63 discriminator 1
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1552(a5)
	.loc 1 667 40
	sb	zero,-1440(s0)
	.loc 1 667 55
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 668 18
	j	.L177
.L179:
	.loc 1 668 32 discriminator 5
	lbu	a5,-1440(s0)
	.loc 1 668 25 discriminator 5
	beq	a5,zero,.L178
	.loc 1 668 73 discriminator 1
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 668 37 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L178:
	.loc 1 668 126 discriminator 3
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 668 126 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 668 92 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 668 147 discriminator 2
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L177:
	.loc 1 668 19 discriminator 4
	ld	a5,-40(s0)
	bne	a5,zero,.L179
	.loc 1 669 39
	lbu	a5,-1568(s0)
	.loc 1 669 34
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L180
	.loc 1 669 51 discriminator 1
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	li	a2,511
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L181
.L180:
	.loc 1 671 26
	sb	zero,-1184(s0)
	.loc 1 671 33
	addi	a5,s0,-1184
	li	a2,511
	ld	a1,-1680(s0)
	mv	a0,a5
	call	strncat
	.loc 1 671 84 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 671 98 discriminator 2
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 671 83 discriminator 2
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 671 76 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L182
	.loc 1 671 146 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 671 110 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L182:
	.loc 1 671 202 discriminator 3
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 671 202 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 671 165 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L181:
	.loc 1 673 23
	lbu	a5,-1440(s0)
	.loc 1 673 16
	beq	a5,zero,.L183
	.loc 1 673 41 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 673 55 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 673 40 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 673 33 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L184
	.loc 1 673 103 discriminator 2
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 673 103 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 673 67 is_stmt 1 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC6
	mv	a0,a5
	call	strncat
.L184:
	.loc 1 673 161 discriminator 4
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 673 161 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 673 122 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1440
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L183:
	.loc 1 674 20
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
	.loc 1 677 17
	ld	a0,-64(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-72(s0)
	.loc 1 678 15
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 678 19
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 678 12
	lw	a4,-1684(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L185
	.loc 1 678 40 discriminator 1
	li	a5,-1
	.loc 1 678 40 is_stmt 0
	j	.L191
.L185:
	.loc 1 679 12 is_stmt 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L186
	.loc 1 679 26 discriminator 2
	ld	a5,-1680(s0)
	lbu	a5,0(a5)
	.loc 1 679 13 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L187
.L186:
	.loc 1 679 42 discriminator 3
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 679 40 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 679 45 discriminator 3
	li	a4,47
	sb	a4,0(a5)
.L187:
.LBB31:
	.loc 1 680 17
	sw	zero,-44(s0)
	.loc 1 680 9
	j	.L188
.L189:
	.loc 1 680 42 discriminator 3
	lw	a5,-44(s0)
	ld	a4,-64(s0)
	add	a4,a4,a5
	.loc 1 680 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a3,a5,1
	sw	a3,-28(s0)
	mv	a3,a5
	.loc 1 680 33 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a3
	.loc 1 680 42 discriminator 3
	lbu	a4,0(a4)
	.loc 1 680 38 discriminator 3
	sb	a4,0(a5)
	.loc 1 680 26 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L188:
	.loc 1 680 22 discriminator 1
	lw	a5,-44(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L189
.LBE31:
	.loc 1 680 50 discriminator 4
	lw	a5,-28(s0)
	ld	a4,-1680(s0)
	add	a5,a4,a5
	.loc 1 680 53 discriminator 4
	sb	zero,0(a5)
	.loc 1 681 13
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
	.loc 1 656 19
	lla	a1,.LC6
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-64(s0)
	.loc 1 656 38 discriminator 1
	ld	a5,-64(s0)
	bne	a5,zero,.L190
	.loc 1 683 12
	li	a5,0
.L191:
	.loc 1 684 1
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
.LFE25:
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
.LFB26:
	.loc 1 686 32
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
	.loc 1 688 5
	addi	a4,s0,-112
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 689 5
	lw	a5,-116(s0)
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 690 32
	lhu	a5,-112(s0)
	.loc 1 690 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 691 5
	lw	a5,-104(s0)
	mv	a1,a5
	lla	a0,.LC9
	call	printf
	.loc 1 692 5
	lla	a0,.LC10
	call	printf
.LBB32:
	.loc 1 693 14
	sw	zero,-20(s0)
	.loc 1 693 5
	j	.L193
.L195:
	.loc 1 694 21
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 694 12
	beq	a5,zero,.L194
	.loc 1 694 31 discriminator 1
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
	.loc 1 693 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L193:
	.loc 1 693 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L195
.LBE32:
	.loc 1 696 17
	lw	a5,-32(s0)
	.loc 1 696 8
	beq	a5,zero,.L196
	.loc 1 697 9
	lw	a5,-32(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L196:
	.loc 1 699 17
	lw	a5,-28(s0)
	.loc 1 699 8
	beq	a5,zero,.L197
	.loc 1 700 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC13
	call	printf
.L197:
	.loc 1 702 5
	lla	a0,.LC14
	call	printf
	.loc 1 703 1
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
.LFE26:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB27:
	.loc 1 710 38
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
	.loc 1 711 12
	li	a5,128
	.loc 1 712 1
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
.LFE27:
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB28:
	.loc 1 713 55
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
	.loc 1 714 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB33:
	.loc 1 716 14
	sw	zero,-20(s0)
	.loc 1 716 5
	j	.L201
.L204:
	.loc 1 716 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 716 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L209
	.loc 1 716 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L201:
	.loc 1 716 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L204
.LBE33:
.LBB34:
	.loc 1 718 14
	sw	zero,-24(s0)
	.loc 1 718 5
	j	.L205
.L208:
	.loc 1 719 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 719 12
	bne	a5,zero,.L206
	.loc 1 720 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 721 18
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 721 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L210
	.loc 1 721 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,1160(a5)
	.loc 1 721 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,1160(a5)
	.loc 1 722 13
	j	.L210
.L206:
	.loc 1 718 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L205:
	.loc 1 718 23 discriminator 1
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
	.loc 1 716 67
	nop
	j	.L200
.L210:
.LBE35:
.LBB36:
	.loc 1 722 13
	nop
.L200:
.LBE36:
	.loc 1 726 1
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
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB29:
	.loc 1 727 58
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
	.loc 1 728 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 728 29 discriminator 1
	sw	zero,-20(s0)
.LBB37:
	.loc 1 729 14
	sw	zero,-24(s0)
	.loc 1 729 5
	j	.L212
.L215:
	.loc 1 730 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 730 12
	ld	a4,-48(s0)
	bne	a4,a5,.L213
	.loc 1 730 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L213:
	.loc 1 731 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 731 12
	beq	a5,zero,.L214
	.loc 1 731 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L214:
	.loc 1 729 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L212:
	.loc 1 729 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L215
.LBE37:
	.loc 1 733 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,1160(a5)
	.loc 1 734 1
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
.LFB30:
	.loc 1 748 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 749 5
	li	a5,12288
	addi	a2,a5,768
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 750 5
	li	a5,20480
	addi	a2,a5,-1792
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB38:
	.loc 1 752 13
	sw	zero,-20(s0)
	.loc 1 752 5
	j	.L217
.L218:
.LBB39:
	.loc 1 753 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 755 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 756 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE39:
	.loc 1 752 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L217:
	.loc 1 752 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L218
.LBE38:
.LBB40:
	.loc 1 759 13
	sw	zero,-24(s0)
	.loc 1 759 5
	j	.L219
.L220:
.LBB41:
	.loc 1 760 22
	lw	a4,-24(s0)
	li	a5,1168
	mul	a4,a4,a5
	lla	a5,gFiles
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 762 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,128(a5)
	.loc 1 763 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE41:
	.loc 1 759 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L219:
	.loc 1 759 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L220
.LBE40:
	.loc 1 765 1
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
.LFE30:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB31:
	.loc 1 768 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 769 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 771 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 771 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 773 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 775 12
	ld	a5,-24(s0)
	.loc 1 776 1
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
.LFE31:
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB32:
	.loc 1 779 1
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
	.loc 1 780 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 781 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 782 1
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
.LFE32:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB33:
	.loc 1 784 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 785 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 785 8
	bne	a5,zero,.L225
	.loc 1 785 29 discriminator 1
	li	a5,0
	.loc 1 785 29 is_stmt 0
	j	.L226
.L225:
	.loc 1 786 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 787 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,128(a5)
	.loc 1 787 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 788 5
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 789 12
	ld	a5,-24(s0)
.L226:
	.loc 1 790 1
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
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB34:
	.loc 1 794 1
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
	.loc 1 795 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,128(a5)
	.loc 1 796 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 797 1
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
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB35:
	.loc 1 803 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 804 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 806 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 807 8
	ld	a5,-24(s0)
	bne	a5,zero,.L229
	.loc 1 808 16
	li	a5,0
	j	.L230
.L229:
	.loc 1 809 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 810 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 811 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 812 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 813 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 814 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 816 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 817 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 819 12
	ld	a5,-24(s0)
.L230:
	.loc 1 820 1
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
.LFE35:
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB36:
	.loc 1 825 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 826 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 828 5
	li	a2,1168
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 830 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 832 12
	ld	a5,-24(s0)
	.loc 1 833 1
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
.LFE36:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB37:
	.loc 1 836 1
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
	.loc 1 837 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 839 21
	call	new_file_table
	mv	a4,a0
	.loc 1 839 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 841 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 841 25
	sw	zero,0(a5)
	.loc 1 842 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 842 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 844 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 844 21
	call	new_file_table
	mv	a5,a0
	.loc 1 844 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 846 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 846 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 847 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 847 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 849 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 849 21
	call	new_file_table
	mv	a5,a0
	.loc 1 849 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 851 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 851 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 852 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 852 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 853 1
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
.LFE37:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB38:
	.loc 1 856 1
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
	.loc 1 857 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 859 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 859 8
	beq	a5,zero,.L235
	.loc 1 859 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 859 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 859 24 discriminator 1
	beq	a5,zero,.L235
	.loc 1 860 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 860 26
	ld	a5,104(a5)
	.loc 1 860 11
	beq	a5,zero,.L235
	.loc 1 861 20
	li	a5,1
	j	.L236
.L235:
	.loc 1 865 12
	li	a5,0
.L236:
	.loc 1 866 1
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
.LFE38:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB39:
	.loc 1 869 1
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
	.loc 1 870 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 871 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 871 8
	beq	a5,zero,.L238
	.loc 1 871 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 871 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 871 24 discriminator 1
	beq	a5,zero,.L238
	.loc 1 872 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 872 26
	lw	a5,0(a5)
	.loc 1 872 11
	bne	a5,zero,.L238
	.loc 1 873 20
	li	a5,1
	j	.L239
.L238:
	.loc 1 877 12
	li	a5,0
.L239:
	.loc 1 878 1
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
.LFE39:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB40:
	.loc 1 881 1
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
	.loc 1 882 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 884 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 884 8
	beq	a5,zero,.L241
	.loc 1 884 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 884 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 884 24 discriminator 1
	beq	a5,zero,.L241
	.loc 1 885 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 885 26
	lw	a4,0(a5)
	.loc 1 885 11
	li	a5,1
	bne	a4,a5,.L241
	.loc 1 886 20
	li	a5,1
	j	.L242
.L241:
	.loc 1 890 12
	li	a5,0
.L242:
	.loc 1 891 1
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
	.size	is_stdout, .-is_stdout
	.align	1
	.globl	is_tty
	.type	is_tty, @function
is_tty:
.LFB41:
	.loc 1 894 1
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
	.loc 1 895 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 896 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L244
	.loc 1 896 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L245
.L244:
	.loc 1 896 48 discriminator 3
	li	a5,0
	.loc 1 896 48 is_stmt 0
	j	.L246
.L245:
	.loc 1 897 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 897 8
	bne	a5,zero,.L247
	.loc 1 897 33 discriminator 1
	li	a5,0
	.loc 1 897 33 is_stmt 0
	j	.L246
.L247:
	.loc 1 898 23 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 898 27
	lw	a5,0(a5)
	.loc 1 898 9
	sw	a5,-28(s0)
	.loc 1 899 63
	lw	a5,-28(s0)
	sext.w	a5,a5
	beq	a5,zero,.L248
	.loc 1 899 27 discriminator 2
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L248
	.loc 1 899 45 discriminator 4
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L248
	.loc 1 899 63 discriminator 6
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,5
	bne	a4,a5,.L249
.L248:
	.loc 1 899 63 is_stmt 0 discriminator 7
	li	a5,1
	.loc 1 899 63
	j	.L246
.L249:
	.loc 1 899 63 discriminator 8
	li	a5,0
.L246:
	.loc 1 900 1 is_stmt 1
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
.LFB42:
	.loc 1 902 36
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
	.loc 1 903 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 905 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB42:
	.loc 1 907 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 907 5
	j	.L252
.L257:
	.loc 1 908 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 908 12
	bne	a5,zero,.L253
	.loc 1 909 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 909 29
	call	new_file_table
	mv	a5,a0
	.loc 1 909 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 911 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 911 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 912 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 912 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 913 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 913 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 914 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 914 34
	sw	zero,96(a5)
	.loc 1 915 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 915 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 916 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 916 38
	li	a4,1
	sw	a4,116(a5)
	.loc 1 917 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 917 41
	sw	zero,120(a5)
	.loc 1 918 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 920 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 920 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 921 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 921 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 921 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 921 66
	ld	a4,0(a4)
	.loc 1 921 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 922 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 922 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 924 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 924 15
	li	a5,31
	ble	a4,a5,.L264
	.loc 1 925 17
	lla	a0,.LC15
	call	puts
.L255:
	.loc 1 926 22
	j	.L255
.L253:
	.loc 1 907 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L252:
	.loc 1 907 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L257
	j	.L256
.L264:
	.loc 1 930 13
	nop
.L256:
.LBE42:
.LBB43:
	.loc 1 933 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 933 5
	j	.L258
.L263:
	.loc 1 934 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 934 12
	bne	a5,zero,.L259
	.loc 1 935 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 935 29
	call	new_file_table
	mv	a5,a0
	.loc 1 935 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 937 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 937 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 938 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 938 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 939 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 939 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 941 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 941 34
	sw	zero,96(a5)
	.loc 1 942 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 942 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 943 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 943 39
	li	a4,1
	sw	a4,120(a5)
	.loc 1 944 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 944 38
	sw	zero,116(a5)
	.loc 1 945 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 947 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 947 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 948 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 948 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 948 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 948 66
	ld	a4,0(a4)
	.loc 1 948 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 949 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 949 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 951 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 951 15
	li	a5,31
	ble	a4,a5,.L265
	.loc 1 952 17
	lla	a0,.LC15
	call	puts
.L261:
	.loc 1 953 22
	j	.L261
.L259:
	.loc 1 933 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L258:
	.loc 1 933 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L263
.LBE43:
	.loc 1 960 1
	j	.L266
.L265:
.LBB44:
	.loc 1 957 13
	nop
.L266:
.LBE44:
	.loc 1 960 1
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
.LFE42:
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
.LFB43:
	.loc 1 970 1
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
	.loc 1 971 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 973 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 973 8
	bne	a5,zero,.L268
	.loc 1 974 9
	lla	a0,.LC16
	call	panic
.L268:
	.loc 1 977 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L269
	.loc 1 977 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L270
.L269:
	.loc 1 978 9
	lla	a0,.LC16
	call	panic
.L270:
	.loc 1 980 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 980 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 982 7
	ld	a5,-32(s0)
	bne	a5,zero,.L272
	.loc 1 983 9
	lla	a0,.LC16
	call	panic
	.loc 1 986 11
	j	.L272
.L274:
	.loc 1 987 8
	call	yield
.L272:
	.loc 1 986 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 986 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 986 34
	bne	a4,a5,.L273
	.loc 1 986 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 986 34 discriminator 1
	bne	a5,zero,.L274
.L273:
	.loc 1 990 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 990 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 990 8
	bne	a4,a5,.L275
	.loc 1 990 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 990 31 discriminator 1
	bne	a5,zero,.L275
	.loc 1 991 16
	li	a5,0
	j	.L276
.L275:
	.loc 1 995 18
	sw	zero,-36(s0)
.LBB45:
	.loc 1 996 23
	sw	zero,-40(s0)
	.loc 1 996 5
	j	.L277
.L280:
	.loc 1 998 12
	call	yield
.L278:
	.loc 1 997 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 997 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 997 38
	bne	a4,a5,.L279
	.loc 1 997 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 997 38 discriminator 1
	bne	a5,zero,.L280
.L279:
	.loc 1 1002 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1002 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1002 12
	bne	a4,a5,.L281
	.loc 1 1002 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1002 35 discriminator 1
	beq	a5,zero,.L284
.L281:
	.loc 1 1006 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1006 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 1006 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 1006 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 1006 17
	sb	a4,0(a5)
	.loc 1 1007 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1007 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 1010 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 996 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L277:
	.loc 1 996 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 996 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L282
	.loc 1 996 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 996 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 996 36 discriminator 3
	bltu	a4,a5,.L278
	j	.L282
.L284:
	.loc 1 1003 13
	nop
.L282:
.LBE45:
	.loc 1 1014 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L276:
	.loc 1 1015 1
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
.LFE43:
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
.LFB44:
	.loc 1 1020 1
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
	.loc 1 1021 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1023 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1023 8
	bne	a5,zero,.L286
	.loc 1 1024 9
	lla	a0,.LC17
	call	panic
.L286:
	.loc 1 1027 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L287
	.loc 1 1027 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L288
.L287:
	.loc 1 1028 9
	lla	a0,.LC17
	call	panic
.L288:
	.loc 1 1030 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1030 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1032 7
	ld	a5,-32(s0)
	bne	a5,zero,.L289
	.loc 1 1033 9
	lla	a0,.LC17
	call	panic
.L289:
.LBB46:
	.loc 1 1036 23
	sw	zero,-36(s0)
	.loc 1 1036 5
	j	.L290
.L293:
	.loc 1 1039 11
	call	yield
.L291:
	.loc 1 1038 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 1038 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1038 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 1038 48
	li	a5,512
	bne	a4,a5,.L292
	.loc 1 1038 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1038 48 discriminator 1
	bne	a5,zero,.L293
.L292:
	.loc 1 1042 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1042 10
	bne	a5,zero,.L294
	.loc 1 1044 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1044 30
	ble	a5,zero,.L295
	.loc 1 1044 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1044 30
	j	.L297
.L295:
	.loc 1 1044 30 discriminator 2
	li	a5,-1
	.loc 1 1044 30
	j	.L297
.L294:
	.loc 1 1046 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 1046 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 1046 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 1046 44
	lbu	a4,0(a5)
	.loc 1 1046 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 1047 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1047 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 1036 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L290:
	.loc 1 1036 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L291
.LBE46:
	.loc 1 1054 12
	lw	a5,-56(s0)
.L297:
	.loc 1 1055 1
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
.LFE44:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB45:
	.loc 1 1067 1
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
	.loc 1 1067 1
	mv	a5,sp
	mv	s1,a5
	.loc 1 1068 8
	ld	a5,-264(s0)
	beq	a5,zero,.L300
	.loc 1 1068 22 discriminator 2
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 1 1068 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L301
.L300:
	.loc 1 1068 41 discriminator 3
	li	a5,0
	.loc 1 1068 41 is_stmt 0
	j	.L302
.L301:
	.loc 1 1069 9 is_stmt 1
	lla	a1,.LC6
	ld	a0,-264(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 1069 8 discriminator 1
	bne	a5,zero,.L303
	.loc 1 1069 40 discriminator 1
	li	a5,0
	.loc 1 1069 40 is_stmt 0
	j	.L302
.L303:
	.loc 1 1072 15 is_stmt 1
	ld	a0,-264(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1072 28 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 1072 10 discriminator 1
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
	.loc 1 1073 5
	mv	a2,a5
	ld	a1,-264(s0)
	ld	a0,-144(s0)
	call	strncpy
	.loc 1 1076 11
	ld	a5,-144(s0)
	sd	a5,-152(s0)
	.loc 1 1077 11
	sd	zero,-104(s0)
	.loc 1 1078 17
	lla	a1,.LC6
	ld	a0,-152(s0)
	call	strtok
	sd	a0,-112(s0)
	.loc 1 1079 14
	li	a5,1
	sw	a5,-116(s0)
	.loc 1 1081 5
	addi	a4,s0,-256
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1083 11
	j	.L304
.L309:
.LBB47:
	.loc 1 1084 25
	lla	a1,.LC6
	li	a0,0
	call	strtok
	sd	a0,-160(s0)
	.loc 1 1085 12
	ld	a5,-160(s0)
	bne	a5,zero,.L305
	.loc 1 1087 18
	ld	a5,-112(s0)
	sd	a5,-104(s0)
	.loc 1 1088 13
	j	.L306
.L305:
	.loc 1 1091 15
	lhu	a5,-256(s0)
	.loc 1 1091 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L307
	.loc 1 1091 38 discriminator 1
	li	a5,0
	.loc 1 1091 38 is_stmt 0
	j	.L302
.L307:
	.loc 1 1092 30 is_stmt 1
	addi	a5,s0,-256
	ld	a1,-112(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 1093 12
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L308
	.loc 1 1093 36 discriminator 1
	li	a5,0
	.loc 1 1093 36 is_stmt 0
	j	.L302
.L308:
	.loc 1 1094 9 is_stmt 1
	addi	a4,s0,-256
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1095 13
	lw	a5,-164(s0)
	sw	a5,-116(s0)
	.loc 1 1096 13
	ld	a5,-160(s0)
	sd	a5,-112(s0)
.L304:
.LBE47:
	.loc 1 1083 12
	ld	a5,-112(s0)
	bne	a5,zero,.L309
.L306:
	.loc 1 1099 8
	ld	a5,-104(s0)
	bne	a5,zero,.L310
	.loc 1 1099 23 discriminator 1
	li	a5,0
	.loc 1 1099 23 is_stmt 0
	j	.L302
.L310:
	.loc 1 1100 18 is_stmt 1
	ld	a5,-272(s0)
	lw	a4,-116(s0)
	sw	a4,0(a5)
	.loc 1 1102 13
	ld	a0,-104(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-120(s0)
	.loc 1 1103 8
	lw	a5,-120(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L311
	.loc 1 1103 23 discriminator 1
	li	a5,14
	sw	a5,-120(s0)
.L311:
.LBB48:
	.loc 1 1104 14
	sw	zero,-124(s0)
	.loc 1 1104 5
	j	.L312
.L313:
	.loc 1 1104 46 discriminator 3
	lw	a5,-124(s0)
	ld	a4,-280(s0)
	add	a5,a4,a5
	.loc 1 1104 50 discriminator 3
	sb	zero,0(a5)
	.loc 1 1104 34 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L312:
	.loc 1 1104 23 discriminator 1
	lw	a5,-124(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L313
.LBE48:
	.loc 1 1105 5
	lw	a5,-120(s0)
	mv	a2,a5
	ld	a1,-104(s0)
	ld	a0,-280(s0)
	call	strncpy
	.loc 1 1106 12
	li	a5,1
.L302:
	mv	sp,s1
	.loc 1 1107 1
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
.LFE45:
	.size	path_parent_lookup_abs, .-path_parent_lookup_abs
	.align	1
	.type	alloc_inode_T_FILE, @function
alloc_inode_T_FILE:
.LFB46:
	.loc 1 1112 1
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
	.loc 1 1114 19
	li	a5,1
	sw	a5,-20(s0)
	.loc 1 1114 5
	j	.L316
.L319:
	.loc 1 1115 9
	addi	a4,s0,-112
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1116 15
	lhu	a5,-112(s0)
	.loc 1 1116 12
	bne	a5,zero,.L317
.LBB50:
	.loc 1 1119 13
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1120 23
	li	a5,2
	sh	a5,-200(s0)
	.loc 1 1121 24
	li	a5,1
	sh	a5,-194(s0)
	.loc 1 1122 23
	sw	zero,-192(s0)
	.loc 1 1123 23
	li	a5,420
	sw	a5,-188(s0)
	.loc 1 1123 39
	sh	zero,-184(s0)
	.loc 1 1123 51
	sh	zero,-182(s0)
	.loc 1 1123 94
	call	fs_now
	mv	a5,a0
	.loc 1 1123 92 discriminator 1
	sw	a5,-172(s0)
	.loc 1 1123 85 discriminator 1
	lw	a5,-172(s0)
	.loc 1 1123 79 discriminator 1
	sw	a5,-176(s0)
	.loc 1 1123 72 discriminator 1
	lw	a5,-176(s0)
	.loc 1 1123 66 discriminator 1
	sw	a5,-180(s0)
	.loc 1 1124 13
	addi	a4,s0,-200
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1125 20
	lw	a5,-20(s0)
	j	.L320
.L317:
.LBE50:
	.loc 1 1114 53 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L316:
	.loc 1 1114 39 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1114 34 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L319
.LBE49:
	.loc 1 1128 12
	li	a5,0
.L320:
	.loc 1 1129 1
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
.LFE46:
	.size	alloc_inode_T_FILE, .-alloc_inode_T_FILE
	.align	1
	.type	add_dirent, @function
add_dirent:
.LFB47:
	.loc 1 1134 1
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
	.loc 1 1135 8
	ld	a5,-720(s0)
	beq	a5,zero,.L322
	.loc 1 1135 22 discriminator 2
	ld	a5,-720(s0)
	lbu	a5,0(a5)
	.loc 1 1135 15 discriminator 2
	bne	a5,zero,.L323
.L322:
	.loc 1 1135 42 discriminator 3
	li	a5,-1
	.loc 1 1135 42 is_stmt 0
	j	.L336
.L323:
	.loc 1 1138 5 is_stmt 1
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1139 12
	lhu	a5,-176(s0)
	.loc 1 1139 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L325
	.loc 1 1139 35 discriminator 1
	li	a5,-1
	.loc 1 1139 35 is_stmt 0
	j	.L336
.L325:
	.loc 1 1143 15 is_stmt 1
	lw	a5,-712(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 1143 13
	sh	a5,-192(s0)
.LBB51:
	.loc 1 1145 14
	sw	zero,-20(s0)
	.loc 1 1145 5
	j	.L326
.L327:
	.loc 1 1145 49 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-174(a5)
	.loc 1 1145 34 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L326:
	.loc 1 1145 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L327
.LBE51:
	.loc 1 1146 5
	addi	a5,s0,-192
	addi	a5,a5,2
	li	a2,14
	ld	a1,-720(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1149 14
	sw	zero,-24(s0)
	.loc 1 1150 11
	j	.L328
.L334:
.LBB52:
	.loc 1 1151 9
	lw	a4,-24(s0)
	addi	a5,s0,-176
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1152 24
	lla	a5,block_buf
	sd	a5,-64(s0)
	.loc 1 1153 13
	li	a5,32
	sw	a5,-68(s0)
.LBB53:
	.loc 1 1154 18
	sw	zero,-28(s0)
	.loc 1 1154 9
	j	.L329
.L333:
	.loc 1 1155 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1155 24
	lhu	a5,0(a5)
	.loc 1 1155 16
	bne	a5,zero,.L330
.LBB54:
	.loc 1 1156 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 1156 25
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
	.loc 1 1158 26
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-72(s0)
	.loc 1 1159 37
	lw	a3,-72(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 1160 20
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L331
	.loc 1 1160 39 discriminator 1
	li	a5,-1
	.loc 1 1160 39 is_stmt 0
	j	.L336
.L331:
	.loc 1 1161 17 is_stmt 1
	lw	a5,-76(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_block
	.loc 1 1164 43
	lw	a5,-168(s0)
	.loc 1 1164 26
	srliw	a5,a5,4
	sw	a5,-80(s0)
	.loc 1 1165 41
	lw	a5,-24(s0)
	srliw	a5,a5,4
	sext.w	a4,a5
	.loc 1 1165 78
	lw	a5,-28(s0)
	.loc 1 1165 26
	addw	a5,a4,a5
	sw	a5,-84(s0)
	.loc 1 1166 20
	lw	a5,-84(s0)
	mv	a4,a5
	lw	a5,-80(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bltu	a4,a5,.L332
	.loc 1 1167 41
	lw	a5,-84(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 1167 46
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1167 30
	sw	a5,-168(s0)
	.loc 1 1168 33
	call	fs_now
	mv	a5,a0
	.loc 1 1168 31 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1169 21
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
.L332:
	.loc 1 1171 24
	li	a5,0
	j	.L336
.L330:
.LBE54:
	.loc 1 1154 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L329:
	.loc 1 1154 27 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-68(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L333
.LBE53:
	.loc 1 1174 13
	lw	a5,-24(s0)
	addiw	a5,a5,512
	sw	a5,-24(s0)
.L328:
.LBE52:
	.loc 1 1150 21
	lw	a5,-168(s0)
	.loc 1 1150 16
	lw	a4,-24(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L334
	.loc 1 1178 23
	lw	a5,-168(s0)
	.loc 1 1178 14
	srliw	a5,a5,4
	sw	a5,-32(s0)
	.loc 1 1179 29
	lwu	a5,-32(s0)
	slli	a5,a5,4
	.loc 1 1179 54
	srli	a5,a5,9
	.loc 1 1179 14
	sw	a5,-36(s0)
	.loc 1 1180 29
	lw	a5,-32(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1180 14
	andi	a5,a5,496
	sw	a5,-40(s0)
	.loc 1 1181 25
	lw	a3,-36(s0)
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 1182 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L335
	.loc 1 1182 27 discriminator 1
	li	a5,-1
	.loc 1 1182 27 is_stmt 0
	j	.L336
.L335:
	.loc 1 1185 5 is_stmt 1
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1186 20
	addi	a5,s0,-704
	sd	a5,-56(s0)
	.loc 1 1187 19
	lw	a5,-40(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 1187 9
	slli	a5,a5,4
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 1187 45
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
	.loc 1 1188 5
	addi	a4,s0,-704
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1190 8
	lw	a5,-168(s0)
	.loc 1 1190 14
	addiw	a5,a5,16
	sext.w	a5,a5
	sw	a5,-168(s0)
	.loc 1 1191 17
	call	fs_now
	mv	a5,a0
	.loc 1 1191 15 discriminator 1
	sw	a5,-152(s0)
	.loc 1 1192 5
	addi	a4,s0,-176
	lw	a5,-708(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1193 12
	li	a5,0
.L336:
	.loc 1 1194 1
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
.LFE47:
	.size	add_dirent, .-add_dirent
	.align	1
	.type	remove_dirent, @function
remove_dirent:
.LFB48:
	.loc 1 1198 1
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
	.loc 1 1200 5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1201 12
	lhu	a5,-128(s0)
	.loc 1 1201 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L338
	.loc 1 1201 35 discriminator 1
	li	a5,-1
	.loc 1 1201 35 is_stmt 0
	j	.L346
.L338:
	.loc 1 1203 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1205 11
	j	.L340
.L345:
.LBB55:
	.loc 1 1206 9
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
	.loc 1 1206 9 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1207 24 is_stmt 1
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 1208 13
	li	a5,32
	sw	a5,-36(s0)
.LBB56:
	.loc 1 1209 18
	sw	zero,-24(s0)
	.loc 1 1209 9
	j	.L341
.L344:
	.loc 1 1210 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1210 22
	lhu	a5,0(a5)
	.loc 1 1210 16
	beq	a5,zero,.L347
	.loc 1 1211 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1211 34
	addi	a4,a5,2
	.loc 1 1211 13
	addi	a5,s0,-144
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 1212 29
	sb	zero,-130(s0)
	.loc 1 1213 17
	addi	a5,s0,-144
	li	a2,14
	ld	a1,-160(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 1213 16 discriminator 1
	bne	a5,zero,.L343
	.loc 1 1214 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1214 28
	sh	zero,0(a5)
	.loc 1 1215 17
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
	.loc 1 1215 17 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1216 29 is_stmt 1
	call	fs_now
	mv	a5,a0
	.loc 1 1216 27 discriminator 1
	sw	a5,-104(s0)
	.loc 1 1217 17
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1218 24
	li	a5,0
	j	.L346
.L347:
	.loc 1 1210 34
	nop
.L343:
	.loc 1 1209 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L341:
	.loc 1 1209 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L344
.LBE56:
	.loc 1 1221 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L340:
.LBE55:
	.loc 1 1205 21
	lw	a5,-120(s0)
	.loc 1 1205 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L345
	.loc 1 1223 12
	li	a5,-1
.L346:
	.loc 1 1224 1
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
.LFE48:
	.size	remove_dirent, .-remove_dirent
	.align	1
	.type	build_abs_normalized, @function
build_abs_normalized:
.LFB49:
	.loc 1 1228 1
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
	.loc 1 1229 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1229 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1231 8
	ld	a5,-1128(s0)
	beq	a5,zero,.L349
	.loc 1 1231 21 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1231 14 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L349
	.loc 1 1232 9
	addi	a5,s0,-368
	li	a2,255
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1233 34
	sb	zero,-113(s0)
	j	.L350
.L349:
.LBB57:
	.loc 1 1236 26
	ld	a5,-80(s0)
	addi	a4,a5,1752
	.loc 1 1236 9
	addi	a5,s0,-368
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1237 34
	sb	zero,-113(s0)
	.loc 1 1238 17
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1239 12
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L351
	.loc 1 1239 31 discriminator 1
	lbu	a5,-368(s0)
	.loc 1 1239 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L352
.L351:
	.loc 1 1240 16
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,254
	bgt	a4,a5,.L352
	.loc 1 1240 54 discriminator 1
	lw	a5,-84(s0)
	addiw	a4,a5,1
	sw	a4,-84(s0)
	.loc 1 1240 58 discriminator 1
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-336(a5)
	.loc 1 1240 75 discriminator 1
	lw	a5,-84(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-336(a5)
.L352:
	.loc 1 1242 12
	ld	a5,-1128(s0)
	beq	a5,zero,.L350
	.loc 1 1242 25 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1242 18 discriminator 1
	beq	a5,zero,.L350
	.loc 1 1242 67 discriminator 2
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1242 67 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1242 30 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-368
	mv	a2,a4
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncat
.L350:
.LBE57:
	.loc 1 1247 5
	addi	a4,s0,-368
	addi	a5,s0,-624
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1248 24
	sb	zero,-369(s0)
	.loc 1 1249 17
	addi	a5,s0,-624
	sd	a5,-40(s0)
	.loc 1 1250 29
	addi	a5,s0,-624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1250 29 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1250 17 is_stmt 1 discriminator 1
	addi	a5,s0,-624
	add	a5,a5,a4
	sd	a5,-96(s0)
	.loc 1 1253 9
	sw	zero,-44(s0)
	.loc 1 1254 11
	j	.L353
.L355:
.LBB58:
	.loc 1 1255 28 discriminator 2
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L354:
	.loc 1 1255 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1255 19 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L355
	.loc 1 1256 13
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1256 12
	beq	a5,zero,.L382
	.loc 1 1257 19
	ld	a5,-40(s0)
	sd	a5,-104(s0)
	.loc 1 1258 15
	j	.L358
.L360:
	.loc 1 1258 34 discriminator 3
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L358:
	.loc 1 1258 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1258 19 discriminator 1
	beq	a5,zero,.L359
	.loc 1 1258 22 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1258 19 discriminator 2
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L360
.L359:
	.loc 1 1259 21
	ld	a4,-40(s0)
	ld	a5,-104(s0)
	sub	a5,a4,a5
	.loc 1 1259 13
	sw	a5,-108(s0)
	.loc 1 1260 12
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L361
	.loc 1 1260 34 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1260 22 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L361
	.loc 1 1260 22 is_stmt 0
	j	.L353
.L361:
	.loc 1 1262 19 is_stmt 1
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L362
	.loc 1 1262 41 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1262 29 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L362
	.loc 1 1262 64 discriminator 2
	ld	a5,-104(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1262 52 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L362
	.loc 1 1263 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	ble	a5,zero,.L353
	.loc 1 1263 33 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,-1
	sw	a5,-44(s0)
	.loc 1 1263 16
	j	.L353
.L362:
	.loc 1 1264 19
	lw	a5,-108(s0)
	sext.w	a5,a5
	ble	a5,zero,.L353
.LBB59:
	.loc 1 1265 17
	lw	a5,-108(s0)
	sw	a5,-48(s0)
	.loc 1 1266 16
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L364
	.loc 1 1266 37 discriminator 1
	li	a5,14
	sw	a5,-48(s0)
.L364:
.LBB60:
	.loc 1 1267 22
	sw	zero,-52(s0)
	.loc 1 1267 13
	j	.L365
.L366:
	.loc 1 1267 57 discriminator 3
	lw	a3,-52(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1267 38 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L365:
	.loc 1 1267 27 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L366
.LBE60:
.LBB61:
	.loc 1 1268 22
	sw	zero,-56(s0)
	.loc 1 1268 13
	j	.L367
.L368:
	.loc 1 1268 65 discriminator 3
	lw	a5,-56(s0)
	ld	a4,-104(s0)
	add	a5,a4,a5
	lbu	a3,0(a5)
	.loc 1 1268 54 discriminator 3
	lw	a2,-56(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	sb	a3,-1072(a5)
	.loc 1 1268 34 discriminator 3
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L367:
	.loc 1 1268 27 discriminator 1
	lw	a5,-56(s0)
	mv	a4,a5
	lw	a5,-48(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L368
.LBE61:
	.loc 1 1269 32
	lw	a3,-48(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1270 16
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,30
	bgt	a4,a5,.L353
	.loc 1 1270 34 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L353:
.LBE59:
.LBE58:
	.loc 1 1254 14
	ld	a4,-40(s0)
	ld	a5,-96(s0)
	bltu	a4,a5,.L354
	j	.L357
.L382:
.LBB62:
	.loc 1 1256 25
	nop
.L357:
.LBE62:
	.loc 1 1274 9
	sw	zero,-60(s0)
	.loc 1 1275 8
	ld	a5,-1120(s0)
	beq	a5,zero,.L370
	.loc 1 1275 27 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1275 23 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1275 30 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L370:
.LBB63:
	.loc 1 1276 14
	sw	zero,-64(s0)
	.loc 1 1276 5
	j	.L371
.L378:
.LBB64:
	.loc 1 1277 24
	lw	a5,-64(s0)
	sext.w	a5,a5
	snez	a5,a5
	andi	a5,a5,0xff
	sext.w	s1,a5
	.loc 1 1277 42
	addi	a3,s0,-1104
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	add	a5,a3,a5
	.loc 1 1277 30
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1277 13 discriminator 1
	addw	a5,s1,a5
	sw	a5,-112(s0)
	.loc 1 1278 13
	lw	a4,-60(s0)
	.loc 1 1278 25
	lw	a5,-112(s0)
	add	a5,a4,a5
	.loc 1 1278 12
	ld	a4,-1120(s0)
	bleu	a4,a5,.L383
	.loc 1 1279 12
	lw	a5,-64(s0)
	sext.w	a5,a5
	beq	a5,zero,.L374
	.loc 1 1279 23 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1279 19 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1279 27 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L374:
.LBB65:
	.loc 1 1280 18
	sw	zero,-68(s0)
	.loc 1 1280 9
	j	.L375
.L377:
	.loc 1 1280 73 discriminator 4
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1280 69 discriminator 4
	ld	a5,-1112(s0)
	add	a3,a5,a4
	.loc 1 1280 87 discriminator 4
	lw	a2,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	lbu	a5,-1072(a5)
	.loc 1 1280 77 discriminator 4
	sb	a5,0(a3)
	.loc 1 1280 62 discriminator 4
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L375:
	.loc 1 1280 31 discriminator 1
	lw	a3,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	lbu	a5,-1072(a5)
	.loc 1 1280 35 discriminator 1
	beq	a5,zero,.L376
	.loc 1 1280 38 discriminator 3
	lw	a4,-60(s0)
	.loc 1 1280 57 discriminator 3
	ld	a5,-1120(s0)
	addi	a5,a5,-1
	.loc 1 1280 35 discriminator 3
	bltu	a4,a5,.L377
.L376:
.LBE65:
.LBE64:
	.loc 1 1276 27 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L371:
	.loc 1 1276 19 discriminator 1
	lw	a5,-64(s0)
	mv	a4,a5
	lw	a5,-44(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L378
	j	.L373
.L383:
.LBB66:
	.loc 1 1278 42
	nop
.L373:
.LBE66:
.LBE63:
	.loc 1 1282 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L379
	.loc 1 1283 12
	ld	a4,-1120(s0)
	li	a5,1
	bleu	a4,a5,.L380
	.loc 1 1283 33 discriminator 1
	ld	a5,-1112(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 1283 42 discriminator 1
	ld	a5,-1112(s0)
	addi	a5,a5,1
	.loc 1 1283 45 discriminator 1
	sb	zero,0(a5)
	.loc 1 1288 1
	j	.L384
.L380:
	.loc 1 1284 17
	ld	a5,-1120(s0)
	beq	a5,zero,.L384
	.loc 1 1284 34 discriminator 1
	ld	a5,-1112(s0)
	sb	zero,0(a5)
	.loc 1 1288 1
	j	.L384
.L379:
	.loc 1 1286 12
	lw	a5,-60(s0)
	ld	a4,-1112(s0)
	add	a5,a4,a5
	.loc 1 1286 17
	sb	zero,0(a5)
.L384:
	.loc 1 1288 1
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
.LFE49:
	.size	build_abs_normalized, .-build_abs_normalized
	.align	1
	.globl	fs_mkdir
	.type	fs_mkdir, @function
fs_mkdir:
.LFB50:
	.loc 1 1292 1
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
	.loc 1 1295 5
	addi	a5,s0,-160
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1296 9
	addi	a5,s0,-160
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1296 8 discriminator 1
	bne	a5,zero,.L386
	.loc 1 1296 39 discriminator 1
	li	a5,-1
	.loc 1 1296 39 is_stmt 0
	j	.L405
.L386:
	.loc 1 1299 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1299 8 discriminator 1
	beq	a5,zero,.L388
	.loc 1 1299 39 discriminator 1
	li	a5,-1
	.loc 1 1299 39 is_stmt 0
	j	.L405
.L388:
.LBB67:
	.loc 1 1303 34 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1303 26
	j	.L389
.L390:
	.loc 1 1303 61 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1303 50 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L389:
	.loc 1 1303 39 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L390
.LBE67:
	.loc 1 1304 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1304 8 discriminator 1
	bne	a5,zero,.L391
	.loc 1 1304 61 discriminator 1
	li	a5,-1
	.loc 1 1304 61 is_stmt 0
	j	.L405
.L391:
	.loc 1 1306 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1307 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1307 8 discriminator 1
	bne	a5,zero,.L392
	.loc 1 1307 51 discriminator 1
	li	a5,-1
	.loc 1 1307 51 is_stmt 0
	j	.L405
.L392:
	.loc 1 1308 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1308 8
	bne	a5,zero,.L393
	.loc 1 1308 33 discriminator 1
	li	a5,-1
	.loc 1 1308 33 is_stmt 0
	j	.L405
.L393:
	.loc 1 1312 14 is_stmt 1
	sw	zero,-24(s0)
.LBB68:
	.loc 1 1313 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1313 5
	j	.L394
.L397:
	.loc 1 1314 9
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1315 15
	lhu	a5,-360(s0)
	.loc 1 1315 12
	bne	a5,zero,.L395
	.loc 1 1315 34 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1315 39
	j	.L396
.L395:
	.loc 1 1313 44 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L394:
	.loc 1 1313 33 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1313 28 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L397
.L396:
.LBE68:
	.loc 1 1317 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L398
	.loc 1 1317 23 discriminator 1
	li	a5,-1
	.loc 1 1317 23 is_stmt 0
	j	.L405
.L398:
	.loc 1 1318 25 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1319 15
	li	a5,1
	sh	a5,-448(s0)
	.loc 1 1319 35
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1319 50
	sw	zero,-440(s0)
	.loc 1 1319 68
	call	fs_now
	mv	a5,a0
	.loc 1 1319 66 discriminator 1
	sw	a5,-424(s0)
	.loc 1 1319 95 discriminator 1
	lw	a5,-424(s0)
	.loc 1 1319 89 discriminator 1
	sw	a5,-420(s0)
	.loc 1 1321 30
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1321 20
	lhu	a5,1880(a5)
	sh	a5,-30(s0)
	.loc 1 1322 28
	lw	a5,-164(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1323 22
	lw	a5,-424(s0)
	.loc 1 1323 16
	sw	a5,-428(s0)
	.loc 1 1323 46
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1323 59
	lhu	a5,1882(a5)
	.loc 1 1323 39
	sh	a5,-432(s0)
	.loc 1 1324 24
	lw	a5,-524(s0)
	.loc 1 1324 30
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1324 14
	beq	a5,zero,.L399
	.loc 1 1324 14 is_stmt 0 discriminator 1
	lhu	a5,-518(s0)
	j	.L400
.L399:
	.loc 1 1324 62 is_stmt 1 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1324 14 discriminator 2
	lhu	a5,1884(a5)
.L400:
	.loc 1 1324 14 is_stmt 0 discriminator 4
	sh	a5,-430(s0)
	.loc 1 1325 40 is_stmt 1
	lw	a5,-556(s0)
	sext.w	a5,a5
	beq	a5,zero,.L401
	.loc 1 1325 40 is_stmt 0 discriminator 1
	lw	a5,-556(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L402
.L401:
	.loc 1 1325 40 discriminator 2
	li	a5,493
.L402:
	.loc 1 1325 50 is_stmt 1 discriminator 4
	lhu	a4,-30(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1325 48 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1325 15 discriminator 4
	sw	a5,-436(s0)
	.loc 1 1326 16
	lw	a5,-524(s0)
	.loc 1 1326 22
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1326 8
	beq	a5,zero,.L403
	.loc 1 1326 37 discriminator 1
	lw	a5,-436(s0)
	.loc 1 1326 43 discriminator 1
	ori	a5,a5,1024
	sext.w	a5,a5
	sw	a5,-436(s0)
.L403:
	.loc 1 1327 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1329 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1329 8 discriminator 1
	beq	a5,zero,.L404
	.loc 1 1329 53 discriminator 1
	li	a5,-1
	.loc 1 1329 53 is_stmt 0
	j	.L405
.L404:
	.loc 1 1330 12 is_stmt 1
	li	a5,0
.L405:
	.loc 1 1331 1
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
.LFE50:
	.size	fs_mkdir, .-fs_mkdir
	.align	1
	.globl	fs_rmdir
	.type	fs_rmdir, @function
fs_rmdir:
.LFB51:
	.loc 1 1335 1
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
	.loc 1 1337 5
	addi	a5,s0,-184
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1338 9
	addi	a5,s0,-184
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1338 8 discriminator 1
	bne	a5,zero,.L407
	.loc 1 1338 39 discriminator 1
	li	a5,-1
	.loc 1 1338 39 is_stmt 0
	j	.L425
.L407:
	.loc 1 1340 21 is_stmt 1
	addi	a5,s0,-184
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 1341 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L409
	.loc 1 1341 27 discriminator 1
	li	a5,-1
	.loc 1 1341 27 is_stmt 0
	j	.L425
.L409:
	.loc 1 1342 23 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1343 11
	lhu	a5,-272(s0)
	.loc 1 1343 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L410
	.loc 1 1343 34 discriminator 1
	li	a5,-1
	.loc 1 1343 34 is_stmt 0
	j	.L425
.L410:
	.loc 1 1345 11 is_stmt 1
	lw	a5,-264(s0)
	.loc 1 1345 8
	beq	a5,zero,.L411
.LBB69:
	.loc 1 1347 18
	sw	zero,-20(s0)
	.loc 1 1347 29
	sw	zero,-24(s0)
	.loc 1 1348 15
	j	.L412
.L419:
.LBB70:
	.loc 1 1349 13
	lw	a4,-20(s0)
	addi	a5,s0,-272
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1350 28
	lla	a5,block_buf
	sd	a5,-48(s0)
	.loc 1 1351 17
	li	a5,32
	sw	a5,-52(s0)
.LBB71:
	.loc 1 1352 21
	sw	zero,-28(s0)
	.loc 1 1352 13
	j	.L413
.L416:
	.loc 1 1352 46 discriminator 5
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1352 49 discriminator 5
	lhu	a5,0(a5)
	.loc 1 1352 43 discriminator 5
	beq	a5,zero,.L414
	.loc 1 1352 69 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 1352 73
	j	.L415
.L414:
	.loc 1 1352 36 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L413:
	.loc 1 1352 26 discriminator 4
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-52(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L416
.L415:
.LBE71:
	.loc 1 1353 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L426
	.loc 1 1354 17
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L412:
.LBE70:
	.loc 1 1348 24
	lw	a5,-264(s0)
	.loc 1 1348 20
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L419
	j	.L418
.L426:
.LBB72:
	.loc 1 1353 29
	nop
.L418:
.LBE72:
	.loc 1 1356 12
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L411
	.loc 1 1356 33 discriminator 1
	li	a5,-1
	.loc 1 1356 33 is_stmt 0
	j	.L425
.L411:
.LBE69:
.LBB73:
	.loc 1 1359 51 is_stmt 1
	sw	zero,-32(s0)
	.loc 1 1359 43
	j	.L420
.L421:
	.loc 1 1359 78 discriminator 3
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-280(a5)
	.loc 1 1359 67 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L420:
	.loc 1 1359 56 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L421
.LBE73:
	.loc 1 1360 10
	addi	a3,s0,-296
	addi	a4,s0,-276
	addi	a5,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1360 8 discriminator 1
	bne	a5,zero,.L422
	.loc 1 1360 61 discriminator 1
	li	a5,-1
	.loc 1 1360 61 is_stmt 0
	j	.L425
.L422:
	.loc 1 1362 25 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-384
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1363 10
	addi	a5,s0,-384
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1363 8 discriminator 1
	bne	a5,zero,.L423
	.loc 1 1363 52 discriminator 1
	li	a5,-1
	.loc 1 1363 52 is_stmt 0
	j	.L425
.L423:
	.loc 1 1364 9 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1364 8 discriminator 1
	beq	a5,zero,.L424
	.loc 1 1364 50 discriminator 1
	li	a5,-1
	.loc 1 1364 50 is_stmt 0
	j	.L425
.L424:
	.loc 1 1367 5 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1369 25
	addi	a5,s0,-472
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1370 5
	addi	a4,s0,-472
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1371 12
	li	a5,0
.L425:
	.loc 1 1372 1
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
.LFE51:
	.size	fs_rmdir, .-fs_rmdir
	.align	1
	.globl	fs_unlink
	.type	fs_unlink, @function
fs_unlink:
.LFB52:
	.loc 1 1376 1
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
	.loc 1 1378 5
	addi	a5,s0,-176
	ld	a2,-568(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1379 9
	addi	a5,s0,-176
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1379 8 discriminator 1
	bne	a5,zero,.L428
	.loc 1 1379 39 discriminator 1
	li	a5,-1
	.loc 1 1379 39 is_stmt 0
	j	.L445
.L428:
	.loc 1 1381 21 is_stmt 1
	addi	a5,s0,-176
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-32(s0)
	.loc 1 1382 8
	lw	a5,-32(s0)
	sext.w	a5,a5
	bne	a5,zero,.L430
	.loc 1 1382 27 discriminator 1
	li	a5,-1
	.loc 1 1382 27 is_stmt 0
	j	.L445
.L430:
	.loc 1 1383 23 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1384 11
	lhu	a5,-264(s0)
	.loc 1 1384 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L431
	.loc 1 1384 35 discriminator 1
	li	a5,-1
	.loc 1 1384 35 is_stmt 0
	j	.L445
.L431:
.LBB74:
	.loc 1 1387 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1387 5
	j	.L432
.L438:
.LBB75:
	.loc 1 1388 19
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1388 12
	beq	a5,zero,.L446
	.loc 1 1389 33
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1389 23
	addi	a5,a5,584
	sd	a5,-48(s0)
.LBB76:
	.loc 1 1390 18
	sw	zero,-24(s0)
	.loc 1 1390 9
	j	.L435
.L437:
	.loc 1 1391 19
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1391 16
	beq	a5,zero,.L436
	.loc 1 1391 28 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1391 31 discriminator 1
	lw	a4,0(a5)
	.loc 1 1391 23 discriminator 1
	li	a5,3
	bne	a4,a5,.L436
	.loc 1 1391 54 discriminator 2
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1391 57 discriminator 2
	lw	a5,4(a5)
	.loc 1 1391 49 discriminator 2
	lw	a4,-32(s0)
	sext.w	a4,a4
	bne	a4,a5,.L436
	.loc 1 1392 24
	li	a5,-1
	j	.L445
.L436:
	.loc 1 1390 46 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L435:
	.loc 1 1390 27 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L437
	j	.L434
.L446:
.LBE76:
	.loc 1 1388 25
	nop
.L434:
.LBE75:
	.loc 1 1387 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L432:
	.loc 1 1387 25 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L438
.LBE74:
.LBB77:
	.loc 1 1397 51
	sw	zero,-28(s0)
	.loc 1 1397 43
	j	.L439
.L440:
	.loc 1 1397 78 discriminator 3
	lw	a5,-28(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-272(a5)
	.loc 1 1397 67 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L439:
	.loc 1 1397 56 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L440
.LBE77:
	.loc 1 1398 10
	addi	a3,s0,-288
	addi	a4,s0,-268
	addi	a5,s0,-176
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1398 8 discriminator 1
	bne	a5,zero,.L441
	.loc 1 1398 61 discriminator 1
	li	a5,-1
	.loc 1 1398 61 is_stmt 0
	j	.L445
.L441:
	.loc 1 1400 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-376
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1401 10
	addi	a5,s0,-376
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1401 8 discriminator 1
	bne	a5,zero,.L442
	.loc 1 1401 52 discriminator 1
	li	a5,-1
	.loc 1 1401 52 is_stmt 0
	j	.L445
.L442:
	.loc 1 1403 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-464
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1404 13
	lw	a5,-452(s0)
	.loc 1 1404 19
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1404 8
	beq	a5,zero,.L443
.LBB78:
	.loc 1 1405 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1405 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1406 17
	ld	a5,-40(s0)
	lhu	a5,1882(a5)
	.loc 1 1406 12
	beq	a5,zero,.L443
	.loc 1 1406 33 discriminator 1
	ld	a5,-40(s0)
	lhu	a4,1882(a5)
	.loc 1 1406 44 discriminator 1
	lhu	a5,-248(s0)
	.loc 1 1406 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L443
	.loc 1 1406 54 discriminator 2
	ld	a5,-40(s0)
	lhu	a4,1882(a5)
	.loc 1 1406 67 discriminator 2
	lhu	a5,-448(s0)
	.loc 1 1406 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L443
	.loc 1 1406 81 discriminator 3
	li	a5,-1
	.loc 1 1406 81 is_stmt 0
	j	.L445
.L443:
.LBE78:
	.loc 1 1408 9 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-288
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1408 8 discriminator 1
	beq	a5,zero,.L444
	.loc 1 1408 50 discriminator 1
	li	a5,-1
	.loc 1 1408 50 is_stmt 0
	j	.L445
.L444:
	.loc 1 1411 5 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1412 25
	addi	a5,s0,-552
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1413 5
	addi	a4,s0,-552
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1414 12
	li	a5,0
.L445:
	.loc 1 1415 1
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
.LFE52:
	.size	fs_unlink, .-fs_unlink
	.align	1
	.type	write_data_inode, @function
write_data_inode:
.LFB53:
	.loc 1 1419 1
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
	.loc 1 1420 14
	lw	a5,-56(s0)
	sw	a5,-20(s0)
	.loc 1 1420 36
	sw	zero,-24(s0)
	.loc 1 1420 60
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 1421 11
	j	.L448
.L452:
.LBB79:
	.loc 1 1422 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 1422 50
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 1423 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 1423 49
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L449
	.loc 1 1423 76 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L449:
	.loc 1 1424 29
	lw	a4,-40(s0)
	lw	a5,-52(s0)
	mv	a2,a4
	ld	a1,-64(s0)
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 1425 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L450
	.loc 1 1425 31 discriminator 1
	li	a5,-1
	.loc 1 1425 31 is_stmt 0
	j	.L451
.L450:
	.loc 1 1426 9 is_stmt 1
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1427 9
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	ld	a1,-32(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1428 9
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1429 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 1429 31
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 1429 46
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L448:
.LBE79:
	.loc 1 1421 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L452
	.loc 1 1431 14
	ld	a5,-64(s0)
	lw	a4,-56(s0)
	sw	a4,8(a5)
	.loc 1 1431 34
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1431 32 discriminator 1
	ld	a5,-64(s0)
	sw	a4,24(a5)
	.loc 1 1431 44 discriminator 1
	lw	a5,-52(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1431 74 discriminator 2
	li	a5,0
.L451:
	.loc 1 1432 1
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
.LFE53:
	.size	write_data_inode, .-write_data_inode
	.align	1
	.globl	fs_symlink
	.type	fs_symlink, @function
fs_symlink:
.LFB54:
	.loc 1 1436 1
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
	.loc 1 1437 20
	addi	a5,s0,-160
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1438 9
	addi	a5,s0,-160
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1438 8 discriminator 1
	bne	a5,zero,.L454
	.loc 1 1438 39 discriminator 1
	li	a5,-1
	.loc 1 1438 39 is_stmt 0
	j	.L470
.L454:
	.loc 1 1439 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1439 8 discriminator 1
	beq	a5,zero,.L456
	.loc 1 1439 39 discriminator 1
	li	a5,-1
	.loc 1 1439 39 is_stmt 0
	j	.L470
.L456:
.LBB80:
	.loc 1 1441 51 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1441 43
	j	.L457
.L458:
	.loc 1 1441 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1441 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L457:
	.loc 1 1441 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L458
.LBE80:
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
	bne	a5,zero,.L459
	.loc 1 1442 61 discriminator 1
	li	a5,-1
	.loc 1 1442 61 is_stmt 0
	j	.L470
.L459:
	.loc 1 1443 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1443 8
	bne	a5,zero,.L460
	.loc 1 1443 33 discriminator 1
	li	a5,-1
	.loc 1 1443 33 is_stmt 0
	j	.L470
.L460:
	.loc 1 1445 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1446 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1446 8 discriminator 1
	bne	a5,zero,.L461
	.loc 1 1446 51 discriminator 1
	li	a5,-1
	.loc 1 1446 51 is_stmt 0
	j	.L470
.L461:
	.loc 1 1449 32 is_stmt 1
	sw	zero,-24(s0)
.LBB81:
	.loc 1 1450 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1450 5
	j	.L462
.L465:
	.loc 1 1450 43 discriminator 5
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1450 67 discriminator 5
	lhu	a5,-360(s0)
	.loc 1 1450 64 discriminator 5
	bne	a5,zero,.L463
	.loc 1 1450 82 discriminator 2
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1450 86
	j	.L464
.L463:
	.loc 1 1450 38 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L462:
	.loc 1 1450 28 discriminator 4
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1450 24 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L465
.L464:
.LBE81:
	.loc 1 1451 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L466
	.loc 1 1451 23 discriminator 1
	li	a5,-1
	.loc 1 1451 23 is_stmt 0
	j	.L470
.L466:
	.loc 1 1452 23 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1452 56 discriminator 1
	li	a5,3
	sh	a5,-448(s0)
	.loc 1 1452 76 discriminator 1
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1452 87 discriminator 1
	sw	zero,-440(s0)
	.loc 1 1452 100 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 1 1452 99 discriminator 2
	sw	a5,-424(s0)
	.loc 1 1452 121 discriminator 2
	lw	a5,-424(s0)
	.loc 1 1452 118 discriminator 2
	sw	a5,-420(s0)
	.loc 1 1452 129 discriminator 2
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1454 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1454 8 discriminator 1
	beq	a5,zero,.L467
	.loc 1 1454 53 discriminator 1
	li	a5,-1
	.loc 1 1454 53 is_stmt 0
	j	.L470
.L467:
	.loc 1 1456 21 is_stmt 1
	ld	a0,-696(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1456 14 discriminator 1
	sw	a5,-32(s0)
	.loc 1 1456 40 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,240
	bleu	a4,a5,.L468
	.loc 1 1456 58 discriminator 1
	li	a5,240
	sw	a5,-32(s0)
.L468:
	.loc 1 1457 23
	addi	a5,s0,-688
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1457 50 discriminator 1
	lw	a4,-32(s0)
	addi	a5,s0,-688
	mv	a2,a4
	ld	a1,-696(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1458 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1459 9
	lw	a3,-32(s0)
	addi	a2,s0,-688
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_data_inode
	mv	a5,a0
	.loc 1 1459 8 discriminator 1
	beq	a5,zero,.L469
	.loc 1 1459 61 discriminator 1
	li	a5,-1
	.loc 1 1459 61 is_stmt 0
	j	.L470
.L469:
	.loc 1 1460 12 is_stmt 1
	li	a5,0
.L470:
	.loc 1 1461 1
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
.LFE54:
	.size	fs_symlink, .-fs_symlink
	.align	1
	.globl	fs_rename
	.type	fs_rename, @function
fs_rename:
.LFB55:
	.loc 1 1465 1
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
	.loc 1 1467 5
	addi	a5,s0,-160
	ld	a2,-696(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1468 5
	addi	a5,s0,-288
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1470 9
	addi	a4,s0,-288
	addi	a5,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1470 8 discriminator 1
	bne	a5,zero,.L472
	.loc 1 1470 45 discriminator 1
	li	a5,0
	.loc 1 1470 45 is_stmt 0
	j	.L489
.L472:
	.loc 1 1471 9 is_stmt 1
	addi	a5,s0,-160
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1471 8 discriminator 1
	bne	a5,zero,.L474
	.loc 1 1471 42 discriminator 1
	li	a5,-1
	.loc 1 1471 42 is_stmt 0
	j	.L489
.L474:
	.loc 1 1473 21 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1474 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L475
	.loc 1 1474 27 discriminator 1
	li	a5,-1
	.loc 1 1474 27 is_stmt 0
	j	.L489
.L475:
	.loc 1 1475 9 is_stmt 1
	addi	a5,s0,-288
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1475 8 discriminator 1
	beq	a5,zero,.L476
	.loc 1 1475 42 discriminator 1
	li	a5,-1
	.loc 1 1475 42 is_stmt 0
	j	.L489
.L476:
.LBB82:
	.loc 1 1478 13 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1478 5
	j	.L477
.L478:
	.loc 1 1478 42 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-296(a5)
	.loc 1 1478 54 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-312(a5)
	.loc 1 1478 29 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L477:
	.loc 1 1478 18 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L478
.LBE82:
	.loc 1 1479 10
	addi	a3,s0,-312
	addi	a4,s0,-292
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1479 8 discriminator 1
	bne	a5,zero,.L479
	.loc 1 1479 61 discriminator 1
	li	a5,-1
	.loc 1 1479 61 is_stmt 0
	j	.L489
.L479:
	.loc 1 1480 10 is_stmt 1
	addi	a3,s0,-328
	addi	a4,s0,-296
	addi	a5,s0,-288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1480 8 discriminator 1
	bne	a5,zero,.L480
	.loc 1 1480 62 discriminator 1
	li	a5,-1
	.loc 1 1480 62 is_stmt 0
	j	.L489
.L480:
	.loc 1 1481 14 is_stmt 1
	lbu	a5,-312(s0)
	.loc 1 1481 8
	beq	a5,zero,.L481
	.loc 1 1481 34 discriminator 2
	lbu	a5,-328(s0)
	.loc 1 1481 26 discriminator 2
	bne	a5,zero,.L482
.L481:
	.loc 1 1481 54 discriminator 3
	li	a5,-1
	.loc 1 1481 54 is_stmt 0
	j	.L489
.L482:
	.loc 1 1483 24 is_stmt 1
	lw	a5,-296(s0)
	addi	a4,s0,-416
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1484 12
	lhu	a5,-416(s0)
	.loc 1 1484 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L483
	.loc 1 1484 35 discriminator 1
	li	a5,-1
	.loc 1 1484 35 is_stmt 0
	j	.L489
.L483:
	.loc 1 1486 24 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-504
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1487 10
	addi	a5,s0,-504
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1487 8 discriminator 1
	bne	a5,zero,.L484
	.loc 1 1487 51 discriminator 1
	li	a5,-1
	.loc 1 1487 51 is_stmt 0
	j	.L489
.L484:
	.loc 1 1488 10 is_stmt 1
	addi	a5,s0,-416
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1488 8 discriminator 1
	bne	a5,zero,.L485
	.loc 1 1488 51 discriminator 1
	li	a5,-1
	.loc 1 1488 51 is_stmt 0
	j	.L489
.L485:
	.loc 1 1491 26 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-592
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1492 27
	addi	a4,s0,-680
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1493 14
	lw	a5,-580(s0)
	.loc 1 1493 20
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1493 8
	beq	a5,zero,.L486
.LBB83:
	.loc 1 1494 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1494 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1495 17
	ld	a5,-32(s0)
	lhu	a5,1882(a5)
	.loc 1 1495 12
	beq	a5,zero,.L486
	.loc 1 1495 33 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1882(a5)
	.loc 1 1495 48 discriminator 1
	lhu	a5,-664(s0)
	.loc 1 1495 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L486
	.loc 1 1495 58 discriminator 2
	ld	a5,-32(s0)
	lhu	a4,1882(a5)
	.loc 1 1495 72 discriminator 2
	lhu	a5,-576(s0)
	.loc 1 1495 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L486
	.loc 1 1495 86 discriminator 3
	li	a5,-1
	.loc 1 1495 86 is_stmt 0
	j	.L489
.L486:
.LBE83:
	.loc 1 1497 9 is_stmt 1
	lw	a5,-296(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-328
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1497 8 discriminator 1
	beq	a5,zero,.L487
	.loc 1 1497 50 discriminator 1
	li	a5,-1
	.loc 1 1497 50 is_stmt 0
	j	.L489
.L487:
	.loc 1 1498 9 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1498 8 discriminator 1
	beq	a5,zero,.L488
	.loc 1 1498 47 discriminator 1
	li	a5,-1
	.loc 1 1498 47 is_stmt 0
	j	.L489
.L488:
	.loc 1 1499 12 is_stmt 1
	li	a5,0
.L489:
	.loc 1 1500 1
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
.LFE55:
	.size	fs_rename, .-fs_rename
	.align	1
	.globl	fs_link
	.type	fs_link, @function
fs_link:
.LFB56:
	.loc 1 1504 1
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
	.loc 1 1506 5
	addi	a5,s0,-152
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1507 5
	addi	a5,s0,-280
	ld	a2,-496(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1509 9
	addi	a5,s0,-280
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1509 8 discriminator 1
	beq	a5,zero,.L491
	.loc 1 1509 37 discriminator 2
	addi	a5,s0,-152
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1509 34 discriminator 1
	bne	a5,zero,.L492
.L491:
	.loc 1 1509 70 discriminator 3
	li	a5,-1
	.loc 1 1509 70 is_stmt 0
	j	.L503
.L492:
	.loc 1 1510 21 is_stmt 1
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1511 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L494
	.loc 1 1511 27 discriminator 1
	li	a5,-1
	.loc 1 1511 27 is_stmt 0
	j	.L503
.L494:
	.loc 1 1512 9 is_stmt 1
	addi	a5,s0,-280
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1512 8 discriminator 1
	beq	a5,zero,.L495
	.loc 1 1512 42 discriminator 1
	li	a5,-1
	.loc 1 1512 42 is_stmt 0
	j	.L503
.L495:
	.loc 1 1514 23 is_stmt 1
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1515 11
	lhu	a5,-368(s0)
	.loc 1 1515 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L496
	.loc 1 1515 35 discriminator 1
	li	a5,-1
	.loc 1 1515 35 is_stmt 0
	j	.L503
.L496:
.LBB84:
	.loc 1 1517 52 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1517 43
	j	.L497
.L498:
	.loc 1 1517 79 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-376(a5)
	.loc 1 1517 68 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L497:
	.loc 1 1517 57 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L498
.LBE84:
	.loc 1 1518 10
	addi	a3,s0,-392
	addi	a4,s0,-372
	addi	a5,s0,-280
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1518 8 discriminator 1
	bne	a5,zero,.L499
	.loc 1 1518 64 discriminator 1
	li	a5,-1
	.loc 1 1518 64 is_stmt 0
	j	.L503
.L499:
	.loc 1 1519 13 is_stmt 1
	lbu	a5,-392(s0)
	.loc 1 1519 8
	bne	a5,zero,.L500
	.loc 1 1519 33 discriminator 1
	li	a5,-1
	.loc 1 1519 33 is_stmt 0
	j	.L503
.L500:
	.loc 1 1521 24 is_stmt 1
	lw	a5,-372(s0)
	addi	a4,s0,-480
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1522 10
	addi	a5,s0,-480
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1522 8 discriminator 1
	bne	a5,zero,.L501
	.loc 1 1522 51 discriminator 1
	li	a5,-1
	.loc 1 1522 51 is_stmt 0
	j	.L503
.L501:
	.loc 1 1524 9 is_stmt 1
	lw	a5,-372(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-392
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1524 8 discriminator 1
	beq	a5,zero,.L502
	.loc 1 1524 53 discriminator 1
	li	a5,-1
	.loc 1 1524 53 is_stmt 0
	j	.L503
.L502:
	.loc 1 1526 7 is_stmt 1
	lhu	a5,-362(s0)
	.loc 1 1526 13
	addiw	a5,a5,1
	slli	a5,a5,48
	srli	a5,a5,48
	sh	a5,-362(s0)
	.loc 1 1527 16
	call	fs_now
	mv	a5,a0
	.loc 1 1527 14 discriminator 1
	sw	a5,-340(s0)
	.loc 1 1528 5
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1529 12
	li	a5,0
.L503:
	.loc 1 1530 1
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
.LFE56:
	.size	fs_link, .-fs_link
	.align	1
	.globl	fs_stat
	.type	fs_stat, @function
fs_stat:
.LFB57:
	.loc 1 1533 1
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
	.loc 1 1534 8
	ld	a5,-256(s0)
	bne	a5,zero,.L505
	.loc 1 1534 21 discriminator 1
	li	a5,-1
	.loc 1 1534 21 is_stmt 0
	j	.L508
.L505:
	.loc 1 1535 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1536 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1537 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L507
	.loc 1 1537 23 discriminator 1
	li	a5,-1
	.loc 1 1537 23 is_stmt 0
	j	.L508
.L507:
	.loc 1 1538 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1539 18
	lhu	a4,-240(s0)
	.loc 1 1539 14
	ld	a5,-256(s0)
	sh	a4,0(a5)
	.loc 1 1539 39
	lhu	a4,-234(s0)
	.loc 1 1539 35
	ld	a5,-256(s0)
	sh	a4,2(a5)
	.loc 1 1539 60
	lw	a4,-232(s0)
	.loc 1 1539 56
	ld	a5,-256(s0)
	sw	a4,4(a5)
	.loc 1 1539 76
	ld	a5,-256(s0)
	lw	a4,-20(s0)
	sw	a4,8(a5)
	.loc 1 1540 18
	lw	a4,-228(s0)
	.loc 1 1540 14
	ld	a5,-256(s0)
	sw	a4,12(a5)
	.loc 1 1540 37
	lhu	a4,-224(s0)
	.loc 1 1540 33
	ld	a5,-256(s0)
	sh	a4,16(a5)
	.loc 1 1540 55
	lhu	a4,-222(s0)
	.loc 1 1540 51
	ld	a5,-256(s0)
	sh	a4,18(a5)
	.loc 1 1541 19
	lw	a4,-220(s0)
	.loc 1 1541 15
	ld	a5,-256(s0)
	sw	a4,20(a5)
	.loc 1 1541 41
	lw	a4,-216(s0)
	.loc 1 1541 37
	ld	a5,-256(s0)
	sw	a4,24(a5)
	.loc 1 1541 63
	lw	a4,-212(s0)
	.loc 1 1541 59
	ld	a5,-256(s0)
	sw	a4,28(a5)
	.loc 1 1542 12
	li	a5,0
.L508:
	.loc 1 1543 1
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
.LFE57:
	.size	fs_stat, .-fs_stat
	.align	1
	.globl	fs_readlink
	.type	fs_readlink, @function
fs_readlink:
.LFB58:
	.loc 1 1546 1
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
	.loc 1 1547 8
	ld	a5,-384(s0)
	beq	a5,zero,.L510
	.loc 1 1547 14 discriminator 2
	lw	a5,-388(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L511
.L510:
	.loc 1 1547 36 discriminator 3
	li	a5,-1
	.loc 1 1547 36 is_stmt 0
	j	.L522
.L511:
	.loc 1 1548 20 is_stmt 1
	addi	a5,s0,-160
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB85:
	.loc 1 1549 51
	sw	zero,-20(s0)
	.loc 1 1549 43
	j	.L513
.L514:
	.loc 1 1549 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1549 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L513:
	.loc 1 1549 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L514
.LBE85:
	.loc 1 1550 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1550 8 discriminator 1
	bne	a5,zero,.L515
	.loc 1 1550 61 discriminator 1
	li	a5,-1
	.loc 1 1550 61 is_stmt 0
	j	.L522
.L515:
	.loc 1 1551 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1551 57 discriminator 1
	lhu	a5,-272(s0)
	.loc 1 1551 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L516
	.loc 1 1551 80 discriminator 1
	li	a5,-1
	.loc 1 1551 80 is_stmt 0
	j	.L522
.L516:
	.loc 1 1552 21 is_stmt 1
	addi	a4,s0,-184
	addi	a5,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 1552 48 discriminator 1
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L517
	.loc 1 1552 63 discriminator 1
	li	a5,-1
	.loc 1 1552 63 is_stmt 0
	j	.L522
.L517:
	.loc 1 1553 23 is_stmt 1
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1554 11
	lhu	a5,-360(s0)
	.loc 1 1554 8
	sext.w	a4,a5
	li	a5,3
	beq	a4,a5,.L518
	.loc 1 1554 38 discriminator 1
	li	a5,-1
	.loc 1 1554 38 is_stmt 0
	j	.L522
.L518:
	.loc 1 1555 15 is_stmt 1
	lw	a5,-352(s0)
	.loc 1 1555 9
	sw	a5,-24(s0)
	.loc 1 1555 25
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-388(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	ble	a4,a5,.L519
	.loc 1 1555 39 discriminator 1
	lw	a5,-388(s0)
	sw	a5,-24(s0)
.L519:
	.loc 1 1555 51 discriminator 3
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L520
	.loc 1 1555 61 discriminator 4
	sw	zero,-24(s0)
.L520:
	.loc 1 1556 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	ble	a5,zero,.L521
	.loc 1 1556 16 discriminator 1
	lw	a4,-24(s0)
	addi	a5,s0,-360
	mv	a3,a4
	ld	a2,-384(s0)
	li	a1,0
	mv	a0,a5
	call	read_data
.L521:
	.loc 1 1557 12
	lw	a5,-24(s0)
.L522:
	.loc 1 1558 1
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
.LFE58:
	.size	fs_readlink, .-fs_readlink
	.align	1
	.globl	fs_lstat
	.type	fs_lstat, @function
fs_lstat:
.LFB59:
	.loc 1 1561 1
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
	.loc 1 1562 8
	ld	a5,-368(s0)
	bne	a5,zero,.L524
	.loc 1 1562 21 discriminator 1
	li	a5,-1
	.loc 1 1562 21 is_stmt 0
	j	.L531
.L524:
	.loc 1 1563 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-360(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB86:
	.loc 1 1564 51
	sw	zero,-20(s0)
	.loc 1 1564 43
	j	.L526
.L527:
	.loc 1 1564 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-160(a5)
	.loc 1 1564 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L526:
	.loc 1 1564 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L527
.LBE86:
	.loc 1 1565 10
	addi	a3,s0,-176
	addi	a4,s0,-156
	addi	a5,s0,-152
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1565 8 discriminator 1
	bne	a5,zero,.L528
	.loc 1 1565 61 discriminator 1
	li	a5,-1
	.loc 1 1565 61 is_stmt 0
	j	.L531
.L528:
	.loc 1 1566 24 is_stmt 1
	lw	a5,-156(s0)
	addi	a4,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1566 57 discriminator 1
	lhu	a5,-264(s0)
	.loc 1 1566 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L529
	.loc 1 1566 80 discriminator 1
	li	a5,-1
	.loc 1 1566 80 is_stmt 0
	j	.L531
.L529:
	.loc 1 1567 21 is_stmt 1
	addi	a4,s0,-176
	addi	a5,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1567 48 discriminator 1
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L530
	.loc 1 1567 63 discriminator 1
	li	a5,-1
	.loc 1 1567 63 is_stmt 0
	j	.L531
.L530:
	.loc 1 1568 23 is_stmt 1
	addi	a4,s0,-352
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1569 18
	lhu	a4,-352(s0)
	.loc 1 1569 14
	ld	a5,-368(s0)
	sh	a4,0(a5)
	.loc 1 1569 39
	lhu	a4,-346(s0)
	.loc 1 1569 35
	ld	a5,-368(s0)
	sh	a4,2(a5)
	.loc 1 1569 60
	lw	a4,-344(s0)
	.loc 1 1569 56
	ld	a5,-368(s0)
	sw	a4,4(a5)
	.loc 1 1569 76
	ld	a5,-368(s0)
	lw	a4,-24(s0)
	sw	a4,8(a5)
	.loc 1 1570 18
	lw	a4,-340(s0)
	.loc 1 1570 14
	ld	a5,-368(s0)
	sw	a4,12(a5)
	.loc 1 1570 37
	lhu	a4,-336(s0)
	.loc 1 1570 33
	ld	a5,-368(s0)
	sh	a4,16(a5)
	.loc 1 1570 55
	lhu	a4,-334(s0)
	.loc 1 1570 51
	ld	a5,-368(s0)
	sh	a4,18(a5)
	.loc 1 1571 19
	lw	a4,-332(s0)
	.loc 1 1571 15
	ld	a5,-368(s0)
	sw	a4,20(a5)
	.loc 1 1571 41
	lw	a4,-328(s0)
	.loc 1 1571 37
	ld	a5,-368(s0)
	sw	a4,24(a5)
	.loc 1 1571 63
	lw	a4,-324(s0)
	.loc 1 1571 59
	ld	a5,-368(s0)
	sw	a4,28(a5)
	.loc 1 1572 12
	li	a5,0
.L531:
	.loc 1 1573 1
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
.LFE59:
	.size	fs_lstat, .-fs_lstat
	.align	1
	.globl	fs_chmod
	.type	fs_chmod, @function
fs_chmod:
.LFB60:
	.loc 1 1576 1
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
	.loc 1 1577 20
	addi	a5,s0,-160
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1578 21
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1579 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L533
	.loc 1 1579 23 discriminator 1
	li	a5,-1
	.loc 1 1579 23 is_stmt 0
	j	.L536
.L533:
	.loc 1 1580 23 is_stmt 1
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1582 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1582 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1583 12
	ld	a5,-32(s0)
	lhu	a5,1882(a5)
	.loc 1 1583 8
	beq	a5,zero,.L535
	.loc 1 1583 27 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1882(a5)
	.loc 1 1583 38 discriminator 1
	lhu	a5,-232(s0)
	.loc 1 1583 9 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L535
	.loc 1 1583 52 discriminator 2
	li	a5,-1
	.loc 1 1583 52 is_stmt 0
	j	.L536
.L535:
	.loc 1 1584 20 is_stmt 1
	lw	a5,-268(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1584 13
	sw	a5,-236(s0)
	.loc 1 1584 40
	call	fs_now
	mv	a5,a0
	.loc 1 1584 38 discriminator 1
	sw	a5,-220(s0)
	.loc 1 1585 5
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1586 12
	li	a5,0
.L536:
	.loc 1 1587 1
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
.LFE60:
	.size	fs_chmod, .-fs_chmod
	.align	1
	.globl	fs_chown
	.type	fs_chown, @function
fs_chown:
.LFB61:
	.loc 1 1590 1
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
	.loc 1 1591 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1592 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1593 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L538
	.loc 1 1593 23 discriminator 1
	li	a5,-1
	.loc 1 1593 23 is_stmt 0
	j	.L541
.L538:
	.loc 1 1594 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1596 14
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1596 27
	lhu	a5,1882(a5)
	.loc 1 1596 8
	beq	a5,zero,.L540
	.loc 1 1596 46 discriminator 1
	li	a5,-1
	.loc 1 1596 46 is_stmt 0
	j	.L541
.L540:
	.loc 1 1597 12 is_stmt 1
	lhu	a5,-250(s0)
	sh	a5,-224(s0)
	.loc 1 1597 26
	lhu	a5,-252(s0)
	sh	a5,-222(s0)
	.loc 1 1597 44
	call	fs_now
	mv	a5,a0
	.loc 1 1597 42 discriminator 1
	sw	a5,-212(s0)
	.loc 1 1598 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1599 12
	li	a5,0
.L541:
	.loc 1 1600 1
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
.LFE61:
	.size	fs_chown, .-fs_chown
	.align	1
	.globl	fs_utimes
	.type	fs_utimes, @function
fs_utimes:
.LFB62:
	.loc 1 1603 1
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
	.loc 1 1604 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1605 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1606 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L543
	.loc 1 1606 23 discriminator 1
	li	a5,-1
	.loc 1 1606 23 is_stmt 0
	j	.L549
.L543:
	.loc 1 1607 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1608 20
	call	fs_now
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1609 45
	lw	a5,-252(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L545
	.loc 1 1609 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L546
.L545:
	.loc 1 1609 45 discriminator 2
	lw	a5,-252(s0)
.L546:
	.loc 1 1609 14 is_stmt 1 discriminator 4
	sw	a5,-220(s0)
	.loc 1 1610 45
	lw	a5,-256(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L547
	.loc 1 1610 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L548
.L547:
	.loc 1 1610 45 discriminator 2
	lw	a5,-256(s0)
.L548:
	.loc 1 1610 14 is_stmt 1 discriminator 4
	sw	a5,-216(s0)
	.loc 1 1611 14
	lw	a5,-24(s0)
	sw	a5,-212(s0)
	.loc 1 1612 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1613 12
	li	a5,0
.L549:
	.loc 1 1614 1
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
.LFE62:
	.size	fs_utimes, .-fs_utimes
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB63:
	.loc 1 1615 31
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
	.loc 1 1617 12
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 1618 1
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
.LFE63:
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
.LFB64:
	.loc 1 1621 53
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
	.loc 1 1622 32
	call	get_current_file_table
	sd	a0,-72(s0)
	.loc 1 1624 8
	ld	a5,-456(s0)
	beq	a5,zero,.L553
	.loc 1 1624 22 discriminator 1
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1624 15 discriminator 1
	beq	a5,zero,.L553
	.loc 1 1624 42 discriminator 2
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1624 34 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L554
	.loc 1 1624 58 discriminator 3
	ld	a5,-456(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1624 51 discriminator 3
	bne	a5,zero,.L554
.L553:
.LBB87:
	.loc 1 1625 31
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1625 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1626 53
	ld	a5,-80(s0)
	addi	a4,a5,1752
	.loc 1 1626 9
	addi	a5,s0,-216
	mv	a2,a4
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBE87:
	.loc 1 1624 70
	j	.L555
.L554:
	.loc 1 1628 9
	addi	a5,s0,-216
	ld	a2,-456(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.L555:
	.loc 1 1632 9
	addi	a5,s0,-216
	lla	a1,.LC18
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1632 8 discriminator 1
	bne	a5,zero,.L556
.LBB88:
	.loc 1 1633 18
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1633 9
	j	.L557
.L560:
	.loc 1 1634 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1634 16
	bne	a5,zero,.L558
	.loc 1 1635 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1635 33
	call	new_file_table
	mv	a5,a0
	.loc 1 1635 31 discriminator 1
	sd	a5,0(s1)
	.loc 1 1636 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1636 37
	li	a4,5
	sw	a4,0(a5)
	.loc 1 1637 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1637 37
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1638 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1638 37
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1639 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1639 36
	sw	zero,96(a5)
	.loc 1 1640 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1640 42
	sw	zero,116(a5)
	.loc 1 1641 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1641 43
	sw	zero,120(a5)
	.loc 1 1642 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1642 39
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1643 24
	lw	a5,-36(s0)
	j	.L590
.L558:
	.loc 1 1633 46 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L557:
	.loc 1 1633 27 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L560
.LBE88:
	.loc 1 1646 16
	li	a5,-1
	j	.L590
.L556:
	.loc 1 1649 21
	addi	a5,s0,-216
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-40(s0)
	.loc 1 1651 9
	sw	zero,-44(s0)
	.loc 1 1653 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L561
	.loc 1 1655 19
	lw	a5,-460(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1655 12
	beq	a5,zero,.L562
.LBB89:
.LBB90:
	.loc 1 1659 22
	sw	zero,-48(s0)
	.loc 1 1659 13
	j	.L563
.L564:
	.loc 1 1659 49 discriminator 3
	lw	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-296(a5)
	.loc 1 1659 38 discriminator 3
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sw	a5,-48(s0)
.L563:
	.loc 1 1659 27 discriminator 1
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L564
.LBE90:
	.loc 1 1660 18
	addi	a3,s0,-328
	addi	a4,s0,-308
	addi	a5,s0,-216
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1660 16 discriminator 1
	bne	a5,zero,.L565
	.loc 1 1661 24
	li	a5,-1
	j	.L590
.L565:
	.loc 1 1663 33
	call	alloc_inode_T_FILE
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1664 16
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L567
	.loc 1 1664 39 discriminator 1
	li	a5,-1
	.loc 1 1664 39 is_stmt 0
	j	.L590
.L567:
	.loc 1 1665 17 is_stmt 1
	lw	a5,-308(s0)
	lw	a3,-84(s0)
	addi	a4,s0,-328
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1665 16 discriminator 1
	beq	a5,zero,.L568
	.loc 1 1665 65 discriminator 1
	li	a5,-1
	.loc 1 1665 65 is_stmt 0
	j	.L590
.L568:
	.loc 1 1666 18 is_stmt 1
	lw	a5,-84(s0)
	sw	a5,-40(s0)
	.loc 1 1667 13
	addi	a4,s0,-304
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1671 38
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1671 28
	lhu	a5,1880(a5)
	sh	a5,-86(s0)
.LBB91:
	.loc 1 1673 59
	sw	zero,-52(s0)
	.loc 1 1673 51
	j	.L569
.L570:
	.loc 1 1673 91 discriminator 3
	lw	a5,-52(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-320(a5)
	.loc 1 1673 78 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L569:
	.loc 1 1673 66 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L570
.LBE91:
	.loc 1 1674 33
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1674 22
	lhu	a5,1884(a5)
	sh	a5,-54(s0)
	.loc 1 1675 17
	addi	a3,s0,-352
	addi	a4,s0,-332
	addi	a5,s0,-216
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1675 16 discriminator 1
	beq	a5,zero,.L571
.LBB92:
	.loc 1 1676 40
	lw	a5,-332(s0)
	addi	a4,s0,-440
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1677 28
	lw	a5,-428(s0)
	.loc 1 1677 34
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1677 20
	beq	a5,zero,.L571
	.loc 1 1677 49 discriminator 1
	lhu	a5,-422(s0)
	sh	a5,-54(s0)
.L571:
.LBE92:
	.loc 1 1679 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1679 40
	lhu	a5,1882(a5)
	.loc 1 1679 20
	sh	a5,-288(s0)
	.loc 1 1680 20
	lhu	a5,-54(s0)
	sh	a5,-286(s0)
	.loc 1 1681 30
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 1 1681 54
	beq	a5,zero,.L573
	.loc 1 1681 54 is_stmt 0 discriminator 1
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L574
.L573:
	.loc 1 1681 54 discriminator 2
	li	a5,420
.L574:
	.loc 1 1681 64 is_stmt 1 discriminator 4
	lhu	a4,-86(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1681 62 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1681 21 discriminator 4
	sw	a5,-292(s0)
	.loc 1 1682 46
	call	fs_now
	mv	a5,a0
	.loc 1 1682 44 discriminator 1
	sw	a5,-276(s0)
	.loc 1 1682 37 discriminator 1
	lw	a5,-276(s0)
	.loc 1 1682 33 discriminator 1
	sw	a5,-280(s0)
	.loc 1 1682 26 discriminator 1
	lw	a5,-280(s0)
	.loc 1 1682 22 discriminator 1
	sw	a5,-284(s0)
	.loc 1 1683 13
	addi	a4,s0,-304
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1684 25
	li	a5,1
	sw	a5,-44(s0)
.LBE89:
	j	.L575
.L562:
	.loc 1 1686 20
	li	a5,-1
	j	.L590
.L561:
	.loc 1 1689 9
	addi	a4,s0,-304
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L575:
	.loc 1 1692 11
	lhu	a5,-304(s0)
	.loc 1 1692 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L576
	.loc 1 1692 32 discriminator 1
	lhu	a5,-304(s0)
	.loc 1 1692 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L576
	.loc 1 1692 55 discriminator 2
	li	a5,-1
	.loc 1 1692 55 is_stmt 0
	j	.L590
.L576:
	.loc 1 1695 11 is_stmt 1
	lhu	a5,-304(s0)
	.loc 1 1695 8
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L577
.LBB93:
	.loc 1 1696 13
	sw	zero,-60(s0)
	.loc 1 1697 12
	lw	a5,-460(s0)
	sext.w	a5,a5
	bne	a5,zero,.L578
	.loc 1 1697 37 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,4
	sw	a5,-60(s0)
.L578:
	.loc 1 1698 19
	lw	a5,-460(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1698 12
	beq	a5,zero,.L579
	.loc 1 1698 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,2
	sw	a5,-60(s0)
.L579:
	.loc 1 1699 19
	lw	a5,-460(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 1699 12
	beq	a5,zero,.L580
	.loc 1 1699 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,6
	sw	a5,-60(s0)
.L580:
	.loc 1 1702 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L581
	.loc 1 1703 18
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L582
	.loc 1 1703 18 is_stmt 0 discriminator 1
	lw	a5,-60(s0)
	j	.L583
.L582:
	.loc 1 1703 18 discriminator 2
	li	a5,4
.L583:
	.loc 1 1703 18 discriminator 4
	addi	a4,s0,-304
	mv	a1,a5
	mv	a0,a4
	call	check_perm
	mv	a5,a0
	.loc 1 1703 16 is_stmt 1 discriminator 1
	bne	a5,zero,.L581
	.loc 1 1703 64 discriminator 5
	li	a5,-1
	.loc 1 1703 64 is_stmt 0
	j	.L590
.L577:
.LBE93:
	.loc 1 1705 18 is_stmt 1
	lhu	a5,-304(s0)
	.loc 1 1705 15
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L581
	.loc 1 1706 14
	addi	a5,s0,-304
	li	a1,5
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1706 12 discriminator 1
	bne	a5,zero,.L581
	.loc 1 1706 53 discriminator 1
	li	a5,-1
	.loc 1 1706 53 is_stmt 0
	j	.L590
.L581:
.LBB94:
	.loc 1 1709 14 is_stmt 1
	li	a5,3
	sw	a5,-64(s0)
	.loc 1 1709 5
	j	.L584
.L589:
	.loc 1 1710 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1710 12
	bne	a5,zero,.L585
	.loc 1 1711 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1711 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1711 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1713 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1713 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 1714 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1714 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1715 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1715 34
	lw	a4,-40(s0)
	sw	a4,4(a5)
	.loc 1 1716 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1716 34
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
	.loc 1 1717 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1717 34
	sw	zero,96(a5)
	.loc 1 1718 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1718 40
	sw	zero,116(a5)
	.loc 1 1719 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1719 41
	sw	zero,120(a5)
	.loc 1 1720 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1720 35
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1723 24
	lw	a5,-460(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1723 16
	beq	a5,zero,.L586
	.loc 1 1723 48 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1723 56 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1723 35 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L586
	.loc 1 1724 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1724 41
	sw	zero,16(a5)
	.loc 1 1725 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	s1,0(a5)
	.loc 1 1725 44
	call	fs_now
	mv	a5,a0
	.loc 1 1725 42 discriminator 1
	sw	a5,32(s1)
	.loc 1 1726 46
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1726 35
	addi	a4,a5,8
	.loc 1 1726 17
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1727 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1727 36
	sw	zero,96(a5)
.L586:
	.loc 1 1730 24
	lw	a5,-460(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1730 16
	beq	a5,zero,.L587
	.loc 1 1730 49 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1730 57 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1730 36 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L587
	.loc 1 1731 48
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 1731 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a3,-72(s0)
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 1 1731 56
	lw	a4,16(a4)
	.loc 1 1731 36
	sw	a4,96(a5)
.L587:
	.loc 1 1734 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	beq	a5,zero,.L588
	.loc 1 1735 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1735 36
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
.L588:
	.loc 1 1737 20
	lw	a5,-64(s0)
	j	.L590
.L585:
	.loc 1 1709 42 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L584:
	.loc 1 1709 23 discriminator 1
	lw	a5,-64(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L589
.LBE94:
	.loc 1 1740 12
	li	a5,-1
.L590:
	.loc 1 1741 1
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
.LFE64:
	.size	fs_open2, .-fs_open2
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB65:
	.loc 1 1745 50
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
	.loc 1 1746 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1748 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1748 7
	bne	a5,zero,.L592
	.loc 1 1749 16
	li	a5,-1
	j	.L593
.L592:
	.loc 1 1752 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1753 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L594
	.loc 1 1753 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L595
.L594:
	.loc 1 1754 16
	li	a5,-1
	j	.L593
.L595:
	.loc 1 1756 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1756 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1757 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 1757 41
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1757 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 1758 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L596
	.loc 1 1758 32 discriminator 1
	li	a5,0
	.loc 1 1758 32 is_stmt 0
	j	.L593
.L596:
	.loc 1 1760 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L597
	mv	a5,a4
.L597:
	.loc 1 1760 14
	sw	a5,-48(s0)
	.loc 1 1761 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,96(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 1762 6
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1762 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 1764 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1764 18 discriminator 1
	ld	a5,-40(s0)
	sw	a4,28(a5)
	.loc 1 1765 5
	ld	a5,-40(s0)
	lw	a4,4(a5)
	.loc 1 1765 26
	ld	a5,-40(s0)
	addi	a5,a5,8
	.loc 1 1765 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1766 12
	lw	a5,-48(s0)
.L593:
	.loc 1 1767 1
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
.LFE65:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_write
	.type	fs_write, @function
fs_write:
.LFB66:
	.loc 1 1771 57
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
	.loc 1 1772 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1774 8
	lw	a5,-596(s0)
	sext.w	a5,a5
	blt	a5,zero,.L599
	.loc 1 1774 16 discriminator 2
	lw	a5,-596(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L600
.L599:
	.loc 1 1774 48 discriminator 3
	li	a5,-1
	.loc 1 1774 48 is_stmt 0
	j	.L601
.L600:
	.loc 1 1775 19 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1775 8
	bne	a5,zero,.L602
	.loc 1 1775 40 discriminator 1
	li	a5,-1
	.loc 1 1775 40 is_stmt 0
	j	.L601
.L602:
	.loc 1 1777 32 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1777 18
	ld	a5,0(a5)
	sd	a5,-56(s0)
	.loc 1 1778 10
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 1778 8
	li	a5,3
	beq	a4,a5,.L603
	.loc 1 1778 36 discriminator 1
	li	a5,-1
	.loc 1 1778 36 is_stmt 0
	j	.L601
.L603:
	.loc 1 1779 10 is_stmt 1
	ld	a5,-56(s0)
	addi	a5,a5,8
	li	a1,2
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1779 8 discriminator 1
	bne	a5,zero,.L604
	.loc 1 1779 47 discriminator 1
	li	a5,-1
	.loc 1 1779 47 is_stmt 0
	j	.L601
.L604:
	.loc 1 1782 14 is_stmt 1
	ld	a5,-616(s0)
	sw	a5,-60(s0)
	.loc 1 1784 20
	ld	a5,-608(s0)
	sd	a5,-24(s0)
	.loc 1 1785 14
	lw	a5,-60(s0)
	sw	a5,-28(s0)
	.loc 1 1787 23
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1787 32
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1787 58
	beq	a5,zero,.L605
	.loc 1 1787 58 is_stmt 0 discriminator 1
	ld	a5,-56(s0)
	lw	a5,16(a5)
	j	.L606
.L605:
	.loc 1 1787 58 discriminator 2
	ld	a5,-56(s0)
	lw	a5,96(a5)
.L606:
	.loc 1 1787 14 is_stmt 1 discriminator 4
	sw	a5,-32(s0)
	.loc 1 1788 10
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1788 19
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1788 8
	beq	a5,zero,.L607
	.loc 1 1789 16
	ld	a5,-56(s0)
	lw	a4,-32(s0)
	sw	a4,96(a5)
.L607:
	.loc 1 1791 14
	sw	zero,-36(s0)
	.loc 1 1793 11
	j	.L608
.L612:
.LBB95:
	.loc 1 1794 18
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sw	a5,-64(s0)
	.loc 1 1795 18
	lw	a5,-32(s0)
	andi	a5,a5,511
	sw	a5,-68(s0)
	.loc 1 1796 18
	li	a5,512
	lw	a4,-68(s0)
	subw	a5,a5,a4
	sw	a5,-40(s0)
	.loc 1 1797 12
	lw	a5,-40(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L609
	.loc 1 1797 39 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-40(s0)
.L609:
	.loc 1 1799 29
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
	.loc 1 1800 12
	lw	a5,-72(s0)
	sext.w	a5,a5
	beq	a5,zero,.L614
	.loc 1 1804 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1805 9
	lwu	a5,-68(s0)
	addi	a4,s0,-592
	add	a5,a4,a5
	lw	a4,-40(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1806 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1808 17
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 1809 17
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 1810 17
	lwu	a5,-40(s0)
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 1811 17
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-36(s0)
.L608:
.LBE95:
	.loc 1 1793 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L612
	j	.L611
.L614:
.LBB96:
	.loc 1 1800 28
	nop
.L611:
.LBE96:
	.loc 1 1814 6
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 1 1814 12
	lw	a4,-36(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,96(a5)
	.loc 1 1816 14
	ld	a5,-56(s0)
	lw	a5,96(a5)
	sw	a5,-76(s0)
	.loc 1 1817 25
	ld	a5,-56(s0)
	lw	a5,16(a5)
	.loc 1 1817 8
	lw	a4,-76(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L613
	.loc 1 1818 21
	ld	a5,-56(s0)
	lw	a4,-76(s0)
	sw	a4,16(a5)
.L613:
	.loc 1 1820 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1820 18 discriminator 1
	ld	a5,-56(s0)
	sw	a4,32(a5)
	.loc 1 1821 5
	ld	a5,-56(s0)
	lw	a4,4(a5)
	.loc 1 1821 26
	ld	a5,-56(s0)
	addi	a5,a5,8
	.loc 1 1821 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1822 12
	lw	a5,-36(s0)
.L601:
	.loc 1 1823 1
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
.LFE66:
	.size	fs_write, .-fs_write
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB67:
	.loc 1 1825 25
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
	.loc 1 1826 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1828 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1828 7
	bne	a5,zero,.L616
	.loc 1 1829 16
	li	a5,-1
	j	.L617
.L616:
	.loc 1 1832 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1833 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L618
	.loc 1 1833 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L618
	.loc 1 1833 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1833 61 discriminator 2
	lw	a5,100(a5)
	.loc 1 1833 42 discriminator 2
	bne	a5,zero,.L619
.L618:
	.loc 1 1834 16
	li	a5,-1
	j	.L617
.L619:
	.loc 1 1836 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1836 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1837 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L617:
	.loc 1 1838 1
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
.LFE67:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB68:
	.loc 1 1843 36
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
	.loc 1 1844 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 1845 8
	ld	a5,-56(s0)
	blt	a5,zero,.L621
	.loc 1 1845 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,15
	ble	a4,a5,.L622
.L621:
	.loc 1 1845 48 discriminator 3
	li	a5,-1
	.loc 1 1845 48 is_stmt 0
	j	.L623
.L622:
	.loc 1 1846 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1846 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1847 8
	ld	a5,-40(s0)
	bne	a5,zero,.L624
	.loc 1 1847 20 discriminator 1
	li	a5,-1
	.loc 1 1847 20 is_stmt 0
	j	.L623
.L624:
	.loc 1 1850 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1850 12
	sd	zero,0(a5)
	.loc 1 1853 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L625
	.loc 1 1853 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L625:
	.loc 1 1856 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1856 8
	ble	a5,zero,.L626
	.loc 1 1856 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1856 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,100(a5)
.L626:
	.loc 1 1859 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1859 8
	ble	a5,zero,.L627
	.loc 1 1859 29 discriminator 1
	li	a5,0
	.loc 1 1859 29 is_stmt 0
	j	.L623
.L627:
	.loc 1 1862 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,104(a5)
	sd	a5,-48(s0)
	.loc 1 1863 8
	ld	a5,-48(s0)
	beq	a5,zero,.L628
	.loc 1 1864 14
	ld	a5,-40(s0)
	lw	a5,116(a5)
	.loc 1 1864 12
	beq	a5,zero,.L629
	.loc 1 1864 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1864 27 discriminator 1
	ble	a5,zero,.L629
	.loc 1 1864 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1864 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1864 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 1864 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1864 51 discriminator 2
	bne	a5,zero,.L629
	.loc 1 1864 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L629:
	.loc 1 1865 14
	ld	a5,-40(s0)
	lw	a5,120(a5)
	.loc 1 1865 12
	beq	a5,zero,.L630
	.loc 1 1865 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1865 27 discriminator 1
	ble	a5,zero,.L630
	.loc 1 1865 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1865 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1865 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 1865 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1865 51 discriminator 2
	bne	a5,zero,.L630
	.loc 1 1865 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L630:
	.loc 1 1866 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1866 12
	ble	a5,zero,.L631
	.loc 1 1866 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1866 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L631:
	.loc 1 1867 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1867 12
	bne	a5,zero,.L628
.LBB97:
	.loc 1 1869 22
	sw	zero,-20(s0)
	.loc 1 1869 13
	j	.L632
.L634:
	.loc 1 1870 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1870 20
	beq	a5,zero,.L633
	.loc 1 1870 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1870 64 discriminator 1
	sd	zero,104(a5)
.L633:
	.loc 1 1869 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L632:
	.loc 1 1869 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 1869 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L634
.LBE97:
	.loc 1 1872 13
	ld	a0,-48(s0)
	call	free_pipe
.L628:
	.loc 1 1877 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 1878 12
	li	a5,0
.L623:
	.loc 1 1879 1
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
.LFE68:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB69:
	.loc 1 1882 1
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
	.loc 1 1883 13
	sw	zero,-20(s0)
	.loc 1 1883 5
	j	.L636
.L637:
	.loc 1 1884 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 1883 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L636:
	.loc 1 1883 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L637
.LBE98:
	.loc 1 1886 1
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
.LFE69:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB70:
	.loc 1 1889 1
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
	.loc 1 1891 13
	sw	zero,-20(s0)
	.loc 1 1891 5
	j	.L639
.L641:
	.loc 1 1892 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1892 11
	beq	a5,zero,.L640
	.loc 1 1893 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 1893 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 1893 29
	ld	a4,0(a4)
	.loc 1 1893 23
	sd	a4,0(a5)
	.loc 1 1894 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1894 22
	lw	a4,100(a5)
	.loc 1 1894 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	.loc 1 1897 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1897 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L640:
	.loc 1 1891 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L639:
	.loc 1 1891 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L641
.LBE99:
	.loc 1 1923 1
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
.LFE70:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB71:
	.loc 1 1926 1
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
	.loc 1 1943 1
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
.LFE71:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB72:
	.loc 1 1945 36
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
	.loc 1 1946 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1947 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L652
	.loc 1 1947 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L652
	.loc 1 1948 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L653
	.loc 1 1948 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L653
	.loc 1 1949 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1949 8
	beq	a5,zero,.L654
	.loc 1 1950 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L655
	.loc 1 1952 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1952 8
	beq	a5,zero,.L651
	.loc 1 1952 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L651:
	.loc 1 1953 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 1953 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 1953 19
	ld	a4,0(a4)
	.loc 1 1953 15
	sd	a4,0(a5)
	.loc 1 1954 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1954 14
	lw	a4,100(a5)
	.loc 1 1954 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	j	.L643
.L652:
	.loc 1 1947 47
	nop
	j	.L643
.L653:
	.loc 1 1948 47
	nop
	j	.L643
.L654:
	.loc 1 1949 28
	nop
	j	.L643
.L655:
	.loc 1 1950 25
	nop
.L643:
	.loc 1 1956 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE72:
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
	.4byte	0x38d1
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
	.byte	0x6
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x12
	.4byte	.LASF43
	.byte	0x5
	.byte	0x8
	.byte	0x10
	.4byte	0x2f3
	.uleb128 0xd
	.4byte	0x2db
	.uleb128 0x1b
	.4byte	.LASF44
	.2byte	0x100
	.byte	0xc
	.4byte	0x488
	.uleb128 0x7
	.string	"ra"
	.byte	0x5
	.byte	0xd
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x7
	.string	"sp"
	.byte	0x5
	.byte	0xe
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.uleb128 0x7
	.string	"gp"
	.byte	0x5
	.byte	0xf
	.byte	0xe
	.4byte	0x9e
	.byte	0x10
	.uleb128 0x7
	.string	"tp"
	.byte	0x5
	.byte	0x10
	.byte	0xe
	.4byte	0x9e
	.byte	0x18
	.uleb128 0x7
	.string	"t0"
	.byte	0x5
	.byte	0x11
	.byte	0xe
	.4byte	0x9e
	.byte	0x20
	.uleb128 0x7
	.string	"t1"
	.byte	0x5
	.byte	0x12
	.byte	0xe
	.4byte	0x9e
	.byte	0x28
	.uleb128 0x7
	.string	"t2"
	.byte	0x5
	.byte	0x13
	.byte	0xe
	.4byte	0x9e
	.byte	0x30
	.uleb128 0x7
	.string	"t3"
	.byte	0x5
	.byte	0x14
	.byte	0xe
	.4byte	0x9e
	.byte	0x38
	.uleb128 0x7
	.string	"t4"
	.byte	0x5
	.byte	0x15
	.byte	0xe
	.4byte	0x9e
	.byte	0x40
	.uleb128 0x7
	.string	"t5"
	.byte	0x5
	.byte	0x16
	.byte	0xe
	.4byte	0x9e
	.byte	0x48
	.uleb128 0x7
	.string	"t6"
	.byte	0x5
	.byte	0x17
	.byte	0xe
	.4byte	0x9e
	.byte	0x50
	.uleb128 0x7
	.string	"a0"
	.byte	0x5
	.byte	0x18
	.byte	0xe
	.4byte	0x9e
	.byte	0x58
	.uleb128 0x7
	.string	"a1"
	.byte	0x5
	.byte	0x19
	.byte	0xe
	.4byte	0x9e
	.byte	0x60
	.uleb128 0x7
	.string	"a2"
	.byte	0x5
	.byte	0x1a
	.byte	0xe
	.4byte	0x9e
	.byte	0x68
	.uleb128 0x7
	.string	"a3"
	.byte	0x5
	.byte	0x1b
	.byte	0xe
	.4byte	0x9e
	.byte	0x70
	.uleb128 0x7
	.string	"a4"
	.byte	0x5
	.byte	0x1c
	.byte	0xe
	.4byte	0x9e
	.byte	0x78
	.uleb128 0x7
	.string	"a5"
	.byte	0x5
	.byte	0x1d
	.byte	0xe
	.4byte	0x9e
	.byte	0x80
	.uleb128 0x7
	.string	"a6"
	.byte	0x5
	.byte	0x1e
	.byte	0xe
	.4byte	0x9e
	.byte	0x88
	.uleb128 0x7
	.string	"a7"
	.byte	0x5
	.byte	0x1f
	.byte	0xe
	.4byte	0x9e
	.byte	0x90
	.uleb128 0x7
	.string	"s0"
	.byte	0x5
	.byte	0x20
	.byte	0xe
	.4byte	0x9e
	.byte	0x98
	.uleb128 0x7
	.string	"s1"
	.byte	0x5
	.byte	0x21
	.byte	0xe
	.4byte	0x9e
	.byte	0xa0
	.uleb128 0x7
	.string	"s2"
	.byte	0x5
	.byte	0x22
	.byte	0xe
	.4byte	0x9e
	.byte	0xa8
	.uleb128 0x7
	.string	"s3"
	.byte	0x5
	.byte	0x23
	.byte	0xe
	.4byte	0x9e
	.byte	0xb0
	.uleb128 0x7
	.string	"s4"
	.byte	0x5
	.byte	0x24
	.byte	0xe
	.4byte	0x9e
	.byte	0xb8
	.uleb128 0x7
	.string	"s5"
	.byte	0x5
	.byte	0x25
	.byte	0xe
	.4byte	0x9e
	.byte	0xc0
	.uleb128 0x7
	.string	"s6"
	.byte	0x5
	.byte	0x26
	.byte	0xe
	.4byte	0x9e
	.byte	0xc8
	.uleb128 0x7
	.string	"s7"
	.byte	0x5
	.byte	0x27
	.byte	0xe
	.4byte	0x9e
	.byte	0xd0
	.uleb128 0x7
	.string	"s8"
	.byte	0x5
	.byte	0x28
	.byte	0xe
	.4byte	0x9e
	.byte	0xd8
	.uleb128 0x7
	.string	"s9"
	.byte	0x5
	.byte	0x29
	.byte	0xe
	.4byte	0x9e
	.byte	0xe0
	.uleb128 0x7
	.string	"s10"
	.byte	0x5
	.byte	0x2a
	.byte	0xe
	.4byte	0x9e
	.byte	0xe8
	.uleb128 0x7
	.string	"s11"
	.byte	0x5
	.byte	0x2b
	.byte	0xe
	.4byte	0x9e
	.byte	0xf0
	.uleb128 0x5
	.4byte	.LASF45
	.byte	0x5
	.byte	0x2c
	.byte	0xe
	.4byte	0x9e
	.byte	0xf8
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF46
	.2byte	0x798
	.byte	0x33
	.4byte	0x5bf
	.uleb128 0x5
	.4byte	.LASF47
	.byte	0x5
	.byte	0x34
	.byte	0x16
	.4byte	0x2f8
	.byte	0
	.uleb128 0x8
	.4byte	.LASF48
	.byte	0x36
	.byte	0x16
	.4byte	0x2f8
	.2byte	0x100
	.uleb128 0x8
	.4byte	.LASF49
	.byte	0x37
	.byte	0x12
	.4byte	0x5bf
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF50
	.byte	0x39
	.byte	0xb
	.4byte	0x5c4
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF51
	.byte	0x3a
	.byte	0xe
	.4byte	0x9e
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF52
	.byte	0x3b
	.byte	0xe
	.4byte	0x9e
	.2byte	0x218
	.uleb128 0x1c
	.string	"sz"
	.byte	0x3c
	.byte	0xe
	.4byte	0x9e
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF53
	.byte	0x3e
	.byte	0x9
	.4byte	0x48
	.2byte	0x228
	.uleb128 0x8
	.4byte	.LASF54
	.byte	0x40
	.byte	0x11
	.4byte	0x2e7
	.2byte	0x230
	.uleb128 0x8
	.4byte	.LASF55
	.byte	0x42
	.byte	0xb
	.4byte	0x5c4
	.2byte	0x238
	.uleb128 0x8
	.4byte	.LASF56
	.byte	0x43
	.byte	0x9
	.4byte	0x48
	.2byte	0x240
	.uleb128 0x8
	.4byte	.LASF57
	.byte	0x45
	.byte	0x12
	.4byte	0x5c9
	.2byte	0x248
	.uleb128 0x8
	.4byte	.LASF58
	.byte	0x47
	.byte	0xb
	.4byte	0x694
	.2byte	0x2c8
	.uleb128 0x8
	.4byte	.LASF59
	.byte	0x48
	.byte	0x9
	.4byte	0x48
	.2byte	0x6c8
	.uleb128 0x8
	.4byte	.LASF60
	.byte	0x4a
	.byte	0x9
	.4byte	0x48
	.2byte	0x6cc
	.uleb128 0x8
	.4byte	.LASF61
	.byte	0x4c
	.byte	0x12
	.4byte	0x5bf
	.2byte	0x6d0
	.uleb128 0x1c
	.string	"cwd"
	.byte	0x4f
	.byte	0xa
	.4byte	0x6a4
	.2byte	0x6d8
	.uleb128 0x8
	.4byte	.LASF62
	.byte	0x50
	.byte	0x14
	.4byte	0x84
	.2byte	0x758
	.uleb128 0x1c
	.string	"uid"
	.byte	0x53
	.byte	0xe
	.4byte	0x78
	.2byte	0x75a
	.uleb128 0x1c
	.string	"gid"
	.byte	0x54
	.byte	0xe
	.4byte	0x78
	.2byte	0x75c
	.uleb128 0x8
	.4byte	.LASF63
	.byte	0x55
	.byte	0xe
	.4byte	0x6b4
	.2byte	0x75e
	.uleb128 0x8
	.4byte	.LASF64
	.byte	0x56
	.byte	0x9
	.4byte	0x48
	.2byte	0x770
	.uleb128 0x8
	.4byte	.LASF65
	.byte	0x57
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
	.uleb128 0x1b
	.4byte	.LASF66
	.2byte	0x490
	.byte	0x76
	.4byte	0x694
	.uleb128 0x5
	.4byte	.LASF67
	.byte	0x5
	.byte	0x77
	.byte	0x47
	.4byte	0x794
	.byte	0
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x5
	.byte	0x78
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x7
	.string	"din"
	.byte	0x5
	.byte	0x79
	.byte	0x13
	.4byte	0x13f
	.byte	0x8
	.uleb128 0x7
	.string	"off"
	.byte	0x5
	.byte	0x7a
	.byte	0xe
	.4byte	0x8b
	.byte	0x60
	.uleb128 0x5
	.4byte	.LASF68
	.byte	0x5
	.byte	0x7b
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x5
	.4byte	.LASF69
	.byte	0x5
	.byte	0x7c
	.byte	0x13
	.4byte	0x78f
	.byte	0x68
	.uleb128 0x5
	.4byte	.LASF70
	.byte	0x5
	.byte	0x7d
	.byte	0x9
	.4byte	0x48
	.byte	0x70
	.uleb128 0x5
	.4byte	.LASF71
	.byte	0x5
	.byte	0x7e
	.byte	0x9
	.4byte	0x48
	.byte	0x74
	.uleb128 0x5
	.4byte	.LASF72
	.byte	0x5
	.byte	0x7f
	.byte	0x9
	.4byte	0x48
	.byte	0x78
	.uleb128 0x5
	.4byte	.LASF73
	.byte	0x5
	.byte	0x82
	.byte	0x9
	.4byte	0x48
	.byte	0x7c
	.uleb128 0x5
	.4byte	.LASF74
	.byte	0x5
	.byte	0x84
	.byte	0x12
	.4byte	0x5d9
	.byte	0x80
	.uleb128 0x5
	.4byte	.LASF75
	.byte	0x5
	.byte	0x86
	.byte	0x12
	.4byte	0x7c7
	.byte	0x88
	.uleb128 0x8
	.4byte	.LASF76
	.byte	0x87
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
	.uleb128 0x1b
	.4byte	.LASF77
	.2byte	0x330
	.byte	0x61
	.4byte	0x770
	.uleb128 0x5
	.4byte	.LASF78
	.byte	0x5
	.byte	0x62
	.byte	0xa
	.4byte	0x770
	.byte	0
	.uleb128 0x8
	.4byte	.LASF79
	.byte	0x63
	.byte	0xe
	.4byte	0x8b
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF80
	.byte	0x64
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF81
	.byte	0x65
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF82
	.byte	0x66
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x8
	.4byte	.LASF83
	.byte	0x67
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF84
	.byte	0x68
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x8
	.4byte	.LASF68
	.byte	0x69
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF85
	.byte	0x6b
	.byte	0x12
	.4byte	0x77f
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF86
	.byte	0x6c
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x8
	.4byte	.LASF74
	.byte	0x6e
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
	.byte	0x77
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
	.byte	0xb2
	.byte	0x15
	.4byte	0x7c7
	.uleb128 0x26
	.4byte	.LASF94
	.byte	0xb4
	.byte	0xc
	.4byte	0x48
	.uleb128 0x16
	.4byte	.LASF95
	.byte	0x10
	.byte	0x1
	.byte	0x55
	.4byte	0x82e
	.uleb128 0x5
	.4byte	.LASF96
	.byte	0x1
	.byte	0x56
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x7
	.string	"len"
	.byte	0x1
	.byte	0x57
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF97
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x78
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF61
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x27
	.4byte	.LASF100
	.byte	0x2
	.byte	0x5c
	.4byte	0x861
	.uleb128 0x5
	.4byte	.LASF97
	.byte	0x1
	.byte	0x5d
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x7
	.string	"idx"
	.byte	0x1
	.byte	0x5e
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF98
	.byte	0x1
	.byte	0x5f
	.byte	0xe
	.4byte	0x861
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x78
	.4byte	0x870
	.uleb128 0x28
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF99
	.byte	0x8
	.byte	0x1
	.byte	0x62
	.4byte	0x896
	.uleb128 0x7
	.string	"id"
	.byte	0x1
	.byte	0x62
	.byte	0x23
	.4byte	0x8b
	.byte	0
	.uleb128 0x7
	.string	"len"
	.byte	0x1
	.byte	0x62
	.byte	0x26
	.4byte	0x8b
	.byte	0x4
	.byte	0
	.uleb128 0x27
	.4byte	.LASF101
	.byte	0x4
	.byte	0x63
	.4byte	0x8c9
	.uleb128 0x5
	.4byte	.LASF97
	.byte	0x1
	.byte	0x64
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x7
	.string	"idx"
	.byte	0x1
	.byte	0x65
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF98
	.byte	0x1
	.byte	0x66
	.byte	0x1c
	.4byte	0x8c9
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x870
	.4byte	0x8d8
	.uleb128 0x28
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF102
	.byte	0x10
	.byte	0x1
	.byte	0x6c
	.4byte	0x90c
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x1
	.byte	0x6d
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF103
	.byte	0x1
	.byte	0x6e
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF104
	.byte	0x1
	.byte	0x6f
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.byte	0
	.uleb128 0xf
	.4byte	.LASF105
	.byte	0x74
	.byte	0x11
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x19
	.string	"Q"
	.byte	0x75
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0xf
	.4byte	.LASF106
	.byte	0x77
	.byte	0x1c
	.4byte	0x949
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xd
	.4byte	0x7ed
	.uleb128 0xf
	.4byte	.LASF107
	.byte	0x78
	.byte	0x1c
	.4byte	0x963
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xd
	.4byte	0x82e
	.uleb128 0xf
	.4byte	.LASF68
	.byte	0x79
	.byte	0x1c
	.4byte	0x97d
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xd
	.4byte	0x896
	.uleb128 0xf
	.4byte	.LASF108
	.byte	0x7a
	.byte	0x1c
	.4byte	0x997
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xd
	.4byte	0x5b
	.uleb128 0xf
	.4byte	.LASF109
	.byte	0x7c
	.byte	0x11
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2f
	.4byte	.LASF110
	.byte	0x1
	.byte	0x7d
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xc
	.4byte	0x67
	.4byte	0x9d7
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0x1f
	.4byte	0x9c8
	.uleb128 0x30
	.4byte	.LASF111
	.byte	0x1
	.byte	0x7e
	.byte	0x1a
	.4byte	0x9d7
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x19
	.string	"req"
	.byte	0xbd
	.byte	0x1e
	.4byte	0x8d8
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x19
	.string	"sb"
	.byte	0xff
	.byte	0x1a
	.4byte	0xd7
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xc
	.4byte	0x5b
	.4byte	0xa2c
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0x2
	.4byte	.LASF112
	.2byte	0x100
	.byte	0x17
	.4byte	0xa1d
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0x31
	.4byte	.LASF113
	.byte	0x1
	.2byte	0x103
	.byte	0x11
	.4byte	0x8b
	.uleb128 0xc
	.4byte	0x6d4
	.4byte	0xa5f
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF114
	.2byte	0x2e5
	.byte	0xe
	.4byte	0xa4f
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xc
	.4byte	0x5de
	.4byte	0xa85
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF115
	.2byte	0x2e6
	.byte	0xd
	.4byte	0xa75
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1d
	.4byte	.LASF116
	.2byte	0x2e8
	.byte	0xf
	.4byte	0x78f
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x1d
	.4byte	.LASF117
	.2byte	0x2e9
	.byte	0xe
	.4byte	0x5d9
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x32
	.4byte	.LASF311
	.byte	0x1
	.2byte	0x3c5
	.byte	0x6
	.4byte	0xad6
	.uleb128 0x22
	.byte	0
	.uleb128 0x33
	.4byte	.LASF118
	.byte	0x1
	.2byte	0x3c4
	.byte	0x6
	.4byte	0xae9
	.uleb128 0xb
	.4byte	0x5c4
	.byte	0
	.uleb128 0x34
	.4byte	.LASF119
	.byte	0x5
	.byte	0xaa
	.byte	0xf
	.4byte	0xafb
	.4byte	0xafb
	.uleb128 0x22
	.byte	0
	.uleb128 0xd
	.4byte	0x5d9
	.uleb128 0x13
	.4byte	.LASF120
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0xb16
	.uleb128 0xb
	.4byte	0xb16
	.uleb128 0x22
	.byte	0
	.uleb128 0xd
	.4byte	0x23b
	.uleb128 0x13
	.4byte	.LASF121
	.byte	0x10
	.byte	0x7
	.4byte	0x5c4
	.4byte	0xb3a
	.uleb128 0xb
	.4byte	0x5c4
	.uleb128 0xb
	.4byte	0xb16
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0x13
	.4byte	.LASF122
	.byte	0xe
	.byte	0x5
	.4byte	0x48
	.4byte	0xb4f
	.uleb128 0xb
	.4byte	0xb16
	.byte	0
	.uleb128 0x13
	.4byte	.LASF123
	.byte	0x12
	.byte	0x7
	.4byte	0x5c4
	.4byte	0xb69
	.uleb128 0xb
	.4byte	0x5c4
	.uleb128 0xb
	.4byte	0xb16
	.byte	0
	.uleb128 0x13
	.4byte	.LASF124
	.byte	0x11
	.byte	0x7
	.4byte	0x5c4
	.4byte	0xb88
	.uleb128 0xb
	.4byte	0x5c4
	.uleb128 0xb
	.4byte	0xb16
	.uleb128 0xb
	.4byte	0x48
	.byte	0
	.uleb128 0x13
	.4byte	.LASF125
	.byte	0x14
	.byte	0x5
	.4byte	0x48
	.4byte	0xba2
	.uleb128 0xb
	.4byte	0xb16
	.uleb128 0xb
	.4byte	0xb16
	.byte	0
	.uleb128 0x13
	.4byte	.LASF126
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0xbc1
	.uleb128 0xb
	.4byte	0xb16
	.uleb128 0xb
	.4byte	0xb16
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF127
	.byte	0xd
	.byte	0x7
	.4byte	0xbe0
	.4byte	0xbe0
	.uleb128 0xb
	.4byte	0xbe0
	.uleb128 0xb
	.4byte	0xbe2
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x35
	.byte	0x8
	.uleb128 0xd
	.4byte	0xbe7
	.uleb128 0x36
	.uleb128 0x13
	.4byte	.LASF128
	.byte	0xc
	.byte	0x7
	.4byte	0xbe0
	.4byte	0xc07
	.uleb128 0xb
	.4byte	0xbe0
	.uleb128 0xb
	.4byte	0x48
	.uleb128 0xb
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF129
	.byte	0xb
	.byte	0x7
	.4byte	0xbe0
	.4byte	0xc1c
	.uleb128 0xb
	.4byte	0xbd
	.byte	0
	.uleb128 0x37
	.4byte	.LASF130
	.byte	0x1
	.byte	0x13
	.byte	0xd
	.4byte	0xc2e
	.uleb128 0xb
	.4byte	0xb16
	.byte	0
	.uleb128 0x15
	.4byte	.LASF133
	.2byte	0x799
	.8byte	.LFB72
	.8byte	.LFE72-.LFB72
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc78
	.uleb128 0x3
	.4byte	.LASF131
	.2byte	0x799
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF132
	.2byte	0x799
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ft"
	.2byte	0x79a
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF134
	.2byte	0x785
	.8byte	.LFB71
	.8byte	.LFE71-.LFB71
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xca5
	.uleb128 0x3
	.4byte	.LASF57
	.2byte	0x785
	.byte	0x22
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF135
	.2byte	0x760
	.8byte	.LFB70
	.8byte	.LFE70-.LFB70
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd0f
	.uleb128 0x3
	.4byte	.LASF136
	.2byte	0x760
	.byte	0x20
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF137
	.2byte	0x760
	.byte	0x35
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF138
	.2byte	0x760
	.byte	0x4b
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB99
	.8byte	.LBE99-.LBB99
	.uleb128 0x1
	.string	"i"
	.2byte	0x763
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF139
	.2byte	0x759
	.8byte	.LFB69
	.8byte	.LFE69-.LFB69
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd5b
	.uleb128 0x3
	.4byte	.LASF57
	.2byte	0x759
	.byte	0x1c
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB98
	.8byte	.LBE98-.LBB98
	.uleb128 0x1
	.string	"i"
	.2byte	0x75b
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF141
	.2byte	0x733
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB68
	.8byte	.LFE68-.LFB68
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xde2
	.uleb128 0x6
	.string	"fd"
	.2byte	0x733
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF140
	.2byte	0x733
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"ft"
	.2byte	0x734
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x736
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"p"
	.2byte	0x746
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
	.2byte	0x74d
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF142
	.2byte	0x721
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB67
	.8byte	.LFE67-.LFB67
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe3e
	.uleb128 0x6
	.string	"fd"
	.2byte	0x721
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x722
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x728
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x72c
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x9
	.4byte	.LASF143
	.2byte	0x6eb
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB66
	.8byte	.LFE66-.LFB66
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf5b
	.uleb128 0x6
	.string	"fd"
	.2byte	0x6eb
	.byte	0x16
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"buf"
	.2byte	0x6eb
	.byte	0x26
	.4byte	0xbe2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x3
	.4byte	.LASF144
	.2byte	0x6eb
	.byte	0x32
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x6ec
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"f"
	.2byte	0x6f1
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF145
	.2byte	0x6f6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"src"
	.2byte	0x6f8
	.byte	0x14
	.4byte	0xf5b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x6f9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"off"
	.2byte	0x6fb
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF147
	.2byte	0x6ff
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF148
	.2byte	0x718
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x1a
	.4byte	.LLRL6
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x702
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x703
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF151
	.2byte	0x704
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x707
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF153
	.2byte	0x70b
	.byte	0x11
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x6c
	.uleb128 0x9
	.4byte	.LASF154
	.2byte	0x6d1
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB65
	.8byte	.LFE65-.LFB65
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xff9
	.uleb128 0x6
	.string	"fd"
	.2byte	0x6d1
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"buf"
	.2byte	0x6d1
	.byte	0x1f
	.4byte	0xbe0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF144
	.2byte	0x6d1
	.byte	0x2b
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x6d2
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x6d8
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x6dc
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF155
	.2byte	0x6dd
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF156
	.2byte	0x6e0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF157
	.2byte	0x655
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB64
	.8byte	.LFE64-.LFB64
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1211
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x655
	.byte	0x1a
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x3
	.4byte	.LASF97
	.2byte	0x655
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -460
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x655
	.byte	0x2f
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x656
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF159
	.2byte	0x657
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x671
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"di"
	.2byte	0x672
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x2
	.4byte	.LASF160
	.2byte	0x673
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xa
	.8byte	.LBB87
	.8byte	.LBE87-.LBB87
	.4byte	0x10bc
	.uleb128 0x1
	.string	"p"
	.2byte	0x659
	.byte	0x16
	.4byte	0x5bf
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0xa
	.8byte	.LBB88
	.8byte	.LBE88-.LBB88
	.4byte	0x10df
	.uleb128 0x1
	.string	"i"
	.2byte	0x661
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0xa
	.8byte	.LBB89
	.8byte	.LBE89-.LBB89
	.4byte	0x11cc
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x679
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -308
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x67a
	.byte	0x12
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x2
	.4byte	.LASF162
	.2byte	0x67f
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.string	"um"
	.2byte	0x687
	.byte	0x1c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -86
	.uleb128 0x2
	.4byte	.LASF163
	.2byte	0x689
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -332
	.uleb128 0x2
	.4byte	.LASF164
	.2byte	0x689
	.byte	0x22
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x1
	.string	"gid"
	.2byte	0x68a
	.byte	0x16
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -54
	.uleb128 0xa
	.8byte	.LBB90
	.8byte	.LBE90-.LBB90
	.4byte	0x1185
	.uleb128 0x1
	.string	"i"
	.2byte	0x67b
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xa
	.8byte	.LBB91
	.8byte	.LBE91-.LBB91
	.4byte	0x11a9
	.uleb128 0x1
	.string	"ii"
	.2byte	0x689
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
	.2byte	0x68c
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
	.4byte	0x11f1
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x6a0
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
	.2byte	0x6ad
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x1221
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	.LASF167
	.2byte	0x64f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB63
	.8byte	.LFE63-.LFB63
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1253
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x64f
	.byte	0x19
	.4byte	0xb16
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF168
	.2byte	0x642
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB62
	.8byte	.LFE62-.LFB62
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12e3
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x642
	.byte	0x1b
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x3
	.4byte	.LASF32
	.2byte	0x642
	.byte	0x2a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x642
	.byte	0x3a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x644
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x645
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x647
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.string	"now"
	.2byte	0x648
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF169
	.2byte	0x635
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB61
	.8byte	.LFE61-.LFB61
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1364
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x635
	.byte	0x1a
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"uid"
	.2byte	0x635
	.byte	0x29
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -250
	.uleb128 0x6
	.string	"gid"
	.2byte	0x635
	.byte	0x37
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.string	"abs"
	.2byte	0x637
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x638
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x63a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF170
	.2byte	0x627
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB60
	.8byte	.LFE60-.LFB60
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13e2
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x627
	.byte	0x1a
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x627
	.byte	0x29
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.string	"abs"
	.2byte	0x629
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x62a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x62c
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x1
	.string	"p"
	.2byte	0x62e
	.byte	0x12
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x9
	.4byte	.LASF171
	.2byte	0x618
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB59
	.8byte	.LFE59-.LFB59
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x14a1
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x618
	.byte	0x1a
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x6
	.string	"st"
	.2byte	0x618
	.byte	0x2d
	.4byte	0x14a1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"abs"
	.2byte	0x61b
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x61c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x61c
	.byte	0x1b
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x61e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x61f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x620
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
	.2byte	0x61c
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
	.2byte	0x609
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB58
	.8byte	.LFE58-.LFB58
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1583
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x609
	.byte	0x1d
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x6
	.string	"buf"
	.2byte	0x609
	.byte	0x29
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x3
	.4byte	.LASF173
	.2byte	0x609
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -388
	.uleb128 0x1
	.string	"abs"
	.2byte	0x60c
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x60d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x60d
	.byte	0x1b
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x60f
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x610
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"di"
	.2byte	0x611
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"n"
	.2byte	0x613
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
	.2byte	0x60d
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF174
	.2byte	0x5fc
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB57
	.8byte	.LFE57-.LFB57
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15f3
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x5fc
	.byte	0x19
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"st"
	.2byte	0x5fc
	.byte	0x2c
	.4byte	0x14a1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5ff
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x600
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x602
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF175
	.2byte	0x5df
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB56
	.8byte	.LFE56-.LFB56
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16c3
	.uleb128 0x3
	.4byte	.LASF176
	.2byte	0x5df
	.byte	0x19
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x3
	.4byte	.LASF177
	.2byte	0x5df
	.byte	0x2e
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -496
	.uleb128 0x2
	.4byte	.LASF178
	.2byte	0x5e1
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF179
	.2byte	0x5e1
	.byte	0x17
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5e6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x5ea
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x5ed
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -372
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x5ed
	.byte	0x1b
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -392
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5f1
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
	.2byte	0x5ed
	.byte	0x34
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF180
	.2byte	0x5b8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB55
	.8byte	.LFE55-.LFB55
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17f6
	.uleb128 0x3
	.4byte	.LASF176
	.2byte	0x5b8
	.byte	0x1b
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF177
	.2byte	0x5b8
	.byte	0x30
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF178
	.2byte	0x5ba
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF179
	.2byte	0x5ba
	.byte	0x17
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5c1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"op"
	.2byte	0x5c5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -292
	.uleb128 0x1
	.string	"np"
	.2byte	0x5c5
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x5c5
	.byte	0x1b
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x5c5
	.byte	0x31
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5cb
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"opd"
	.2byte	0x5ce
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0x2
	.4byte	.LASF183
	.2byte	0x5d3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF184
	.2byte	0x5d4
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0xa
	.8byte	.LBB82
	.8byte	.LBE82-.LBB82
	.4byte	0x17d5
	.uleb128 0x1
	.string	"i"
	.2byte	0x5c6
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
	.2byte	0x5d6
	.byte	0x16
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF185
	.2byte	0x59b
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB54
	.8byte	.LFE54-.LFB54
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1907
	.uleb128 0x3
	.4byte	.LASF186
	.2byte	0x59b
	.byte	0x1c
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF187
	.2byte	0x59b
	.byte	0x30
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x1
	.string	"abs"
	.2byte	0x59d
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x5a1
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x5a1
	.byte	0x1b
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5a5
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
	.2byte	0x5a9
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ni"
	.2byte	0x5ac
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x2
	.4byte	.LASF188
	.2byte	0x5b0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"buf"
	.2byte	0x5b1
	.byte	0xd
	.4byte	0x1907
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.uleb128 0xa
	.8byte	.LBB80
	.8byte	.LBE80-.LBB80
	.4byte	0x18e7
	.uleb128 0x1
	.string	"i"
	.2byte	0x5a1
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
	.2byte	0x5aa
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x5b
	.4byte	0x1917
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xef
	.byte	0
	.uleb128 0x14
	.4byte	.LASF206
	.2byte	0x58a
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB53
	.8byte	.LFE53-.LFB53
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x19ef
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x58a
	.byte	0x26
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"ip"
	.2byte	0x58a
	.byte	0x3b
	.4byte	0x19ef
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"src"
	.2byte	0x58a
	.byte	0x4e
	.4byte	0xf5b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x58a
	.byte	0x5c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x58c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x58c
	.byte	0x24
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"s"
	.2byte	0x58c
	.byte	0x3c
	.4byte	0xf5b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB79
	.8byte	.LBE79-.LBB79
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x58e
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x58e
	.byte	0x32
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF151
	.2byte	0x58f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x590
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
	.2byte	0x55f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB52
	.8byte	.LFE52-.LFB52
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b4b
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x55f
	.byte	0x1b
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0x1
	.string	"abs"
	.2byte	0x561
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x565
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"di"
	.2byte	0x567
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x575
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x575
	.byte	0x1b
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF190
	.2byte	0x578
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x2
	.4byte	.LASF191
	.2byte	0x57b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF192
	.2byte	0x584
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0xa
	.8byte	.LBB74
	.8byte	.LBE74-.LBB74
	.4byte	0x1b07
	.uleb128 0x1
	.string	"pi"
	.2byte	0x56b
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
	.2byte	0x56d
	.byte	0x17
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB76
	.8byte	.LBE76-.LBB76
	.uleb128 0x1
	.string	"i"
	.2byte	0x56e
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
	.4byte	0x1b2a
	.uleb128 0x1
	.string	"i"
	.2byte	0x575
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
	.2byte	0x57d
	.byte	0x16
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF193
	.2byte	0x536
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB51
	.8byte	.LFE51-.LFB51
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1c81
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x536
	.byte	0x1a
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"abs"
	.2byte	0x538
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x53c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.string	"di"
	.2byte	0x53e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x54f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -276
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x54f
	.byte	0x1b
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF194
	.2byte	0x552
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x2
	.4byte	.LASF192
	.2byte	0x559
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0xa
	.8byte	.LBB69
	.8byte	.LBE69-.LBB69
	.4byte	0x1c61
	.uleb128 0x1
	.string	"off"
	.2byte	0x543
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF195
	.2byte	0x543
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1a
	.4byte	.LLRL5
	.uleb128 0x1
	.string	"de"
	.2byte	0x546
	.byte	0x1c
	.4byte	0x1c81
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x547
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
	.2byte	0x548
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
	.2byte	0x54f
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
	.2byte	0x50b
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d97
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x50b
	.byte	0x1a
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x50b
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -556
	.uleb128 0x1
	.string	"abs"
	.2byte	0x50e
	.byte	0xa
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF49
	.2byte	0x516
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF161
	.2byte	0x517
	.byte	0xa
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x51a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x51f
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x520
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF198
	.2byte	0x526
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x1
	.string	"um"
	.2byte	0x529
	.byte	0x14
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -30
	.uleb128 0x2
	.4byte	.LASF165
	.2byte	0x52a
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0xa
	.8byte	.LBB67
	.8byte	.LBE67-.LBB67
	.4byte	0x1d77
	.uleb128 0x1
	.string	"i"
	.2byte	0x517
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
	.2byte	0x521
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF238
	.2byte	0x4cb
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1f64
	.uleb128 0x6
	.string	"out"
	.2byte	0x4cb
	.byte	0x28
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1112
	.uleb128 0x3
	.4byte	.LASF199
	.2byte	0x4cb
	.byte	0x34
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1120
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x4cb
	.byte	0x47
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x1
	.string	"p"
	.2byte	0x4cd
	.byte	0x12
	.4byte	0x5bf
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF200
	.2byte	0x4ce
	.byte	0xa
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"tmp"
	.2byte	0x4de
	.byte	0xa
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -624
	.uleb128 0x1
	.string	"s"
	.2byte	0x4e1
	.byte	0x11
	.4byte	0xb16
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"end"
	.2byte	0x4e2
	.byte	0x11
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x2
	.4byte	.LASF201
	.2byte	0x4e3
	.byte	0x11
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF202
	.2byte	0x4e4
	.byte	0xa
	.4byte	0x1f74
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1104
	.uleb128 0x2
	.4byte	.LASF203
	.2byte	0x4e5
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"pos"
	.2byte	0x4fa
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0xa
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.4byte	0x1e91
	.uleb128 0x1
	.string	"n"
	.2byte	0x4d6
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.uleb128 0x29
	.4byte	.LLRL3
	.4byte	0x1f0e
	.uleb128 0x1
	.string	"len"
	.2byte	0x4eb
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
	.2byte	0x4f1
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xa
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.4byte	0x1eed
	.uleb128 0x1
	.string	"i"
	.2byte	0x4f3
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
	.2byte	0x4f4
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
	.2byte	0x4fc
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1a
	.4byte	.LLRL4
	.uleb128 0x2
	.4byte	.LASF205
	.2byte	0x4fd
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
	.2byte	0x500
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
	.4byte	0x1f74
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xff
	.byte	0
	.uleb128 0xc
	.4byte	0x234
	.4byte	0x1f8a
	.uleb128 0xe
	.4byte	0xaa
	.byte	0x1f
	.uleb128 0xe
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x14
	.4byte	.LASF207
	.2byte	0x4ad
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x204a
	.uleb128 0x3
	.4byte	.LASF208
	.2byte	0x4ad
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x4ad
	.byte	0x3c
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x4af
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"off"
	.2byte	0x4b3
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF209
	.2byte	0x4b4
	.byte	0xa
	.4byte	0x1211
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x4
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.uleb128 0x1
	.string	"de"
	.2byte	0x4b7
	.byte	0x18
	.4byte	0x1c81
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x4b8
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
	.2byte	0x4b9
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
	.2byte	0x46d
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x21eb
	.uleb128 0x3
	.4byte	.LASF208
	.2byte	0x46d
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -708
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x46d
	.byte	0x39
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -720
	.uleb128 0x3
	.4byte	.LASF211
	.2byte	0x46d
	.byte	0x48
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x471
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"de"
	.2byte	0x476
	.byte	0x13
	.4byte	0x1fd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.string	"off"
	.2byte	0x47d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x49a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x49b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x49c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x49d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"buf"
	.2byte	0x4a0
	.byte	0xd
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x4a2
	.byte	0x14
	.4byte	0x1c81
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x2148
	.uleb128 0x1
	.string	"i"
	.2byte	0x479
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
	.2byte	0x480
	.byte	0x18
	.4byte	0x1c81
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x481
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
	.2byte	0x482
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
	.2byte	0x486
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x487
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.4byte	.LASF213
	.2byte	0x48c
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF214
	.2byte	0x48d
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
	.2byte	0x457
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2260
	.uleb128 0x1
	.string	"di"
	.2byte	0x459
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
	.2byte	0x45a
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
	.2byte	0x45e
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
	.2byte	0x42a
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2377
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x42a
	.byte	0x2f
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF208
	.2byte	0x42a
	.byte	0x3f
	.4byte	0x2377
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x3
	.4byte	.LASF217
	.2byte	0x42a
	.byte	0x52
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF218
	.2byte	0x430
	.byte	0xa
	.4byte	0x237c
	.uleb128 0x4
	.byte	0x91
	.sleb128 -144
	.byte	0x6
	.uleb128 0x2
	.4byte	.LASF219
	.2byte	0x434
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF220
	.2byte	0x435
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"tok"
	.2byte	0x436
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"cur"
	.2byte	0x437
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x438
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"n"
	.2byte	0x44e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0xa
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.4byte	0x2356
	.uleb128 0x2
	.4byte	.LASF221
	.2byte	0x43c
	.byte	0xf
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF222
	.2byte	0x444
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
	.2byte	0x450
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
	.4byte	0x2390
	.uleb128 0x38
	.4byte	0xaa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -136
	.byte	0x6
	.byte	0
	.uleb128 0x9
	.4byte	.LASF223
	.2byte	0x3fb
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2418
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3fb
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x3fb
	.byte	0x1d
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x3fb
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x3fd
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x406
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
	.2byte	0x40c
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF224
	.2byte	0x3c9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x24ad
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3c9
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF96
	.2byte	0x3c9
	.byte	0x1c
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x3c9
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x3cb
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x3d4
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"j"
	.2byte	0x3e3
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
	.2byte	0x3e4
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF225
	.2byte	0x386
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x253f
	.uleb128 0x6
	.string	"fd1"
	.2byte	0x386
	.byte	0x15
	.4byte	0x253f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"fd2"
	.2byte	0x386
	.byte	0x1f
	.4byte	0x253f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x387
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pip"
	.2byte	0x389
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x252b
	.uleb128 0x1
	.string	"i"
	.2byte	0x38b
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x1a
	.4byte	.LLRL2
	.uleb128 0x1
	.string	"i"
	.2byte	0x3a5
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
	.2byte	0x37d
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2591
	.uleb128 0x6
	.string	"fd"
	.2byte	0x37d
	.byte	0x10
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x37f
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"k"
	.2byte	0x382
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x9
	.4byte	.LASF227
	.2byte	0x370
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x25d1
	.uleb128 0x6
	.string	"fd"
	.2byte	0x370
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x372
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF228
	.2byte	0x364
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2611
	.uleb128 0x6
	.string	"fd"
	.2byte	0x364
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x366
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF229
	.2byte	0x357
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2651
	.uleb128 0x6
	.string	"fd"
	.2byte	0x357
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF57
	.2byte	0x359
	.byte	0x13
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF230
	.2byte	0x343
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x267e
	.uleb128 0x3
	.4byte	.LASF57
	.2byte	0x343
	.byte	0x1c
	.4byte	0xafb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x24
	.4byte	.LASF231
	.2byte	0x338
	.byte	0xe
	.4byte	0x5d9
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26b0
	.uleb128 0x2
	.4byte	.LASF137
	.2byte	0x33a
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF232
	.2byte	0x322
	.byte	0xf
	.4byte	0x78f
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26fd
	.uleb128 0x1
	.string	"p"
	.2byte	0x324
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x330
	.byte	0xb
	.4byte	0xbe0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"pa"
	.2byte	0x331
	.byte	0xb
	.4byte	0xbe0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x23
	.4byte	.LASF234
	.2byte	0x319
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2728
	.uleb128 0x6
	.string	"p"
	.2byte	0x319
	.byte	0x1d
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF235
	.2byte	0x310
	.byte	0xe
	.4byte	0x5d9
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2758
	.uleb128 0x1
	.string	"p"
	.2byte	0x312
	.byte	0x12
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF236
	.2byte	0x30a
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2783
	.uleb128 0x6
	.string	"p"
	.2byte	0x30a
	.byte	0x1e
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF237
	.2byte	0x2ff
	.byte	0xf
	.4byte	0x78f
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27b3
	.uleb128 0x1
	.string	"p"
	.2byte	0x301
	.byte	0x13
	.4byte	0x78f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x39
	.4byte	.LASF312
	.byte	0x1
	.2byte	0x2eb
	.byte	0x6
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2853
	.uleb128 0xa
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x2814
	.uleb128 0x1
	.string	"i"
	.2byte	0x2f0
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
	.2byte	0x2f1
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
	.2byte	0x2f7
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
	.2byte	0x2f8
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
	.2byte	0x2d7
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x28c6
	.uleb128 0x6
	.string	"f"
	.2byte	0x2d7
	.byte	0x27
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x2d7
	.byte	0x37
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x2d8
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"c"
	.2byte	0x2d8
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
	.2byte	0x2d9
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF240
	.2byte	0x2c9
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2937
	.uleb128 0x6
	.string	"f"
	.2byte	0x2c9
	.byte	0x24
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x2c9
	.byte	0x34
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x2ca
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x29
	.4byte	.LLRL0
	.4byte	0x2923
	.uleb128 0x1
	.string	"i"
	.2byte	0x2cc
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1a
	.4byte	.LLRL1
	.uleb128 0x1
	.string	"i"
	.2byte	0x2ce
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF241
	.2byte	0x2c6
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2967
	.uleb128 0x6
	.string	"f"
	.2byte	0x2c6
	.byte	0x23
	.4byte	0x5d9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF242
	.2byte	0x2ae
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29c3
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x2ae
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x2af
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
	.2byte	0x2b5
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF243
	.2byte	0x285
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b50
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x285
	.byte	0x1d
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1672
	.uleb128 0x6
	.string	"out"
	.2byte	0x285
	.byte	0x29
	.4byte	0x5c4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1680
	.uleb128 0x3
	.4byte	.LASF199
	.2byte	0x285
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1684
	.uleb128 0x1
	.string	"abs"
	.2byte	0x288
	.byte	0xa
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"dir"
	.2byte	0x28c
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"buf"
	.2byte	0x28d
	.byte	0xa
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x2
	.4byte	.LASF244
	.2byte	0x28e
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x28e
	.byte	0x18
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF245
	.2byte	0x28f
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF246
	.2byte	0x28f
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"n"
	.2byte	0x28f
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
	.2byte	0x294
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x296
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"l"
	.2byte	0x2a5
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x2b2f
	.uleb128 0x2
	.4byte	.LASF247
	.2byte	0x299
	.byte	0x12
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1568
	.uleb128 0x1
	.string	"len"
	.2byte	0x299
	.byte	0x21
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF248
	.2byte	0x29b
	.byte	0x12
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1440
	.uleb128 0x1
	.string	"p"
	.2byte	0x29b
	.byte	0x35
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF249
	.2byte	0x29d
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
	.2byte	0x2a8
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
	.2byte	0x243
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2c7d
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x243
	.byte	0x2d
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1400
	.uleb128 0x3
	.4byte	.LASF245
	.2byte	0x243
	.byte	0x37
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1404
	.uleb128 0x1
	.string	"ipr"
	.2byte	0x248
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.string	"buf"
	.2byte	0x24c
	.byte	0xa
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -400
	.uleb128 0x2
	.4byte	.LASF244
	.2byte	0x24e
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x24f
	.byte	0xb
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cur"
	.2byte	0x250
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF251
	.2byte	0x251
	.byte	0xa
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -656
	.uleb128 0x4
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x2
	.4byte	.LASF61
	.2byte	0x258
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x25a
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
	.2byte	0x25d
	.byte	0x12
	.4byte	0x6a4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1296
	.uleb128 0x1
	.string	"n"
	.2byte	0x25e
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF248
	.2byte	0x262
	.byte	0x12
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1168
	.uleb128 0x1
	.string	"p"
	.2byte	0x264
	.byte	0x13
	.4byte	0x5c4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF249
	.2byte	0x26a
	.byte	0x12
	.4byte	0x1f64
	.uleb128 0x3
	.byte	0x91
	.sleb128 -912
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF252
	.2byte	0x23f
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2caf
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x23f
	.byte	0x22
	.4byte	0xb16
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF253
	.2byte	0x228
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2d5e
	.uleb128 0x3
	.4byte	.LASF49
	.2byte	0x228
	.byte	0x24
	.4byte	0x19ef
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x228
	.byte	0x38
	.4byte	0xb16
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"off"
	.2byte	0x229
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF209
	.2byte	0x22a
	.byte	0xa
	.4byte	0x1211
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x1
	.string	"de"
	.2byte	0x22e
	.byte	0x18
	.4byte	0x1c81
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x22f
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
	.2byte	0x230
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
	.2byte	0x210
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2e33
	.uleb128 0x6
	.string	"ip"
	.2byte	0x210
	.byte	0x1f
	.4byte	0x19ef
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF255
	.2byte	0x210
	.byte	0x2c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.string	"buf"
	.2byte	0x210
	.byte	0x3d
	.4byte	0x997
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x210
	.byte	0x4b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF146
	.2byte	0x211
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x212
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"dst"
	.2byte	0x213
	.byte	0xe
	.4byte	0x997
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x2
	.4byte	.LASF149
	.2byte	0x216
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF150
	.2byte	0x217
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF156
	.2byte	0x218
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF152
	.2byte	0x21b
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF256
	.2byte	0x1c7
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3034
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1c7
	.byte	0x2b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1c7
	.byte	0x40
	.4byte	0x19ef
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x6
	.string	"idx"
	.2byte	0x1c7
	.byte	0x4d
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"di"
	.2byte	0x1eb
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF257
	.2byte	0x1ec
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF258
	.2byte	0x1ed
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF259
	.2byte	0x1ef
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF260
	.2byte	0x1f8
	.byte	0xd
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF261
	.2byte	0x1fa
	.byte	0xf
	.4byte	0x2377
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF262
	.2byte	0x1fb
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF263
	.2byte	0x204
	.byte	0xd
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x2
	.4byte	.LASF264
	.2byte	0x206
	.byte	0xf
	.4byte	0x2377
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0x2f31
	.uleb128 0x1
	.string	"b"
	.2byte	0x1cb
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.byte	0
	.uleb128 0xa
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x2fca
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x1d4
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1dd
	.byte	0x11
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x1df
	.byte	0x13
	.4byte	0x2377
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"i"
	.2byte	0x1e0
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x2fa8
	.uleb128 0x1
	.string	"nb"
	.2byte	0x1d6
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
	.2byte	0x1e2
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
	.4byte	0x2fee
	.uleb128 0x1
	.string	"nb"
	.2byte	0x1f1
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.uleb128 0xa
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x3012
	.uleb128 0x1
	.string	"nb"
	.2byte	0x1fd
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
	.2byte	0x208
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF266
	.2byte	0x1a7
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3117
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1a7
	.byte	0x2e
	.4byte	0x19ef
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.string	"idx"
	.2byte	0x1a7
	.byte	0x3b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0x30aa
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x1ad
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.4byte	.LASF196
	.2byte	0x1b0
	.byte	0x13
	.4byte	0x2377
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x1b5
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF268
	.2byte	0x1b6
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF259
	.2byte	0x1b8
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF261
	.2byte	0x1bc
	.byte	0x13
	.4byte	0x2377
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF262
	.2byte	0x1bd
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF264
	.2byte	0x1c2
	.byte	0x13
	.4byte	0x2377
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF269
	.2byte	0x196
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3197
	.uleb128 0x2
	.4byte	.LASF270
	.2byte	0x198
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF271
	.2byte	0x199
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
	.2byte	0x19a
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
	.2byte	0x19e
	.byte	0x15
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF272
	.2byte	0x168
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x32fa
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x168
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"ip"
	.2byte	0x168
	.byte	0x3d
	.4byte	0x19ef
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0xa
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x31f6
	.uleb128 0x1
	.string	"i"
	.2byte	0x16b
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xa
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0x3249
	.uleb128 0x2
	.4byte	.LASF273
	.2byte	0x174
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x176
	.byte	0x13
	.4byte	0x2377
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.uleb128 0x1
	.string	"i"
	.2byte	0x177
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
	.2byte	0x180
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF246
	.2byte	0x182
	.byte	0x13
	.4byte	0x2377
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.uleb128 0x1
	.string	"i"
	.2byte	0x183
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
	.2byte	0x185
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF276
	.2byte	0x186
	.byte	0x15
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF277
	.2byte	0x188
	.byte	0x17
	.4byte	0x2377
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"j"
	.2byte	0x189
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
	.2byte	0x15c
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3353
	.uleb128 0x6
	.string	"b"
	.2byte	0x15c
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x15f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x160
	.byte	0xd
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x162
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF280
	.2byte	0x152
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33ac
	.uleb128 0x6
	.string	"b"
	.2byte	0x152
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x154
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x155
	.byte	0xd
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x157
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF281
	.2byte	0x149
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x340a
	.uleb128 0x6
	.string	"b"
	.2byte	0x149
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x14b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x14c
	.byte	0xd
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x14e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF282
	.2byte	0x13b
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3494
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x13b
	.byte	0x22
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x6
	.string	"src"
	.2byte	0x13b
	.byte	0x3d
	.4byte	0x3494
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x13e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x13f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF255
	.2byte	0x140
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"buf"
	.2byte	0x142
	.byte	0xd
	.4byte	0xa1d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"dip"
	.2byte	0x144
	.byte	0x14
	.4byte	0x19ef
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	0x1e8
	.uleb128 0x1e
	.4byte	.LASF285
	.2byte	0x139
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x34c9
	.uleb128 0x6
	.string	"b"
	.2byte	0x139
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x15
	.4byte	.LASF286
	.2byte	0x124
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3541
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x124
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF287
	.2byte	0x124
	.byte	0x2f
	.4byte	0x19ef
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x12b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x12d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF255
	.2byte	0x12f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"dip"
	.2byte	0x132
	.byte	0x14
	.4byte	0x19ef
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x3a
	.4byte	.LASF313
	.byte	0x1
	.2byte	0x11f
	.byte	0x6
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1e
	.4byte	.LASF288
	.2byte	0x10b
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3616
	.uleb128 0x6
	.string	"ip"
	.2byte	0x10b
	.byte	0x26
	.4byte	0x19ef
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF166
	.2byte	0x10b
	.byte	0x2e
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"p"
	.2byte	0x10d
	.byte	0x12
	.4byte	0x5bf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF31
	.2byte	0x10e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF289
	.2byte	0x10f
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF290
	.2byte	0x117
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
	.2byte	0x113
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
	.2byte	0x114
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
	.2byte	0x104
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3646
	.uleb128 0x1
	.string	"x"
	.2byte	0x104
	.byte	0x30
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x25
	.4byte	.LASF293
	.byte	0xf6
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x367f
	.uleb128 0x10
	.string	"blk"
	.byte	0xf6
	.byte	0x1b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x10
	.string	"src"
	.byte	0xf6
	.byte	0x2c
	.4byte	0xbe2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF294
	.byte	0xdd
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36b8
	.uleb128 0x2b
	.4byte	.LASF104
	.byte	0xdd
	.byte	0x27
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"src"
	.byte	0xdd
	.byte	0x3b
	.4byte	0xbe2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x25
	.4byte	.LASF295
	.byte	0xd8
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36f1
	.uleb128 0x10
	.string	"blk"
	.byte	0xd8
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x10
	.string	"dst"
	.byte	0xd8
	.byte	0x25
	.4byte	0xbe0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF296
	.byte	0xbf
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x372a
	.uleb128 0x2b
	.4byte	.LASF104
	.byte	0xbf
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"dst"
	.byte	0xbf
	.byte	0x34
	.4byte	0xbe0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3b
	.4byte	.LASF297
	.byte	0x1
	.byte	0xb7
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3770
	.uleb128 0x10
	.string	"f0"
	.byte	0xb7
	.byte	0x27
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x10
	.string	"f1"
	.byte	0xb7
	.byte	0x33
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x10
	.string	"f2"
	.byte	0xb7
	.byte	0x3f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x25
	.4byte	.LASF298
	.byte	0x83
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x385a
	.uleb128 0xf
	.4byte	.LASF299
	.byte	0x90
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x19
	.string	"st"
	.byte	0x94
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xf
	.4byte	.LASF300
	.byte	0x9c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xf
	.4byte	.LASF301
	.byte	0x9d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xf
	.4byte	.LASF302
	.byte	0xa2
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xf
	.4byte	.LASF303
	.byte	0xa3
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xf
	.4byte	.LASF304
	.byte	0xa4
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xf
	.4byte	.LASF305
	.byte	0xa5
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xf
	.4byte	.LASF306
	.byte	0xa6
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xf
	.4byte	.LASF307
	.byte	0xb0
	.byte	0xe
	.4byte	0x9e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x19
	.string	"s"
	.byte	0x85
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
	.byte	0x86
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
	.byte	0x81
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3895
	.uleb128 0x10
	.string	"b"
	.byte	0x81
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"o"
	.byte	0x81
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x3d
	.4byte	.LASF314
	.byte	0x1
	.byte	0x80
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x10
	.string	"b"
	.byte	0x80
	.byte	0x22
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x10
	.string	"o"
	.byte	0x80
	.byte	0x2d
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x10
	.string	"v"
	.byte	0x80
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
	.uleb128 0x1a
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x1b
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
	.uleb128 0x5
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
.LASF97:
	.string	"flags"
.LASF269:
	.string	"alloc_data_block"
.LASF263:
	.string	"secondbuf"
.LASF309:
	.string	"mr32"
.LASF99:
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
.LASF95:
	.string	"virtq_desc"
.LASF113:
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
.LASF98:
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
.LASF110:
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
.LASF105:
	.string	"vbase"
.LASF310:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -ffreestanding"
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
.LASF112:
	.string	"block_buf"
.LASF161:
	.string	"leaf"
.LASF100:
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
.LASF104:
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
.LASF108:
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
.LASF107:
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
.LASF169:
	.string	"fs_chown"
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
.LASF102:
	.string	"virtio_blk_req"
.LASF37:
	.string	"inum"
.LASF109:
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
.LASF96:
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
.LASF111:
	.string	"dma_buf"
.LASF196:
	.string	"entries"
.LASF214:
	.string	"abs_idx"
.LASF103:
	.string	"reserved"
.LASF211:
	.string	"child_inum"
.LASF147:
	.string	"written"
.LASF159:
	.string	"path2"
.LASF225:
	.string	"pipe_open"
.LASF101:
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
.LASF106:
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
.LASF0:
	.string	"fs.c"
.LASF1:
	.string	"/Users/ab25cq/minux9-dev"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
