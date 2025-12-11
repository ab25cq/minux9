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
.LFB6:
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
.LFE6:
	.size	mw32, .-mw32
	.align	1
	.type	mr32, @function
mr32:
.LFB7:
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
.LFE7:
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
	.string	"virtqueue too large\n"
	.align	3
.LC5:
	.string	"kalloc failed\n"
	.text
	.align	1
	.globl	virtio_blk_init
	.type	virtio_blk_init, @function
virtio_blk_init:
.LFB8:
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
	sd	a5,-56(s0)
	.loc 1 135 12
	li	a1,0
	ld	a0,-56(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 135 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L27
	.loc 1 136 12
	li	a1,8
	ld	a0,-56(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 136 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 136 50 discriminator 1
	lla	a5,vbase
	ld	a4,-56(s0)
	sd	a4,0(a5)
	.loc 1 136 58
	j	.L8
.L27:
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
	sw	a5,-60(s0)
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
	sw	a5,-64(s0)
	.loc 1 149 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-64(s0)
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
	sw	a5,-68(s0)
	.loc 1 157 14
	lw	a5,-68(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-72(s0)
	.loc 1 158 7
	lla	a5,Q
	lw	a4,-72(s0)
	sw	a4,0(a5)
	.loc 1 159 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 159 7
	beq	a5,zero,.L17
	.loc 1 159 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 159 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 159 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 159 65
	j	.L19
.L18:
	.loc 1 161 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 161 12
	slli	a5,a5,4
	sd	a5,-32(s0)
	.loc 1 162 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 162 12
	slli	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 163 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 163 12
	addi	a5,a5,4
	sd	a5,-80(s0)
	.loc 1 164 31
	ld	a4,-32(s0)
	ld	a5,-40(s0)
	add	a5,a4,a5
	.loc 1 164 12
	ld	a4,-80(s0)
	add	a5,a4,a5
	sd	a5,-48(s0)
	.loc 1 166 11
	j	.L20
.L22:
	.loc 1 167 11
	lla	a5,Q
	lw	a5,0(a5)
	srliw	a5,a5,1
	sext.w	a4,a5
	lla	a5,Q
	sw	a4,0(a5)
	.loc 1 168 26
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 168 18
	slli	a5,a5,4
	sd	a5,-32(s0)
	.loc 1 169 26
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 169 18
	slli	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 170 33
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 170 18
	addi	a5,a5,4
	sd	a5,-80(s0)
	.loc 1 171 28
	ld	a4,-32(s0)
	ld	a5,-40(s0)
	add	a5,a4,a5
	.loc 1 171 18
	ld	a4,-80(s0)
	add	a5,a4,a5
	sd	a5,-48(s0)
.L20:
	.loc 1 166 28
	ld	a4,-48(s0)
	li	a5,4096
	bleu	a4,a5,.L21
	.loc 1 166 33 discriminator 1
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 166 28 discriminator 1
	li	a5,1
	bgtu	a4,a5,.L22
.L21:
	.loc 1 173 8
	ld	a4,-48(s0)
	li	a5,4096
	bleu	a4,a5,.L23
	.loc 1 173 28 discriminator 1
	lla	a0,.LC4
	call	puts
.L24:
	.loc 1 173 64
	j	.L24
.L23:
	.loc 1 175 5
	lla	a5,vbase
	ld	a4,0(a5)
	lla	a5,Q
	lw	a5,0(a5)
	mv	a2,a5
	li	a1,56
	mv	a0,a4
	call	mw32
	.loc 1 177 15
	call	kalloc
	mv	a4,a0
	.loc 1 177 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 178 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 178 8
	bne	a5,zero,.L25
	.loc 1 178 21 discriminator 1
	lla	a0,.LC5
	call	puts
.L26:
	.loc 1 178 51
	j	.L26
.L25:
	.loc 1 179 5
	lla	a5,vq_area
	ld	a5,0(a5)
	li	a2,4096
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 181 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 182 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-32(s0)
	add	a4,a4,a5
	.loc 1 182 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 183 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-32(s0)
	ld	a5,-40(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 183 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 185 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 185 14
	sd	a5,-88(s0)
	.loc 1 186 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 187 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 187 47
	ld	a5,-88(s0)
	srli	a5,a5,12
	.loc 1 187 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 189 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-64(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 190 1
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
.LFE8:
	.size	virtio_blk_init, .-virtio_blk_init
	.align	1
	.type	set_flags, @function
set_flags:
.LFB9:
	.loc 1 192 66
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
	.loc 1 193 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 193 19
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
	.loc 1 194 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 194 19
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
	.loc 1 195 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 195 19
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
.LFE9:
	.size	set_flags, .-set_flags
	.local	req
	.comm	req,16,8
	.align	1
	.type	virtio_blk_read, @function
virtio_blk_read:
.LFB10:
	.loc 1 204 1
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
	.loc 1 205 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 206 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 207 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 208 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 210 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 210 20
	lla	a4,req
	.loc 1 210 18
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
	.loc 1 210 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 210 51
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
	.loc 1 210 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 210 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 211 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 211 20
	lla	a4,dma_buf
	.loc 1 211 18
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
	.loc 1 211 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 211 51
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
	.loc 1 211 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 211 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 212 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 212 20
	lla	a4,status_byte
	.loc 1 212 18
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
	.loc 1 212 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 212 57
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
	.loc 1 214 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 216 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 216 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 216 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 217 5
	fence	rw,rw
	.loc 1 218 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 218 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 218 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 218 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 220 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 222 10
	j	.L30
.L31:
	.loc 1 223 9
	fence	rw,rw
.L30:
	.loc 1 222 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L31
	.loc 1 225 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 226 1
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
.LFE10:
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
.LFB11:
	.loc 1 248 1
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
	.loc 1 249 14
	sw	zero,-20(s0)
	.loc 1 249 5
	j	.L33
.L34:
	.loc 1 250 25
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 1 251 26
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,516(a5)
	.loc 1 252 25
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 1 253 28
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,524(a5)
	.loc 1 249 39 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L33:
	.loc 1 249 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L34
.LBE4:
	.loc 1 255 17
	lla	a5,bcache_hits
	sw	zero,0(a5)
	.loc 1 256 19
	lla	a5,bcache_misses
	sw	zero,0(a5)
	.loc 1 257 1
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
	.size	bcache_init, .-bcache_init
	.section	.rodata
	.align	3
.LC6:
	.string	"Block cache stats: hits=%u misses=%u hit_rate=%u%%\n"
	.text
	.align	1
	.globl	bcache_stats
	.type	bcache_stats, @function
bcache_stats:
.LFB12:
	.loc 1 260 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 261 5
	lla	a5,bcache_hits
	lw	a1,0(a5)
	lla	a5,bcache_misses
	lw	a2,0(a5)
	.loc 1 263 25
	lla	a5,bcache_hits
	lw	a4,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 261 5
	beq	a5,zero,.L36
	.loc 1 263 61
	lla	a5,bcache_hits
	lw	a4,0(a5)
	li	a5,100
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 263 82
	lla	a5,bcache_hits
	lw	a3,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 261 5 discriminator 1
	divuw	a5,a4,a5
	sext.w	a5,a5
	j	.L37
.L36:
	.loc 1 261 5 is_stmt 0 discriminator 2
	li	a5,0
.L37:
	.loc 1 261 5 discriminator 4
	mv	a3,a5
	lla	a0,.LC6
	call	printf
	.loc 1 264 1 is_stmt 1
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
	.size	bcache_stats, .-bcache_stats
	.align	1
	.type	bcache_evict, @function
bcache_evict:
.LFB13:
	.loc 1 268 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 269 9
	li	a5,-1
	sw	a5,-20(s0)
	.loc 1 270 14
	li	a5,-1
	sw	a5,-24(s0)
.LBB5:
	.loc 1 273 14
	sw	zero,-28(s0)
	.loc 1 273 5
	j	.L39
.L41:
	.loc 1 274 22
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 1 274 12
	bne	a5,zero,.L40
	.loc 1 274 47 discriminator 1
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,524(a5)
	.loc 1 274 35 discriminator 1
	lw	a4,-24(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L40
	.loc 1 275 20
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,524(a5)
	sw	a5,-24(s0)
	.loc 1 276 20
	lw	a5,-28(s0)
	sw	a5,-20(s0)
.L40:
	.loc 1 273 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L39:
	.loc 1 273 23 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L41
.LBE5:
	.loc 1 280 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L42
	.loc 1 282 27
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 1 282 12
	beq	a5,zero,.L43
	.loc 1 282 51 discriminator 1
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 282 34 discriminator 1
	beq	a5,zero,.L43
	.loc 1 283 44
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 283 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 1 283 66
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 283 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L43:
	.loc 1 285 30
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 1 286 30
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
.L42:
	.loc 1 289 12
	lw	a5,-20(s0)
	.loc 1 290 1
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
.LFE13:
	.size	bcache_evict, .-bcache_evict
	.align	1
	.type	bcache_get, @function
bcache_get:
.LFB14:
	.loc 1 294 1
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
	.loc 1 295 16
	lla	a5,bcache_time
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_time
	sw	a4,0(a5)
.LBB6:
	.loc 1 298 14
	sw	zero,-20(s0)
	.loc 1 298 5
	j	.L46
.L49:
	.loc 1 299 22
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 299 12
	lw	a4,-36(s0)
	sext.w	a4,a4
	bne	a4,a5,.L47
	.loc 1 300 22
	lla	a3,bcache
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 1 300 29
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
	.loc 1 301 32
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
	.loc 1 302 24
	lla	a5,bcache_hits
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_hits
	sw	a4,0(a5)
	.loc 1 303 20
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	j	.L48
.L47:
	.loc 1 298 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L46:
	.loc 1 298 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L49
.LBE6:
	.loc 1 308 18
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_misses
	sw	a4,0(a5)
	.loc 1 309 9
	li	a5,-1
	sw	a5,-24(s0)
.LBB7:
	.loc 1 310 14
	sw	zero,-28(s0)
	.loc 1 310 5
	j	.L50
.L53:
	.loc 1 311 22
	lla	a3,bcache
	lw	a4,-28(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 311 12
	bne	a5,zero,.L51
	.loc 1 312 18
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 313 13
	j	.L52
.L51:
	.loc 1 310 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L50:
	.loc 1 310 23 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L53
.L52:
.LBE7:
	.loc 1 318 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L54
	.loc 1 319 16
	call	bcache_evict
	mv	a5,a0
	sw	a5,-24(s0)
.L54:
	.loc 1 322 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L55
	.loc 1 324 14
	sw	zero,-24(s0)
	.loc 1 325 25
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 1 325 12
	beq	a5,zero,.L55
	.loc 1 326 42
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 1 326 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 1 326 62
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 326 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L55:
	.loc 1 331 24
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 332 24
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 1 333 25
	lla	a3,bcache
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	li	a4,1
	sw	a4,516(a5)
	.loc 1 334 27
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
	.loc 1 335 5
	lwu	a3,-36(s0)
	.loc 1 335 40
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 1 335 5
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_read
	.loc 1 337 12
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.L48:
	.loc 1 338 1
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
.LFE14:
	.size	bcache_get, .-bcache_get
	.align	1
	.type	bcache_release, @function
bcache_release:
.LFB15:
	.loc 1 342 1
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
	.loc 1 343 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 343 8
	beq	a5,zero,.L58
	.loc 1 344 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 344 19
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-24(s0)
	sw	a4,516(a5)
.L58:
	.loc 1 346 1
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
	.size	bcache_release, .-bcache_release
	.align	1
	.globl	read_block
	.type	read_block, @function
read_block:
.LFB16:
	.loc 1 349 1
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
	.loc 1 350 31
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	sd	a0,-24(s0)
	.loc 1 351 19
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 351 5
	li	a2,512
	mv	a1,a5
	ld	a0,-48(s0)
	call	memcpy
	.loc 1 352 5
	ld	a0,-24(s0)
	call	bcache_release
	.loc 1 353 1
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
.LFE16:
	.size	read_block, .-read_block
	.align	1
	.type	virtio_blk_write, @function
virtio_blk_write:
.LFB17:
	.loc 1 356 1
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
	.loc 1 357 14
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 358 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 359 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 360 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 362 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 364 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 364 20
	lla	a4,req
	.loc 1 364 18
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
	.loc 1 364 47
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 364 55
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
	.loc 1 364 77
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 364 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 365 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 365 20
	lla	a4,dma_buf
	.loc 1 365 18
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
	.loc 1 365 47
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 365 55
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
	.loc 1 365 77
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 365 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 366 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 366 20
	lla	a4,status_byte
	.loc 1 366 18
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
	.loc 1 366 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 366 56
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
	.loc 1 368 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 370 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 370 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 370 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 371 5
	fence	rw,rw
	.loc 1 372 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 372 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 372 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 372 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 374 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 376 10
	j	.L61
.L62:
	.loc 1 377 9
	fence	rw,rw
.L61:
	.loc 1 376 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L62
	.loc 1 378 1
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
.LFE17:
	.size	virtio_blk_write, .-virtio_blk_write
	.align	1
	.globl	write_block
	.type	write_block, @function
write_block:
.LFB18:
	.loc 1 381 1
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
	.loc 1 382 31
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	sd	a0,-24(s0)
	.loc 1 383 14
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 383 5
	li	a2,512
	ld	a1,-48(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 384 15
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 385 5
	ld	a0,-24(s0)
	call	bcache_release
	.loc 1 386 1
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
.LFE18:
	.size	write_block, .-write_block
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.type	fs_now, @function
fs_now:
.LFB19:
	.loc 1 397 37
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 397 51
 #APP
# 397 "fs.c" 1
	csrr a5, time
# 0 "" 2
 #NO_APP
	sd	a5,-24(s0)
	.loc 1 397 128
	ld	a4,-24(s0)
	lla	a5,.LC7
	ld	a5,0(a5)
	mulhu	a5,a4,a5
	srli	a5,a5,18
	.loc 1 397 115
	sext.w	a4,a5
	.loc 1 397 113
	lla	a5,g_time_offset
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 397 143
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
	.size	fs_now, .-fs_now
	.align	1
	.type	check_perm, @function
check_perm:
.LFB20:
	.loc 1 405 1
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
	.loc 1 406 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 406 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 407 23
	ld	a5,-56(s0)
	lw	a5,12(a5)
	.loc 1 407 14
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 408 9
	li	a5,6
	sw	a5,-20(s0)
	.loc 1 409 10
	ld	a5,-40(s0)
	lhu	a4,1010(a5)
	.loc 1 409 21
	ld	a5,-56(s0)
	lhu	a5,16(a5)
	.loc 1 409 8
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L67
	.loc 1 409 34 discriminator 1
	li	a5,6
	sw	a5,-20(s0)
	j	.L68
.L67:
	.loc 1 410 15
	ld	a5,-40(s0)
	lhu	a4,1012(a5)
	.loc 1 410 26
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 410 13
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L69
	.loc 1 410 39 discriminator 1
	li	a5,3
	sw	a5,-20(s0)
	j	.L68
.L69:
.LBB8:
	.loc 1 412 13
	sw	zero,-24(s0)
.LBB9:
	.loc 1 413 18
	sw	zero,-28(s0)
	.loc 1 413 9
	j	.L70
.L73:
	.loc 1 413 54 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-28(s0)
	addi	a5,a5,504
	slli	a5,a5,1
	add	a5,a4,a5
	lhu	a4,8(a5)
	.loc 1 413 63 discriminator 5
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 413 41 discriminator 5
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L71
	.loc 1 413 78 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 413 82
	j	.L72
.L71:
	.loc 1 413 34 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L70:
	.loc 1 413 25 discriminator 4
	ld	a5,-40(s0)
	lw	a5,1032(a5)
	.loc 1 413 23 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	blt	a4,a5,.L73
.L72:
.LBE9:
	.loc 1 414 28
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L74
	.loc 1 414 28 is_stmt 0 discriminator 1
	li	a5,3
	j	.L75
.L74:
	.loc 1 414 28 discriminator 2
	li	a5,0
.L75:
	.loc 1 414 15 is_stmt 1 discriminator 4
	sw	a5,-20(s0)
.L68:
.LBE8:
	.loc 1 416 23
	lw	a5,-20(s0)
	lw	a4,-44(s0)
	srlw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 416 9
	andi	a5,a5,7
	sw	a5,-48(s0)
	.loc 1 418 15
	lw	a5,-60(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 418 8
	beq	a5,zero,.L76
	.loc 1 418 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 418 26 discriminator 1
	bne	a5,zero,.L76
	.loc 1 418 50 discriminator 2
	li	a5,0
	.loc 1 418 50 is_stmt 0
	j	.L77
.L76:
	.loc 1 419 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 419 8
	beq	a5,zero,.L78
	.loc 1 419 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 419 26 discriminator 1
	bne	a5,zero,.L78
	.loc 1 419 50 discriminator 2
	li	a5,0
	.loc 1 419 50 is_stmt 0
	j	.L77
.L78:
	.loc 1 420 15 is_stmt 1
	lw	a5,-60(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 420 8
	beq	a5,zero,.L79
	.loc 1 420 37 discriminator 1
	lw	a5,-48(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 420 26 discriminator 1
	bne	a5,zero,.L79
	.loc 1 420 50 discriminator 2
	li	a5,0
	.loc 1 420 50 is_stmt 0
	j	.L77
.L79:
	.loc 1 421 12 is_stmt 1
	li	a5,1
.L77:
	.loc 1 422 1
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
	.size	check_perm, .-check_perm
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB21:
	.loc 1 424 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 425 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 426 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 427 1
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
.LFE21:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB22:
	.loc 1 429 53
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
	.loc 1 430 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L82
	.loc 1 430 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 430 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L83
.L82:
	.loc 1 431 9
	li	a2,88
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 432 9
	j	.L81
.L83:
	.loc 1 436 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 438 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 438 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 438 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 438 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 440 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 440 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 440 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 442 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 443 26
	lwu	a4,-28(s0)
	.loc 1 443 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 444 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L81:
	.loc 1 445 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE22:
	.size	read_inode, .-read_inode
	.align	1
	.type	BBLOCK, @function
BBLOCK:
.LFB23:
	.loc 1 450 42
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
	.loc 1 450 53
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 450 69
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 1 450 64
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 450 77
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
	.size	BBLOCK, .-BBLOCK
	.align	1
	.type	write_inode, @function
write_inode:
.LFB24:
	.loc 1 453 1
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
	.loc 1 454 8
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L92
	.loc 1 454 30 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 454 18 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L92
	.loc 1 455 14
	li	a5,5
	sw	a5,-20(s0)
	.loc 1 456 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 456 45
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 456 50
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 456 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 457 30
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 457 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 457 14
	li	a5,88
	mulw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 460 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 461 26
	lwu	a5,-28(s0)
	.loc 1 461 20
	addi	a4,s0,-552
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 462 10
	ld	a4,-40(s0)
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 463 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L87
.L92:
	.loc 1 454 40
	nop
.L87:
	.loc 1 464 1
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE24:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB25:
	.loc 1 467 1
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
	.loc 1 468 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 470 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 471 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 472 19
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 472 16
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 1 472 29
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 472 23
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 472 34
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 473 1
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
.LFE25:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB26:
	.loc 1 476 1
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
	.loc 1 477 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 479 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 480 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 481 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 481 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 481 27
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 481 21
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 481 15
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
	.loc 1 482 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 483 1
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
.LFE26:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	bitmap_clear, @function
bitmap_clear:
.LFB27:
	.loc 1 486 1
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
	.loc 1 487 8
	lw	a5,-548(s0)
	sext.w	a5,a5
	beq	a5,zero,.L100
	.loc 1 488 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 490 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 491 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 492 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 492 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 492 28
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 492 22
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 492 15
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
	.loc 1 493 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L96
.L100:
	.loc 1 487 17
	nop
.L96:
	.loc 1 494 1
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE27:
	.size	bitmap_clear, .-bitmap_clear
	.align	1
	.type	free_inode_blocks, @function
free_inode_blocks:
.LFB28:
	.loc 1 498 1
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
	.loc 1 500 14
	sw	zero,-20(s0)
	.loc 1 500 5
	j	.L102
.L104:
	.loc 1 501 22
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 501 12
	beq	a5,zero,.L103
	.loc 1 502 13
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 503 26
	ld	a4,-608(s0)
	lw	a5,-20(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L103:
	.loc 1 500 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L102:
	.loc 1 500 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L104
.LBE10:
	.loc 1 508 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	.loc 1 508 8
	beq	a5,zero,.L105
.LBB11:
	.loc 1 509 18
	ld	a5,-608(s0)
	lw	a5,80(a5)
	sw	a5,-36(s0)
	.loc 1 510 9
	lw	a5,-36(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 511 19
	lla	a5,block_buf
	sd	a5,-48(s0)
.LBB12:
	.loc 1 512 18
	sw	zero,-24(s0)
	.loc 1 512 9
	j	.L106
.L108:
	.loc 1 513 21
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 513 16
	beq	a5,zero,.L107
	.loc 1 513 43 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 513 26 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L107:
	.loc 1 512 41 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L106:
	.loc 1 512 27 discriminator 1
	lw	a4,-24(s0)
	li	a5,127
	bleu	a4,a5,.L108
.LBE12:
	.loc 1 515 9
	lw	a5,-36(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 516 28
	ld	a5,-608(s0)
	sw	zero,80(a5)
.L105:
.LBE11:
	.loc 1 520 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	.loc 1 520 8
	beq	a5,zero,.L109
.LBB13:
	.loc 1 521 18
	ld	a5,-608(s0)
	lw	a5,84(a5)
	sw	a5,-52(s0)
	.loc 1 522 9
	lw	a5,-52(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 523 19
	lla	a5,block_buf
	sd	a5,-64(s0)
.LBB14:
	.loc 1 524 18
	sw	zero,-28(s0)
	.loc 1 524 9
	j	.L110
.L117:
.LBB15:
	.loc 1 525 23
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 525 16
	beq	a5,zero,.L118
	.loc 1 526 34
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 526 22
	lw	a5,0(a5)
	sw	a5,-68(s0)
	.loc 1 528 13
	addi	a4,s0,-592
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 529 23
	addi	a5,s0,-592
	sd	a5,-80(s0)
.LBB16:
	.loc 1 530 22
	sw	zero,-32(s0)
	.loc 1 530 13
	j	.L113
.L115:
	.loc 1 531 27
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 531 20
	beq	a5,zero,.L114
	.loc 1 531 51 discriminator 1
	lw	a5,-32(s0)
	slli	a5,a5,2
	ld	a4,-80(s0)
	add	a5,a4,a5
	.loc 1 531 32 discriminator 1
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L114:
	.loc 1 530 45 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L113:
	.loc 1 530 31 discriminator 1
	lw	a4,-32(s0)
	li	a5,127
	bleu	a4,a5,.L115
.LBE16:
	.loc 1 533 13
	lw	a5,-68(s0)
	mv	a0,a5
	call	bitmap_clear
	j	.L116
.L118:
	.loc 1 525 28
	nop
.L116:
.LBE15:
	.loc 1 524 41 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L110:
	.loc 1 524 27 discriminator 1
	lw	a4,-28(s0)
	li	a5,127
	bleu	a4,a5,.L117
.LBE14:
	.loc 1 535 9
	lw	a5,-52(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 1 536 30
	ld	a5,-608(s0)
	sw	zero,84(a5)
.L109:
.LBE13:
	.loc 1 539 14
	ld	a5,-608(s0)
	sw	zero,8(a5)
	.loc 1 540 5
	lw	a5,-596(s0)
	ld	a1,-608(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 541 1
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
.LFE28:
	.size	free_inode_blocks, .-free_inode_blocks
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB29:
	.loc 1 544 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 545 30
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 545 42
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 545 14
	srliw	a5,a5,12
	sw	a5,-24(s0)
	.loc 1 546 29
	lla	a5,sb
	lw	a5,24(a5)
	.loc 1 546 14
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
.LBB17:
	.loc 1 547 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
	.loc 1 547 5
	j	.L120
.L123:
	.loc 1 548 14
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 548 12 discriminator 1
	bne	a5,zero,.L121
.LBB18:
	.loc 1 549 13
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 552 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 553 13
	addi	a4,s0,-544
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 554 20
	lw	a5,-20(s0)
	j	.L122
.L121:
.LBE18:
	.loc 1 547 48 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L120:
	.loc 1 547 40 discriminator 1
	lla	a5,sb
	lw	a5,0(a5)
	.loc 1 547 36 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L123
.LBE17:
	.loc 1 557 12
	li	a5,0
.L122:
	.loc 1 558 1
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
.LFE29:
	.size	alloc_data_block, .-alloc_data_block
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB30:
	.loc 1 560 64
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
	.loc 1 561 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L125
	.loc 1 563 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L126
.L125:
	.loc 1 564 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L127
.LBB19:
	.loc 1 566 18
	ld	a5,-88(s0)
	lw	a5,80(a5)
	sw	a5,-60(s0)
	.loc 1 567 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L128
	.loc 1 567 39 discriminator 1
	li	a5,0
	.loc 1 567 39 is_stmt 0
	j	.L126
.L128:
	.loc 1 568 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 569 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 570 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 570 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L126
.L127:
.LBE19:
.LBB20:
	.loc 1 573 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 574 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 575 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 577 18
	ld	a5,-88(s0)
	lw	a5,84(a5)
	sw	a5,-28(s0)
	.loc 1 578 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L129
	.loc 1 578 40 discriminator 1
	li	a5,0
	.loc 1 578 40 is_stmt 0
	j	.L126
.L129:
	.loc 1 580 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 581 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 582 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 582 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 583 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L130
	.loc 1 583 36 discriminator 1
	li	a5,0
	.loc 1 583 36 is_stmt 0
	j	.L126
.L130:
	.loc 1 586 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 587 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 588 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L126:
.LBE20:
	.loc 1 590 1
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
.LFE30:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB31:
	.loc 1 593 1
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
	.loc 1 594 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L132
	.loc 1 595 22
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 595 12
	bne	a5,zero,.L133
.LBB21:
	.loc 1 596 26
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-100(s0)
	.loc 1 597 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L134
	.loc 1 597 28 discriminator 1
	li	a5,0
	.loc 1 597 28 is_stmt 0
	j	.L148
.L134:
	.loc 1 598 28 is_stmt 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a4,-100(s0)
	sw	a4,0(a5)
	.loc 1 599 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L133:
.LBE21:
	.loc 1 601 25
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L148
.L132:
	.loc 1 604 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L136
.LBB22:
	.loc 1 605 18
	ld	a5,-1664(s0)
	lw	a5,80(a5)
	sw	a5,-20(s0)
	.loc 1 606 12
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L137
.LBB23:
	.loc 1 607 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-80(s0)
	.loc 1 608 16
	lw	a5,-80(s0)
	sext.w	a5,a5
	bne	a5,zero,.L138
	.loc 1 608 29 discriminator 1
	li	a5,0
	.loc 1 608 29 is_stmt 0
	j	.L148
.L138:
	.loc 1 610 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-80(s0)
	sw	a4,80(a5)
	.loc 1 611 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 612 26
	lw	a5,-80(s0)
	sw	a5,-20(s0)
.L137:
.LBE23:
	.loc 1 615 9
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 616 19
	addi	a5,s0,-1640
	sd	a5,-88(s0)
	.loc 1 617 18
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sw	a5,-92(s0)
	.loc 1 618 20
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 618 12
	bne	a5,zero,.L140
.LBB24:
	.loc 1 619 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-96(s0)
	.loc 1 620 16
	lw	a5,-96(s0)
	sext.w	a5,a5
	bne	a5,zero,.L141
	.loc 1 620 29 discriminator 1
	li	a5,0
	.loc 1 620 29 is_stmt 0
	j	.L148
.L141:
	.loc 1 621 20 is_stmt 1
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	.loc 1 621 24
	lw	a4,-96(s0)
	sw	a4,0(a5)
	.loc 1 622 13
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L140:
.LBE24:
	.loc 1 624 23
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L148
.L136:
.LBE22:
	.loc 1 628 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sw	a5,-32(s0)
	.loc 1 629 14
	lw	a5,-32(s0)
	srliw	a5,a5,7
	sw	a5,-36(s0)
	.loc 1 630 14
	lw	a5,-32(s0)
	andi	a5,a5,127
	sw	a5,-40(s0)
	.loc 1 632 14
	ld	a5,-1664(s0)
	lw	a5,84(a5)
	sw	a5,-24(s0)
	.loc 1 633 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L142
.LBB25:
	.loc 1 634 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 635 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L143
	.loc 1 635 25 discriminator 1
	li	a5,0
	.loc 1 635 25 is_stmt 0
	j	.L148
.L143:
	.loc 1 636 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-44(s0)
	sw	a4,84(a5)
	.loc 1 637 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 638 23
	lw	a5,-44(s0)
	sw	a5,-24(s0)
.L142:
.LBE25:
	.loc 1 642 5
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 643 15
	addi	a5,s0,-616
	sd	a5,-56(s0)
	.loc 1 644 39
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 644 14
	lw	a5,0(a5)
	sw	a5,-28(s0)
	.loc 1 645 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L144
.LBB26:
	.loc 1 646 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 647 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L145
	.loc 1 647 25 discriminator 1
	li	a5,0
	.loc 1 647 25 is_stmt 0
	j	.L148
.L145:
	.loc 1 648 22 is_stmt 1
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 648 29
	lw	a4,-60(s0)
	sw	a4,0(a5)
	.loc 1 649 9
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 650 19
	lw	a5,-60(s0)
	sw	a5,-28(s0)
.L144:
.LBE26:
	.loc 1 654 5
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 655 15
	addi	a5,s0,-1128
	sd	a5,-72(s0)
	.loc 1 656 23
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 656 8
	bne	a5,zero,.L146
.LBB27:
	.loc 1 657 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 658 12
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L147
	.loc 1 658 25 discriminator 1
	li	a5,0
	.loc 1 658 25 is_stmt 0
	j	.L148
.L147:
	.loc 1 659 23 is_stmt 1
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 659 30
	lw	a4,-76(s0)
	sw	a4,0(a5)
	.loc 1 660 9
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L146:
.LBE27:
	.loc 1 662 26
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L148:
	.loc 1 663 1
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
.LFE31:
	.size	inode_bmap_alloc, .-inode_bmap_alloc
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB32:
	.loc 1 665 81
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
	.loc 1 666 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 667 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 668 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 670 11
	j	.L150
.L154:
.LBB28:
	.loc 1 671 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 672 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 673 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 674 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L151
	.loc 1 674 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L151:
	.loc 1 676 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 677 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L152
	.loc 1 678 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L153
.L152:
	.loc 1 680 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 681 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L153:
	.loc 1 683 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 684 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 685 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L150:
.LBE28:
	.loc 1 670 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L154
	.loc 1 687 1
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
.LFE32:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB33:
	.loc 1 689 62
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
	.loc 1 690 14
	sw	zero,-20(s0)
	.loc 1 693 11
	j	.L156
.L162:
.LBB29:
	.loc 1 694 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 695 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 696 13
	li	a5,32
	sw	a5,-36(s0)
.LBB30:
	.loc 1 697 18
	sw	zero,-24(s0)
	.loc 1 697 9
	j	.L157
.L161:
	.loc 1 698 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 698 22
	lhu	a5,0(a5)
	.loc 1 698 16
	beq	a5,zero,.L164
	.loc 1 699 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 699 34
	addi	a4,a5,2
	.loc 1 699 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 700 29
	sb	zero,-42(s0)
	.loc 1 701 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 701 16 discriminator 1
	bne	a5,zero,.L159
	.loc 1 702 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 702 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L163
.L164:
	.loc 1 698 34
	nop
.L159:
	.loc 1 697 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L157:
	.loc 1 697 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L161
.LBE30:
	.loc 1 705 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L156:
.LBE29:
	.loc 1 693 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 693 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L162
	.loc 1 707 12
	li	a5,0
.L163:
	.loc 1 708 1
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
.LFE33:
	.size	dir_lookup, .-dir_lookup
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB34:
	.loc 1 712 40
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
	li	a1,8
	ld	a0,-24(s0)
	call	path_lookup_lim
	mv	a5,a0
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
.LFE34:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC8:
	.string	"/"
	.text
	.align	1
	.type	path_lookup_lim, @function
path_lookup_lim:
.LFB35:
	.loc 1 716 62
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
	.loc 1 717 8
	lw	a5,-1404(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L168
	.loc 1 717 28 discriminator 1
	li	a5,0
	.loc 1 717 28 is_stmt 0
	j	.L192
.L168:
	.loc 1 718 8 is_stmt 1
	ld	a5,-1400(s0)
	beq	a5,zero,.L170
	.loc 1 718 22 discriminator 2
	ld	a5,-1400(s0)
	lbu	a5,0(a5)
	.loc 1 718 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L171
.L170:
	.loc 1 718 41 discriminator 3
	li	a5,0
	.loc 1 718 41 is_stmt 0
	j	.L192
.L171:
	.loc 1 719 9 is_stmt 1
	lla	a1,.LC8
	ld	a0,-1400(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 719 8 discriminator 1
	bne	a5,zero,.L172
	.loc 1 719 40 discriminator 1
	li	a5,1
	.loc 1 719 40 is_stmt 0
	j	.L192
.L172:
	.loc 1 722 5 is_stmt 1
	addi	a5,s0,-144
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 723 12
	lhu	a5,-144(s0)
	.loc 1 723 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L173
	.loc 1 723 35 discriminator 1
	li	a5,0
	.loc 1 723 35 is_stmt 0
	j	.L192
.L173:
	.loc 1 726 5 is_stmt 1
	addi	a5,s0,-400
	li	a2,255
	ld	a1,-1400(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 726 59 discriminator 1
	sb	zero,-145(s0)
	.loc 1 727 11
	addi	a5,s0,-400
	sd	a5,-24(s0)
	.loc 1 729 14
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 730 33
	li	a5,47
	sb	a5,-656(s0)
	.loc 1 730 50
	sb	zero,-655(s0)
	.loc 1 732 11
	j	.L174
.L191:
.LBB31:
	.loc 1 733 14
	sd	zero,-24(s0)
	.loc 1 734 16
	lhu	a5,-144(s0)
	.loc 1 734 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L175
	.loc 1 734 39 discriminator 1
	li	a5,0
	.loc 1 734 39 is_stmt 0
	j	.L192
.L175:
	.loc 1 736 14 is_stmt 1
	addi	a5,s0,-144
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 736 12 discriminator 1
	bne	a5,zero,.L177
	.loc 1 736 47 discriminator 1
	li	a5,0
	.loc 1 736 47 is_stmt 0
	j	.L192
.L177:
	.loc 1 737 25 is_stmt 1
	addi	a5,s0,-144
	ld	a1,-48(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 738 12
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L178
	.loc 1 738 31 discriminator 1
	li	a5,0
	.loc 1 738 31 is_stmt 0
	j	.L192
.L178:
	.loc 1 739 28 is_stmt 1
	addi	a4,s0,-1384
	lw	a5,-52(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 740 16
	lhu	a5,-1384(s0)
	.loc 1 740 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L179
.LBB32:
	.loc 1 743 24
	lw	a5,-1376(s0)
	.loc 1 743 17
	sw	a5,-32(s0)
	.loc 1 743 34
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L180
	.loc 1 743 61 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L180:
	.loc 1 744 13
	lw	a3,-32(s0)
	addi	a4,s0,-1296
	addi	a5,s0,-1384
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 745 21
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1280(a5)
	.loc 1 748 23
	sb	zero,-1168(s0)
	.loc 1 749 23
	lla	a1,.LC8
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 750 19
	j	.L181
.L183:
	.loc 1 751 27
	lbu	a5,-1168(s0)
	.loc 1 751 20
	beq	a5,zero,.L182
	.loc 1 751 68 discriminator 1
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 751 32 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L182:
	.loc 1 752 51
	addi	a5,s0,-1168
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 752 51 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 752 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1168
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 753 21
	lla	a1,.LC8
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L181:
	.loc 1 750 20
	ld	a5,-40(s0)
	bne	a5,zero,.L183
	.loc 1 756 21
	lbu	a5,-1296(s0)
	.loc 1 756 16
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L184
	.loc 1 757 17
	addi	a4,s0,-1296
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 758 42
	sb	zero,-657(s0)
	j	.L185
.L184:
	.loc 1 761 17
	addi	a4,s0,-656
	addi	a5,s0,-912
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 762 42
	sb	zero,-657(s0)
	.loc 1 763 29
	lbu	a5,-912(s0)
	.loc 1 763 20
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L186
	.loc 1 763 47 discriminator 2
	lbu	a5,-911(s0)
	.loc 1 763 21 discriminator 2
	beq	a5,zero,.L187
.L186:
	.loc 1 763 95 discriminator 3
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 763 95 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 763 59 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L187:
	.loc 1 764 54
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 764 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 764 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1296
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L185:
	.loc 1 766 23
	lbu	a5,-1168(s0)
	.loc 1 766 16
	beq	a5,zero,.L188
	.loc 1 767 53
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 767 53 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 767 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-912
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
	.loc 1 768 56
	addi	a5,s0,-912
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 768 56 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 768 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1168
	addi	a5,s0,-912
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L188:
	.loc 1 770 20
	lw	a5,-1404(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	addi	a5,s0,-912
	mv	a1,a4
	mv	a0,a5
	call	path_lookup_lim
	mv	a5,a0
	j	.L192
.L179:
.LBE32:
	.loc 1 773 13
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 773 25
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
	.loc 1 775 21
	lbu	a5,-656(s0)
	.loc 1 775 12
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L189
	.loc 1 775 39 discriminator 2
	lbu	a5,-655(s0)
	.loc 1 775 13 discriminator 2
	beq	a5,zero,.L190
.L189:
	.loc 1 775 87 discriminator 3
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 775 87 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 775 51 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L190:
	.loc 1 776 45
	addi	a5,s0,-656
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 776 45 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 776 9 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-656
	mv	a2,a4
	ld	a1,-48(s0)
	mv	a0,a5
	call	strncat
.L174:
.LBE31:
	.loc 1 732 19
	lla	a1,.LC8
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-48(s0)
	.loc 1 732 38 discriminator 1
	ld	a5,-48(s0)
	bne	a5,zero,.L191
	.loc 1 778 12
	lw	a5,-28(s0)
.L192:
	.loc 1 779 1
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
.LFE35:
	.size	path_lookup_lim, .-path_lookup_lim
	.align	1
	.globl	fs_realpath
	.type	fs_realpath, @function
fs_realpath:
.LFB36:
	.loc 1 783 1
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
	.loc 1 784 8
	ld	a5,-1680(s0)
	beq	a5,zero,.L194
	.loc 1 784 14 discriminator 2
	lw	a5,-1684(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L195
.L194:
	.loc 1 784 36 discriminator 3
	li	a5,-1
	.loc 1 784 36 is_stmt 0
	j	.L223
.L195:
	.loc 1 785 20 is_stmt 1
	addi	a5,s0,-328
	ld	a2,-1672(s0)
	li	a1,256
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 787 12
	lbu	a5,-328(s0)
	.loc 1 787 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L197
	.loc 1 787 31 discriminator 1
	li	a5,-1
	.loc 1 787 31 is_stmt 0
	j	.L223
.L197:
	.loc 1 788 9 is_stmt 1
	addi	a5,s0,-328
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 788 8 discriminator 1
	bne	a5,zero,.L198
	.loc 1 788 37 discriminator 1
	lw	a5,-1684(s0)
	sext.w	a4,a5
	li	a5,1
	ble	a4,a5,.L199
	.loc 1 788 57 discriminator 2
	ld	a5,-1680(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 788 66 discriminator 2
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 788 69 discriminator 2
	sb	zero,0(a5)
	.loc 1 788 83 discriminator 2
	li	a5,0
	.loc 1 788 83 is_stmt 0
	j	.L223
.L199:
	.loc 1 788 94 is_stmt 1 discriminator 3
	li	a5,-1
	.loc 1 788 94 is_stmt 0
	j	.L223
.L198:
	.loc 1 789 24 is_stmt 1
	addi	a5,s0,-416
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 790 20
	addi	a4,s0,-328
	addi	a5,s0,-672
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 790 72 discriminator 1
	sb	zero,-417(s0)
	.loc 1 791 11
	addi	a5,s0,-672
	sd	a5,-24(s0)
	.loc 1 792 9
	li	a5,8
	sw	a5,-48(s0)
	.loc 1 792 22
	li	a5,1
	sw	a5,-52(s0)
	.loc 1 792 35
	sw	zero,-28(s0)
	.loc 1 792 45
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 792 43
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 792 48
	li	a4,47
	sb	a4,0(a5)
	.loc 1 792 57
	ld	a5,-1680(s0)
	addi	a5,a5,1
	.loc 1 792 60
	sb	zero,0(a5)
	.loc 1 793 11
	j	.L200
.L222:
.LBB33:
	.loc 1 794 14
	sd	zero,-24(s0)
	.loc 1 795 16
	lhu	a5,-416(s0)
	.loc 1 795 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L201
	.loc 1 795 39 discriminator 1
	li	a5,-1
	.loc 1 795 39 is_stmt 0
	j	.L223
.L201:
	.loc 1 796 14 is_stmt 1
	addi	a5,s0,-416
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 796 12 discriminator 1
	bne	a5,zero,.L203
	.loc 1 796 47 discriminator 1
	li	a5,-1
	.loc 1 796 47 is_stmt 0
	j	.L223
.L203:
	.loc 1 797 25 is_stmt 1
	addi	a5,s0,-416
	ld	a1,-64(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-68(s0)
	.loc 1 798 12
	lw	a5,-68(s0)
	sext.w	a5,a5
	bne	a5,zero,.L204
	.loc 1 798 27 discriminator 1
	li	a5,-1
	.loc 1 798 27 is_stmt 0
	j	.L223
.L204:
	.loc 1 799 28 is_stmt 1
	addi	a4,s0,-1656
	lw	a5,-68(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 800 16
	lhu	a5,-1656(s0)
	.loc 1 800 12
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L205
.LBB34:
	.loc 1 801 16
	lw	a5,-48(s0)
	addiw	a5,a5,-1
	sw	a5,-48(s0)
	lw	a5,-48(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L206
	.loc 1 801 38 discriminator 1
	li	a5,-1
	.loc 1 801 38 is_stmt 0
	j	.L223
.L206:
	.loc 1 802 40 is_stmt 1
	lw	a5,-1648(s0)
	.loc 1 802 33
	sw	a5,-32(s0)
	.loc 1 802 49
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,127
	ble	a4,a5,.L208
	.loc 1 802 78 discriminator 1
	li	a5,127
	sw	a5,-32(s0)
.L208:
	.loc 1 803 13
	lw	a3,-32(s0)
	addi	a4,s0,-1568
	addi	a5,s0,-1656
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 1 803 63 discriminator 1
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-1552(a5)
	.loc 1 804 40
	sb	zero,-1440(s0)
	.loc 1 804 55
	lla	a1,.LC8
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
	.loc 1 805 18
	j	.L209
.L211:
	.loc 1 805 32 discriminator 5
	lbu	a5,-1440(s0)
	.loc 1 805 25 discriminator 5
	beq	a5,zero,.L210
	.loc 1 805 73 discriminator 1
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 805 37 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L210:
	.loc 1 805 126 discriminator 3
	addi	a5,s0,-1440
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 805 126 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 805 92 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1440
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	strncat
	.loc 1 805 147 discriminator 2
	lla	a1,.LC8
	li	a0,0
	call	strtok
	sd	a0,-40(s0)
.L209:
	.loc 1 805 19 discriminator 4
	ld	a5,-40(s0)
	bne	a5,zero,.L211
	.loc 1 806 39
	lbu	a5,-1568(s0)
	.loc 1 806 34
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L212
	.loc 1 806 51 discriminator 1
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	li	a2,511
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L213
.L212:
	.loc 1 808 26
	sb	zero,-1184(s0)
	.loc 1 808 33
	addi	a5,s0,-1184
	li	a2,511
	ld	a1,-1680(s0)
	mv	a0,a5
	call	strncat
	.loc 1 808 84 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 808 98 discriminator 2
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 808 83 discriminator 2
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 808 76 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L214
	.loc 1 808 146 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	mv	a4,a5
	.loc 1 808 110 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L214:
	.loc 1 808 202 discriminator 3
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 808 202 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 808 165 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1568
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L213:
	.loc 1 810 23
	lbu	a5,-1440(s0)
	.loc 1 810 16
	beq	a5,zero,.L215
	.loc 1 810 41 discriminator 1
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 810 55 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 810 40 discriminator 1
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-1168(a5)
	.loc 1 810 33 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L216
	.loc 1 810 103 discriminator 2
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 810 103 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 810 67 is_stmt 1 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1184
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L216:
	.loc 1 810 161 discriminator 4
	addi	a5,s0,-1184
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 810 161 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 810 122 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1440
	addi	a5,s0,-1184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L215:
	.loc 1 811 20
	lw	a4,-1684(s0)
	addi	a5,s0,-1184
	mv	a2,a4
	ld	a1,-1680(s0)
	mv	a0,a5
	call	fs_realpath
	mv	a5,a0
	j	.L223
.L205:
.LBE34:
	.loc 1 814 17
	ld	a0,-64(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-72(s0)
	.loc 1 815 15
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 815 19
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 815 12
	lw	a4,-1684(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L217
	.loc 1 815 40 discriminator 1
	li	a5,-1
	.loc 1 815 40 is_stmt 0
	j	.L223
.L217:
	.loc 1 816 12 is_stmt 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L218
	.loc 1 816 26 discriminator 2
	ld	a5,-1680(s0)
	lbu	a5,0(a5)
	.loc 1 816 13 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L219
.L218:
	.loc 1 816 42 discriminator 3
	lw	a5,-28(s0)
	addiw	a4,a5,1
	sw	a4,-28(s0)
	mv	a4,a5
	.loc 1 816 40 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a4
	.loc 1 816 45 discriminator 3
	li	a4,47
	sb	a4,0(a5)
.L219:
.LBB35:
	.loc 1 817 17
	sw	zero,-44(s0)
	.loc 1 817 9
	j	.L220
.L221:
	.loc 1 817 42 discriminator 3
	lw	a5,-44(s0)
	ld	a4,-64(s0)
	add	a4,a4,a5
	.loc 1 817 35 discriminator 3
	lw	a5,-28(s0)
	addiw	a3,a5,1
	sw	a3,-28(s0)
	mv	a3,a5
	.loc 1 817 33 discriminator 3
	ld	a5,-1680(s0)
	add	a5,a5,a3
	.loc 1 817 42 discriminator 3
	lbu	a4,0(a4)
	.loc 1 817 38 discriminator 3
	sb	a4,0(a5)
	.loc 1 817 26 discriminator 3
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L220:
	.loc 1 817 22 discriminator 1
	lw	a5,-44(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L221
.LBE35:
	.loc 1 817 50 discriminator 4
	lw	a5,-28(s0)
	ld	a4,-1680(s0)
	add	a5,a4,a5
	.loc 1 817 53 discriminator 4
	sb	zero,0(a5)
	.loc 1 818 13
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
.L200:
.LBE33:
	.loc 1 793 19
	lla	a1,.LC8
	ld	a0,-24(s0)
	call	strtok
	sd	a0,-64(s0)
	.loc 1 793 38 discriminator 1
	ld	a5,-64(s0)
	bne	a5,zero,.L222
	.loc 1 820 12
	li	a5,0
.L223:
	.loc 1 821 1
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
.LFE36:
	.size	fs_realpath, .-fs_realpath
	.section	.rodata
	.align	3
.LC9:
	.string	"== i-node %u ==\n"
	.align	3
.LC10:
	.string	"  type  = %u\n"
	.align	3
.LC11:
	.string	"  size  = %u\n"
	.align	3
.LC12:
	.string	"  addrs ="
	.align	3
.LC13:
	.string	" %u"
	.align	3
.LC14:
	.string	" [indirect %u]"
	.align	3
.LC15:
	.string	" [double-indirect %u]"
	.align	3
.LC16:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB37:
	.loc 1 823 32
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
	.loc 1 825 5
	addi	a4,s0,-112
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 826 5
	lw	a5,-116(s0)
	mv	a1,a5
	lla	a0,.LC9
	call	printf
	.loc 1 827 32
	lhu	a5,-112(s0)
	.loc 1 827 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC10
	call	printf
	.loc 1 828 5
	lw	a5,-104(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
	.loc 1 829 5
	lla	a0,.LC12
	call	printf
.LBB36:
	.loc 1 830 14
	sw	zero,-20(s0)
	.loc 1 830 5
	j	.L225
.L227:
	.loc 1 831 21
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 831 12
	beq	a5,zero,.L226
	.loc 1 831 31 discriminator 1
	lw	a5,-20(s0)
	addi	a4,a5,8
	addi	a5,s0,-112
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC13
	call	printf
.L226:
	.loc 1 830 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L225:
	.loc 1 830 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L227
.LBE36:
	.loc 1 833 17
	lw	a5,-32(s0)
	.loc 1 833 8
	beq	a5,zero,.L228
	.loc 1 834 9
	lw	a5,-32(s0)
	mv	a1,a5
	lla	a0,.LC14
	call	printf
.L228:
	.loc 1 836 17
	lw	a5,-28(s0)
	.loc 1 836 8
	beq	a5,zero,.L229
	.loc 1 837 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC15
	call	printf
.L229:
	.loc 1 839 5
	lla	a0,.LC16
	call	printf
	.loc 1 840 1
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
.LFE37:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB38:
	.loc 1 847 38
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
	.loc 1 848 12
	li	a5,64
	.loc 1 849 1
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
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB39:
	.loc 1 850 55
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
	.loc 1 851 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB37:
	.loc 1 853 14
	sw	zero,-20(s0)
	.loc 1 853 5
	j	.L233
.L236:
	.loc 1 853 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 853 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L241
	.loc 1 853 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L233:
	.loc 1 853 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L236
.LBE37:
.LBB38:
	.loc 1 855 14
	sw	zero,-24(s0)
	.loc 1 855 5
	j	.L237
.L240:
	.loc 1 856 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 856 12
	bne	a5,zero,.L238
	.loc 1 857 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 858 18
	ld	a5,-40(s0)
	lw	a5,648(a5)
	.loc 1 858 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L242
	.loc 1 858 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,648(a5)
	.loc 1 858 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,648(a5)
	.loc 1 859 13
	j	.L242
.L238:
	.loc 1 855 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L237:
	.loc 1 855 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L240
	j	.L232
.L241:
.LBE38:
.LBB39:
	.loc 1 853 67
	nop
	j	.L232
.L242:
.LBE39:
.LBB40:
	.loc 1 859 13
	nop
.L232:
.LBE40:
	.loc 1 863 1
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
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB40:
	.loc 1 864 58
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
	.loc 1 865 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 865 29 discriminator 1
	sw	zero,-20(s0)
.LBB41:
	.loc 1 866 14
	sw	zero,-24(s0)
	.loc 1 866 5
	j	.L244
.L247:
	.loc 1 867 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 867 12
	ld	a4,-48(s0)
	bne	a4,a5,.L245
	.loc 1 867 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L245:
	.loc 1 868 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,16
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 868 12
	beq	a5,zero,.L246
	.loc 1 868 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L246:
	.loc 1 866 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L244:
	.loc 1 866 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L247
.LBE41:
	.loc 1 870 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,648(a5)
	.loc 1 871 1
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
.LFE40:
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
	.size	gFiles, 20992
gFiles:
	.zero	20992
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
.LFB41:
	.loc 1 884 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 885 5
	li	a5,24576
	addi	a2,a5,1536
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 886 5
	li	a5,20480
	addi	a2,a5,512
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB42:
	.loc 1 888 13
	sw	zero,-20(s0)
	.loc 1 888 5
	j	.L249
.L250:
.LBB43:
	.loc 1 889 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 891 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 892 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE43:
	.loc 1 888 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L249:
	.loc 1 888 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L250
.LBE42:
.LBB44:
	.loc 1 895 13
	sw	zero,-24(s0)
	.loc 1 895 5
	j	.L251
.L252:
.LBB45:
	.loc 1 896 22
	lw	a4,-24(s0)
	li	a5,656
	mul	a4,a4,a5
	lla	a5,gFiles
	add	a5,a4,a5
	sd	a5,-32(s0)
	.loc 1 898 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,128(a5)
	.loc 1 899 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE45:
	.loc 1 895 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L251:
	.loc 1 895 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L252
.LBE44:
	.loc 1 901 1
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
.LFE41:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB42:
	.loc 1 904 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 905 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 907 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 907 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 909 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 911 12
	ld	a5,-24(s0)
	.loc 1 912 1
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
.LFE42:
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB43:
	.loc 1 915 1
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
	.loc 1 916 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 917 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 918 1
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
.LFE43:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB44:
	.loc 1 920 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 921 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 921 8
	bne	a5,zero,.L257
	.loc 1 921 29 discriminator 1
	li	a5,0
	.loc 1 921 29 is_stmt 0
	j	.L258
.L257:
	.loc 1 922 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 923 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,128(a5)
	.loc 1 923 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 924 5
	li	a2,656
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 925 12
	ld	a5,-24(s0)
.L258:
	.loc 1 926 1
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
.LFE44:
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB45:
	.loc 1 930 1
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
	.loc 1 931 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,128(a5)
	.loc 1 932 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 933 1
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
.LFE45:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB46:
	.loc 1 939 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 940 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 942 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 943 8
	ld	a5,-24(s0)
	bne	a5,zero,.L261
	.loc 1 944 16
	li	a5,0
	j	.L262
.L261:
	.loc 1 945 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 946 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 947 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 948 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 949 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 950 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 952 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 953 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 955 12
	ld	a5,-24(s0)
.L262:
	.loc 1 956 1
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
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB47:
	.loc 1 961 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 962 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 963 8
	ld	a5,-24(s0)
	bne	a5,zero,.L264
	.loc 1 963 25 discriminator 1
	li	a5,0
	.loc 1 963 25 is_stmt 0
	j	.L265
.L264:
	.loc 1 965 5 is_stmt 1
	li	a2,656
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 967 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 969 12
	ld	a5,-24(s0)
.L265:
	.loc 1 970 1
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
.LFE47:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB48:
	.loc 1 973 1
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
	.loc 1 974 5
	li	a2,256
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 976 21
	call	new_file_table
	mv	a4,a0
	.loc 1 976 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 978 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 978 25
	sw	zero,0(a5)
	.loc 1 979 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 979 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 981 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 981 21
	call	new_file_table
	mv	a5,a0
	.loc 1 981 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 983 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 983 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 984 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 984 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 986 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 986 21
	call	new_file_table
	mv	a5,a0
	.loc 1 986 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 988 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 988 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 989 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 989 25
	li	a4,1
	sw	a4,100(a5)
	.loc 1 990 1
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
.LFE48:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB49:
	.loc 1 993 1
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
	.loc 1 994 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1003 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L268
	.loc 1 1003 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L269
.L268:
	.loc 1 1003 48 discriminator 3
	li	a5,0
	.loc 1 1003 48 is_stmt 0
	j	.L270
.L269:
	.loc 1 1004 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1004 8
	bne	a5,zero,.L271
	.loc 1 1004 33 discriminator 1
	li	a5,0
	.loc 1 1004 33 is_stmt 0
	j	.L270
.L271:
	.loc 1 1005 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1005 24
	lw	a5,100(a5)
	.loc 1 1005 8
	bne	a5,zero,.L272
	.loc 1 1005 39 discriminator 1
	li	a5,0
	.loc 1 1005 39 is_stmt 0
	j	.L270
.L272:
	.loc 1 1007 19 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1007 23
	lw	a4,0(a5)
	.loc 1 1007 8
	li	a5,4
	bne	a4,a5,.L273
	.loc 1 1007 54 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1007 58 discriminator 1
	ld	a5,104(a5)
	.loc 1 1007 41 discriminator 1
	beq	a5,zero,.L273
	.loc 1 1008 16
	li	a5,1
	j	.L270
.L273:
	.loc 1 1010 12
	li	a5,0
.L270:
	.loc 1 1011 1
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
.LFE49:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB50:
	.loc 1 1014 1
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
	.loc 1 1015 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1016 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1016 8
	beq	a5,zero,.L275
	.loc 1 1016 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1016 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 1016 24 discriminator 1
	beq	a5,zero,.L275
	.loc 1 1017 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1017 26
	lw	a5,0(a5)
	.loc 1 1017 11
	bne	a5,zero,.L275
	.loc 1 1018 20
	li	a5,1
	j	.L276
.L275:
	.loc 1 1022 12
	li	a5,0
.L276:
	.loc 1 1023 1
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
.LFE50:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB51:
	.loc 1 1026 1
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
	.loc 1 1027 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1029 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1029 8
	beq	a5,zero,.L278
	.loc 1 1029 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1029 41 discriminator 1
	lw	a5,100(a5)
	.loc 1 1029 24 discriminator 1
	beq	a5,zero,.L278
	.loc 1 1030 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1030 26
	lw	a4,0(a5)
	.loc 1 1030 11
	li	a5,1
	bne	a4,a5,.L278
	.loc 1 1031 20
	li	a5,1
	j	.L279
.L278:
	.loc 1 1035 12
	li	a5,0
.L279:
	.loc 1 1036 1
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
.LFE51:
	.size	is_stdout, .-is_stdout
	.align	1
	.globl	is_tty
	.type	is_tty, @function
is_tty:
.LFB52:
	.loc 1 1039 1
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
	.loc 1 1040 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1041 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L281
	.loc 1 1041 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L282
.L281:
	.loc 1 1041 48 discriminator 3
	li	a5,0
	.loc 1 1041 48 is_stmt 0
	j	.L283
.L282:
	.loc 1 1042 20 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1042 8
	bne	a5,zero,.L284
	.loc 1 1042 33 discriminator 1
	li	a5,0
	.loc 1 1042 33 is_stmt 0
	j	.L283
.L284:
	.loc 1 1043 23 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1043 27
	lw	a5,0(a5)
	.loc 1 1043 9
	sw	a5,-28(s0)
	.loc 1 1044 63
	lw	a5,-28(s0)
	sext.w	a5,a5
	beq	a5,zero,.L285
	.loc 1 1044 27 discriminator 2
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L285
	.loc 1 1044 45 discriminator 4
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L285
	.loc 1 1044 63 discriminator 6
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,5
	bne	a4,a5,.L286
.L285:
	.loc 1 1044 63 is_stmt 0 discriminator 7
	li	a5,1
	.loc 1 1044 63
	j	.L283
.L286:
	.loc 1 1044 63 discriminator 8
	li	a5,0
.L283:
	.loc 1 1045 1 is_stmt 1
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
.LFE52:
	.size	is_tty, .-is_tty
	.section	.rodata
	.align	3
.LC17:
	.string	"PIPE LINKED MAX"
	.text
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB53:
	.loc 1 1047 36
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
	.loc 1 1048 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1050 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB46:
	.loc 1 1052 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1052 5
	j	.L289
.L294:
	.loc 1 1053 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1053 12
	bne	a5,zero,.L290
	.loc 1 1054 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 1054 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1054 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1056 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1056 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 1057 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1057 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1058 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1058 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1059 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1059 34
	sw	zero,96(a5)
	.loc 1 1060 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1060 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 1061 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1061 38
	li	a4,1
	sw	a4,116(a5)
	.loc 1 1062 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1062 41
	sw	zero,120(a5)
	.loc 1 1063 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 1065 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 1065 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 1066 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 1066 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 1066 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 1066 66
	ld	a4,0(a4)
	.loc 1 1066 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 1067 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 1067 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 1069 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 1069 15
	li	a5,31
	ble	a4,a5,.L301
	.loc 1 1070 17
	lla	a0,.LC17
	call	puts
.L292:
	.loc 1 1071 22
	j	.L292
.L290:
	.loc 1 1052 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L289:
	.loc 1 1052 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L294
	j	.L293
.L301:
	.loc 1 1075 13
	nop
.L293:
.LBE46:
.LBB47:
	.loc 1 1078 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 1078 5
	j	.L295
.L300:
	.loc 1 1079 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1079 12
	bne	a5,zero,.L296
	.loc 1 1080 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 1080 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1080 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1082 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1082 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 1083 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1083 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1084 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1084 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1086 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1086 34
	sw	zero,96(a5)
	.loc 1 1087 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1087 33
	ld	a4,-56(s0)
	sd	a4,104(a5)
	.loc 1 1088 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1088 39
	li	a4,1
	sw	a4,120(a5)
	.loc 1 1089 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1089 38
	sw	zero,116(a5)
	.loc 1 1090 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 1092 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 1092 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 1093 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 1093 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 1093 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 1093 66
	ld	a4,0(a4)
	.loc 1 1093 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 1094 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 1094 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 1096 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 1096 15
	li	a5,31
	ble	a4,a5,.L302
	.loc 1 1097 17
	lla	a0,.LC17
	call	puts
.L298:
	.loc 1 1098 22
	j	.L298
.L296:
	.loc 1 1078 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L295:
	.loc 1 1078 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L300
.LBE47:
	.loc 1 1105 1
	j	.L303
.L302:
.LBB48:
	.loc 1 1102 13
	nop
.L303:
.LBE48:
	.loc 1 1105 1
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
.LFE53:
	.size	pipe_open, .-pipe_open
	.section	.rodata
	.align	3
.LC18:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB54:
	.loc 1 1115 1
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
	.loc 1 1116 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1118 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1118 8
	bne	a5,zero,.L305
	.loc 1 1119 9
	lla	a0,.LC18
	call	panic
.L305:
	.loc 1 1122 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L306
	.loc 1 1122 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L307
.L306:
	.loc 1 1123 9
	lla	a0,.LC18
	call	panic
.L307:
	.loc 1 1125 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1125 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1127 7
	ld	a5,-32(s0)
	bne	a5,zero,.L309
	.loc 1 1128 9
	lla	a0,.LC18
	call	panic
	.loc 1 1131 11
	j	.L309
.L311:
	.loc 1 1132 8
	call	yield
.L309:
	.loc 1 1131 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1131 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1131 34
	bne	a4,a5,.L310
	.loc 1 1131 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1131 34 discriminator 1
	bne	a5,zero,.L311
.L310:
	.loc 1 1135 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1135 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1135 8
	bne	a4,a5,.L312
	.loc 1 1135 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1135 31 discriminator 1
	bne	a5,zero,.L312
	.loc 1 1136 16
	li	a5,0
	j	.L313
.L312:
	.loc 1 1140 18
	sw	zero,-36(s0)
.LBB49:
	.loc 1 1141 23
	sw	zero,-40(s0)
	.loc 1 1141 5
	j	.L314
.L317:
	.loc 1 1143 12
	call	yield
.L315:
	.loc 1 1142 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1142 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1142 38
	bne	a4,a5,.L316
	.loc 1 1142 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1142 38 discriminator 1
	bne	a5,zero,.L317
.L316:
	.loc 1 1147 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1147 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1147 12
	bne	a4,a5,.L318
	.loc 1 1147 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 1147 35 discriminator 1
	beq	a5,zero,.L321
.L318:
	.loc 1 1151 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1151 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 1151 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 1151 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 1151 17
	sb	a4,0(a5)
	.loc 1 1152 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1152 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 1155 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 1141 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L314:
	.loc 1 1141 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 1141 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L319
	.loc 1 1141 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 1141 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1141 36 discriminator 3
	bltu	a4,a5,.L315
	j	.L319
.L321:
	.loc 1 1148 13
	nop
.L319:
.LBE49:
	.loc 1 1159 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L313:
	.loc 1 1160 1
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
.LFE54:
	.size	piperead, .-piperead
	.section	.rodata
	.align	3
.LC19:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB55:
	.loc 1 1165 1
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
	.loc 1 1166 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1168 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1168 8
	bne	a5,zero,.L323
	.loc 1 1169 9
	lla	a0,.LC19
	call	panic
.L323:
	.loc 1 1172 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L324
	.loc 1 1172 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L325
.L324:
	.loc 1 1173 9
	lla	a0,.LC19
	call	panic
.L325:
	.loc 1 1175 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1175 19
	ld	a5,104(a5)
	sd	a5,-32(s0)
	.loc 1 1177 7
	ld	a5,-32(s0)
	bne	a5,zero,.L326
	.loc 1 1178 9
	lla	a0,.LC19
	call	panic
.L326:
.LBB50:
	.loc 1 1181 23
	sw	zero,-36(s0)
	.loc 1 1181 5
	j	.L327
.L330:
	.loc 1 1184 11
	call	yield
.L328:
	.loc 1 1183 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 1183 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 1183 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 1183 48
	li	a5,512
	bne	a4,a5,.L329
	.loc 1 1183 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1183 48 discriminator 1
	bne	a5,zero,.L330
.L329:
	.loc 1 1187 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 1187 10
	bne	a5,zero,.L331
	.loc 1 1189 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1189 30
	ble	a5,zero,.L332
	.loc 1 1189 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 1189 30
	j	.L334
.L332:
	.loc 1 1189 30 discriminator 2
	li	a5,-1
	.loc 1 1189 30
	j	.L334
.L331:
	.loc 1 1191 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 1191 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 1191 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 1191 44
	lbu	a4,0(a5)
	.loc 1 1191 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 1192 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 1192 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 1181 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L327:
	.loc 1 1181 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L328
.LBE50:
	.loc 1 1199 12
	lw	a5,-56(s0)
.L334:
	.loc 1 1200 1
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
.LFE55:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB56:
	.loc 1 1212 1
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
	.loc 1 1212 1
	mv	a5,sp
	mv	s1,a5
	.loc 1 1213 8
	ld	a5,-264(s0)
	beq	a5,zero,.L337
	.loc 1 1213 22 discriminator 2
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 1 1213 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L338
.L337:
	.loc 1 1213 41 discriminator 3
	li	a5,0
	.loc 1 1213 41 is_stmt 0
	j	.L339
.L338:
	.loc 1 1214 9 is_stmt 1
	lla	a1,.LC8
	ld	a0,-264(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 1214 8 discriminator 1
	bne	a5,zero,.L340
	.loc 1 1214 40 discriminator 1
	li	a5,0
	.loc 1 1214 40 is_stmt 0
	j	.L339
.L340:
	.loc 1 1217 15 is_stmt 1
	ld	a0,-264(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1217 28 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 1217 10 discriminator 1
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
	.loc 1 1218 5
	mv	a2,a5
	ld	a1,-264(s0)
	ld	a0,-144(s0)
	call	strncpy
	.loc 1 1221 11
	ld	a5,-144(s0)
	sd	a5,-152(s0)
	.loc 1 1222 11
	sd	zero,-104(s0)
	.loc 1 1223 17
	lla	a1,.LC8
	ld	a0,-152(s0)
	call	strtok
	sd	a0,-112(s0)
	.loc 1 1224 14
	li	a5,1
	sw	a5,-116(s0)
	.loc 1 1226 5
	addi	a4,s0,-256
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1228 11
	j	.L341
.L346:
.LBB51:
	.loc 1 1229 25
	lla	a1,.LC8
	li	a0,0
	call	strtok
	sd	a0,-160(s0)
	.loc 1 1230 12
	ld	a5,-160(s0)
	bne	a5,zero,.L342
	.loc 1 1232 18
	ld	a5,-112(s0)
	sd	a5,-104(s0)
	.loc 1 1233 13
	j	.L343
.L342:
	.loc 1 1236 15
	lhu	a5,-256(s0)
	.loc 1 1236 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L344
	.loc 1 1236 38 discriminator 1
	li	a5,0
	.loc 1 1236 38 is_stmt 0
	j	.L339
.L344:
	.loc 1 1237 30 is_stmt 1
	addi	a5,s0,-256
	ld	a1,-112(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 1238 12
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L345
	.loc 1 1238 36 discriminator 1
	li	a5,0
	.loc 1 1238 36 is_stmt 0
	j	.L339
.L345:
	.loc 1 1239 9 is_stmt 1
	addi	a4,s0,-256
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1240 13
	lw	a5,-164(s0)
	sw	a5,-116(s0)
	.loc 1 1241 13
	ld	a5,-160(s0)
	sd	a5,-112(s0)
.L341:
.LBE51:
	.loc 1 1228 12
	ld	a5,-112(s0)
	bne	a5,zero,.L346
.L343:
	.loc 1 1244 8
	ld	a5,-104(s0)
	bne	a5,zero,.L347
	.loc 1 1244 23 discriminator 1
	li	a5,0
	.loc 1 1244 23 is_stmt 0
	j	.L339
.L347:
	.loc 1 1245 18 is_stmt 1
	ld	a5,-272(s0)
	lw	a4,-116(s0)
	sw	a4,0(a5)
	.loc 1 1247 13
	ld	a0,-104(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-120(s0)
	.loc 1 1248 8
	lw	a5,-120(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L348
	.loc 1 1248 23 discriminator 1
	li	a5,14
	sw	a5,-120(s0)
.L348:
.LBB52:
	.loc 1 1249 14
	sw	zero,-124(s0)
	.loc 1 1249 5
	j	.L349
.L350:
	.loc 1 1249 46 discriminator 3
	lw	a5,-124(s0)
	ld	a4,-280(s0)
	add	a5,a4,a5
	.loc 1 1249 50 discriminator 3
	sb	zero,0(a5)
	.loc 1 1249 34 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L349:
	.loc 1 1249 23 discriminator 1
	lw	a5,-124(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L350
.LBE52:
	.loc 1 1250 5
	lw	a5,-120(s0)
	mv	a2,a5
	ld	a1,-104(s0)
	ld	a0,-280(s0)
	call	strncpy
	.loc 1 1251 12
	li	a5,1
.L339:
	mv	sp,s1
	.loc 1 1252 1
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
.LFE56:
	.size	path_parent_lookup_abs, .-path_parent_lookup_abs
	.align	1
	.type	alloc_inode_T_FILE, @function
alloc_inode_T_FILE:
.LFB57:
	.loc 1 1257 1
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
	.loc 1 1259 19
	li	a5,1
	sw	a5,-20(s0)
	.loc 1 1259 5
	j	.L353
.L356:
	.loc 1 1260 9
	addi	a4,s0,-112
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1261 15
	lhu	a5,-112(s0)
	.loc 1 1261 12
	bne	a5,zero,.L354
.LBB54:
	.loc 1 1264 13
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1265 23
	li	a5,2
	sh	a5,-200(s0)
	.loc 1 1266 24
	li	a5,1
	sh	a5,-194(s0)
	.loc 1 1267 23
	sw	zero,-192(s0)
	.loc 1 1268 23
	li	a5,420
	sw	a5,-188(s0)
	.loc 1 1268 39
	sh	zero,-184(s0)
	.loc 1 1268 51
	sh	zero,-182(s0)
	.loc 1 1268 94
	call	fs_now
	mv	a5,a0
	.loc 1 1268 92 discriminator 1
	sw	a5,-172(s0)
	.loc 1 1268 85 discriminator 1
	lw	a5,-172(s0)
	.loc 1 1268 79 discriminator 1
	sw	a5,-176(s0)
	.loc 1 1268 72 discriminator 1
	lw	a5,-176(s0)
	.loc 1 1268 66 discriminator 1
	sw	a5,-180(s0)
	.loc 1 1269 13
	addi	a4,s0,-200
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1270 20
	lw	a5,-20(s0)
	j	.L357
.L354:
.LBE54:
	.loc 1 1259 53 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L353:
	.loc 1 1259 39 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1259 34 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L356
.LBE53:
	.loc 1 1273 12
	li	a5,0
.L357:
	.loc 1 1274 1
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
.LFE57:
	.size	alloc_inode_T_FILE, .-alloc_inode_T_FILE
	.align	1
	.type	add_dirent, @function
add_dirent:
.LFB58:
	.loc 1 1279 1
	.cfi_startproc
	addi	sp,sp,-736
	.cfi_def_cfa_offset 736
	sd	ra,728(sp)
	sd	s0,720(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,736
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-736(s0)
	mv	a4,a2
	sw	a5,-724(s0)
	mv	a5,a4
	sw	a5,-728(s0)
	.loc 1 1280 8
	ld	a5,-736(s0)
	beq	a5,zero,.L359
	.loc 1 1280 22 discriminator 2
	ld	a5,-736(s0)
	lbu	a5,0(a5)
	.loc 1 1280 15 discriminator 2
	bne	a5,zero,.L360
.L359:
	.loc 1 1280 42 discriminator 3
	li	a5,-1
	.loc 1 1280 42 is_stmt 0
	j	.L375
.L360:
	.loc 1 1283 5 is_stmt 1
	addi	a4,s0,-184
	lw	a5,-724(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1284 12
	lhu	a5,-184(s0)
	.loc 1 1284 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L362
	.loc 1 1284 35 discriminator 1
	li	a5,-1
	.loc 1 1284 35 is_stmt 0
	j	.L375
.L362:
	.loc 1 1288 15 is_stmt 1
	lw	a5,-728(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 1288 13
	sh	a5,-200(s0)
.LBB55:
	.loc 1 1290 14
	sw	zero,-20(s0)
	.loc 1 1290 5
	j	.L363
.L364:
	.loc 1 1290 49 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-182(a5)
	.loc 1 1290 34 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L363:
	.loc 1 1290 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L364
.LBE55:
	.loc 1 1291 5
	addi	a5,s0,-200
	addi	a5,a5,2
	li	a2,14
	ld	a1,-736(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1294 14
	sw	zero,-24(s0)
	.loc 1 1295 11
	j	.L365
.L372:
.LBB56:
	.loc 1 1296 9
	lw	a4,-24(s0)
	addi	a5,s0,-184
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1297 24
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 1298 13
	li	a5,32
	sw	a5,-76(s0)
.LBB57:
	.loc 1 1299 18
	sw	zero,-28(s0)
	.loc 1 1299 9
	j	.L366
.L371:
	.loc 1 1300 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 1300 24
	lhu	a5,0(a5)
	.loc 1 1300 16
	bne	a5,zero,.L367
.LBB58:
	.loc 1 1301 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 1301 25
	lhu	a4,-200(s0)
	mv	t1,a4
	lhu	a4,-198(s0)
	mv	a7,a4
	lhu	a4,-196(s0)
	mv	a6,a4
	lhu	a4,-194(s0)
	mv	a0,a4
	lhu	a4,-192(s0)
	mv	a1,a4
	lhu	a4,-190(s0)
	mv	a2,a4
	lhu	a4,-188(s0)
	mv	a3,a4
	lhu	a4,-186(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 1303 26
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-80(s0)
	.loc 1 1304 37
	lw	a3,-80(s0)
	addi	a4,s0,-184
	lw	a5,-724(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1305 20
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L368
	.loc 1 1305 39 discriminator 1
	li	a5,-1
	.loc 1 1305 39 is_stmt 0
	j	.L375
.L368:
	.loc 1 1306 17 is_stmt 1
	lw	a5,-84(s0)
	ld	a1,-72(s0)
	mv	a0,a5
	call	write_block
	.loc 1 1309 43
	lw	a5,-176(s0)
	.loc 1 1309 26
	srliw	a5,a5,4
	sw	a5,-88(s0)
	.loc 1 1310 41
	lw	a5,-24(s0)
	srliw	a5,a5,4
	sext.w	a4,a5
	.loc 1 1310 78
	lw	a5,-28(s0)
	.loc 1 1310 26
	addw	a5,a4,a5
	sw	a5,-92(s0)
	.loc 1 1311 20
	lw	a5,-92(s0)
	mv	a4,a5
	lw	a5,-88(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bltu	a4,a5,.L369
.LBB59:
	.loc 1 1312 48
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sext.w	a5,a5
	.loc 1 1312 57
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 1312 30
	slliw	a5,a5,9
	sw	a5,-96(s0)
	.loc 1 1313 28
	lw	a5,-176(s0)
	.loc 1 1313 24
	lw	a4,-96(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L370
	.loc 1 1313 56 discriminator 1
	lw	a5,-96(s0)
	sw	a5,-176(s0)
.L370:
	.loc 1 1314 33
	call	fs_now
	mv	a5,a0
	.loc 1 1314 31 discriminator 1
	sw	a5,-160(s0)
	.loc 1 1315 21
	addi	a4,s0,-184
	lw	a5,-724(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
.L369:
.LBE59:
	.loc 1 1317 24
	li	a5,0
	j	.L375
.L367:
.LBE58:
	.loc 1 1299 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L366:
	.loc 1 1299 27 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-76(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L371
.LBE57:
	.loc 1 1320 13
	lw	a5,-24(s0)
	addiw	a5,a5,512
	sw	a5,-24(s0)
.L365:
.LBE56:
	.loc 1 1295 21
	lw	a5,-176(s0)
	.loc 1 1295 16
	lw	a4,-24(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L372
	.loc 1 1324 23
	lw	a5,-176(s0)
	.loc 1 1324 14
	srliw	a5,a5,4
	sw	a5,-32(s0)
	.loc 1 1325 29
	lwu	a5,-32(s0)
	slli	a5,a5,4
	.loc 1 1325 54
	srli	a5,a5,9
	.loc 1 1325 14
	sw	a5,-36(s0)
	.loc 1 1326 29
	lw	a5,-32(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 1326 14
	andi	a5,a5,496
	sw	a5,-40(s0)
	.loc 1 1327 25
	lw	a3,-36(s0)
	addi	a4,s0,-184
	lw	a5,-724(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 1328 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L373
	.loc 1 1328 27 discriminator 1
	li	a5,-1
	.loc 1 1328 27 is_stmt 0
	j	.L375
.L373:
	.loc 1 1331 5 is_stmt 1
	addi	a4,s0,-712
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1332 20
	addi	a5,s0,-712
	sd	a5,-56(s0)
	.loc 1 1333 19
	lw	a5,-40(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 1333 9
	slli	a5,a5,4
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 1333 45
	lhu	a4,-200(s0)
	mv	t1,a4
	lhu	a4,-198(s0)
	mv	a7,a4
	lhu	a4,-196(s0)
	mv	a6,a4
	lhu	a4,-194(s0)
	mv	a0,a4
	lhu	a4,-192(s0)
	mv	a1,a4
	lhu	a4,-190(s0)
	mv	a2,a4
	lhu	a4,-188(s0)
	mv	a3,a4
	lhu	a4,-186(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 1334 5
	addi	a4,s0,-712
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1336 35
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 1336 14
	slliw	a5,a5,9
	sw	a5,-60(s0)
	.loc 1 1337 12
	lw	a5,-176(s0)
	.loc 1 1337 8
	lw	a4,-60(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L374
	.loc 1 1337 40 discriminator 1
	lw	a5,-60(s0)
	sw	a5,-176(s0)
.L374:
	.loc 1 1338 17
	call	fs_now
	mv	a5,a0
	.loc 1 1338 15 discriminator 1
	sw	a5,-160(s0)
	.loc 1 1339 5
	addi	a4,s0,-184
	lw	a5,-724(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1340 12
	li	a5,0
.L375:
	.loc 1 1341 1
	mv	a0,a5
	ld	ra,728(sp)
	.cfi_restore 1
	ld	s0,720(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 736
	addi	sp,sp,736
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE58:
	.size	add_dirent, .-add_dirent
	.align	1
	.type	remove_dirent, @function
remove_dirent:
.LFB59:
	.loc 1 1345 1
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
	.loc 1 1347 5
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1348 12
	lhu	a5,-128(s0)
	.loc 1 1348 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L377
	.loc 1 1348 35 discriminator 1
	li	a5,-1
	.loc 1 1348 35 is_stmt 0
	j	.L385
.L377:
	.loc 1 1350 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1352 11
	j	.L379
.L384:
.LBB60:
	.loc 1 1353 9
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
	.loc 1 1353 9 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1354 24 is_stmt 1
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 1355 13
	li	a5,32
	sw	a5,-36(s0)
.LBB61:
	.loc 1 1356 18
	sw	zero,-24(s0)
	.loc 1 1356 9
	j	.L380
.L383:
	.loc 1 1357 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1357 22
	lhu	a5,0(a5)
	.loc 1 1357 16
	beq	a5,zero,.L386
	.loc 1 1358 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1358 34
	addi	a4,a5,2
	.loc 1 1358 13
	addi	a5,s0,-144
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 1359 29
	sb	zero,-130(s0)
	.loc 1 1360 17
	addi	a5,s0,-144
	li	a2,14
	ld	a1,-160(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 1360 16 discriminator 1
	bne	a5,zero,.L382
	.loc 1 1361 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1361 28
	sh	zero,0(a5)
	.loc 1 1362 17
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
	.loc 1 1362 17 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1363 29 is_stmt 1
	call	fs_now
	mv	a5,a0
	.loc 1 1363 27 discriminator 1
	sw	a5,-104(s0)
	.loc 1 1364 17
	addi	a4,s0,-128
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1365 24
	li	a5,0
	j	.L385
.L386:
	.loc 1 1357 34
	nop
.L382:
	.loc 1 1356 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L380:
	.loc 1 1356 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L383
.LBE61:
	.loc 1 1368 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L379:
.LBE60:
	.loc 1 1352 21
	lw	a5,-120(s0)
	.loc 1 1352 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L384
	.loc 1 1370 12
	li	a5,-1
.L385:
	.loc 1 1371 1
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
.LFE59:
	.size	remove_dirent, .-remove_dirent
	.align	1
	.type	build_abs_normalized, @function
build_abs_normalized:
.LFB60:
	.loc 1 1375 1
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
	.loc 1 1376 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1376 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1378 8
	ld	a5,-1128(s0)
	beq	a5,zero,.L388
	.loc 1 1378 21 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1378 14 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L388
	.loc 1 1379 9
	addi	a5,s0,-368
	li	a2,255
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1380 34
	sb	zero,-113(s0)
	j	.L389
.L388:
.LBB62:
	.loc 1 1383 26
	ld	a5,-80(s0)
	addi	a4,a5,880
	.loc 1 1383 9
	addi	a5,s0,-368
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1384 34
	sb	zero,-113(s0)
	.loc 1 1385 17
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1386 12
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L390
	.loc 1 1386 31 discriminator 1
	lbu	a5,-368(s0)
	.loc 1 1386 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L391
.L390:
	.loc 1 1387 16
	lw	a5,-84(s0)
	sext.w	a4,a5
	li	a5,254
	bgt	a4,a5,.L391
	.loc 1 1387 54 discriminator 1
	lw	a5,-84(s0)
	addiw	a4,a5,1
	sw	a4,-84(s0)
	.loc 1 1387 58 discriminator 1
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-336(a5)
	.loc 1 1387 75 discriminator 1
	lw	a5,-84(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-336(a5)
.L391:
	.loc 1 1389 12
	ld	a5,-1128(s0)
	beq	a5,zero,.L389
	.loc 1 1389 25 discriminator 1
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 1 1389 18 discriminator 1
	beq	a5,zero,.L389
	.loc 1 1389 67 discriminator 2
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1389 67 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1389 30 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-368
	mv	a2,a4
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncat
.L389:
.LBE62:
	.loc 1 1394 5
	addi	a4,s0,-368
	addi	a5,s0,-624
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 1395 24
	sb	zero,-369(s0)
	.loc 1 1396 17
	addi	a5,s0,-624
	sd	a5,-40(s0)
	.loc 1 1397 29
	addi	a5,s0,-624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1397 29 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1397 17 is_stmt 1 discriminator 1
	addi	a5,s0,-624
	add	a5,a5,a4
	sd	a5,-96(s0)
	.loc 1 1400 9
	sw	zero,-44(s0)
	.loc 1 1401 11
	j	.L392
.L394:
.LBB63:
	.loc 1 1402 28 discriminator 2
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L393:
	.loc 1 1402 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1402 19 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L394
	.loc 1 1403 13
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1403 12
	beq	a5,zero,.L421
	.loc 1 1404 19
	ld	a5,-40(s0)
	sd	a5,-104(s0)
	.loc 1 1405 15
	j	.L397
.L399:
	.loc 1 1405 34 discriminator 3
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L397:
	.loc 1 1405 16 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1405 19 discriminator 1
	beq	a5,zero,.L398
	.loc 1 1405 22 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 1405 19 discriminator 2
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L399
.L398:
	.loc 1 1406 21
	ld	a4,-40(s0)
	ld	a5,-104(s0)
	sub	a5,a4,a5
	.loc 1 1406 13
	sw	a5,-108(s0)
	.loc 1 1407 12
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L400
	.loc 1 1407 34 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1407 22 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L400
	.loc 1 1407 22 is_stmt 0
	j	.L392
.L400:
	.loc 1 1409 19 is_stmt 1
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L401
	.loc 1 1409 41 discriminator 1
	ld	a5,-104(s0)
	lbu	a5,0(a5)
	.loc 1 1409 29 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L401
	.loc 1 1409 64 discriminator 2
	ld	a5,-104(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1409 52 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L401
	.loc 1 1410 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	ble	a5,zero,.L392
	.loc 1 1410 33 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,-1
	sw	a5,-44(s0)
	.loc 1 1410 16
	j	.L392
.L401:
	.loc 1 1411 19
	lw	a5,-108(s0)
	sext.w	a5,a5
	ble	a5,zero,.L392
.LBB64:
	.loc 1 1412 17
	lw	a5,-108(s0)
	sw	a5,-48(s0)
	.loc 1 1413 16
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L403
	.loc 1 1413 37 discriminator 1
	li	a5,14
	sw	a5,-48(s0)
.L403:
.LBB65:
	.loc 1 1414 22
	sw	zero,-52(s0)
	.loc 1 1414 13
	j	.L404
.L405:
	.loc 1 1414 57 discriminator 3
	lw	a3,-52(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1414 38 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L404:
	.loc 1 1414 27 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L405
.LBE65:
.LBB66:
	.loc 1 1415 22
	sw	zero,-56(s0)
	.loc 1 1415 13
	j	.L406
.L407:
	.loc 1 1415 65 discriminator 3
	lw	a5,-56(s0)
	ld	a4,-104(s0)
	add	a5,a4,a5
	lbu	a3,0(a5)
	.loc 1 1415 54 discriminator 3
	lw	a2,-56(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	sb	a3,-1072(a5)
	.loc 1 1415 34 discriminator 3
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sw	a5,-56(s0)
.L406:
	.loc 1 1415 27 discriminator 1
	lw	a5,-56(s0)
	mv	a4,a5
	lw	a5,-48(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L407
.LBE66:
	.loc 1 1416 32
	lw	a3,-48(s0)
	lw	a4,-44(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 1 1417 16
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,30
	bgt	a4,a5,.L392
	.loc 1 1417 34 discriminator 1
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L392:
.LBE64:
.LBE63:
	.loc 1 1401 14
	ld	a4,-40(s0)
	ld	a5,-96(s0)
	bltu	a4,a5,.L393
	j	.L396
.L421:
.LBB67:
	.loc 1 1403 25
	nop
.L396:
.LBE67:
	.loc 1 1421 9
	sw	zero,-60(s0)
	.loc 1 1422 8
	ld	a5,-1120(s0)
	beq	a5,zero,.L409
	.loc 1 1422 27 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1422 23 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1422 30 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L409:
.LBB68:
	.loc 1 1423 14
	sw	zero,-64(s0)
	.loc 1 1423 5
	j	.L410
.L417:
.LBB69:
	.loc 1 1424 24
	lw	a5,-64(s0)
	sext.w	a5,a5
	snez	a5,a5
	andi	a5,a5,0xff
	sext.w	s1,a5
	.loc 1 1424 42
	addi	a3,s0,-1104
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	add	a5,a3,a5
	.loc 1 1424 30
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1424 13 discriminator 1
	addw	a5,s1,a5
	sw	a5,-112(s0)
	.loc 1 1425 13
	lw	a4,-60(s0)
	.loc 1 1425 25
	lw	a5,-112(s0)
	add	a5,a4,a5
	.loc 1 1425 12
	ld	a4,-1120(s0)
	bleu	a4,a5,.L422
	.loc 1 1426 12
	lw	a5,-64(s0)
	sext.w	a5,a5
	beq	a5,zero,.L413
	.loc 1 1426 23 discriminator 1
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1426 19 discriminator 1
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 1 1426 27 discriminator 1
	li	a4,47
	sb	a4,0(a5)
.L413:
.LBB70:
	.loc 1 1427 18
	sw	zero,-68(s0)
	.loc 1 1427 9
	j	.L414
.L416:
	.loc 1 1427 73 discriminator 4
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sw	a4,-60(s0)
	mv	a4,a5
	.loc 1 1427 69 discriminator 4
	ld	a5,-1112(s0)
	add	a3,a5,a4
	.loc 1 1427 87 discriminator 4
	lw	a2,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	lbu	a5,-1072(a5)
	.loc 1 1427 77 discriminator 4
	sb	a5,0(a3)
	.loc 1 1427 62 discriminator 4
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sw	a5,-68(s0)
.L414:
	.loc 1 1427 31 discriminator 1
	lw	a3,-68(s0)
	lw	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	lbu	a5,-1072(a5)
	.loc 1 1427 35 discriminator 1
	beq	a5,zero,.L415
	.loc 1 1427 38 discriminator 3
	lw	a4,-60(s0)
	.loc 1 1427 57 discriminator 3
	ld	a5,-1120(s0)
	addi	a5,a5,-1
	.loc 1 1427 35 discriminator 3
	bltu	a4,a5,.L416
.L415:
.LBE70:
.LBE69:
	.loc 1 1423 27 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L410:
	.loc 1 1423 19 discriminator 1
	lw	a5,-64(s0)
	mv	a4,a5
	lw	a5,-44(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L417
	j	.L412
.L422:
.LBB71:
	.loc 1 1425 42
	nop
.L412:
.LBE71:
.LBE68:
	.loc 1 1429 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L418
	.loc 1 1430 12
	ld	a4,-1120(s0)
	li	a5,1
	bleu	a4,a5,.L419
	.loc 1 1430 33 discriminator 1
	ld	a5,-1112(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 1430 42 discriminator 1
	ld	a5,-1112(s0)
	addi	a5,a5,1
	.loc 1 1430 45 discriminator 1
	sb	zero,0(a5)
	.loc 1 1435 1
	j	.L423
.L419:
	.loc 1 1431 17
	ld	a5,-1120(s0)
	beq	a5,zero,.L423
	.loc 1 1431 34 discriminator 1
	ld	a5,-1112(s0)
	sb	zero,0(a5)
	.loc 1 1435 1
	j	.L423
.L418:
	.loc 1 1433 12
	lw	a5,-60(s0)
	ld	a4,-1112(s0)
	add	a5,a4,a5
	.loc 1 1433 17
	sb	zero,0(a5)
.L423:
	.loc 1 1435 1
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
.LFE60:
	.size	build_abs_normalized, .-build_abs_normalized
	.align	1
	.globl	fs_mkdir
	.type	fs_mkdir, @function
fs_mkdir:
.LFB61:
	.loc 1 1439 1
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
	.loc 1 1442 5
	addi	a5,s0,-160
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1443 9
	addi	a5,s0,-160
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1443 8 discriminator 1
	bne	a5,zero,.L425
	.loc 1 1443 39 discriminator 1
	li	a5,-1
	.loc 1 1443 39 is_stmt 0
	j	.L444
.L425:
	.loc 1 1446 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1446 8 discriminator 1
	beq	a5,zero,.L427
	.loc 1 1446 39 discriminator 1
	li	a5,-1
	.loc 1 1446 39 is_stmt 0
	j	.L444
.L427:
.LBB72:
	.loc 1 1450 34 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1450 26
	j	.L428
.L429:
	.loc 1 1450 61 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1450 50 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L428:
	.loc 1 1450 39 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L429
.LBE72:
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
	bne	a5,zero,.L430
	.loc 1 1451 61 discriminator 1
	li	a5,-1
	.loc 1 1451 61 is_stmt 0
	j	.L444
.L430:
	.loc 1 1453 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1454 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1454 8 discriminator 1
	bne	a5,zero,.L431
	.loc 1 1454 51 discriminator 1
	li	a5,-1
	.loc 1 1454 51 is_stmt 0
	j	.L444
.L431:
	.loc 1 1455 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1455 8
	bne	a5,zero,.L432
	.loc 1 1455 33 discriminator 1
	li	a5,-1
	.loc 1 1455 33 is_stmt 0
	j	.L444
.L432:
	.loc 1 1459 14 is_stmt 1
	sw	zero,-24(s0)
.LBB73:
	.loc 1 1460 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1460 5
	j	.L433
.L436:
	.loc 1 1461 9
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1462 15
	lhu	a5,-360(s0)
	.loc 1 1462 12
	bne	a5,zero,.L434
	.loc 1 1462 34 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1462 39
	j	.L435
.L434:
	.loc 1 1460 44 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L433:
	.loc 1 1460 33 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1460 28 discriminator 1
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L436
.L435:
.LBE73:
	.loc 1 1464 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L437
	.loc 1 1464 23 discriminator 1
	li	a5,-1
	.loc 1 1464 23 is_stmt 0
	j	.L444
.L437:
	.loc 1 1465 25 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1466 15
	li	a5,1
	sh	a5,-448(s0)
	.loc 1 1466 35
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1466 50
	sw	zero,-440(s0)
	.loc 1 1466 68
	call	fs_now
	mv	a5,a0
	.loc 1 1466 66 discriminator 1
	sw	a5,-424(s0)
	.loc 1 1466 95 discriminator 1
	lw	a5,-424(s0)
	.loc 1 1466 89 discriminator 1
	sw	a5,-420(s0)
	.loc 1 1468 30
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1468 20
	lhu	a5,1008(a5)
	sh	a5,-30(s0)
	.loc 1 1469 28
	lw	a5,-164(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1470 22
	lw	a5,-424(s0)
	.loc 1 1470 16
	sw	a5,-428(s0)
	.loc 1 1470 46
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1470 59
	lhu	a5,1010(a5)
	.loc 1 1470 39
	sh	a5,-432(s0)
	.loc 1 1471 24
	lw	a5,-524(s0)
	.loc 1 1471 30
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1471 14
	beq	a5,zero,.L438
	.loc 1 1471 14 is_stmt 0 discriminator 1
	lhu	a5,-518(s0)
	j	.L439
.L438:
	.loc 1 1471 62 is_stmt 1 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1471 14 discriminator 2
	lhu	a5,1012(a5)
.L439:
	.loc 1 1471 14 is_stmt 0 discriminator 4
	sh	a5,-430(s0)
	.loc 1 1472 40 is_stmt 1
	lw	a5,-556(s0)
	sext.w	a5,a5
	beq	a5,zero,.L440
	.loc 1 1472 40 is_stmt 0 discriminator 1
	lw	a5,-556(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L441
.L440:
	.loc 1 1472 40 discriminator 2
	li	a5,493
.L441:
	.loc 1 1472 50 is_stmt 1 discriminator 4
	lhu	a4,-30(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1472 48 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1472 15 discriminator 4
	sw	a5,-436(s0)
	.loc 1 1473 16
	lw	a5,-524(s0)
	.loc 1 1473 22
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1473 8
	beq	a5,zero,.L442
	.loc 1 1473 37 discriminator 1
	lw	a5,-436(s0)
	.loc 1 1473 43 discriminator 1
	ori	a5,a5,1024
	sext.w	a5,a5
	sw	a5,-436(s0)
.L442:
	.loc 1 1474 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1476 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1476 8 discriminator 1
	beq	a5,zero,.L443
	.loc 1 1476 53 discriminator 1
	li	a5,-1
	.loc 1 1476 53 is_stmt 0
	j	.L444
.L443:
	.loc 1 1477 12 is_stmt 1
	li	a5,0
.L444:
	.loc 1 1478 1
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
.LFE61:
	.size	fs_mkdir, .-fs_mkdir
	.align	1
	.globl	fs_rmdir
	.type	fs_rmdir, @function
fs_rmdir:
.LFB62:
	.loc 1 1482 1
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
	.loc 1 1484 5
	addi	a5,s0,-184
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1485 9
	addi	a5,s0,-184
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1485 8 discriminator 1
	bne	a5,zero,.L446
	.loc 1 1485 39 discriminator 1
	li	a5,-1
	.loc 1 1485 39 is_stmt 0
	j	.L464
.L446:
	.loc 1 1487 21 is_stmt 1
	addi	a5,s0,-184
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 1488 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L448
	.loc 1 1488 27 discriminator 1
	li	a5,-1
	.loc 1 1488 27 is_stmt 0
	j	.L464
.L448:
	.loc 1 1489 23 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1490 11
	lhu	a5,-272(s0)
	.loc 1 1490 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L449
	.loc 1 1490 34 discriminator 1
	li	a5,-1
	.loc 1 1490 34 is_stmt 0
	j	.L464
.L449:
	.loc 1 1492 11 is_stmt 1
	lw	a5,-264(s0)
	.loc 1 1492 8
	beq	a5,zero,.L450
.LBB74:
	.loc 1 1494 18
	sw	zero,-20(s0)
	.loc 1 1494 29
	sw	zero,-24(s0)
	.loc 1 1495 15
	j	.L451
.L458:
.LBB75:
	.loc 1 1496 13
	lw	a4,-20(s0)
	addi	a5,s0,-272
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 1497 28
	lla	a5,block_buf
	sd	a5,-48(s0)
	.loc 1 1498 17
	li	a5,32
	sw	a5,-52(s0)
.LBB76:
	.loc 1 1499 21
	sw	zero,-28(s0)
	.loc 1 1499 13
	j	.L452
.L455:
	.loc 1 1499 46 discriminator 5
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1499 49 discriminator 5
	lhu	a5,0(a5)
	.loc 1 1499 43 discriminator 5
	beq	a5,zero,.L453
	.loc 1 1499 69 discriminator 2
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 1499 73
	j	.L454
.L453:
	.loc 1 1499 36 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L452:
	.loc 1 1499 26 discriminator 4
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-52(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L455
.L454:
.LBE76:
	.loc 1 1500 15
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L465
	.loc 1 1501 17
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L451:
.LBE75:
	.loc 1 1495 24
	lw	a5,-264(s0)
	.loc 1 1495 20
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L458
	j	.L457
.L465:
.LBB77:
	.loc 1 1500 29
	nop
.L457:
.LBE77:
	.loc 1 1503 12
	lw	a5,-24(s0)
	sext.w	a5,a5
	beq	a5,zero,.L450
	.loc 1 1503 33 discriminator 1
	li	a5,-1
	.loc 1 1503 33 is_stmt 0
	j	.L464
.L450:
.LBE74:
.LBB78:
	.loc 1 1506 51 is_stmt 1
	sw	zero,-32(s0)
	.loc 1 1506 43
	j	.L459
.L460:
	.loc 1 1506 78 discriminator 3
	lw	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-280(a5)
	.loc 1 1506 67 discriminator 3
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L459:
	.loc 1 1506 56 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L460
.LBE78:
	.loc 1 1507 10
	addi	a3,s0,-296
	addi	a4,s0,-276
	addi	a5,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1507 8 discriminator 1
	bne	a5,zero,.L461
	.loc 1 1507 61 discriminator 1
	li	a5,-1
	.loc 1 1507 61 is_stmt 0
	j	.L464
.L461:
	.loc 1 1509 25 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-384
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1510 10
	addi	a5,s0,-384
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1510 8 discriminator 1
	bne	a5,zero,.L462
	.loc 1 1510 52 discriminator 1
	li	a5,-1
	.loc 1 1510 52 is_stmt 0
	j	.L464
.L462:
	.loc 1 1511 9 is_stmt 1
	lw	a5,-276(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1511 8 discriminator 1
	beq	a5,zero,.L463
	.loc 1 1511 50 discriminator 1
	li	a5,-1
	.loc 1 1511 50 is_stmt 0
	j	.L464
.L463:
	.loc 1 1514 5 is_stmt 1
	addi	a4,s0,-272
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1516 25
	addi	a5,s0,-472
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1517 5
	addi	a4,s0,-472
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1518 12
	li	a5,0
.L464:
	.loc 1 1519 1
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
.LFE62:
	.size	fs_rmdir, .-fs_rmdir
	.align	1
	.globl	fs_unlink
	.type	fs_unlink, @function
fs_unlink:
.LFB63:
	.loc 1 1523 1
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
	.loc 1 1525 5
	addi	a5,s0,-176
	ld	a2,-568(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1526 9
	addi	a5,s0,-176
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1526 8 discriminator 1
	bne	a5,zero,.L467
	.loc 1 1526 39 discriminator 1
	li	a5,-1
	.loc 1 1526 39 is_stmt 0
	j	.L484
.L467:
	.loc 1 1528 21 is_stmt 1
	addi	a5,s0,-176
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-32(s0)
	.loc 1 1529 8
	lw	a5,-32(s0)
	sext.w	a5,a5
	bne	a5,zero,.L469
	.loc 1 1529 27 discriminator 1
	li	a5,-1
	.loc 1 1529 27 is_stmt 0
	j	.L484
.L469:
	.loc 1 1530 23 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1531 11
	lhu	a5,-264(s0)
	.loc 1 1531 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L470
	.loc 1 1531 35 discriminator 1
	li	a5,-1
	.loc 1 1531 35 is_stmt 0
	j	.L484
.L470:
.LBB79:
	.loc 1 1534 14 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1534 5
	j	.L471
.L477:
.LBB80:
	.loc 1 1535 19
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1535 12
	beq	a5,zero,.L485
	.loc 1 1536 33
	lla	a4,gProc
	lw	a5,-20(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1536 23
	addi	a5,a5,592
	sd	a5,-48(s0)
.LBB81:
	.loc 1 1537 18
	sw	zero,-24(s0)
	.loc 1 1537 9
	j	.L474
.L476:
	.loc 1 1538 19
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1538 16
	beq	a5,zero,.L475
	.loc 1 1538 28 discriminator 1
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1538 31 discriminator 1
	lw	a4,0(a5)
	.loc 1 1538 23 discriminator 1
	li	a5,3
	bne	a4,a5,.L475
	.loc 1 1538 54 discriminator 2
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1538 57 discriminator 2
	lw	a5,4(a5)
	.loc 1 1538 49 discriminator 2
	lw	a4,-32(s0)
	sext.w	a4,a4
	bne	a4,a5,.L475
	.loc 1 1539 24
	li	a5,-1
	j	.L484
.L475:
	.loc 1 1537 46 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L474:
	.loc 1 1537 27 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L476
	j	.L473
.L485:
.LBE81:
	.loc 1 1535 25
	nop
.L473:
.LBE80:
	.loc 1 1534 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L471:
	.loc 1 1534 25 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,63
	ble	a4,a5,.L477
.LBE79:
.LBB82:
	.loc 1 1544 51
	sw	zero,-28(s0)
	.loc 1 1544 43
	j	.L478
.L479:
	.loc 1 1544 78 discriminator 3
	lw	a5,-28(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-272(a5)
	.loc 1 1544 67 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L478:
	.loc 1 1544 56 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L479
.LBE82:
	.loc 1 1545 10
	addi	a3,s0,-288
	addi	a4,s0,-268
	addi	a5,s0,-176
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1545 8 discriminator 1
	bne	a5,zero,.L480
	.loc 1 1545 61 discriminator 1
	li	a5,-1
	.loc 1 1545 61 is_stmt 0
	j	.L484
.L480:
	.loc 1 1547 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-376
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1548 10
	addi	a5,s0,-376
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1548 8 discriminator 1
	bne	a5,zero,.L481
	.loc 1 1548 52 discriminator 1
	li	a5,-1
	.loc 1 1548 52 is_stmt 0
	j	.L484
.L481:
	.loc 1 1550 25 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-464
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1551 13
	lw	a5,-452(s0)
	.loc 1 1551 19
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1551 8
	beq	a5,zero,.L482
.LBB83:
	.loc 1 1552 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1552 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1553 17
	ld	a5,-40(s0)
	lhu	a5,1010(a5)
	.loc 1 1553 12
	beq	a5,zero,.L482
	.loc 1 1553 33 discriminator 1
	ld	a5,-40(s0)
	lhu	a4,1010(a5)
	.loc 1 1553 44 discriminator 1
	lhu	a5,-248(s0)
	.loc 1 1553 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L482
	.loc 1 1553 54 discriminator 2
	ld	a5,-40(s0)
	lhu	a4,1010(a5)
	.loc 1 1553 67 discriminator 2
	lhu	a5,-448(s0)
	.loc 1 1553 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L482
	.loc 1 1553 81 discriminator 3
	li	a5,-1
	.loc 1 1553 81 is_stmt 0
	j	.L484
.L482:
.LBE83:
	.loc 1 1555 9 is_stmt 1
	lw	a5,-268(s0)
	addi	a4,s0,-288
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1555 8 discriminator 1
	beq	a5,zero,.L483
	.loc 1 1555 50 discriminator 1
	li	a5,-1
	.loc 1 1555 50 is_stmt 0
	j	.L484
.L483:
	.loc 1 1558 5 is_stmt 1
	addi	a4,s0,-264
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1559 25
	addi	a5,s0,-552
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1560 5
	addi	a4,s0,-552
	lw	a5,-32(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1561 12
	li	a5,0
.L484:
	.loc 1 1562 1
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
.LFE63:
	.size	fs_unlink, .-fs_unlink
	.align	1
	.type	write_data_inode, @function
write_data_inode:
.LFB64:
	.loc 1 1566 1
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
	.loc 1 1567 14
	lw	a5,-56(s0)
	sw	a5,-20(s0)
	.loc 1 1567 36
	sw	zero,-24(s0)
	.loc 1 1567 60
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 1568 11
	j	.L487
.L491:
.LBB84:
	.loc 1 1569 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 1569 50
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 1570 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 1570 49
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L488
	.loc 1 1570 76 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L488:
	.loc 1 1571 29
	lw	a4,-40(s0)
	lw	a5,-52(s0)
	mv	a2,a4
	ld	a1,-64(s0)
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 1572 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L489
	.loc 1 1572 31 discriminator 1
	li	a5,-1
	.loc 1 1572 31 is_stmt 0
	j	.L490
.L489:
	.loc 1 1573 9 is_stmt 1
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1574 9
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	ld	a1,-32(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1575 9
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 1576 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 1576 31
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 1576 46
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L487:
.LBE84:
	.loc 1 1568 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L491
	.loc 1 1578 14
	ld	a5,-64(s0)
	lw	a4,-56(s0)
	sw	a4,8(a5)
	.loc 1 1578 34
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1578 32 discriminator 1
	ld	a5,-64(s0)
	sw	a4,24(a5)
	.loc 1 1578 44 discriminator 1
	lw	a5,-52(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1578 74 discriminator 2
	li	a5,0
.L490:
	.loc 1 1579 1
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
.LFE64:
	.size	write_data_inode, .-write_data_inode
	.align	1
	.globl	fs_symlink
	.type	fs_symlink, @function
fs_symlink:
.LFB65:
	.loc 1 1583 1
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
	.loc 1 1584 20
	addi	a5,s0,-160
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1585 9
	addi	a5,s0,-160
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1585 8 discriminator 1
	bne	a5,zero,.L493
	.loc 1 1585 39 discriminator 1
	li	a5,-1
	.loc 1 1585 39 is_stmt 0
	j	.L509
.L493:
	.loc 1 1586 9 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1586 8 discriminator 1
	beq	a5,zero,.L495
	.loc 1 1586 39 discriminator 1
	li	a5,-1
	.loc 1 1586 39 is_stmt 0
	j	.L509
.L495:
.LBB85:
	.loc 1 1588 51 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1588 43
	j	.L496
.L497:
	.loc 1 1588 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1588 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L496:
	.loc 1 1588 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L497
.LBE85:
	.loc 1 1589 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1589 8 discriminator 1
	bne	a5,zero,.L498
	.loc 1 1589 61 discriminator 1
	li	a5,-1
	.loc 1 1589 61 is_stmt 0
	j	.L509
.L498:
	.loc 1 1590 13 is_stmt 1
	lbu	a5,-184(s0)
	.loc 1 1590 8
	bne	a5,zero,.L499
	.loc 1 1590 33 discriminator 1
	li	a5,-1
	.loc 1 1590 33 is_stmt 0
	j	.L509
.L499:
	.loc 1 1592 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1593 10
	addi	a5,s0,-272
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1593 8 discriminator 1
	bne	a5,zero,.L500
	.loc 1 1593 51 discriminator 1
	li	a5,-1
	.loc 1 1593 51 is_stmt 0
	j	.L509
.L500:
	.loc 1 1596 32 is_stmt 1
	sw	zero,-24(s0)
.LBB86:
	.loc 1 1597 19
	li	a5,1
	sw	a5,-28(s0)
	.loc 1 1597 5
	j	.L501
.L504:
	.loc 1 1597 43 discriminator 5
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1597 67 discriminator 5
	lhu	a5,-360(s0)
	.loc 1 1597 64 discriminator 5
	bne	a5,zero,.L502
	.loc 1 1597 82 discriminator 2
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 1 1597 86
	j	.L503
.L502:
	.loc 1 1597 38 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L501:
	.loc 1 1597 28 discriminator 4
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1597 24 discriminator 4
	lw	a4,-28(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L504
.L503:
.LBE86:
	.loc 1 1598 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L505
	.loc 1 1598 23 discriminator 1
	li	a5,-1
	.loc 1 1598 23 is_stmt 0
	j	.L509
.L505:
	.loc 1 1599 23 is_stmt 1
	addi	a5,s0,-448
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1599 56 discriminator 1
	li	a5,3
	sh	a5,-448(s0)
	.loc 1 1599 76 discriminator 1
	li	a5,1
	sh	a5,-442(s0)
	.loc 1 1599 87 discriminator 1
	sw	zero,-440(s0)
	.loc 1 1599 100 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 1 1599 99 discriminator 2
	sw	a5,-424(s0)
	.loc 1 1599 121 discriminator 2
	lw	a5,-424(s0)
	.loc 1 1599 118 discriminator 2
	sw	a5,-420(s0)
	.loc 1 1599 129 discriminator 2
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1601 9
	lw	a5,-164(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-184
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1601 8 discriminator 1
	beq	a5,zero,.L506
	.loc 1 1601 53 discriminator 1
	li	a5,-1
	.loc 1 1601 53 is_stmt 0
	j	.L509
.L506:
	.loc 1 1603 21 is_stmt 1
	ld	a0,-696(s0)
	call	strlen
	mv	a5,a0
	.loc 1 1603 14 discriminator 1
	sw	a5,-32(s0)
	.loc 1 1603 40 discriminator 1
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,240
	bleu	a4,a5,.L507
	.loc 1 1603 58 discriminator 1
	li	a5,240
	sw	a5,-32(s0)
.L507:
	.loc 1 1604 23
	addi	a5,s0,-688
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1604 50 discriminator 1
	lw	a4,-32(s0)
	addi	a5,s0,-688
	mv	a2,a4
	ld	a1,-696(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1605 5
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1606 9
	lw	a3,-32(s0)
	addi	a2,s0,-688
	addi	a4,s0,-448
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_data_inode
	mv	a5,a0
	.loc 1 1606 8 discriminator 1
	beq	a5,zero,.L508
	.loc 1 1606 61 discriminator 1
	li	a5,-1
	.loc 1 1606 61 is_stmt 0
	j	.L509
.L508:
	.loc 1 1607 12 is_stmt 1
	li	a5,0
.L509:
	.loc 1 1608 1
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
.LFE65:
	.size	fs_symlink, .-fs_symlink
	.align	1
	.globl	fs_rename
	.type	fs_rename, @function
fs_rename:
.LFB66:
	.loc 1 1612 1
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
	.loc 1 1614 5
	addi	a5,s0,-160
	ld	a2,-696(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1615 5
	addi	a5,s0,-288
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1617 9
	addi	a4,s0,-288
	addi	a5,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1617 8 discriminator 1
	bne	a5,zero,.L511
	.loc 1 1617 45 discriminator 1
	li	a5,0
	.loc 1 1617 45 is_stmt 0
	j	.L528
.L511:
	.loc 1 1618 9 is_stmt 1
	addi	a5,s0,-160
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1618 8 discriminator 1
	bne	a5,zero,.L513
	.loc 1 1618 42 discriminator 1
	li	a5,-1
	.loc 1 1618 42 is_stmt 0
	j	.L528
.L513:
	.loc 1 1620 21 is_stmt 1
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1621 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L514
	.loc 1 1621 27 discriminator 1
	li	a5,-1
	.loc 1 1621 27 is_stmt 0
	j	.L528
.L514:
	.loc 1 1622 9 is_stmt 1
	addi	a5,s0,-288
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1622 8 discriminator 1
	beq	a5,zero,.L515
	.loc 1 1622 42 discriminator 1
	li	a5,-1
	.loc 1 1622 42 is_stmt 0
	j	.L528
.L515:
.LBB87:
	.loc 1 1625 13 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1625 5
	j	.L516
.L517:
	.loc 1 1625 42 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-296(a5)
	.loc 1 1625 54 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-312(a5)
	.loc 1 1625 29 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L516:
	.loc 1 1625 18 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L517
.LBE87:
	.loc 1 1626 10
	addi	a3,s0,-312
	addi	a4,s0,-292
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1626 8 discriminator 1
	bne	a5,zero,.L518
	.loc 1 1626 61 discriminator 1
	li	a5,-1
	.loc 1 1626 61 is_stmt 0
	j	.L528
.L518:
	.loc 1 1627 10 is_stmt 1
	addi	a3,s0,-328
	addi	a4,s0,-296
	addi	a5,s0,-288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1627 8 discriminator 1
	bne	a5,zero,.L519
	.loc 1 1627 62 discriminator 1
	li	a5,-1
	.loc 1 1627 62 is_stmt 0
	j	.L528
.L519:
	.loc 1 1628 14 is_stmt 1
	lbu	a5,-312(s0)
	.loc 1 1628 8
	beq	a5,zero,.L520
	.loc 1 1628 34 discriminator 2
	lbu	a5,-328(s0)
	.loc 1 1628 26 discriminator 2
	bne	a5,zero,.L521
.L520:
	.loc 1 1628 54 discriminator 3
	li	a5,-1
	.loc 1 1628 54 is_stmt 0
	j	.L528
.L521:
	.loc 1 1630 24 is_stmt 1
	lw	a5,-296(s0)
	addi	a4,s0,-416
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1631 12
	lhu	a5,-416(s0)
	.loc 1 1631 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L522
	.loc 1 1631 35 discriminator 1
	li	a5,-1
	.loc 1 1631 35 is_stmt 0
	j	.L528
.L522:
	.loc 1 1633 24 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-504
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1634 10
	addi	a5,s0,-504
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1634 8 discriminator 1
	bne	a5,zero,.L523
	.loc 1 1634 51 discriminator 1
	li	a5,-1
	.loc 1 1634 51 is_stmt 0
	j	.L528
.L523:
	.loc 1 1635 10 is_stmt 1
	addi	a5,s0,-416
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1635 8 discriminator 1
	bne	a5,zero,.L524
	.loc 1 1635 51 discriminator 1
	li	a5,-1
	.loc 1 1635 51 is_stmt 0
	j	.L528
.L524:
	.loc 1 1638 26 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-592
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1639 27
	addi	a4,s0,-680
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1640 14
	lw	a5,-580(s0)
	.loc 1 1640 20
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1640 8
	beq	a5,zero,.L525
.LBB88:
	.loc 1 1641 32
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1641 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1642 17
	ld	a5,-32(s0)
	lhu	a5,1010(a5)
	.loc 1 1642 12
	beq	a5,zero,.L525
	.loc 1 1642 33 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1010(a5)
	.loc 1 1642 48 discriminator 1
	lhu	a5,-664(s0)
	.loc 1 1642 28 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L525
	.loc 1 1642 58 discriminator 2
	ld	a5,-32(s0)
	lhu	a4,1010(a5)
	.loc 1 1642 72 discriminator 2
	lhu	a5,-576(s0)
	.loc 1 1642 13 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L525
	.loc 1 1642 86 discriminator 3
	li	a5,-1
	.loc 1 1642 86 is_stmt 0
	j	.L528
.L525:
.LBE88:
	.loc 1 1644 9 is_stmt 1
	lw	a5,-296(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-328
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1644 8 discriminator 1
	beq	a5,zero,.L526
	.loc 1 1644 50 discriminator 1
	li	a5,-1
	.loc 1 1644 50 is_stmt 0
	j	.L528
.L526:
	.loc 1 1645 9 is_stmt 1
	lw	a5,-292(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 1645 8 discriminator 1
	beq	a5,zero,.L527
	.loc 1 1645 47 discriminator 1
	li	a5,-1
	.loc 1 1645 47 is_stmt 0
	j	.L528
.L527:
	.loc 1 1646 12 is_stmt 1
	li	a5,0
.L528:
	.loc 1 1647 1
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
.LFE66:
	.size	fs_rename, .-fs_rename
	.align	1
	.globl	fs_link
	.type	fs_link, @function
fs_link:
.LFB67:
	.loc 1 1651 1
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
	.loc 1 1653 5
	addi	a5,s0,-152
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1654 5
	addi	a5,s0,-280
	ld	a2,-496(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1656 9
	addi	a5,s0,-280
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1656 8 discriminator 1
	beq	a5,zero,.L530
	.loc 1 1656 37 discriminator 2
	addi	a5,s0,-152
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1656 34 discriminator 1
	bne	a5,zero,.L531
.L530:
	.loc 1 1656 70 discriminator 3
	li	a5,-1
	.loc 1 1656 70 is_stmt 0
	j	.L542
.L531:
	.loc 1 1657 21 is_stmt 1
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1658 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L533
	.loc 1 1658 27 discriminator 1
	li	a5,-1
	.loc 1 1658 27 is_stmt 0
	j	.L542
.L533:
	.loc 1 1659 9 is_stmt 1
	addi	a5,s0,-280
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 1659 8 discriminator 1
	beq	a5,zero,.L534
	.loc 1 1659 42 discriminator 1
	li	a5,-1
	.loc 1 1659 42 is_stmt 0
	j	.L542
.L534:
	.loc 1 1661 23 is_stmt 1
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1662 11
	lhu	a5,-368(s0)
	.loc 1 1662 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L535
	.loc 1 1662 35 discriminator 1
	li	a5,-1
	.loc 1 1662 35 is_stmt 0
	j	.L542
.L535:
.LBB89:
	.loc 1 1664 52 is_stmt 1
	sw	zero,-20(s0)
	.loc 1 1664 43
	j	.L536
.L537:
	.loc 1 1664 79 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-376(a5)
	.loc 1 1664 68 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L536:
	.loc 1 1664 57 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L537
.LBE89:
	.loc 1 1665 10
	addi	a3,s0,-392
	addi	a4,s0,-372
	addi	a5,s0,-280
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1665 8 discriminator 1
	bne	a5,zero,.L538
	.loc 1 1665 64 discriminator 1
	li	a5,-1
	.loc 1 1665 64 is_stmt 0
	j	.L542
.L538:
	.loc 1 1666 13 is_stmt 1
	lbu	a5,-392(s0)
	.loc 1 1666 8
	bne	a5,zero,.L539
	.loc 1 1666 33 discriminator 1
	li	a5,-1
	.loc 1 1666 33 is_stmt 0
	j	.L542
.L539:
	.loc 1 1668 24 is_stmt 1
	lw	a5,-372(s0)
	addi	a4,s0,-480
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1669 10
	addi	a5,s0,-480
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1669 8 discriminator 1
	bne	a5,zero,.L540
	.loc 1 1669 51 discriminator 1
	li	a5,-1
	.loc 1 1669 51 is_stmt 0
	j	.L542
.L540:
	.loc 1 1671 9 is_stmt 1
	lw	a5,-372(s0)
	lw	a3,-24(s0)
	addi	a4,s0,-392
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1671 8 discriminator 1
	beq	a5,zero,.L541
	.loc 1 1671 53 discriminator 1
	li	a5,-1
	.loc 1 1671 53 is_stmt 0
	j	.L542
.L541:
	.loc 1 1673 7 is_stmt 1
	lhu	a5,-362(s0)
	.loc 1 1673 13
	addiw	a5,a5,1
	slli	a5,a5,48
	srli	a5,a5,48
	sh	a5,-362(s0)
	.loc 1 1674 16
	call	fs_now
	mv	a5,a0
	.loc 1 1674 14 discriminator 1
	sw	a5,-340(s0)
	.loc 1 1675 5
	addi	a4,s0,-368
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1676 12
	li	a5,0
.L542:
	.loc 1 1677 1
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
.LFE67:
	.size	fs_link, .-fs_link
	.align	1
	.globl	fs_stat
	.type	fs_stat, @function
fs_stat:
.LFB68:
	.loc 1 1680 1
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
	.loc 1 1681 8
	ld	a5,-256(s0)
	bne	a5,zero,.L544
	.loc 1 1681 21 discriminator 1
	li	a5,-1
	.loc 1 1681 21 is_stmt 0
	j	.L547
.L544:
	.loc 1 1682 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1683 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1684 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L546
	.loc 1 1684 23 discriminator 1
	li	a5,-1
	.loc 1 1684 23 is_stmt 0
	j	.L547
.L546:
	.loc 1 1685 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1686 18
	lhu	a4,-240(s0)
	.loc 1 1686 14
	ld	a5,-256(s0)
	sh	a4,0(a5)
	.loc 1 1686 39
	lhu	a4,-234(s0)
	.loc 1 1686 35
	ld	a5,-256(s0)
	sh	a4,2(a5)
	.loc 1 1686 60
	lw	a4,-232(s0)
	.loc 1 1686 56
	ld	a5,-256(s0)
	sw	a4,4(a5)
	.loc 1 1686 76
	ld	a5,-256(s0)
	lw	a4,-20(s0)
	sw	a4,8(a5)
	.loc 1 1687 18
	lw	a4,-228(s0)
	.loc 1 1687 14
	ld	a5,-256(s0)
	sw	a4,12(a5)
	.loc 1 1687 37
	lhu	a4,-224(s0)
	.loc 1 1687 33
	ld	a5,-256(s0)
	sh	a4,16(a5)
	.loc 1 1687 55
	lhu	a4,-222(s0)
	.loc 1 1687 51
	ld	a5,-256(s0)
	sh	a4,18(a5)
	.loc 1 1688 19
	lw	a4,-220(s0)
	.loc 1 1688 15
	ld	a5,-256(s0)
	sw	a4,20(a5)
	.loc 1 1688 41
	lw	a4,-216(s0)
	.loc 1 1688 37
	ld	a5,-256(s0)
	sw	a4,24(a5)
	.loc 1 1688 63
	lw	a4,-212(s0)
	.loc 1 1688 59
	ld	a5,-256(s0)
	sw	a4,28(a5)
	.loc 1 1689 12
	li	a5,0
.L547:
	.loc 1 1690 1
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
	.size	fs_stat, .-fs_stat
	.align	1
	.globl	fs_readlink
	.type	fs_readlink, @function
fs_readlink:
.LFB69:
	.loc 1 1693 1
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
	.loc 1 1694 8
	ld	a5,-384(s0)
	beq	a5,zero,.L549
	.loc 1 1694 14 discriminator 2
	lw	a5,-388(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L550
.L549:
	.loc 1 1694 36 discriminator 3
	li	a5,-1
	.loc 1 1694 36 is_stmt 0
	j	.L561
.L550:
	.loc 1 1695 20 is_stmt 1
	addi	a5,s0,-160
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB90:
	.loc 1 1696 51
	sw	zero,-20(s0)
	.loc 1 1696 43
	j	.L552
.L553:
	.loc 1 1696 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-168(a5)
	.loc 1 1696 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L552:
	.loc 1 1696 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L553
.LBE90:
	.loc 1 1697 10
	addi	a3,s0,-184
	addi	a4,s0,-164
	addi	a5,s0,-160
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1697 8 discriminator 1
	bne	a5,zero,.L554
	.loc 1 1697 61 discriminator 1
	li	a5,-1
	.loc 1 1697 61 is_stmt 0
	j	.L561
.L554:
	.loc 1 1698 24 is_stmt 1
	lw	a5,-164(s0)
	addi	a4,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1698 57 discriminator 1
	lhu	a5,-272(s0)
	.loc 1 1698 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L555
	.loc 1 1698 80 discriminator 1
	li	a5,-1
	.loc 1 1698 80 is_stmt 0
	j	.L561
.L555:
	.loc 1 1699 21 is_stmt 1
	addi	a4,s0,-184
	addi	a5,s0,-272
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 1699 48 discriminator 1
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L556
	.loc 1 1699 63 discriminator 1
	li	a5,-1
	.loc 1 1699 63 is_stmt 0
	j	.L561
.L556:
	.loc 1 1700 23 is_stmt 1
	addi	a4,s0,-360
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1701 11
	lhu	a5,-360(s0)
	.loc 1 1701 8
	sext.w	a4,a5
	li	a5,3
	beq	a4,a5,.L557
	.loc 1 1701 38 discriminator 1
	li	a5,-1
	.loc 1 1701 38 is_stmt 0
	j	.L561
.L557:
	.loc 1 1702 15 is_stmt 1
	lw	a5,-352(s0)
	.loc 1 1702 9
	sw	a5,-24(s0)
	.loc 1 1702 25
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-388(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	ble	a4,a5,.L558
	.loc 1 1702 39 discriminator 1
	lw	a5,-388(s0)
	sw	a5,-24(s0)
.L558:
	.loc 1 1702 51 discriminator 3
	lw	a5,-24(s0)
	sext.w	a5,a5
	bge	a5,zero,.L559
	.loc 1 1702 61 discriminator 4
	sw	zero,-24(s0)
.L559:
	.loc 1 1703 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	ble	a5,zero,.L560
	.loc 1 1703 16 discriminator 1
	lw	a4,-24(s0)
	addi	a5,s0,-360
	mv	a3,a4
	ld	a2,-384(s0)
	li	a1,0
	mv	a0,a5
	call	read_data
.L560:
	.loc 1 1704 12
	lw	a5,-24(s0)
.L561:
	.loc 1 1705 1
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
.LFE69:
	.size	fs_readlink, .-fs_readlink
	.align	1
	.globl	fs_lstat
	.type	fs_lstat, @function
fs_lstat:
.LFB70:
	.loc 1 1708 1
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
	.loc 1 1709 8
	ld	a5,-368(s0)
	bne	a5,zero,.L563
	.loc 1 1709 21 discriminator 1
	li	a5,-1
	.loc 1 1709 21 is_stmt 0
	j	.L570
.L563:
	.loc 1 1710 20 is_stmt 1
	addi	a5,s0,-152
	ld	a2,-360(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBB91:
	.loc 1 1711 51
	sw	zero,-20(s0)
	.loc 1 1711 43
	j	.L565
.L566:
	.loc 1 1711 78 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-160(a5)
	.loc 1 1711 67 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L565:
	.loc 1 1711 56 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L566
.LBE91:
	.loc 1 1712 10
	addi	a3,s0,-176
	addi	a4,s0,-156
	addi	a5,s0,-152
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1712 8 discriminator 1
	bne	a5,zero,.L567
	.loc 1 1712 61 discriminator 1
	li	a5,-1
	.loc 1 1712 61 is_stmt 0
	j	.L570
.L567:
	.loc 1 1713 24 is_stmt 1
	lw	a5,-156(s0)
	addi	a4,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1713 57 discriminator 1
	lhu	a5,-264(s0)
	.loc 1 1713 53 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L568
	.loc 1 1713 80 discriminator 1
	li	a5,-1
	.loc 1 1713 80 is_stmt 0
	j	.L570
.L568:
	.loc 1 1714 21 is_stmt 1
	addi	a4,s0,-176
	addi	a5,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1714 48 discriminator 1
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L569
	.loc 1 1714 63 discriminator 1
	li	a5,-1
	.loc 1 1714 63 is_stmt 0
	j	.L570
.L569:
	.loc 1 1715 23 is_stmt 1
	addi	a4,s0,-352
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1716 18
	lhu	a4,-352(s0)
	.loc 1 1716 14
	ld	a5,-368(s0)
	sh	a4,0(a5)
	.loc 1 1716 39
	lhu	a4,-346(s0)
	.loc 1 1716 35
	ld	a5,-368(s0)
	sh	a4,2(a5)
	.loc 1 1716 60
	lw	a4,-344(s0)
	.loc 1 1716 56
	ld	a5,-368(s0)
	sw	a4,4(a5)
	.loc 1 1716 76
	ld	a5,-368(s0)
	lw	a4,-24(s0)
	sw	a4,8(a5)
	.loc 1 1717 18
	lw	a4,-340(s0)
	.loc 1 1717 14
	ld	a5,-368(s0)
	sw	a4,12(a5)
	.loc 1 1717 37
	lhu	a4,-336(s0)
	.loc 1 1717 33
	ld	a5,-368(s0)
	sh	a4,16(a5)
	.loc 1 1717 55
	lhu	a4,-334(s0)
	.loc 1 1717 51
	ld	a5,-368(s0)
	sh	a4,18(a5)
	.loc 1 1718 19
	lw	a4,-332(s0)
	.loc 1 1718 15
	ld	a5,-368(s0)
	sw	a4,20(a5)
	.loc 1 1718 41
	lw	a4,-328(s0)
	.loc 1 1718 37
	ld	a5,-368(s0)
	sw	a4,24(a5)
	.loc 1 1718 63
	lw	a4,-324(s0)
	.loc 1 1718 59
	ld	a5,-368(s0)
	sw	a4,28(a5)
	.loc 1 1719 12
	li	a5,0
.L570:
	.loc 1 1720 1
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
.LFE70:
	.size	fs_lstat, .-fs_lstat
	.align	1
	.globl	fs_chmod
	.type	fs_chmod, @function
fs_chmod:
.LFB71:
	.loc 1 1723 1
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
	.loc 1 1724 20
	addi	a5,s0,-160
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1725 21
	addi	a5,s0,-160
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1726 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L572
	.loc 1 1726 23 discriminator 1
	li	a5,-1
	.loc 1 1726 23 is_stmt 0
	j	.L575
.L572:
	.loc 1 1727 23 is_stmt 1
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1729 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1729 18
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 1730 12
	ld	a5,-32(s0)
	lhu	a5,1010(a5)
	.loc 1 1730 8
	beq	a5,zero,.L574
	.loc 1 1730 27 discriminator 1
	ld	a5,-32(s0)
	lhu	a4,1010(a5)
	.loc 1 1730 38 discriminator 1
	lhu	a5,-232(s0)
	.loc 1 1730 9 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L574
	.loc 1 1730 52 discriminator 2
	li	a5,-1
	.loc 1 1730 52 is_stmt 0
	j	.L575
.L574:
	.loc 1 1731 20 is_stmt 1
	lw	a5,-268(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1731 13
	sw	a5,-236(s0)
	.loc 1 1731 40
	call	fs_now
	mv	a5,a0
	.loc 1 1731 38 discriminator 1
	sw	a5,-220(s0)
	.loc 1 1732 5
	addi	a4,s0,-248
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1733 12
	li	a5,0
.L575:
	.loc 1 1734 1
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
.LFE71:
	.size	fs_chmod, .-fs_chmod
	.align	1
	.globl	fs_chown
	.type	fs_chown, @function
fs_chown:
.LFB72:
	.loc 1 1737 1
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
	.loc 1 1738 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1739 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1740 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L577
	.loc 1 1740 23 discriminator 1
	li	a5,-1
	.loc 1 1740 23 is_stmt 0
	j	.L580
.L577:
	.loc 1 1741 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1743 14
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1743 27
	lhu	a5,1010(a5)
	.loc 1 1743 8
	beq	a5,zero,.L579
	.loc 1 1743 46 discriminator 1
	li	a5,-1
	.loc 1 1743 46 is_stmt 0
	j	.L580
.L579:
	.loc 1 1744 12 is_stmt 1
	lhu	a5,-250(s0)
	sh	a5,-224(s0)
	.loc 1 1744 26
	lhu	a5,-252(s0)
	sh	a5,-222(s0)
	.loc 1 1744 44
	call	fs_now
	mv	a5,a0
	.loc 1 1744 42 discriminator 1
	sw	a5,-212(s0)
	.loc 1 1745 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1746 12
	li	a5,0
.L580:
	.loc 1 1747 1
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
.LFE72:
	.size	fs_chown, .-fs_chown
	.align	1
	.globl	fs_utimes
	.type	fs_utimes, @function
fs_utimes:
.LFB73:
	.loc 1 1750 1
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
	.loc 1 1751 20
	addi	a5,s0,-152
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 1752 21
	addi	a5,s0,-152
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 1753 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L582
	.loc 1 1753 23 discriminator 1
	li	a5,-1
	.loc 1 1753 23 is_stmt 0
	j	.L588
.L582:
	.loc 1 1754 23 is_stmt 1
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1755 20
	call	fs_now
	mv	a5,a0
	sw	a5,-24(s0)
	.loc 1 1756 45
	lw	a5,-252(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L584
	.loc 1 1756 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L585
.L584:
	.loc 1 1756 45 discriminator 2
	lw	a5,-252(s0)
.L585:
	.loc 1 1756 14 is_stmt 1 discriminator 4
	sw	a5,-220(s0)
	.loc 1 1757 45
	lw	a5,-256(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L586
	.loc 1 1757 45 is_stmt 0 discriminator 1
	lw	a5,-24(s0)
	j	.L587
.L586:
	.loc 1 1757 45 discriminator 2
	lw	a5,-256(s0)
.L587:
	.loc 1 1757 14 is_stmt 1 discriminator 4
	sw	a5,-216(s0)
	.loc 1 1758 14
	lw	a5,-24(s0)
	sw	a5,-212(s0)
	.loc 1 1759 5
	addi	a4,s0,-240
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1760 12
	li	a5,0
.L588:
	.loc 1 1761 1
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
.LFE73:
	.size	fs_utimes, .-fs_utimes
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB74:
	.loc 1 1762 31
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
	.loc 1 1764 12
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 1765 1
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
.LFE74:
	.size	fs_open, .-fs_open
	.section	.rodata
	.align	3
.LC20:
	.string	"/dev/tty"
	.text
	.align	1
	.globl	fs_open2
	.type	fs_open2, @function
fs_open2:
.LFB75:
	.loc 1 1768 53
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
	.loc 1 1769 32
	call	get_current_file_table
	sd	a0,-72(s0)
	.loc 1 1771 8
	ld	a5,-456(s0)
	beq	a5,zero,.L592
	.loc 1 1771 22 discriminator 1
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1771 15 discriminator 1
	beq	a5,zero,.L592
	.loc 1 1771 42 discriminator 2
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 1 1771 34 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L593
	.loc 1 1771 58 discriminator 3
	ld	a5,-456(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 1771 51 discriminator 3
	bne	a5,zero,.L593
.L592:
.LBB92:
	.loc 1 1772 31
	lla	a5,gActiveProc
	lw	a5,0(a5)
	.loc 1 1772 22
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	sd	a5,-80(s0)
	.loc 1 1773 53
	ld	a5,-80(s0)
	addi	a4,a5,880
	.loc 1 1773 9
	addi	a5,s0,-224
	mv	a2,a4
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.LBE92:
	.loc 1 1771 70
	j	.L594
.L593:
	.loc 1 1775 9
	addi	a5,s0,-224
	ld	a2,-456(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.L594:
	.loc 1 1779 9
	addi	a5,s0,-224
	lla	a1,.LC20
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1779 8 discriminator 1
	bne	a5,zero,.L595
.LBB93:
	.loc 1 1780 18
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 1780 9
	j	.L596
.L599:
	.loc 1 1781 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1781 16
	bne	a5,zero,.L597
	.loc 1 1782 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1782 33
	call	new_file_table
	mv	a5,a0
	.loc 1 1782 31 discriminator 1
	sd	a5,0(s1)
	.loc 1 1783 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1783 37
	li	a4,5
	sw	a4,0(a5)
	.loc 1 1784 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1784 37
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1785 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1785 37
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 1786 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1786 36
	sw	zero,96(a5)
	.loc 1 1787 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1787 42
	sw	zero,116(a5)
	.loc 1 1788 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1788 43
	sw	zero,120(a5)
	.loc 1 1789 27
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1789 39
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1790 24
	lw	a5,-36(s0)
	j	.L629
.L597:
	.loc 1 1780 46 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L596:
	.loc 1 1780 27 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L599
.LBE93:
	.loc 1 1793 16
	li	a5,-1
	j	.L629
.L595:
	.loc 1 1796 21
	addi	a5,s0,-224
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-40(s0)
	.loc 1 1798 9
	sw	zero,-44(s0)
	.loc 1 1800 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L600
	.loc 1 1802 19
	lw	a5,-460(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1802 12
	beq	a5,zero,.L601
.LBB94:
.LBB95:
	.loc 1 1806 22
	sw	zero,-48(s0)
	.loc 1 1806 13
	j	.L602
.L603:
	.loc 1 1806 49 discriminator 3
	lw	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-304(a5)
	.loc 1 1806 38 discriminator 3
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sw	a5,-48(s0)
.L602:
	.loc 1 1806 27 discriminator 1
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L603
.LBE95:
	.loc 1 1807 18
	addi	a3,s0,-336
	addi	a4,s0,-316
	addi	a5,s0,-224
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1807 16 discriminator 1
	bne	a5,zero,.L604
	.loc 1 1808 24
	li	a5,-1
	j	.L629
.L604:
	.loc 1 1810 33
	call	alloc_inode_T_FILE
	mv	a5,a0
	sw	a5,-84(s0)
	.loc 1 1811 16
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L606
	.loc 1 1811 39 discriminator 1
	li	a5,-1
	.loc 1 1811 39 is_stmt 0
	j	.L629
.L606:
	.loc 1 1812 17 is_stmt 1
	lw	a5,-316(s0)
	lw	a3,-84(s0)
	addi	a4,s0,-336
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1812 16 discriminator 1
	beq	a5,zero,.L607
	.loc 1 1812 65 discriminator 1
	li	a5,-1
	.loc 1 1812 65 is_stmt 0
	j	.L629
.L607:
	.loc 1 1813 18 is_stmt 1
	lw	a5,-84(s0)
	sw	a5,-40(s0)
	.loc 1 1814 13
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1818 38
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1818 28
	lhu	a5,1008(a5)
	sh	a5,-86(s0)
.LBB96:
	.loc 1 1820 59
	sw	zero,-52(s0)
	.loc 1 1820 51
	j	.L608
.L609:
	.loc 1 1820 91 discriminator 3
	lw	a5,-52(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-328(a5)
	.loc 1 1820 78 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sw	a5,-52(s0)
.L608:
	.loc 1 1820 66 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L609
.LBE96:
	.loc 1 1821 33
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1821 22
	lhu	a5,1012(a5)
	sh	a5,-54(s0)
	.loc 1 1822 17
	addi	a3,s0,-360
	addi	a4,s0,-340
	addi	a5,s0,-224
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1822 16 discriminator 1
	beq	a5,zero,.L610
.LBB97:
	.loc 1 1823 40
	lw	a5,-340(s0)
	addi	a4,s0,-448
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1824 28
	lw	a5,-436(s0)
	.loc 1 1824 34
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1824 20
	beq	a5,zero,.L610
	.loc 1 1824 49 discriminator 1
	lhu	a5,-430(s0)
	sh	a5,-54(s0)
.L610:
.LBE97:
	.loc 1 1826 27
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1826 40
	lhu	a5,1010(a5)
	.loc 1 1826 20
	sh	a5,-296(s0)
	.loc 1 1827 20
	lhu	a5,-54(s0)
	sh	a5,-294(s0)
	.loc 1 1828 30
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 1 1828 54
	beq	a5,zero,.L612
	.loc 1 1828 54 is_stmt 0 discriminator 1
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L613
.L612:
	.loc 1 1828 54 discriminator 2
	li	a5,420
.L613:
	.loc 1 1828 64 is_stmt 1 discriminator 4
	lhu	a4,-86(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 1828 62 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1828 21 discriminator 4
	sw	a5,-300(s0)
	.loc 1 1829 46
	call	fs_now
	mv	a5,a0
	.loc 1 1829 44 discriminator 1
	sw	a5,-284(s0)
	.loc 1 1829 37 discriminator 1
	lw	a5,-284(s0)
	.loc 1 1829 33 discriminator 1
	sw	a5,-288(s0)
	.loc 1 1829 26 discriminator 1
	lw	a5,-288(s0)
	.loc 1 1829 22 discriminator 1
	sw	a5,-292(s0)
	.loc 1 1830 13
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1831 25
	li	a5,1
	sw	a5,-44(s0)
.LBE94:
	j	.L614
.L601:
	.loc 1 1833 20
	li	a5,-1
	j	.L629
.L600:
	.loc 1 1836 9
	addi	a4,s0,-312
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L614:
	.loc 1 1839 11
	lhu	a5,-312(s0)
	.loc 1 1839 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L615
	.loc 1 1839 32 discriminator 1
	lhu	a5,-312(s0)
	.loc 1 1839 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L615
	.loc 1 1839 55 discriminator 2
	li	a5,-1
	.loc 1 1839 55 is_stmt 0
	j	.L629
.L615:
	.loc 1 1842 11 is_stmt 1
	lhu	a5,-312(s0)
	.loc 1 1842 8
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L616
.LBB98:
	.loc 1 1843 13
	sw	zero,-60(s0)
	.loc 1 1844 12
	lw	a5,-460(s0)
	sext.w	a5,a5
	bne	a5,zero,.L617
	.loc 1 1844 37 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,4
	sw	a5,-60(s0)
.L617:
	.loc 1 1845 19
	lw	a5,-460(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1845 12
	beq	a5,zero,.L618
	.loc 1 1845 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,2
	sw	a5,-60(s0)
.L618:
	.loc 1 1846 19
	lw	a5,-460(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 1846 12
	beq	a5,zero,.L619
	.loc 1 1846 36 discriminator 1
	lw	a5,-60(s0)
	ori	a5,a5,6
	sw	a5,-60(s0)
.L619:
	.loc 1 1849 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L620
	.loc 1 1850 18
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L621
	.loc 1 1850 18 is_stmt 0 discriminator 1
	lw	a5,-60(s0)
	j	.L622
.L621:
	.loc 1 1850 18 discriminator 2
	li	a5,4
.L622:
	.loc 1 1850 18 discriminator 4
	addi	a4,s0,-312
	mv	a1,a5
	mv	a0,a4
	call	check_perm
	mv	a5,a0
	.loc 1 1850 16 is_stmt 1 discriminator 1
	bne	a5,zero,.L620
	.loc 1 1850 64 discriminator 5
	li	a5,-1
	.loc 1 1850 64 is_stmt 0
	j	.L629
.L616:
.LBE98:
	.loc 1 1852 18 is_stmt 1
	lhu	a5,-312(s0)
	.loc 1 1852 15
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L620
	.loc 1 1853 14
	addi	a5,s0,-312
	li	a1,5
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1853 12 discriminator 1
	bne	a5,zero,.L620
	.loc 1 1853 53 discriminator 1
	li	a5,-1
	.loc 1 1853 53 is_stmt 0
	j	.L629
.L620:
.LBB99:
	.loc 1 1856 14 is_stmt 1
	li	a5,3
	sw	a5,-64(s0)
	.loc 1 1856 5
	j	.L623
.L628:
	.loc 1 1857 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1857 12
	bne	a5,zero,.L624
	.loc 1 1858 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	s1,a4,a5
	.loc 1 1858 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1858 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1860 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1860 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 1861 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1861 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 1862 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1862 34
	lw	a4,-40(s0)
	sw	a4,4(a5)
	.loc 1 1863 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1863 34
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
	.loc 1 1864 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1864 34
	sw	zero,96(a5)
	.loc 1 1865 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1865 40
	sw	zero,116(a5)
	.loc 1 1866 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1866 41
	sw	zero,120(a5)
	.loc 1 1867 23
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1867 35
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 1 1870 24
	lw	a5,-460(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1870 16
	beq	a5,zero,.L625
	.loc 1 1870 48 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1870 56 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1870 35 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L625
.LBB100:
	.loc 1 1871 52
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1871 17
	addi	a4,a5,8
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 1872 32
	call	fs_now
	mv	a5,a0
	sw	a5,-92(s0)
	.loc 1 1873 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1873 42
	lw	a4,-92(s0)
	sw	a4,32(a5)
	.loc 1 1874 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1874 42
	lw	a4,-92(s0)
	sw	a4,36(a5)
	.loc 1 1875 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1875 42
	lw	a4,-92(s0)
	sw	a4,28(a5)
	.loc 1 1876 46
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1876 35
	addi	a4,a5,8
	.loc 1 1876 17
	lw	a5,-40(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1877 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1877 36
	sw	zero,96(a5)
.L625:
.LBE100:
	.loc 1 1880 24
	lw	a5,-460(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1880 16
	beq	a5,zero,.L626
	.loc 1 1880 49 discriminator 1
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1880 57 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1880 36 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L626
	.loc 1 1881 48
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 1881 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a3,-72(s0)
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 1 1881 56
	lw	a4,16(a4)
	.loc 1 1881 36
	sw	a4,96(a5)
.L626:
	.loc 1 1884 16
	lw	a5,-44(s0)
	sext.w	a5,a5
	beq	a5,zero,.L627
	.loc 1 1885 27
	lw	a5,-64(s0)
	slli	a5,a5,3
	ld	a4,-72(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1885 36
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
.L627:
	.loc 1 1887 20
	lw	a5,-64(s0)
	j	.L629
.L624:
	.loc 1 1856 42 discriminator 2
	lw	a5,-64(s0)
	addiw	a5,a5,1
	sw	a5,-64(s0)
.L623:
	.loc 1 1856 23 discriminator 1
	lw	a5,-64(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L628
.LBE99:
	.loc 1 1890 12
	li	a5,-1
.L629:
	.loc 1 1891 1
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
.LFE75:
	.size	fs_open2, .-fs_open2
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB76:
	.loc 1 1895 50
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
	.loc 1 1896 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1898 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1898 7
	bne	a5,zero,.L631
	.loc 1 1899 16
	li	a5,-1
	j	.L632
.L631:
	.loc 1 1902 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1903 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L633
	.loc 1 1903 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L634
.L633:
	.loc 1 1904 16
	li	a5,-1
	j	.L632
.L634:
	.loc 1 1906 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1906 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1907 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 1907 41
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1907 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 1908 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L635
	.loc 1 1908 32 discriminator 1
	li	a5,0
	.loc 1 1908 32 is_stmt 0
	j	.L632
.L635:
	.loc 1 1910 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L636
	mv	a5,a4
.L636:
	.loc 1 1910 14
	sw	a5,-48(s0)
	.loc 1 1911 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,96(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 1912 6
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 1912 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 1914 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1914 18 discriminator 1
	ld	a5,-40(s0)
	sw	a4,28(a5)
	.loc 1 1915 5
	ld	a5,-40(s0)
	lw	a4,4(a5)
	.loc 1 1915 26
	ld	a5,-40(s0)
	addi	a5,a5,8
	.loc 1 1915 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1916 12
	lw	a5,-48(s0)
.L632:
	.loc 1 1917 1
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
.LFE76:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_write
	.type	fs_write, @function
fs_write:
.LFB77:
	.loc 1 1921 57
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
	.loc 1 1922 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1924 8
	lw	a5,-596(s0)
	sext.w	a5,a5
	blt	a5,zero,.L638
	.loc 1 1924 16 discriminator 2
	lw	a5,-596(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L639
.L638:
	.loc 1 1924 48 discriminator 3
	li	a5,-1
	.loc 1 1924 48 is_stmt 0
	j	.L640
.L639:
	.loc 1 1925 19 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1925 8
	bne	a5,zero,.L641
	.loc 1 1925 40 discriminator 1
	li	a5,-1
	.loc 1 1925 40 is_stmt 0
	j	.L640
.L641:
	.loc 1 1927 32 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1927 18
	ld	a5,0(a5)
	sd	a5,-56(s0)
	.loc 1 1928 10
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 1928 8
	li	a5,3
	beq	a4,a5,.L642
	.loc 1 1928 36 discriminator 1
	li	a5,-1
	.loc 1 1928 36 is_stmt 0
	j	.L640
.L642:
	.loc 1 1929 10 is_stmt 1
	ld	a5,-56(s0)
	addi	a5,a5,8
	li	a1,2
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1929 8 discriminator 1
	bne	a5,zero,.L643
	.loc 1 1929 47 discriminator 1
	li	a5,-1
	.loc 1 1929 47 is_stmt 0
	j	.L640
.L643:
	.loc 1 1932 14 is_stmt 1
	ld	a5,-616(s0)
	sw	a5,-60(s0)
	.loc 1 1934 20
	ld	a5,-608(s0)
	sd	a5,-24(s0)
	.loc 1 1935 14
	lw	a5,-60(s0)
	sw	a5,-28(s0)
	.loc 1 1937 23
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1937 32
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1937 58
	beq	a5,zero,.L644
	.loc 1 1937 58 is_stmt 0 discriminator 1
	ld	a5,-56(s0)
	lw	a5,16(a5)
	j	.L645
.L644:
	.loc 1 1937 58 discriminator 2
	ld	a5,-56(s0)
	lw	a5,96(a5)
.L645:
	.loc 1 1937 14 is_stmt 1 discriminator 4
	sw	a5,-32(s0)
	.loc 1 1938 10
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 1 1938 19
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1938 8
	beq	a5,zero,.L646
	.loc 1 1939 16
	ld	a5,-56(s0)
	lw	a4,-32(s0)
	sw	a4,96(a5)
.L646:
	.loc 1 1941 14
	sw	zero,-36(s0)
	.loc 1 1943 11
	j	.L647
.L651:
.LBB101:
	.loc 1 1944 18
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sw	a5,-64(s0)
	.loc 1 1945 18
	lw	a5,-32(s0)
	andi	a5,a5,511
	sw	a5,-68(s0)
	.loc 1 1946 18
	li	a5,512
	lw	a4,-68(s0)
	subw	a5,a5,a4
	sw	a5,-40(s0)
	.loc 1 1947 12
	lw	a5,-40(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L648
	.loc 1 1947 39 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-40(s0)
.L648:
	.loc 1 1949 29
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
	.loc 1 1950 12
	lw	a5,-72(s0)
	sext.w	a5,a5
	beq	a5,zero,.L653
	.loc 1 1954 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1955 9
	lwu	a5,-68(s0)
	addi	a4,s0,-592
	add	a5,a4,a5
	lw	a4,-40(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1956 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1958 17
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 1959 17
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 1960 17
	lwu	a5,-40(s0)
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 1961 17
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-36(s0)
.L647:
.LBE101:
	.loc 1 1943 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L651
	j	.L650
.L653:
.LBB102:
	.loc 1 1950 28
	nop
.L650:
.LBE102:
	.loc 1 1964 6
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 1 1964 12
	lw	a4,-36(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,96(a5)
	.loc 1 1966 14
	ld	a5,-56(s0)
	lw	a5,96(a5)
	sw	a5,-76(s0)
	.loc 1 1967 25
	ld	a5,-56(s0)
	lw	a5,16(a5)
	.loc 1 1967 8
	lw	a4,-76(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L652
	.loc 1 1968 21
	ld	a5,-56(s0)
	lw	a4,-76(s0)
	sw	a4,16(a5)
.L652:
	.loc 1 1970 20
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 1970 18 discriminator 1
	ld	a5,-56(s0)
	sw	a4,32(a5)
	.loc 1 1971 5
	ld	a5,-56(s0)
	lw	a4,4(a5)
	.loc 1 1971 26
	ld	a5,-56(s0)
	addi	a5,a5,8
	.loc 1 1971 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 1972 12
	lw	a5,-36(s0)
.L640:
	.loc 1 1973 1
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
.LFE77:
	.size	fs_write, .-fs_write
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB78:
	.loc 1 1975 25
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
	.loc 1 1976 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1978 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1978 7
	bne	a5,zero,.L655
	.loc 1 1979 16
	li	a5,-1
	j	.L656
.L655:
	.loc 1 1982 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1983 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L657
	.loc 1 1983 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L657
	.loc 1 1983 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1983 61 discriminator 2
	lw	a5,100(a5)
	.loc 1 1983 42 discriminator 2
	bne	a5,zero,.L658
.L657:
	.loc 1 1984 16
	li	a5,-1
	j	.L656
.L658:
	.loc 1 1986 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1986 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1987 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L656:
	.loc 1 1988 1
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
.LFE78:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB79:
	.loc 1 1993 36
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
	.loc 1 1994 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 1995 8
	ld	a5,-56(s0)
	blt	a5,zero,.L660
	.loc 1 1995 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,31
	ble	a4,a5,.L661
.L660:
	.loc 1 1995 48 discriminator 3
	li	a5,-1
	.loc 1 1995 48 is_stmt 0
	j	.L662
.L661:
	.loc 1 1996 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1996 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1997 8
	ld	a5,-40(s0)
	bne	a5,zero,.L663
	.loc 1 1997 20 discriminator 1
	li	a5,-1
	.loc 1 1997 20 is_stmt 0
	j	.L662
.L663:
	.loc 1 2000 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 2000 12
	sd	zero,0(a5)
	.loc 1 2003 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L664
	.loc 1 2003 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L664:
	.loc 1 2006 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 2006 8
	ble	a5,zero,.L665
	.loc 1 2006 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 2006 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,100(a5)
.L665:
	.loc 1 2009 10
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 2009 8
	ble	a5,zero,.L666
	.loc 1 2009 29 discriminator 1
	li	a5,0
	.loc 1 2009 29 is_stmt 0
	j	.L662
.L666:
	.loc 1 2012 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,104(a5)
	sd	a5,-48(s0)
	.loc 1 2013 8
	ld	a5,-48(s0)
	beq	a5,zero,.L667
	.loc 1 2014 14
	ld	a5,-40(s0)
	lw	a5,116(a5)
	.loc 1 2014 12
	beq	a5,zero,.L668
	.loc 1 2014 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2014 27 discriminator 1
	ble	a5,zero,.L668
	.loc 1 2014 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2014 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 2014 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 2014 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 2014 51 discriminator 2
	bne	a5,zero,.L668
	.loc 1 2014 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L668:
	.loc 1 2015 14
	ld	a5,-40(s0)
	lw	a5,120(a5)
	.loc 1 2015 12
	beq	a5,zero,.L669
	.loc 1 2015 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2015 27 discriminator 1
	ble	a5,zero,.L669
	.loc 1 2015 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2015 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 2015 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 2015 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 2015 51 discriminator 2
	bne	a5,zero,.L669
	.loc 1 2015 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L669:
	.loc 1 2016 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2016 12
	ble	a5,zero,.L670
	.loc 1 2016 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2016 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L670:
	.loc 1 2017 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 2017 12
	bne	a5,zero,.L667
.LBB103:
	.loc 1 2019 22
	sw	zero,-20(s0)
	.loc 1 2019 13
	j	.L671
.L673:
	.loc 1 2020 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2020 20
	beq	a5,zero,.L672
	.loc 1 2020 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2020 64 discriminator 1
	sd	zero,104(a5)
.L672:
	.loc 1 2019 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L671:
	.loc 1 2019 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 2019 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L673
.LBE103:
	.loc 1 2022 13
	ld	a0,-48(s0)
	call	free_pipe
.L667:
	.loc 1 2027 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 2028 12
	li	a5,0
.L662:
	.loc 1 2029 1
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
.LFE79:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB80:
	.loc 1 2032 1
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
.LBB104:
	.loc 1 2033 13
	sw	zero,-20(s0)
	.loc 1 2033 5
	j	.L675
.L676:
	.loc 1 2034 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 2033 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L675:
	.loc 1 2033 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L676
.LBE104:
	.loc 1 2036 1
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
.LFE80:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB81:
	.loc 1 2039 1
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
.LBB105:
	.loc 1 2041 13
	sw	zero,-20(s0)
	.loc 1 2041 5
	j	.L678
.L680:
	.loc 1 2042 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2042 11
	beq	a5,zero,.L679
	.loc 1 2043 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 2043 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 2043 29
	ld	a4,0(a4)
	.loc 1 2043 23
	sd	a4,0(a5)
	.loc 1 2044 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2044 22
	lw	a4,100(a5)
	.loc 1 2044 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	.loc 1 2047 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 2047 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L679:
	.loc 1 2041 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L678:
	.loc 1 2041 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L680
.LBE105:
	.loc 1 2073 1
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
.LFE81:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB82:
	.loc 1 2076 1
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
	.loc 1 2091 1
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
.LFE82:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB83:
	.loc 1 2093 36
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
	.loc 1 2094 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 2095 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L691
	.loc 1 2095 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L691
	.loc 1 2096 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L692
	.loc 1 2096 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L692
	.loc 1 2097 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2097 8
	beq	a5,zero,.L693
	.loc 1 2098 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L694
	.loc 1 2100 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2100 8
	beq	a5,zero,.L690
	.loc 1 2100 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L690:
	.loc 1 2101 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 2101 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 2101 19
	ld	a4,0(a4)
	.loc 1 2101 15
	sd	a4,0(a5)
	.loc 1 2102 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2102 14
	lw	a4,100(a5)
	.loc 1 2102 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	j	.L682
.L691:
	.loc 1 2095 47
	nop
	j	.L682
.L692:
	.loc 1 2096 47
	nop
	j	.L682
.L693:
	.loc 1 2097 28
	nop
	j	.L682
.L694:
	.loc 1 2098 25
	nop
.L682:
	.loc 1 2104 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE83:
	.size	fs_dup2, .-fs_dup2
	.align	1
	.globl	fs_fstat_fd
	.type	fs_fstat_fd, @function
fs_fstat_fd:
.LFB84:
	.loc 1 2108 1
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
	.loc 1 2109 8
	ld	a5,-48(s0)
	bne	a5,zero,.L696
	.loc 1 2109 21 discriminator 1
	li	a5,-1
	.loc 1 2109 21 is_stmt 0
	j	.L697
.L696:
	.loc 1 2111 24 is_stmt 1
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 2112 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L698
	.loc 1 2112 16 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L699
.L698:
	.loc 1 2112 48 discriminator 3
	li	a5,-1
	.loc 1 2112 48 is_stmt 0
	j	.L697
.L699:
	.loc 1 2113 24 is_stmt 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 2113 18
	ld	a5,0(a5)
	sd	a5,-32(s0)
	.loc 1 2114 8
	ld	a5,-32(s0)
	beq	a5,zero,.L700
	.loc 1 2114 17 discriminator 2
	ld	a5,-32(s0)
	lw	a5,100(a5)
	.loc 1 2114 12 discriminator 2
	bne	a5,zero,.L701
.L700:
	.loc 1 2114 32 discriminator 3
	li	a5,-1
	.loc 1 2114 32 is_stmt 0
	j	.L697
.L701:
	.loc 1 2118 5 is_stmt 1
	li	a2,32
	li	a1,0
	ld	a0,-48(s0)
	call	memset
	.loc 1 2130 22
	ld	a5,-32(s0)
	lhu	a4,8(a5)
	.loc 1 2130 14
	ld	a5,-48(s0)
	sh	a4,0(a5)
	.loc 1 2130 47
	ld	a5,-32(s0)
	lhu	a4,14(a5)
	.loc 1 2130 39
	ld	a5,-48(s0)
	sh	a4,2(a5)
	.loc 1 2130 72
	ld	a5,-32(s0)
	lw	a4,16(a5)
	.loc 1 2130 64
	ld	a5,-48(s0)
	sw	a4,4(a5)
	.loc 1 2131 22
	ld	a5,-32(s0)
	lw	a4,20(a5)
	.loc 1 2131 14
	ld	a5,-48(s0)
	sw	a4,12(a5)
	.loc 1 2131 45
	ld	a5,-32(s0)
	lhu	a4,24(a5)
	.loc 1 2131 37
	ld	a5,-48(s0)
	sh	a4,16(a5)
	.loc 1 2131 67
	ld	a5,-32(s0)
	lhu	a4,26(a5)
	.loc 1 2131 59
	ld	a5,-48(s0)
	sh	a4,18(a5)
	.loc 1 2132 23
	ld	a5,-32(s0)
	lw	a4,28(a5)
	.loc 1 2132 15
	ld	a5,-48(s0)
	sw	a4,20(a5)
	.loc 1 2132 49
	ld	a5,-32(s0)
	lw	a4,32(a5)
	.loc 1 2132 41
	ld	a5,-48(s0)
	sw	a4,24(a5)
	.loc 1 2132 75
	ld	a5,-32(s0)
	lw	a4,36(a5)
	.loc 1 2132 67
	ld	a5,-48(s0)
	sw	a4,28(a5)
	.loc 1 2134 12
	li	a5,0
.L697:
	.loc 1 2135 1
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
.LFE84:
	.size	fs_fstat_fd, .-fs_fstat_fd
	.align	1
	.globl	fs_lseek
	.type	fs_lseek, @function
fs_lseek:
.LFB85:
	.loc 1 2139 48
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
	.loc 1 2140 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L703
	.loc 1 2140 16 discriminator 2
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L704
.L703:
	.loc 1 2140 48 discriminator 3
	li	a5,-1
	.loc 1 2140 48 is_stmt 0
	j	.L705
.L704:
	.loc 1 2141 24 is_stmt 1
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 2142 24
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 2142 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 2143 8
	ld	a5,-40(s0)
	bne	a5,zero,.L706
	.loc 1 2143 20 discriminator 1
	li	a5,-1
	.loc 1 2143 20 is_stmt 0
	j	.L705
.L706:
	.loc 1 2146 5 is_stmt 1
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L707
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	bgt	a4,a5,.L708
	lw	a5,-56(s0)
	sext.w	a5,a5
	beq	a5,zero,.L709
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L710
	j	.L708
.L709:
	.loc 1 2147 25
	sd	zero,-24(s0)
	.loc 1 2147 30
	j	.L711
.L710:
	.loc 1 2148 34
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 2148 25
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-24(s0)
	.loc 1 2148 41
	j	.L711
.L707:
	.loc 1 2149 39
	ld	a5,-40(s0)
	lw	a5,16(a5)
	.loc 1 2149 25
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-24(s0)
	.loc 1 2149 46
	j	.L711
.L708:
	.loc 1 2150 21
	li	a5,-1
	j	.L705
.L711:
	.loc 1 2153 10
	ld	a4,-24(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	sd	a5,-48(s0)
	.loc 1 2154 8
	ld	a5,-48(s0)
	bge	a5,zero,.L712
	.loc 1 2154 28 discriminator 1
	li	a5,-1
	.loc 1 2154 28 is_stmt 0
	j	.L705
.L712:
	.loc 1 2156 14 is_stmt 1
	ld	a5,-48(s0)
	sext.w	a4,a5
	.loc 1 2156 12
	ld	a5,-40(s0)
	sw	a4,96(a5)
	.loc 1 2157 19
	ld	a5,-40(s0)
	lw	a5,96(a5)
	.loc 1 2157 12
	slli	a5,a5,32
	srli	a5,a5,32
.L705:
	.loc 1 2158 1
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
.LFE85:
	.size	fs_lseek, .-fs_lseek
	.section	.rodata
	.align	3
.LC7:
	.dword	4835703278458516699
	.text
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "minux.h"
	.file 5 "common.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x3caa
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x2a
	.4byte	.LASF336
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
	.uleb128 0x16
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x28
	.4byte	0x13f
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF19
	.byte	0x4
	.byte	0x2a
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF20
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF21
	.byte	0x4
	.byte	0x2c
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF22
	.byte	0x4
	.byte	0x2d
	.byte	0xe
	.4byte	0x8b
	.byte	0x10
	.uleb128 0x5
	.4byte	.LASF23
	.byte	0x4
	.byte	0x2e
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF24
	.byte	0x4
	.byte	0x2f
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.byte	0
	.uleb128 0x16
	.4byte	.LASF26
	.byte	0x58
	.byte	0x4
	.byte	0x33
	.4byte	0x1e8
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x4
	.byte	0x34
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF28
	.byte	0x4
	.byte	0x35
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF29
	.byte	0x4
	.byte	0x36
	.byte	0xe
	.4byte	0x78
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x4
	.byte	0x37
	.byte	0xe
	.4byte	0x78
	.byte	0x6
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x38
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF31
	.byte	0x4
	.byte	0x39
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x7
	.string	"uid"
	.byte	0x4
	.byte	0x3a
	.byte	0xe
	.4byte	0x78
	.byte	0x10
	.uleb128 0x7
	.string	"gid"
	.byte	0x4
	.byte	0x3b
	.byte	0xe
	.4byte	0x78
	.byte	0x12
	.uleb128 0x5
	.4byte	.LASF32
	.byte	0x4
	.byte	0x3c
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF33
	.byte	0x4
	.byte	0x3d
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.uleb128 0x5
	.4byte	.LASF34
	.byte	0x4
	.byte	0x3e
	.byte	0xe
	.4byte	0x8b
	.byte	0x1c
	.uleb128 0x5
	.4byte	.LASF35
	.byte	0x4
	.byte	0x40
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
	.uleb128 0x16
	.4byte	.LASF36
	.byte	0x10
	.byte	0x4
	.byte	0x44
	.4byte	0x224
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x4
	.byte	0x45
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF38
	.byte	0x4
	.byte	0x46
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
	.uleb128 0x16
	.4byte	.LASF40
	.byte	0x20
	.byte	0x4
	.byte	0x4a
	.4byte	0x2cf
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x4
	.byte	0x4b
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x5
	.4byte	.LASF30
	.byte	0x4
	.byte	0x4c
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x5
	.4byte	.LASF18
	.byte	0x4
	.byte	0x4d
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x4
	.byte	0x4e
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x5
	.4byte	.LASF31
	.byte	0x4
	.byte	0x4f
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x7
	.string	"uid"
	.byte	0x4
	.byte	0x50
	.byte	0xe
	.4byte	0x78
	.byte	0x10
	.uleb128 0x7
	.string	"gid"
	.byte	0x4
	.byte	0x51
	.byte	0xe
	.4byte	0x78
	.byte	0x12
	.uleb128 0x5
	.4byte	.LASF32
	.byte	0x4
	.byte	0x52
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x5
	.4byte	.LASF33
	.byte	0x4
	.byte	0x53
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.uleb128 0x5
	.4byte	.LASF34
	.byte	0x4
	.byte	0x54
	.byte	0xe
	.4byte	0x8b
	.byte	0x1c
	.byte	0
	.uleb128 0x12
	.4byte	.LASF41
	.byte	0x4
	.byte	0x80
	.byte	0x11
	.4byte	0x3c
	.uleb128 0xb
	.4byte	0x2e0
	.uleb128 0xb
	.4byte	0x234
	.uleb128 0xb
	.4byte	0x23b
	.uleb128 0x12
	.4byte	.LASF42
	.byte	0x5
	.byte	0xc
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x12
	.4byte	.LASF43
	.byte	0x5
	.byte	0xe
	.byte	0x10
	.4byte	0x302
	.uleb128 0xb
	.4byte	0x2ea
	.uleb128 0x19
	.4byte	.LASF44
	.2byte	0x100
	.byte	0x5
	.byte	0x12
	.4byte	0x498
	.uleb128 0x7
	.string	"ra"
	.byte	0x5
	.byte	0x13
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x7
	.string	"sp"
	.byte	0x5
	.byte	0x14
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.uleb128 0x7
	.string	"gp"
	.byte	0x5
	.byte	0x15
	.byte	0xe
	.4byte	0x9e
	.byte	0x10
	.uleb128 0x7
	.string	"tp"
	.byte	0x5
	.byte	0x16
	.byte	0xe
	.4byte	0x9e
	.byte	0x18
	.uleb128 0x7
	.string	"t0"
	.byte	0x5
	.byte	0x17
	.byte	0xe
	.4byte	0x9e
	.byte	0x20
	.uleb128 0x7
	.string	"t1"
	.byte	0x5
	.byte	0x18
	.byte	0xe
	.4byte	0x9e
	.byte	0x28
	.uleb128 0x7
	.string	"t2"
	.byte	0x5
	.byte	0x19
	.byte	0xe
	.4byte	0x9e
	.byte	0x30
	.uleb128 0x7
	.string	"t3"
	.byte	0x5
	.byte	0x1a
	.byte	0xe
	.4byte	0x9e
	.byte	0x38
	.uleb128 0x7
	.string	"t4"
	.byte	0x5
	.byte	0x1b
	.byte	0xe
	.4byte	0x9e
	.byte	0x40
	.uleb128 0x7
	.string	"t5"
	.byte	0x5
	.byte	0x1c
	.byte	0xe
	.4byte	0x9e
	.byte	0x48
	.uleb128 0x7
	.string	"t6"
	.byte	0x5
	.byte	0x1d
	.byte	0xe
	.4byte	0x9e
	.byte	0x50
	.uleb128 0x7
	.string	"a0"
	.byte	0x5
	.byte	0x1e
	.byte	0xe
	.4byte	0x9e
	.byte	0x58
	.uleb128 0x7
	.string	"a1"
	.byte	0x5
	.byte	0x1f
	.byte	0xe
	.4byte	0x9e
	.byte	0x60
	.uleb128 0x7
	.string	"a2"
	.byte	0x5
	.byte	0x20
	.byte	0xe
	.4byte	0x9e
	.byte	0x68
	.uleb128 0x7
	.string	"a3"
	.byte	0x5
	.byte	0x21
	.byte	0xe
	.4byte	0x9e
	.byte	0x70
	.uleb128 0x7
	.string	"a4"
	.byte	0x5
	.byte	0x22
	.byte	0xe
	.4byte	0x9e
	.byte	0x78
	.uleb128 0x7
	.string	"a5"
	.byte	0x5
	.byte	0x23
	.byte	0xe
	.4byte	0x9e
	.byte	0x80
	.uleb128 0x7
	.string	"a6"
	.byte	0x5
	.byte	0x24
	.byte	0xe
	.4byte	0x9e
	.byte	0x88
	.uleb128 0x7
	.string	"a7"
	.byte	0x5
	.byte	0x25
	.byte	0xe
	.4byte	0x9e
	.byte	0x90
	.uleb128 0x7
	.string	"s0"
	.byte	0x5
	.byte	0x26
	.byte	0xe
	.4byte	0x9e
	.byte	0x98
	.uleb128 0x7
	.string	"s1"
	.byte	0x5
	.byte	0x27
	.byte	0xe
	.4byte	0x9e
	.byte	0xa0
	.uleb128 0x7
	.string	"s2"
	.byte	0x5
	.byte	0x28
	.byte	0xe
	.4byte	0x9e
	.byte	0xa8
	.uleb128 0x7
	.string	"s3"
	.byte	0x5
	.byte	0x29
	.byte	0xe
	.4byte	0x9e
	.byte	0xb0
	.uleb128 0x7
	.string	"s4"
	.byte	0x5
	.byte	0x2a
	.byte	0xe
	.4byte	0x9e
	.byte	0xb8
	.uleb128 0x7
	.string	"s5"
	.byte	0x5
	.byte	0x2b
	.byte	0xe
	.4byte	0x9e
	.byte	0xc0
	.uleb128 0x7
	.string	"s6"
	.byte	0x5
	.byte	0x2c
	.byte	0xe
	.4byte	0x9e
	.byte	0xc8
	.uleb128 0x7
	.string	"s7"
	.byte	0x5
	.byte	0x2d
	.byte	0xe
	.4byte	0x9e
	.byte	0xd0
	.uleb128 0x7
	.string	"s8"
	.byte	0x5
	.byte	0x2e
	.byte	0xe
	.4byte	0x9e
	.byte	0xd8
	.uleb128 0x7
	.string	"s9"
	.byte	0x5
	.byte	0x2f
	.byte	0xe
	.4byte	0x9e
	.byte	0xe0
	.uleb128 0x7
	.string	"s10"
	.byte	0x5
	.byte	0x30
	.byte	0xe
	.4byte	0x9e
	.byte	0xe8
	.uleb128 0x7
	.string	"s11"
	.byte	0x5
	.byte	0x31
	.byte	0xe
	.4byte	0x9e
	.byte	0xf0
	.uleb128 0x5
	.4byte	.LASF45
	.byte	0x5
	.byte	0x32
	.byte	0xe
	.4byte	0x9e
	.byte	0xf8
	.byte	0
	.uleb128 0x16
	.4byte	.LASF46
	.byte	0x10
	.byte	0x5
	.byte	0x37
	.4byte	0x4bf
	.uleb128 0x5
	.4byte	.LASF47
	.byte	0x5
	.byte	0x39
	.byte	0xc
	.4byte	0x2db
	.byte	0
	.uleb128 0x5
	.4byte	.LASF48
	.byte	0x5
	.byte	0x3a
	.byte	0x9
	.4byte	0x48
	.byte	0x8
	.byte	0
	.uleb128 0x19
	.4byte	.LASF49
	.2byte	0x430
	.byte	0x5
	.byte	0x3d
	.4byte	0x641
	.uleb128 0x5
	.4byte	.LASF50
	.byte	0x5
	.byte	0x3e
	.byte	0x16
	.4byte	0x307
	.byte	0
	.uleb128 0x8
	.4byte	.LASF51
	.byte	0x5
	.byte	0x40
	.byte	0x16
	.4byte	0x307
	.2byte	0x100
	.uleb128 0x8
	.4byte	.LASF52
	.byte	0x5
	.byte	0x41
	.byte	0x12
	.4byte	0x641
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF53
	.byte	0x5
	.byte	0x42
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF54
	.byte	0x5
	.byte	0x44
	.byte	0xb
	.4byte	0x2e0
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF55
	.byte	0x5
	.byte	0x45
	.byte	0xe
	.4byte	0x9e
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF56
	.byte	0x5
	.byte	0x46
	.byte	0xe
	.4byte	0x9e
	.2byte	0x220
	.uleb128 0x1c
	.string	"sz"
	.byte	0x47
	.byte	0xe
	.4byte	0x9e
	.2byte	0x228
	.uleb128 0x8
	.4byte	.LASF57
	.byte	0x5
	.byte	0x49
	.byte	0x9
	.4byte	0x48
	.2byte	0x230
	.uleb128 0x8
	.4byte	.LASF58
	.byte	0x5
	.byte	0x4b
	.byte	0x11
	.4byte	0x2f6
	.2byte	0x238
	.uleb128 0x8
	.4byte	.LASF59
	.byte	0x5
	.byte	0x4d
	.byte	0xb
	.4byte	0x2e0
	.2byte	0x240
	.uleb128 0x8
	.4byte	.LASF60
	.byte	0x5
	.byte	0x4e
	.byte	0x9
	.4byte	0x48
	.2byte	0x248
	.uleb128 0x8
	.4byte	.LASF61
	.byte	0x5
	.byte	0x4f
	.byte	0x9
	.4byte	0x48
	.2byte	0x24c
	.uleb128 0x8
	.4byte	.LASF62
	.byte	0x5
	.byte	0x51
	.byte	0x12
	.4byte	0x646
	.2byte	0x250
	.uleb128 0x8
	.4byte	.LASF46
	.byte	0x5
	.byte	0x53
	.byte	0x1c
	.4byte	0x713
	.2byte	0x350
	.uleb128 0x8
	.4byte	.LASF63
	.byte	0x5
	.byte	0x54
	.byte	0x9
	.4byte	0x48
	.2byte	0x358
	.uleb128 0x8
	.4byte	.LASF64
	.byte	0x5
	.byte	0x56
	.byte	0x9
	.4byte	0x48
	.2byte	0x35c
	.uleb128 0x8
	.4byte	.LASF65
	.byte	0x5
	.byte	0x58
	.byte	0x9
	.4byte	0x48
	.2byte	0x360
	.uleb128 0x8
	.4byte	.LASF66
	.byte	0x5
	.byte	0x5a
	.byte	0x12
	.4byte	0x641
	.2byte	0x368
	.uleb128 0x1c
	.string	"cwd"
	.byte	0x5d
	.byte	0xa
	.4byte	0x71d
	.2byte	0x370
	.uleb128 0x8
	.4byte	.LASF67
	.byte	0x5
	.byte	0x5e
	.byte	0x14
	.4byte	0x84
	.2byte	0x3f0
	.uleb128 0x1c
	.string	"uid"
	.byte	0x61
	.byte	0xe
	.4byte	0x78
	.2byte	0x3f2
	.uleb128 0x1c
	.string	"gid"
	.byte	0x62
	.byte	0xe
	.4byte	0x78
	.2byte	0x3f4
	.uleb128 0x8
	.4byte	.LASF68
	.byte	0x5
	.byte	0x63
	.byte	0xe
	.4byte	0x78
	.2byte	0x3f6
	.uleb128 0x8
	.4byte	.LASF69
	.byte	0x5
	.byte	0x64
	.byte	0xe
	.4byte	0x72d
	.2byte	0x3f8
	.uleb128 0x8
	.4byte	.LASF70
	.byte	0x5
	.byte	0x65
	.byte	0x9
	.4byte	0x48
	.2byte	0x408
	.uleb128 0x8
	.4byte	.LASF71
	.byte	0x5
	.byte	0x66
	.byte	0xa
	.4byte	0x73d
	.2byte	0x40c
	.byte	0
	.uleb128 0xb
	.4byte	0x4bf
	.uleb128 0xd
	.4byte	0x656
	.4byte	0x656
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xb
	.4byte	0x65b
	.uleb128 0x19
	.4byte	.LASF72
	.2byte	0x290
	.byte	0x5
	.byte	0x85
	.4byte	0x713
	.uleb128 0x5
	.4byte	.LASF73
	.byte	0x5
	.byte	0x86
	.byte	0x47
	.4byte	0x808
	.byte	0
	.uleb128 0x5
	.4byte	.LASF37
	.byte	0x5
	.byte	0x87
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x7
	.string	"din"
	.byte	0x5
	.byte	0x88
	.byte	0x13
	.4byte	0x13f
	.byte	0x8
	.uleb128 0x7
	.string	"off"
	.byte	0x5
	.byte	0x89
	.byte	0xe
	.4byte	0x8b
	.byte	0x60
	.uleb128 0x5
	.4byte	.LASF74
	.byte	0x5
	.byte	0x8a
	.byte	0x9
	.4byte	0x48
	.byte	0x64
	.uleb128 0x5
	.4byte	.LASF75
	.byte	0x5
	.byte	0x8b
	.byte	0x13
	.4byte	0x803
	.byte	0x68
	.uleb128 0x5
	.4byte	.LASF76
	.byte	0x5
	.byte	0x8c
	.byte	0x9
	.4byte	0x48
	.byte	0x70
	.uleb128 0x5
	.4byte	.LASF77
	.byte	0x5
	.byte	0x8d
	.byte	0x9
	.4byte	0x48
	.byte	0x74
	.uleb128 0x5
	.4byte	.LASF78
	.byte	0x5
	.byte	0x8e
	.byte	0x9
	.4byte	0x48
	.byte	0x78
	.uleb128 0x5
	.4byte	.LASF79
	.byte	0x5
	.byte	0x91
	.byte	0x9
	.4byte	0x48
	.byte	0x7c
	.uleb128 0x5
	.4byte	.LASF80
	.byte	0x5
	.byte	0x93
	.byte	0x12
	.4byte	0x656
	.byte	0x80
	.uleb128 0x5
	.4byte	.LASF81
	.byte	0x5
	.byte	0x95
	.byte	0x12
	.4byte	0x83b
	.byte	0x88
	.uleb128 0x8
	.4byte	.LASF82
	.byte	0x5
	.byte	0x96
	.byte	0x9
	.4byte	0x48
	.2byte	0x288
	.byte	0
	.uleb128 0xb
	.4byte	0x718
	.uleb128 0xb
	.4byte	0x498
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x72d
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0xd
	.4byte	0x78
	.4byte	0x73d
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x7
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x74d
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x19
	.4byte	.LASF83
	.2byte	0x330
	.byte	0x5
	.byte	0x70
	.4byte	0x7f4
	.uleb128 0x5
	.4byte	.LASF84
	.byte	0x5
	.byte	0x71
	.byte	0xa
	.4byte	0x7f4
	.byte	0
	.uleb128 0x8
	.4byte	.LASF85
	.byte	0x5
	.byte	0x72
	.byte	0xe
	.4byte	0x8b
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF86
	.byte	0x5
	.byte	0x73
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF87
	.byte	0x5
	.byte	0x74
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF88
	.byte	0x5
	.byte	0x75
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x8
	.4byte	.LASF89
	.byte	0x5
	.byte	0x76
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF90
	.byte	0x5
	.byte	0x77
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x8
	.4byte	.LASF74
	.byte	0x5
	.byte	0x78
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF91
	.byte	0x5
	.byte	0x7a
	.byte	0x12
	.4byte	0x646
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF92
	.byte	0x5
	.byte	0x7b
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x8
	.4byte	.LASF80
	.byte	0x5
	.byte	0x7d
	.byte	0x13
	.4byte	0x803
	.2byte	0x328
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x803
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0xb
	.4byte	0x74d
	.uleb128 0x2c
	.byte	0x7
	.byte	0x4
	.4byte	0x97
	.byte	0x5
	.byte	0x86
	.byte	0xa
	.4byte	0x83b
	.uleb128 0x18
	.4byte	.LASF93
	.byte	0
	.uleb128 0x18
	.4byte	.LASF94
	.byte	0x1
	.uleb128 0x18
	.4byte	.LASF95
	.byte	0x2
	.uleb128 0x18
	.4byte	.LASF96
	.byte	0x3
	.uleb128 0x18
	.4byte	.LASF97
	.byte	0x4
	.uleb128 0x18
	.4byte	.LASF98
	.byte	0x5
	.byte	0
	.uleb128 0xd
	.4byte	0x641
	.4byte	0x84b
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x3f
	.byte	0
	.uleb128 0x25
	.4byte	.LASF99
	.byte	0xc1
	.byte	0x15
	.4byte	0x83b
	.uleb128 0x25
	.4byte	.LASF100
	.byte	0xc3
	.byte	0xc
	.4byte	0x48
	.uleb128 0x2d
	.4byte	.LASF101
	.byte	0x5
	.2byte	0x15f
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x16
	.4byte	.LASF102
	.byte	0x10
	.byte	0x1
	.byte	0x55
	.4byte	0x8af
	.uleb128 0x5
	.4byte	.LASF103
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
	.4byte	.LASF104
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x78
	.byte	0xc
	.uleb128 0x5
	.4byte	.LASF66
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x26
	.4byte	.LASF107
	.byte	0x2
	.byte	0x5c
	.4byte	0x8e2
	.uleb128 0x5
	.4byte	.LASF104
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
	.4byte	.LASF105
	.byte	0x1
	.byte	0x5f
	.byte	0xe
	.4byte	0x8e2
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x78
	.4byte	0x8f1
	.uleb128 0x27
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF106
	.byte	0x8
	.byte	0x1
	.byte	0x62
	.4byte	0x917
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
	.uleb128 0x26
	.4byte	.LASF108
	.byte	0x4
	.byte	0x63
	.4byte	0x94a
	.uleb128 0x5
	.4byte	.LASF104
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
	.4byte	.LASF105
	.byte	0x1
	.byte	0x66
	.byte	0x1c
	.4byte	0x94a
	.byte	0x4
	.byte	0
	.uleb128 0xd
	.4byte	0x8f1
	.4byte	0x959
	.uleb128 0x27
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF109
	.byte	0x10
	.byte	0x1
	.byte	0x6c
	.4byte	0x98d
	.uleb128 0x5
	.4byte	.LASF27
	.byte	0x1
	.byte	0x6d
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF110
	.byte	0x1
	.byte	0x6e
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x5
	.4byte	.LASF111
	.byte	0x1
	.byte	0x6f
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.byte	0
	.uleb128 0xe
	.4byte	.LASF112
	.byte	0x74
	.byte	0x11
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x1a
	.string	"Q"
	.byte	0x75
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0xe
	.4byte	.LASF113
	.byte	0x77
	.byte	0x1c
	.4byte	0x9ca
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xb
	.4byte	0x86e
	.uleb128 0xe
	.4byte	.LASF114
	.byte	0x78
	.byte	0x1c
	.4byte	0x9e4
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xb
	.4byte	0x8af
	.uleb128 0xe
	.4byte	.LASF74
	.byte	0x79
	.byte	0x1c
	.4byte	0x9fe
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xb
	.4byte	0x917
	.uleb128 0xe
	.4byte	.LASF115
	.byte	0x7a
	.byte	0x1c
	.4byte	0xa18
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xb
	.4byte	0x5b
	.uleb128 0xe
	.4byte	.LASF116
	.byte	0x7c
	.byte	0x11
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2e
	.4byte	.LASF117
	.byte	0x1
	.byte	0x7d
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xd
	.4byte	0x67
	.4byte	0xa58
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0x1f
	.4byte	0xa49
	.uleb128 0x2f
	.4byte	.LASF118
	.byte	0x1
	.byte	0x7e
	.byte	0x1a
	.4byte	0xa58
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x1a
	.string	"req"
	.byte	0xc6
	.byte	0x1e
	.4byte	0x959
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x19
	.4byte	.LASF119
	.2byte	0x210
	.byte	0x1
	.byte	0xea
	.4byte	0xadc
	.uleb128 0x5
	.4byte	.LASF120
	.byte	0x1
	.byte	0xeb
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x5
	.4byte	.LASF84
	.byte	0x1
	.byte	0xec
	.byte	0xd
	.4byte	0xadc
	.byte	0x4
	.uleb128 0x8
	.4byte	.LASF121
	.byte	0x1
	.byte	0xed
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF122
	.byte	0x1
	.byte	0xee
	.byte	0xe
	.4byte	0x8b
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF123
	.byte	0x1
	.byte	0xef
	.byte	0xe
	.4byte	0x8b
	.2byte	0x20c
	.byte	0
	.uleb128 0xd
	.4byte	0x5b
	.4byte	0xaeb
	.uleb128 0x21
	.4byte	0xaa
	.byte	0
	.uleb128 0xd
	.4byte	0xa8a
	.4byte	0xafb
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xe
	.4byte	.LASF124
	.byte	0xf2
	.byte	0x1c
	.4byte	0xaeb
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache
	.uleb128 0xe
	.4byte	.LASF125
	.byte	0xf3
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_time
	.uleb128 0xe
	.4byte	.LASF126
	.byte	0xf4
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_hits
	.uleb128 0xe
	.4byte	.LASF127
	.byte	0xf5
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_misses
	.uleb128 0x1
	.string	"sb"
	.2byte	0x188
	.byte	0x1a
	.4byte	0xd7
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0x2
	.4byte	.LASF128
	.2byte	0x189
	.byte	0x17
	.4byte	0xadc
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xd
	.4byte	0x74d
	.4byte	0xb8a
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF129
	.2byte	0x36d
	.byte	0xe
	.4byte	0xb7a
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xd
	.4byte	0x65b
	.4byte	0xbb0
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF130
	.2byte	0x36e
	.byte	0xd
	.4byte	0xba0
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1d
	.4byte	.LASF131
	.2byte	0x370
	.byte	0xf
	.4byte	0x803
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x1d
	.4byte	.LASF132
	.2byte	0x371
	.byte	0xe
	.4byte	0x656
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x30
	.4byte	.LASF337
	.byte	0x1
	.2byte	0x456
	.byte	0x6
	.4byte	0xc01
	.uleb128 0x22
	.byte	0
	.uleb128 0x31
	.4byte	.LASF133
	.byte	0x1
	.2byte	0x455
	.byte	0x6
	.4byte	0xc14
	.uleb128 0xc
	.4byte	0x2e0
	.byte	0
	.uleb128 0x32
	.4byte	.LASF134
	.byte	0x5
	.byte	0xb9
	.byte	0xf
	.4byte	0xc26
	.4byte	0xc26
	.uleb128 0x22
	.byte	0
	.uleb128 0xb
	.4byte	0x656
	.uleb128 0x14
	.4byte	.LASF135
	.byte	0x10
	.byte	0x7
	.4byte	0x2e0
	.4byte	0xc4a
	.uleb128 0xc
	.4byte	0x2e0
	.uleb128 0xc
	.4byte	0x2e5
	.uleb128 0xc
	.4byte	0xbd
	.byte	0
	.uleb128 0x14
	.4byte	.LASF136
	.byte	0xe
	.byte	0x5
	.4byte	0x48
	.4byte	0xc5f
	.uleb128 0xc
	.4byte	0x2e5
	.byte	0
	.uleb128 0x14
	.4byte	.LASF137
	.byte	0x12
	.byte	0x7
	.4byte	0x2e0
	.4byte	0xc79
	.uleb128 0xc
	.4byte	0x2e0
	.uleb128 0xc
	.4byte	0x2e5
	.byte	0
	.uleb128 0x14
	.4byte	.LASF138
	.byte	0x11
	.byte	0x7
	.4byte	0x2e0
	.4byte	0xc98
	.uleb128 0xc
	.4byte	0x2e0
	.uleb128 0xc
	.4byte	0x2e5
	.uleb128 0xc
	.4byte	0x48
	.byte	0
	.uleb128 0x14
	.4byte	.LASF139
	.byte	0x14
	.byte	0x5
	.4byte	0x48
	.4byte	0xcb2
	.uleb128 0xc
	.4byte	0x2e5
	.uleb128 0xc
	.4byte	0x2e5
	.byte	0
	.uleb128 0x14
	.4byte	.LASF140
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0xcd1
	.uleb128 0xc
	.4byte	0x2e5
	.uleb128 0xc
	.4byte	0x2e5
	.uleb128 0xc
	.4byte	0x97
	.byte	0
	.uleb128 0x14
	.4byte	.LASF141
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0xce7
	.uleb128 0xc
	.4byte	0x2e5
	.uleb128 0x22
	.byte	0
	.uleb128 0x14
	.4byte	.LASF142
	.byte	0xd
	.byte	0x7
	.4byte	0xd06
	.4byte	0xd06
	.uleb128 0xc
	.4byte	0xd06
	.uleb128 0xc
	.4byte	0xd08
	.uleb128 0xc
	.4byte	0x97
	.byte	0
	.uleb128 0x33
	.byte	0x8
	.uleb128 0xb
	.4byte	0xd0d
	.uleb128 0x34
	.uleb128 0x14
	.4byte	.LASF143
	.byte	0xc
	.byte	0x7
	.4byte	0xd06
	.4byte	0xd2d
	.uleb128 0xc
	.4byte	0xd06
	.uleb128 0xc
	.4byte	0x48
	.uleb128 0xc
	.4byte	0x97
	.byte	0
	.uleb128 0x35
	.4byte	.LASF338
	.byte	0x1
	.byte	0x8
	.byte	0x8
	.4byte	0xd06
	.uleb128 0x36
	.4byte	.LASF144
	.byte	0x1
	.byte	0x13
	.byte	0xd
	.4byte	0xd4b
	.uleb128 0xc
	.4byte	0x2e5
	.byte	0
	.uleb128 0x9
	.4byte	.LASF149
	.2byte	0x85b
	.byte	0x6
	.4byte	0x54
	.8byte	.LFB85
	.8byte	.LFE85-.LFB85
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdd3
	.uleb128 0x6
	.string	"fd"
	.2byte	0x85b
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF145
	.2byte	0x85b
	.byte	0x1c
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF146
	.2byte	0x85b
	.byte	0x28
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"ft"
	.2byte	0x85d
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x85e
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF147
	.2byte	0x861
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF148
	.2byte	0x869
	.byte	0xa
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF150
	.2byte	0x83b
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB84
	.8byte	.LFE84-.LFB84
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe2d
	.uleb128 0x6
	.string	"fd"
	.2byte	0x83b
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"st"
	.2byte	0x83b
	.byte	0x26
	.4byte	0xe2d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"ft"
	.2byte	0x83f
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"f"
	.2byte	0x841
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xb
	.4byte	0x240
	.uleb128 0x13
	.4byte	.LASF153
	.2byte	0x82d
	.8byte	.LFB83
	.8byte	.LFE83-.LFB83
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe7c
	.uleb128 0x3
	.4byte	.LASF151
	.2byte	0x82d
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF152
	.2byte	0x82d
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ft"
	.2byte	0x82e
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF154
	.2byte	0x81b
	.8byte	.LFB82
	.8byte	.LFE82-.LFB82
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xea9
	.uleb128 0x3
	.4byte	.LASF62
	.2byte	0x81b
	.byte	0x22
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.4byte	.LASF155
	.2byte	0x7f6
	.8byte	.LFB81
	.8byte	.LFE81-.LFB81
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf13
	.uleb128 0x3
	.4byte	.LASF156
	.2byte	0x7f6
	.byte	0x20
	.4byte	0x641
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF157
	.2byte	0x7f6
	.byte	0x35
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF158
	.2byte	0x7f6
	.byte	0x4b
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB105
	.8byte	.LBE105-.LBB105
	.uleb128 0x1
	.string	"i"
	.2byte	0x7f9
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LASF159
	.2byte	0x7ef
	.8byte	.LFB80
	.8byte	.LFE80-.LFB80
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf5f
	.uleb128 0x3
	.4byte	.LASF62
	.2byte	0x7ef
	.byte	0x1c
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.8byte	.LBB104
	.8byte	.LBE104-.LBB104
	.uleb128 0x1
	.string	"i"
	.2byte	0x7f1
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF160
	.2byte	0x7c9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB79
	.8byte	.LFE79-.LFB79
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfe6
	.uleb128 0x6
	.string	"fd"
	.2byte	0x7c9
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF161
	.2byte	0x7c9
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"ft"
	.2byte	0x7ca
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"f"
	.2byte	0x7cc
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"p"
	.2byte	0x7dc
	.byte	0x13
	.4byte	0x803
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB103
	.8byte	.LBE103-.LBB103
	.uleb128 0x1
	.string	"i"
	.2byte	0x7e3
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF162
	.2byte	0x7b7
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB78
	.8byte	.LFE78-.LFB78
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1042
	.uleb128 0x6
	.string	"fd"
	.2byte	0x7b7
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x7b8
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x7be
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x7c2
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x9
	.4byte	.LASF163
	.2byte	0x781
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB77
	.8byte	.LFE77-.LFB77
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x115f
	.uleb128 0x6
	.string	"fd"
	.2byte	0x781
	.byte	0x16
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"buf"
	.2byte	0x781
	.byte	0x26
	.4byte	0xd08
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x3
	.4byte	.LASF164
	.2byte	0x781
	.byte	0x32
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x782
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"f"
	.2byte	0x787
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF165
	.2byte	0x78c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"src"
	.2byte	0x78e
	.byte	0x14
	.4byte	0x115f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x78f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"off"
	.2byte	0x791
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF167
	.2byte	0x795
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF168
	.2byte	0x7ae
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x1b
	.4byte	.LLRL6
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x798
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x799
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x79a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x79d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF173
	.2byte	0x7a1
	.byte	0x11
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x6c
	.uleb128 0x9
	.4byte	.LASF174
	.2byte	0x767
	.byte	0x9
	.4byte	0x2cf
	.8byte	.LFB76
	.8byte	.LFE76-.LFB76
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11fd
	.uleb128 0x6
	.string	"fd"
	.2byte	0x767
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"buf"
	.2byte	0x767
	.byte	0x1f
	.4byte	0xd06
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF164
	.2byte	0x767
	.byte	0x2b
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x768
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x76e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"f"
	.2byte	0x772
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF175
	.2byte	0x773
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF176
	.2byte	0x776
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x9
	.4byte	.LASF177
	.2byte	0x6e8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB75
	.8byte	.LFE75-.LFB75
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1437
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6e8
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x3
	.4byte	.LASF104
	.2byte	0x6e8
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -460
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x6e8
	.byte	0x2f
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x6e9
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF179
	.2byte	0x6ea
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x704
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"di"
	.2byte	0x705
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF180
	.2byte	0x706
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xa
	.8byte	.LBB92
	.8byte	.LBE92-.LBB92
	.4byte	0x12c0
	.uleb128 0x1
	.string	"p"
	.2byte	0x6ec
	.byte	0x16
	.4byte	0x641
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0xa
	.8byte	.LBB93
	.8byte	.LBE93-.LBB93
	.4byte	0x12e3
	.uleb128 0x1
	.string	"i"
	.2byte	0x6f4
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0xa
	.8byte	.LBB94
	.8byte	.LBE94-.LBB94
	.4byte	0x13d0
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x70c
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -316
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x70d
	.byte	0x12
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x2
	.4byte	.LASF182
	.2byte	0x712
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.string	"um"
	.2byte	0x71a
	.byte	0x1c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -86
	.uleb128 0x2
	.4byte	.LASF183
	.2byte	0x71c
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -340
	.uleb128 0x2
	.4byte	.LASF184
	.2byte	0x71c
	.byte	0x22
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"gid"
	.2byte	0x71d
	.byte	0x16
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -54
	.uleb128 0xa
	.8byte	.LBB95
	.8byte	.LBE95-.LBB95
	.4byte	0x1389
	.uleb128 0x1
	.string	"i"
	.2byte	0x70e
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xa
	.8byte	.LBB96
	.8byte	.LBE96-.LBB96
	.4byte	0x13ad
	.uleb128 0x1
	.string	"ii"
	.2byte	0x71c
	.byte	0x3b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB97
	.8byte	.LBE97-.LBB97
	.uleb128 0x2
	.4byte	.LASF185
	.2byte	0x71f
	.byte	0x1f
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB98
	.8byte	.LBE98-.LBB98
	.4byte	0x13f5
	.uleb128 0x2
	.4byte	.LASF186
	.2byte	0x733
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x4
	.8byte	.LBB99
	.8byte	.LBE99-.LBB99
	.uleb128 0x1
	.string	"i"
	.2byte	0x740
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB100
	.8byte	.LBE100-.LBB100
	.uleb128 0x1
	.string	"now"
	.2byte	0x750
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
	.4byte	0x1447
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x9
	.4byte	.LASF187
	.2byte	0x6e2
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB74
	.8byte	.LFE74-.LFB74
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1479
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6e2
	.byte	0x19
	.4byte	0x2e5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF188
	.2byte	0x6d5
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB73
	.8byte	.LFE73-.LFB73
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1509
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6d5
	.byte	0x1b
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x3
	.4byte	.LASF32
	.2byte	0x6d5
	.byte	0x2a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x3
	.4byte	.LASF33
	.2byte	0x6d5
	.byte	0x3a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6d7
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6d8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6da
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.string	"now"
	.2byte	0x6db
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF189
	.2byte	0x6c8
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB72
	.8byte	.LFE72-.LFB72
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x158a
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6c8
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"uid"
	.2byte	0x6c8
	.byte	0x29
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -250
	.uleb128 0x6
	.string	"gid"
	.2byte	0x6c8
	.byte	0x37
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6ca
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6cb
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6cd
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF190
	.2byte	0x6ba
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB71
	.8byte	.LFE71-.LFB71
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1608
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6ba
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x6ba
	.byte	0x29
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6bc
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6bd
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x6bf
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x1
	.string	"p"
	.2byte	0x6c1
	.byte	0x12
	.4byte	0x641
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x9
	.4byte	.LASF191
	.2byte	0x6ab
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB70
	.8byte	.LFE70-.LFB70
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16c7
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x6ab
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x6
	.string	"st"
	.2byte	0x6ab
	.byte	0x2d
	.4byte	0xe2d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"abs"
	.2byte	0x6ae
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x6af
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x6af
	.byte	0x1b
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x6b1
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6b2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x6b3
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x4
	.8byte	.LBB91
	.8byte	.LBE91-.LBB91
	.uleb128 0x1
	.string	"i"
	.2byte	0x6af
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF192
	.2byte	0x69c
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB69
	.8byte	.LFE69-.LFB69
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17a4
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x69c
	.byte	0x1d
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x6
	.string	"buf"
	.2byte	0x69c
	.byte	0x29
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x3
	.4byte	.LASF193
	.2byte	0x69c
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -388
	.uleb128 0x1
	.string	"abs"
	.2byte	0x69f
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x6a0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x6a0
	.byte	0x1b
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x6a2
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x6a3
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"di"
	.2byte	0x6a4
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x1
	.string	"n"
	.2byte	0x6a6
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.8byte	.LBB90
	.8byte	.LBE90-.LBB90
	.uleb128 0x1
	.string	"i"
	.2byte	0x6a0
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF194
	.2byte	0x68f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB68
	.8byte	.LFE68-.LFB68
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1814
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x68f
	.byte	0x19
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x6
	.string	"st"
	.2byte	0x68f
	.byte	0x2c
	.4byte	0xe2d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"abs"
	.2byte	0x692
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x693
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"di"
	.2byte	0x695
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x9
	.4byte	.LASF195
	.2byte	0x672
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB67
	.8byte	.LFE67-.LFB67
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18e4
	.uleb128 0x3
	.4byte	.LASF196
	.2byte	0x672
	.byte	0x19
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x3
	.4byte	.LASF197
	.2byte	0x672
	.byte	0x2e
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -496
	.uleb128 0x2
	.4byte	.LASF198
	.2byte	0x674
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF199
	.2byte	0x674
	.byte	0x17
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x679
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"di"
	.2byte	0x67d
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x680
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -372
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x680
	.byte	0x1b
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -392
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x684
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -480
	.uleb128 0x4
	.8byte	.LBB89
	.8byte	.LBE89-.LBB89
	.uleb128 0x1
	.string	"i"
	.2byte	0x680
	.byte	0x34
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF200
	.2byte	0x64b
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB66
	.8byte	.LFE66-.LFB66
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1a17
	.uleb128 0x3
	.4byte	.LASF196
	.2byte	0x64b
	.byte	0x1b
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF197
	.2byte	0x64b
	.byte	0x30
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x2
	.4byte	.LASF198
	.2byte	0x64d
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF199
	.2byte	0x64d
	.byte	0x17
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x654
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"op"
	.2byte	0x658
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -292
	.uleb128 0x1
	.string	"np"
	.2byte	0x658
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF201
	.2byte	0x658
	.byte	0x1b
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x2
	.4byte	.LASF202
	.2byte	0x658
	.byte	0x31
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x65e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"opd"
	.2byte	0x661
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0x2
	.4byte	.LASF203
	.2byte	0x666
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF204
	.2byte	0x667
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0xa
	.8byte	.LBB87
	.8byte	.LBE87-.LBB87
	.4byte	0x19f6
	.uleb128 0x1
	.string	"i"
	.2byte	0x659
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB88
	.8byte	.LBE88-.LBB88
	.uleb128 0x1
	.string	"pr"
	.2byte	0x669
	.byte	0x16
	.4byte	0x641
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF205
	.2byte	0x62e
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB65
	.8byte	.LFE65-.LFB65
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b28
	.uleb128 0x3
	.4byte	.LASF206
	.2byte	0x62e
	.byte	0x1c
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF207
	.2byte	0x62e
	.byte	0x30
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x1
	.string	"abs"
	.2byte	0x630
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x634
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x634
	.byte	0x1b
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x638
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.string	"di"
	.2byte	0x63c
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x63c
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"ni"
	.2byte	0x63f
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x2
	.4byte	.LASF208
	.2byte	0x643
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"buf"
	.2byte	0x644
	.byte	0xd
	.4byte	0x1b28
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.uleb128 0xa
	.8byte	.LBB85
	.8byte	.LBE85-.LBB85
	.4byte	0x1b08
	.uleb128 0x1
	.string	"i"
	.2byte	0x634
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB86
	.8byte	.LBE86-.LBB86
	.uleb128 0x1
	.string	"i"
	.2byte	0x63d
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	0x5b
	.4byte	0x1b38
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xef
	.byte	0
	.uleb128 0x10
	.4byte	.LASF226
	.2byte	0x61d
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB64
	.8byte	.LFE64-.LFB64
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1c10
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x61d
	.byte	0x26
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"ip"
	.2byte	0x61d
	.byte	0x3b
	.4byte	0x1c10
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"src"
	.2byte	0x61d
	.byte	0x4e
	.4byte	0x115f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x61d
	.byte	0x5c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x61f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x61f
	.byte	0x24
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"s"
	.2byte	0x61f
	.byte	0x3c
	.4byte	0x115f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB84
	.8byte	.LBE84-.LBB84
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x621
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x621
	.byte	0x32
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF171
	.2byte	0x622
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x623
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x13f
	.uleb128 0x9
	.4byte	.LASF209
	.2byte	0x5f2
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB63
	.8byte	.LFE63-.LFB63
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d6c
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x5f2
	.byte	0x1b
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5f4
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5f8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"di"
	.2byte	0x5fa
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x608
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x608
	.byte	0x1b
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x2
	.4byte	.LASF210
	.2byte	0x60b
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x2
	.4byte	.LASF211
	.2byte	0x60e
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x617
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0xa
	.8byte	.LBB79
	.8byte	.LBE79-.LBB79
	.4byte	0x1d28
	.uleb128 0x1
	.string	"pi"
	.2byte	0x5fe
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB80
	.8byte	.LBE80-.LBB80
	.uleb128 0x1
	.string	"ft"
	.2byte	0x600
	.byte	0x17
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB81
	.8byte	.LBE81-.LBB81
	.uleb128 0x1
	.string	"i"
	.2byte	0x601
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.8byte	.LBB82
	.8byte	.LBE82-.LBB82
	.4byte	0x1d4b
	.uleb128 0x1
	.string	"i"
	.2byte	0x608
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x4
	.8byte	.LBB83
	.8byte	.LBE83-.LBB83
	.uleb128 0x1
	.string	"pr"
	.2byte	0x610
	.byte	0x16
	.4byte	0x641
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF213
	.2byte	0x5c9
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB62
	.8byte	.LFE62-.LFB62
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1ea2
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x5c9
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5cb
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x2
	.4byte	.LASF37
	.2byte	0x5cf
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.string	"di"
	.2byte	0x5d1
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x5e2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -276
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x5e2
	.byte	0x1b
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.4byte	.LASF214
	.2byte	0x5e5
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x2
	.4byte	.LASF212
	.2byte	0x5ec
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0xa
	.8byte	.LBB74
	.8byte	.LBE74-.LBB74
	.4byte	0x1e82
	.uleb128 0x1
	.string	"off"
	.2byte	0x5d6
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF215
	.2byte	0x5d6
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1b
	.4byte	.LLRL5
	.uleb128 0x1
	.string	"de"
	.2byte	0x5d9
	.byte	0x1c
	.4byte	0x1ea2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x5da
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.8byte	.LBB76
	.8byte	.LBE76-.LBB76
	.uleb128 0x1
	.string	"i"
	.2byte	0x5db
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB78
	.8byte	.LBE78-.LBB78
	.uleb128 0x1
	.string	"i"
	.2byte	0x5e2
	.byte	0x33
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x1fd
	.uleb128 0x9
	.4byte	.LASF217
	.2byte	0x59e
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB61
	.8byte	.LFE61-.LFB61
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1fb8
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x59e
	.byte	0x1a
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x59e
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -556
	.uleb128 0x1
	.string	"abs"
	.2byte	0x5a1
	.byte	0xa
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF52
	.2byte	0x5a9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.4byte	.LASF181
	.2byte	0x5aa
	.byte	0xa
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x5ad
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
	.2byte	0x5b3
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF218
	.2byte	0x5b9
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x1
	.string	"um"
	.2byte	0x5bc
	.byte	0x14
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -30
	.uleb128 0x2
	.4byte	.LASF185
	.2byte	0x5bd
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0xa
	.8byte	.LBB72
	.8byte	.LBE72-.LBB72
	.4byte	0x1f98
	.uleb128 0x1
	.string	"i"
	.2byte	0x5aa
	.byte	0x22
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x4
	.8byte	.LBB73
	.8byte	.LBE73-.LBB73
	.uleb128 0x1
	.string	"i"
	.2byte	0x5b4
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF259
	.2byte	0x55e
	.8byte	.LFB60
	.8byte	.LFE60-.LFB60
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2185
	.uleb128 0x6
	.string	"out"
	.2byte	0x55e
	.byte	0x28
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1112
	.uleb128 0x3
	.4byte	.LASF219
	.2byte	0x55e
	.byte	0x34
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1120
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x55e
	.byte	0x47
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x1
	.string	"p"
	.2byte	0x560
	.byte	0x12
	.4byte	0x641
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF220
	.2byte	0x561
	.byte	0xa
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.string	"tmp"
	.2byte	0x571
	.byte	0xa
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -624
	.uleb128 0x1
	.string	"s"
	.2byte	0x574
	.byte	0x11
	.4byte	0x2e5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"end"
	.2byte	0x575
	.byte	0x11
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x2
	.4byte	.LASF221
	.2byte	0x576
	.byte	0x11
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.4byte	.LASF222
	.2byte	0x577
	.byte	0xa
	.4byte	0x2195
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1104
	.uleb128 0x2
	.4byte	.LASF223
	.2byte	0x578
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"pos"
	.2byte	0x58d
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0xa
	.8byte	.LBB62
	.8byte	.LBE62-.LBB62
	.4byte	0x20b2
	.uleb128 0x1
	.string	"n"
	.2byte	0x569
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.byte	0
	.uleb128 0x28
	.4byte	.LLRL3
	.4byte	0x212f
	.uleb128 0x1
	.string	"len"
	.2byte	0x57e
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x4
	.8byte	.LBB64
	.8byte	.LBE64-.LBB64
	.uleb128 0x2
	.4byte	.LASF224
	.2byte	0x584
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xa
	.8byte	.LBB65
	.8byte	.LBE65-.LBB65
	.4byte	0x210e
	.uleb128 0x1
	.string	"i"
	.2byte	0x586
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x4
	.8byte	.LBB66
	.8byte	.LBE66-.LBB66
	.uleb128 0x1
	.string	"i"
	.2byte	0x587
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x4
	.8byte	.LBB68
	.8byte	.LBE68-.LBB68
	.uleb128 0x1
	.string	"i"
	.2byte	0x58f
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1b
	.4byte	.LLRL4
	.uleb128 0x2
	.4byte	.LASF225
	.2byte	0x590
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.8byte	.LBB70
	.8byte	.LBE70-.LBB70
	.uleb128 0x1
	.string	"j"
	.2byte	0x593
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
	.4byte	0x2195
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xff
	.byte	0
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x21ab
	.uleb128 0xf
	.4byte	0xaa
	.byte	0x1f
	.uleb128 0xf
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0x10
	.4byte	.LASF227
	.2byte	0x540
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB59
	.8byte	.LFE59-.LFB59
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x226b
	.uleb128 0x3
	.4byte	.LASF228
	.2byte	0x540
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x540
	.byte	0x3c
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x542
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.string	"off"
	.2byte	0x546
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF229
	.2byte	0x547
	.byte	0xa
	.4byte	0x1437
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x4
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.uleb128 0x1
	.string	"de"
	.2byte	0x54a
	.byte	0x18
	.4byte	0x1ea2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x54b
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.8byte	.LBB61
	.8byte	.LBE61-.LBB61
	.uleb128 0x1
	.string	"i"
	.2byte	0x54c
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF230
	.2byte	0x4fe
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB58
	.8byte	.LFE58-.LFB58
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x243e
	.uleb128 0x3
	.4byte	.LASF228
	.2byte	0x4fe
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -724
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x4fe
	.byte	0x39
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -736
	.uleb128 0x3
	.4byte	.LASF231
	.2byte	0x4fe
	.byte	0x48
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -728
	.uleb128 0x1
	.string	"pdi"
	.2byte	0x502
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.string	"de"
	.2byte	0x507
	.byte	0x13
	.4byte	0x1fd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.string	"off"
	.2byte	0x50e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"idx"
	.2byte	0x52c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x52d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x52e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x52f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.string	"buf"
	.2byte	0x532
	.byte	0xd
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.uleb128 0x2
	.4byte	.LASF232
	.2byte	0x534
	.byte	0x14
	.4byte	0x1ea2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x538
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0xa
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.4byte	0x2378
	.uleb128 0x1
	.string	"i"
	.2byte	0x50a
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
	.4byte	.LASF232
	.2byte	0x511
	.byte	0x18
	.4byte	0x1ea2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x512
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x4
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.uleb128 0x1
	.string	"i"
	.2byte	0x513
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB58
	.8byte	.LBE58-.LBB58
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x517
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x518
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x2
	.4byte	.LASF234
	.2byte	0x51d
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.4byte	.LASF235
	.2byte	0x51e
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x4
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x2
	.4byte	.LASF233
	.2byte	0x520
	.byte	0x1e
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF236
	.2byte	0x4e8
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB57
	.8byte	.LFE57-.LFB57
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x24b3
	.uleb128 0x1
	.string	"di"
	.2byte	0x4ea
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
	.2byte	0x4eb
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.uleb128 0x2
	.4byte	.LASF218
	.2byte	0x4ef
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
	.2byte	0x4bb
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB56
	.8byte	.LFE56-.LFB56
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x25ca
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x4bb
	.byte	0x2f
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF228
	.2byte	0x4bb
	.byte	0x3f
	.4byte	0x25ca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x3
	.4byte	.LASF238
	.2byte	0x4bb
	.byte	0x52
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x2
	.4byte	.LASF239
	.2byte	0x4c1
	.byte	0xa
	.4byte	0x25cf
	.uleb128 0x4
	.byte	0x91
	.sleb128 -144
	.byte	0x6
	.uleb128 0x2
	.4byte	.LASF240
	.2byte	0x4c5
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.4byte	.LASF241
	.2byte	0x4c6
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.string	"tok"
	.2byte	0x4c7
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.string	"cur"
	.2byte	0x4c8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x4c9
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.string	"n"
	.2byte	0x4df
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0xa
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.4byte	0x25a9
	.uleb128 0x2
	.4byte	.LASF242
	.2byte	0x4cd
	.byte	0xf
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.4byte	.LASF243
	.2byte	0x4d5
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
	.2byte	0x4e1
	.byte	0xe
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x8b
	.uleb128 0xd
	.4byte	0x234
	.4byte	0x25e3
	.uleb128 0x37
	.4byte	0xaa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -136
	.byte	0x6
	.byte	0
	.uleb128 0x9
	.4byte	.LASF244
	.2byte	0x48c
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB55
	.8byte	.LFE55-.LFB55
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x266b
	.uleb128 0x6
	.string	"fd"
	.2byte	0x48c
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF103
	.2byte	0x48c
	.byte	0x1d
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x48c
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x48e
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x497
	.byte	0x13
	.4byte	0x803
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.uleb128 0x1
	.string	"i"
	.2byte	0x49d
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF245
	.2byte	0x45a
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB54
	.8byte	.LFE54-.LFB54
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2700
	.uleb128 0x6
	.string	"fd"
	.2byte	0x45a
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF103
	.2byte	0x45a
	.byte	0x1c
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x45a
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x45c
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"p"
	.2byte	0x465
	.byte	0x13
	.4byte	0x803
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"j"
	.2byte	0x474
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
	.2byte	0x475
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LASF246
	.2byte	0x417
	.8byte	.LFB53
	.8byte	.LFE53-.LFB53
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2792
	.uleb128 0x6
	.string	"fd1"
	.2byte	0x417
	.byte	0x15
	.4byte	0x2792
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"fd2"
	.2byte	0x417
	.byte	0x1f
	.4byte	0x2792
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x418
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"pip"
	.2byte	0x41a
	.byte	0x13
	.4byte	0x803
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xa
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.4byte	0x277e
	.uleb128 0x1
	.string	"i"
	.2byte	0x41c
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
	.2byte	0x436
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x48
	.uleb128 0x9
	.4byte	.LASF247
	.2byte	0x40e
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB52
	.8byte	.LFE52-.LFB52
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27e4
	.uleb128 0x6
	.string	"fd"
	.2byte	0x40e
	.byte	0x10
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x410
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"k"
	.2byte	0x413
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x9
	.4byte	.LASF248
	.2byte	0x401
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB51
	.8byte	.LFE51-.LFB51
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2824
	.uleb128 0x6
	.string	"fd"
	.2byte	0x401
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x403
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF249
	.2byte	0x3f5
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2864
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3f5
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x3f7
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF250
	.2byte	0x3e0
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x28a4
	.uleb128 0x6
	.string	"fd"
	.2byte	0x3e0
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF62
	.2byte	0x3e2
	.byte	0x13
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.4byte	.LASF251
	.2byte	0x3cc
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x28d1
	.uleb128 0x3
	.4byte	.LASF62
	.2byte	0x3cc
	.byte	0x1c
	.4byte	0xc26
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x24
	.4byte	.LASF252
	.2byte	0x3c0
	.byte	0xe
	.4byte	0x656
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2903
	.uleb128 0x2
	.4byte	.LASF157
	.2byte	0x3c2
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF253
	.2byte	0x3aa
	.byte	0xf
	.4byte	0x803
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2950
	.uleb128 0x1
	.string	"p"
	.2byte	0x3ac
	.byte	0x13
	.4byte	0x803
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF254
	.2byte	0x3b8
	.byte	0xb
	.4byte	0xd06
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"pa"
	.2byte	0x3b9
	.byte	0xb
	.4byte	0xd06
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x23
	.4byte	.LASF255
	.2byte	0x3a1
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x297b
	.uleb128 0x6
	.string	"p"
	.2byte	0x3a1
	.byte	0x1d
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF256
	.2byte	0x398
	.byte	0xe
	.4byte	0x656
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29ab
	.uleb128 0x1
	.string	"p"
	.2byte	0x39a
	.byte	0x12
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x23
	.4byte	.LASF257
	.2byte	0x392
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29d6
	.uleb128 0x6
	.string	"p"
	.2byte	0x392
	.byte	0x1e
	.4byte	0x803
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x24
	.4byte	.LASF258
	.2byte	0x387
	.byte	0xf
	.4byte	0x803
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2a06
	.uleb128 0x1
	.string	"p"
	.2byte	0x389
	.byte	0x13
	.4byte	0x803
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x38
	.4byte	.LASF339
	.byte	0x1
	.2byte	0x373
	.byte	0x6
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2aa6
	.uleb128 0xa
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x2a67
	.uleb128 0x1
	.string	"i"
	.2byte	0x378
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
	.2byte	0x379
	.byte	0x17
	.4byte	0x803
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
	.2byte	0x37f
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
	.2byte	0x380
	.byte	0x16
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF260
	.2byte	0x360
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b19
	.uleb128 0x6
	.string	"f"
	.2byte	0x360
	.byte	0x27
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x360
	.byte	0x37
	.4byte	0x641
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x361
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"c"
	.2byte	0x361
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
	.2byte	0x362
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF261
	.2byte	0x352
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b8a
	.uleb128 0x6
	.string	"f"
	.2byte	0x352
	.byte	0x24
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x352
	.byte	0x34
	.4byte	0x641
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cap"
	.2byte	0x353
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x28
	.4byte	.LLRL0
	.4byte	0x2b76
	.uleb128 0x1
	.string	"i"
	.2byte	0x355
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
	.2byte	0x357
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF262
	.2byte	0x34f
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2bba
	.uleb128 0x6
	.string	"f"
	.2byte	0x34f
	.byte	0x23
	.4byte	0x656
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.4byte	.LASF263
	.2byte	0x337
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2c16
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x337
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.string	"ip"
	.2byte	0x338
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
	.2byte	0x33e
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF264
	.2byte	0x30e
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2da3
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x30e
	.byte	0x1d
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1672
	.uleb128 0x6
	.string	"out"
	.2byte	0x30e
	.byte	0x29
	.4byte	0x2e0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1680
	.uleb128 0x3
	.4byte	.LASF219
	.2byte	0x30e
	.byte	0x32
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1684
	.uleb128 0x1
	.string	"abs"
	.2byte	0x311
	.byte	0xa
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x1
	.string	"dir"
	.2byte	0x315
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.string	"buf"
	.2byte	0x316
	.byte	0xa
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x317
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x317
	.byte	0x18
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF266
	.2byte	0x318
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x318
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"n"
	.2byte	0x318
	.byte	0x23
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x2
	.4byte	.LASF66
	.2byte	0x31d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x31f
	.byte	0x17
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"l"
	.2byte	0x32e
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x2d82
	.uleb128 0x2
	.4byte	.LASF268
	.2byte	0x322
	.byte	0x12
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1568
	.uleb128 0x1
	.string	"len"
	.2byte	0x322
	.byte	0x21
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF269
	.2byte	0x324
	.byte	0x12
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1440
	.uleb128 0x1
	.string	"p"
	.2byte	0x324
	.byte	0x35
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF270
	.2byte	0x326
	.byte	0x12
	.4byte	0x7f4
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1184
	.byte	0
	.uleb128 0x4
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x1
	.string	"i"
	.2byte	0x331
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
	.2byte	0x2cc
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2ed0
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x2cc
	.byte	0x2d
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1400
	.uleb128 0x3
	.4byte	.LASF266
	.2byte	0x2cc
	.byte	0x37
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1404
	.uleb128 0x1
	.string	"ipr"
	.2byte	0x2d1
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.string	"buf"
	.2byte	0x2d5
	.byte	0xa
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -400
	.uleb128 0x2
	.4byte	.LASF265
	.2byte	0x2d7
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"tok"
	.2byte	0x2d8
	.byte	0xb
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"cur"
	.2byte	0x2d9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF272
	.2byte	0x2da
	.byte	0xa
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -656
	.uleb128 0x4
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x2
	.4byte	.LASF66
	.2byte	0x2e1
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.string	"nxt"
	.2byte	0x2e3
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
	.2byte	0x2e6
	.byte	0x12
	.4byte	0x71d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1296
	.uleb128 0x1
	.string	"n"
	.2byte	0x2e7
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF269
	.2byte	0x2eb
	.byte	0x12
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1168
	.uleb128 0x1
	.string	"p"
	.2byte	0x2ed
	.byte	0x13
	.4byte	0x2e0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF270
	.2byte	0x2f3
	.byte	0x12
	.4byte	0x2185
	.uleb128 0x3
	.byte	0x91
	.sleb128 -912
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x9
	.4byte	.LASF273
	.2byte	0x2c8
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2f02
	.uleb128 0x3
	.4byte	.LASF178
	.2byte	0x2c8
	.byte	0x22
	.4byte	0x2e5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.4byte	.LASF274
	.2byte	0x2b1
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2fb1
	.uleb128 0x3
	.4byte	.LASF52
	.2byte	0x2b1
	.byte	0x24
	.4byte	0x1c10
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF38
	.2byte	0x2b1
	.byte	0x38
	.4byte	0x2e5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.string	"off"
	.2byte	0x2b2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF229
	.2byte	0x2b3
	.byte	0xa
	.4byte	0x1437
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.uleb128 0x1
	.string	"de"
	.2byte	0x2b7
	.byte	0x18
	.4byte	0x1ea2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x2b8
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
	.2byte	0x2b9
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LASF275
	.2byte	0x299
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3086
	.uleb128 0x6
	.string	"ip"
	.2byte	0x299
	.byte	0x1f
	.4byte	0x1c10
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF145
	.2byte	0x299
	.byte	0x2c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.string	"buf"
	.2byte	0x299
	.byte	0x3d
	.4byte	0xa18
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF18
	.2byte	0x299
	.byte	0x4b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF166
	.2byte	0x29a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"off"
	.2byte	0x29b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"dst"
	.2byte	0x29c
	.byte	0xe
	.4byte	0xa18
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x2
	.4byte	.LASF169
	.2byte	0x29f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF170
	.2byte	0x2a0
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF176
	.2byte	0x2a1
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF172
	.2byte	0x2a4
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF276
	.2byte	0x250
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3287
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x250
	.byte	0x2b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x6
	.string	"ip"
	.2byte	0x250
	.byte	0x40
	.4byte	0x1c10
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x6
	.string	"idx"
	.2byte	0x250
	.byte	0x4d
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x1
	.string	"di"
	.2byte	0x274
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.4byte	.LASF277
	.2byte	0x275
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF278
	.2byte	0x276
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x278
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF280
	.2byte	0x281
	.byte	0xd
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x2
	.4byte	.LASF281
	.2byte	0x283
	.byte	0xf
	.4byte	0x25ca
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.4byte	.LASF282
	.2byte	0x284
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF283
	.2byte	0x28d
	.byte	0xd
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x28f
	.byte	0xf
	.4byte	0x25ca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.4byte	0x3184
	.uleb128 0x1
	.string	"b"
	.2byte	0x254
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.byte	0
	.uleb128 0xa
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x321d
	.uleb128 0x2
	.4byte	.LASF285
	.2byte	0x25d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x266
	.byte	0x11
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x268
	.byte	0x13
	.4byte	0x25ca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.string	"i"
	.2byte	0x269
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x31fb
	.uleb128 0x1
	.string	"nb"
	.2byte	0x25f
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
	.2byte	0x26b
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
	.4byte	0x3241
	.uleb128 0x1
	.string	"nb"
	.2byte	0x27a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.uleb128 0xa
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x3265
	.uleb128 0x1
	.string	"nb"
	.2byte	0x286
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
	.2byte	0x291
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF286
	.2byte	0x230
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x336a
	.uleb128 0x6
	.string	"ip"
	.2byte	0x230
	.byte	0x2e
	.4byte	0x1c10
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.string	"idx"
	.2byte	0x230
	.byte	0x3b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xa
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x32fd
	.uleb128 0x2
	.4byte	.LASF285
	.2byte	0x236
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.4byte	.LASF216
	.2byte	0x239
	.byte	0x13
	.4byte	0x25ca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x4
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.uleb128 0x2
	.4byte	.LASF287
	.2byte	0x23e
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF288
	.2byte	0x23f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF279
	.2byte	0x241
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF281
	.2byte	0x245
	.byte	0x13
	.4byte	0x25ca
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF282
	.2byte	0x246
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF284
	.2byte	0x24b
	.byte	0x13
	.4byte	0x25ca
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF289
	.2byte	0x21f
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33ea
	.uleb128 0x2
	.4byte	.LASF290
	.2byte	0x221
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF291
	.2byte	0x222
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
	.2byte	0x223
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
	.2byte	0x227
	.byte	0x15
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF292
	.2byte	0x1f1
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x354d
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1f1
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1f1
	.byte	0x3d
	.4byte	0x1c10
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0xa
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x3449
	.uleb128 0x1
	.string	"i"
	.2byte	0x1f4
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xa
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0x349c
	.uleb128 0x2
	.4byte	.LASF293
	.2byte	0x1fd
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF232
	.2byte	0x1ff
	.byte	0x13
	.4byte	0x25ca
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.uleb128 0x1
	.string	"i"
	.2byte	0x200
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
	.2byte	0x209
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.4byte	.LASF267
	.2byte	0x20b
	.byte	0x13
	.4byte	0x25ca
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x1
	.string	"i"
	.2byte	0x20c
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
	.2byte	0x20e
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x2
	.4byte	.LASF296
	.2byte	0x20f
	.byte	0x15
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x2
	.4byte	.LASF297
	.2byte	0x211
	.byte	0x17
	.4byte	0x25ca
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.string	"j"
	.2byte	0x212
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
	.4byte	.LASF298
	.2byte	0x1e5
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x35a6
	.uleb128 0x6
	.string	"b"
	.2byte	0x1e5
	.byte	0x23
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF299
	.2byte	0x1e8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1e9
	.byte	0xd
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1eb
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF300
	.2byte	0x1db
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x35ff
	.uleb128 0x6
	.string	"b"
	.2byte	0x1db
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF299
	.2byte	0x1dd
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1de
	.byte	0xd
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1e0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x10
	.4byte	.LASF301
	.2byte	0x1d2
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x365d
	.uleb128 0x6
	.string	"b"
	.2byte	0x1d2
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x2
	.4byte	.LASF299
	.2byte	0x1d4
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1d5
	.byte	0xd
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.string	"bi"
	.2byte	0x1d7
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x17
	.4byte	.LASF302
	.2byte	0x1c4
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36e7
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1c4
	.byte	0x22
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x6
	.string	"src"
	.2byte	0x1c4
	.byte	0x3d
	.4byte	0x36e7
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x2
	.4byte	.LASF303
	.2byte	0x1c7
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF120
	.2byte	0x1c8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF145
	.2byte	0x1c9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"buf"
	.2byte	0x1cb
	.byte	0xd
	.4byte	0xadc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.string	"dip"
	.2byte	0x1cd
	.byte	0x14
	.4byte	0x1c10
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xb
	.4byte	0x1e8
	.uleb128 0x1e
	.4byte	.LASF304
	.2byte	0x1c2
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x371c
	.uleb128 0x6
	.string	"b"
	.2byte	0x1c2
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x13
	.4byte	.LASF305
	.2byte	0x1ad
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3794
	.uleb128 0x3
	.4byte	.LASF37
	.2byte	0x1ad
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF306
	.2byte	0x1ad
	.byte	0x2f
	.4byte	0x1c10
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF303
	.2byte	0x1b4
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF120
	.2byte	0x1b6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.4byte	.LASF145
	.2byte	0x1b8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.string	"dip"
	.2byte	0x1bb
	.byte	0x14
	.4byte	0x1c10
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x29
	.4byte	.LASF321
	.2byte	0x1a8
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1e
	.4byte	.LASF307
	.2byte	0x194
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3867
	.uleb128 0x6
	.string	"ip"
	.2byte	0x194
	.byte	0x26
	.4byte	0x1c10
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF186
	.2byte	0x194
	.byte	0x2e
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.string	"p"
	.2byte	0x196
	.byte	0x12
	.4byte	0x641
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.4byte	.LASF31
	.2byte	0x197
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.4byte	.LASF308
	.2byte	0x198
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF309
	.2byte	0x1a0
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
	.2byte	0x19c
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
	.2byte	0x19d
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
	.2byte	0x18d
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3897
	.uleb128 0x1
	.string	"x"
	.2byte	0x18d
	.byte	0x30
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x13
	.4byte	.LASF312
	.2byte	0x17c
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x38e1
	.uleb128 0x6
	.string	"blk"
	.2byte	0x17c
	.byte	0x1b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"src"
	.2byte	0x17c
	.byte	0x2c
	.4byte	0xd08
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"be"
	.2byte	0x17e
	.byte	0x1a
	.4byte	0x38e1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.4byte	0xa8a
	.uleb128 0x17
	.4byte	.LASF313
	.2byte	0x163
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3922
	.uleb128 0x3
	.4byte	.LASF111
	.2byte	0x163
	.byte	0x27
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x6
	.string	"src"
	.2byte	0x163
	.byte	0x3b
	.4byte	0xd08
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x13
	.4byte	.LASF314
	.2byte	0x15c
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x396c
	.uleb128 0x6
	.string	"blk"
	.2byte	0x15c
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x6
	.string	"dst"
	.2byte	0x15c
	.byte	0x25
	.4byte	0xd06
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"be"
	.2byte	0x15e
	.byte	0x1a
	.4byte	0x38e1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x39
	.4byte	.LASF315
	.byte	0x1
	.2byte	0x155
	.byte	0xd
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x399a
	.uleb128 0x6
	.string	"be"
	.2byte	0x155
	.byte	0x31
	.4byte	0x38e1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x10
	.4byte	.LASF316
	.2byte	0x125
	.byte	0x1d
	.4byte	0x38e1
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3a1d
	.uleb128 0x3
	.4byte	.LASF120
	.2byte	0x125
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF317
	.2byte	0x135
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x39fd
	.uleb128 0x1
	.string	"i"
	.2byte	0x12a
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
	.2byte	0x136
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x10
	.4byte	.LASF318
	.2byte	0x10b
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3a7d
	.uleb128 0x2
	.4byte	.LASF319
	.2byte	0x10d
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.4byte	.LASF320
	.2byte	0x10e
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
	.2byte	0x111
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0x29
	.4byte	.LASF322
	.2byte	0x103
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x3a
	.4byte	.LASF323
	.byte	0x1
	.byte	0xf7
	.byte	0x6
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3ad3
	.uleb128 0x4
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x1a
	.string	"i"
	.byte	0xf9
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
	.byte	0xcb
	.byte	0xd
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3b0f
	.uleb128 0x3c
	.4byte	.LASF111
	.byte	0x1
	.byte	0xcb
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x15
	.string	"dst"
	.byte	0xcb
	.byte	0x34
	.4byte	0xd06
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3d
	.4byte	.LASF325
	.byte	0x1
	.byte	0xc0
	.byte	0x14
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3b55
	.uleb128 0x15
	.string	"f0"
	.byte	0xc0
	.byte	0x27
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x15
	.string	"f1"
	.byte	0xc0
	.byte	0x33
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x15
	.string	"f2"
	.byte	0xc0
	.byte	0x3f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x3e
	.4byte	.LASF326
	.byte	0x1
	.byte	0x83
	.byte	0x6
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3c33
	.uleb128 0xe
	.4byte	.LASF327
	.byte	0x90
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1a
	.string	"st"
	.byte	0x94
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xe
	.4byte	.LASF328
	.byte	0x9c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0xe
	.4byte	.LASF329
	.byte	0x9d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xe
	.4byte	.LASF330
	.byte	0xa1
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xe
	.4byte	.LASF331
	.byte	0xa2
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xe
	.4byte	.LASF332
	.byte	0xa3
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xe
	.4byte	.LASF333
	.byte	0xa4
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xe
	.4byte	.LASF334
	.byte	0xb9
	.byte	0xe
	.4byte	0x9e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1a
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
	.uleb128 0xe
	.4byte	.LASF147
	.byte	0x86
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3f
	.4byte	.LASF335
	.byte	0x1
	.byte	0x81
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3c6e
	.uleb128 0x15
	.string	"b"
	.byte	0x81
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x15
	.string	"o"
	.byte	0x81
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x40
	.4byte	.LASF340
	.byte	0x1
	.byte	0x80
	.byte	0x14
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x15
	.string	"b"
	.byte	0x80
	.byte	0x22
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x15
	.string	"o"
	.byte	0x80
	.byte	0x2d
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x15
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
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x5
	.byte	0
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
	.uleb128 0x15
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
	.uleb128 0x26
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
	.uleb128 0x27
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x28
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x29
	.uleb128 0x2e
	.byte	0
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
	.uleb128 0x2d
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
	.uleb128 0xb
	.uleb128 0x2
	.uleb128 0x18
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
	.uleb128 0x5
	.uleb128 0x2
	.uleb128 0x18
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
	.uleb128 0x33
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x34
	.uleb128 0x26
	.byte	0
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
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
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
	.uleb128 0x37
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x38
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
	.uleb128 0x39
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
	.uleb128 .LBB63-.Ltext0
	.uleb128 .LBE63-.Ltext0
	.byte	0x4
	.uleb128 .LBB67-.Ltext0
	.uleb128 .LBE67-.Ltext0
	.byte	0
.LLRL4:
	.byte	0x4
	.uleb128 .LBB69-.Ltext0
	.uleb128 .LBE69-.Ltext0
	.byte	0x4
	.uleb128 .LBB71-.Ltext0
	.uleb128 .LBE71-.Ltext0
	.byte	0
.LLRL5:
	.byte	0x4
	.uleb128 .LBB75-.Ltext0
	.uleb128 .LBE75-.Ltext0
	.byte	0x4
	.uleb128 .LBB77-.Ltext0
	.uleb128 .LBE77-.Ltext0
	.byte	0
.LLRL6:
	.byte	0x4
	.uleb128 .LBB101-.Ltext0
	.uleb128 .LBE101-.Ltext0
	.byte	0x4
	.uleb128 .LBB102-.Ltext0
	.uleb128 .LBE102-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF218:
	.string	"newi"
.LASF134:
	.string	"get_current_file_table"
.LASF166:
	.string	"left"
.LASF241:
	.string	"last"
.LASF162:
	.string	"fs_size"
.LASF200:
	.string	"fs_rename"
.LASF55:
	.string	"vaddr"
.LASF180:
	.string	"created_new"
.LASF248:
	.string	"is_stdout"
.LASF147:
	.string	"base"
.LASF151:
	.string	"oldfd"
.LASF286:
	.string	"inode_blockno"
.LASF136:
	.string	"strlen"
.LASF152:
	.string	"newfd"
.LASF140:
	.string	"strncmp"
.LASF60:
	.string	"program_size"
.LASF146:
	.string	"whence"
.LASF315:
	.string	"bcache_release"
.LASF104:
	.string	"flags"
.LASF289:
	.string	"alloc_data_block"
.LASF283:
	.string	"secondbuf"
.LASF229:
	.string	"namebuf"
.LASF106:
	.string	"virtq_used_elem"
.LASF11:
	.string	"unsigned int"
.LASF66:
	.string	"next"
.LASF238:
	.string	"leafname"
.LASF212:
	.string	"zero"
.LASF35:
	.string	"addrs"
.LASF189:
	.string	"fs_chown"
.LASF227:
	.string	"remove_dirent"
.LASF209:
	.string	"fs_unlink"
.LASF278:
	.string	"idx2"
.LASF187:
	.string	"fs_open"
.LASF259:
	.string	"build_abs_normalized"
.LASF185:
	.string	"pdi_inh"
.LASF220:
	.string	"merged"
.LASF240:
	.string	"save"
.LASF233:
	.string	"block_end"
.LASF251:
	.string	"fs_init"
.LASF56:
	.string	"memsz"
.LASF31:
	.string	"mode"
.LASF328:
	.string	"devQ"
.LASF102:
	.string	"virtq_desc"
.LASF63:
	.string	"num_process_pages"
.LASF101:
	.string	"g_time_offset"
.LASF223:
	.string	"compn"
.LASF222:
	.string	"comps"
.LASF127:
	.string	"bcache_misses"
.LASF232:
	.string	"ents"
.LASF195:
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
.LASF335:
	.string	"mr32"
.LASF190:
	.string	"fs_chmod"
.LASF165:
	.string	"to_total"
.LASF288:
	.string	"dbl_index1"
.LASF250:
	.string	"is_pipe"
.LASF292:
	.string	"free_inode_blocks"
.LASF308:
	.string	"shift"
.LASF54:
	.string	"stack_top"
.LASF97:
	.string	"FK_PIPE"
.LASF67:
	.string	"umask"
.LASF157:
	.string	"result"
.LASF62:
	.string	"file_table"
.LASF197:
	.string	"newpath"
.LASF228:
	.string	"parent_inum"
.LASF42:
	.string	"pte_t"
.LASF138:
	.string	"strncpy"
.LASF88:
	.string	"write_open"
.LASF21:
	.string	"nlog"
.LASF173:
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
.LASF214:
	.string	"pdi2"
.LASF34:
	.string	"ctime"
.LASF203:
	.string	"oldpd"
.LASF326:
	.string	"virtio_blk_init"
.LASF75:
	.string	"pipe"
.LASF156:
	.string	"owner"
.LASF270:
	.string	"joined"
.LASF264:
	.string	"fs_realpath"
.LASF40:
	.string	"stat"
.LASF268:
	.string	"lbuf"
.LASF61:
	.string	"xstatus"
.LASF74:
	.string	"used"
.LASF282:
	.string	"first_blk"
.LASF305:
	.string	"read_inode"
.LASF119:
	.string	"bcache_entry"
.LASF148:
	.string	"newoff"
.LASF144:
	.string	"puts"
.LASF272:
	.string	"prefix"
.LASF15:
	.string	"size_t"
.LASF294:
	.string	"dblk"
.LASF145:
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
.LASF59:
	.string	"program"
.LASF230:
	.string	"add_dirent"
.LASF177:
	.string	"fs_open2"
.LASF169:
	.string	"blk_idx"
.LASF155:
	.string	"fs_dup_table"
.LASF69:
	.string	"supp_gids"
.LASF323:
	.string	"bcache_init"
.LASF191:
	.string	"fs_lstat"
.LASF82:
	.string	"num_owner_process"
.LASF132:
	.string	"gFreeFiles"
.LASF28:
	.string	"major"
.LASF207:
	.string	"linkpath"
.LASF178:
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
.LASF211:
	.string	"pdir"
.LASF164:
	.string	"count"
.LASF262:
	.string	"owner_cap"
.LASF128:
	.string	"block_buf"
.LASF181:
	.string	"leaf"
.LASF107:
	.string	"virtq_avail"
.LASF256:
	.string	"alloc_file"
.LASF312:
	.string	"write_block"
.LASF39:
	.string	"char"
.LASF153:
	.string	"fs_dup2"
.LASF274:
	.string	"dir_lookup"
.LASF95:
	.string	"FK_STDERR"
.LASF193:
	.string	"bufsz"
.LASF260:
	.string	"owner_remove"
.LASF307:
	.string	"check_perm"
.LASF122:
	.string	"dirty"
.LASF57:
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
.LASF224:
	.string	"llen"
.LASF41:
	.string	"ssize_t"
.LASF72:
	.string	"file"
.LASF201:
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
.LASF334:
	.string	"vq_phys"
.LASF100:
	.string	"gActiveProc"
.LASF281:
	.string	"first_entries"
.LASF277:
	.string	"idx1"
.LASF16:
	.string	"long long int"
.LASF337:
	.string	"yield"
.LASF133:
	.string	"panic"
.LASF24:
	.string	"bmapstart"
.LASF179:
	.string	"path2"
.LASF141:
	.string	"printf"
.LASF217:
	.string	"fs_mkdir"
.LASF316:
	.string	"bcache_get"
.LASF199:
	.string	"newabs"
.LASF266:
	.string	"depth"
.LASF244:
	.string	"pipewrite"
.LASF51:
	.string	"context"
.LASF271:
	.string	"path_lookup_lim"
.LASF245:
	.string	"piperead"
.LASF126:
	.string	"bcache_hits"
.LASF247:
	.string	"is_tty"
.LASF172:
	.string	"disk_blk"
.LASF174:
	.string	"fs_read"
.LASF125:
	.string	"bcache_time"
.LASF314:
	.string	"read_block"
.LASF168:
	.string	"newsize"
.LASF143:
	.string	"memset"
.LASF280:
	.string	"firstbuf"
.LASF176:
	.string	"to_read"
.LASF192:
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
.LASF160:
	.string	"fs_close"
.LASF50:
	.string	"trapframe"
.LASF58:
	.string	"pagetable"
.LASF94:
	.string	"FK_STDOUT"
.LASF205:
	.string	"fs_symlink"
.LASF76:
	.string	"pipe_used"
.LASF149:
	.string	"fs_lseek"
.LASF284:
	.string	"second_entries"
.LASF303:
	.string	"inodes_per_blk"
.LASF208:
	.string	"tlen"
.LASF242:
	.string	"nexttok"
.LASF150:
	.string	"fs_fstat_fd"
.LASF332:
	.string	"sz_used"
.LASF87:
	.string	"read_open"
.LASF313:
	.string	"virtio_blk_write"
.LASF17:
	.string	"long double"
.LASF68:
	.string	"pgrp"
.LASF26:
	.string	"dinode"
.LASF8:
	.string	"uint16_t"
.LASF239:
	.string	"copy"
.LASF171:
	.string	"to_write"
.LASF327:
	.string	"devfeat"
.LASF36:
	.string	"dirent"
.LASF269:
	.string	"remain"
.LASF77:
	.string	"read_pipe"
.LASF43:
	.string	"pagetable_t"
.LASF329:
	.string	"drvQ"
.LASF182:
	.string	"new_inum"
.LASF309:
	.string	"perms"
.LASF52:
	.string	"parent"
.LASF263:
	.string	"dump_inode"
.LASF64:
	.string	"debug_"
.LASF3:
	.string	"short int"
.LASF321:
	.string	"read_superblock"
.LASF204:
	.string	"filedi"
.LASF4:
	.string	"long int"
.LASF86:
	.string	"nwrite"
.LASF196:
	.string	"oldpath"
.LASF71:
	.string	"username"
.LASF44:
	.string	"context_t"
.LASF114:
	.string	"avail"
.LASF298:
	.string	"bitmap_clear"
.LASF92:
	.string	"num_linked_file"
.LASF293:
	.string	"iblk"
.LASF53:
	.string	"parent_pid"
.LASF12:
	.string	"uint64_t"
.LASF249:
	.string	"is_stdin"
.LASF154:
	.string	"free_fs_table"
.LASF339:
	.string	"file_system_init"
.LASF221:
	.string	"tok_start"
.LASF121:
	.string	"refcnt"
.LASF175:
	.string	"remaining"
.LASF255:
	.string	"free_file"
.LASF139:
	.string	"strcmp"
.LASF206:
	.string	"target"
.LASF65:
	.string	"deleted"
.LASF198:
	.string	"oldabs"
.LASF163:
	.string	"fs_write"
.LASF129:
	.string	"gPipes"
.LASF194:
	.string	"fs_stat"
.LASF38:
	.string	"name"
.LASF123:
	.string	"last_use"
.LASF161:
	.string	"massive"
.LASF78:
	.string	"write_pipe"
.LASF257:
	.string	"free_pipe"
.LASF48:
	.string	"num_process_kalloc_address"
.LASF14:
	.string	"uintptr_t"
.LASF79:
	.string	"oflags"
.LASF49:
	.string	"proc"
.LASF33:
	.string	"mtime"
.LASF159:
	.string	"fs_exit"
.LASF210:
	.string	"pdi3"
.LASF13:
	.string	"long unsigned int"
.LASF22:
	.string	"logstart"
.LASF310:
	.string	"member"
.LASF330:
	.string	"sz_desc"
.LASF261:
	.string	"owner_add"
.LASF202:
	.string	"nname"
.LASF5:
	.string	"int32_t"
.LASF99:
	.string	"gProc"
.LASF275:
	.string	"read_data"
.LASF158:
	.string	"orig"
.LASF225:
	.string	"need"
.LASF336:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mno-small-data-limit=0 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -fno-pie -ffreestanding"
.LASF331:
	.string	"sz_avail"
.LASF219:
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
.LASF46:
	.string	"process_pages"
.LASF170:
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
.LASF184:
	.string	"leafx"
.LASF103:
	.string	"addr"
.LASF295:
	.string	"sblk"
.LASF120:
	.string	"blkno"
.LASF47:
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
.LASF183:
	.string	"pinum"
.LASF2:
	.string	"signed char"
.LASF213:
	.string	"fs_rmdir"
.LASF285:
	.string	"indirect_blk"
.LASF9:
	.string	"short unsigned int"
.LASF186:
	.string	"want"
.LASF142:
	.string	"memcpy"
.LASF118:
	.string	"dma_buf"
.LASF216:
	.string	"entries"
.LASF235:
	.string	"abs_idx"
.LASF110:
	.string	"reserved"
.LASF231:
	.string	"child_inum"
.LASF167:
	.string	"written"
.LASF338:
	.string	"kalloc"
.LASF246:
	.string	"pipe_open"
.LASF108:
	.string	"virtq_used"
.LASF265:
	.string	"rest"
.LASF89:
	.string	"nreader"
.LASF45:
	.string	"mepc"
.LASF188:
	.string	"fs_utimes"
.LASF325:
	.string	"set_flags"
.LASF276:
	.string	"inode_bmap_alloc"
.LASF113:
	.string	"desc"
.LASF32:
	.string	"atime"
.LASF215:
	.string	"has_entries"
.LASF290:
	.string	"bmapblocks"
.LASF306:
	.string	"dest"
.LASF226:
	.string	"write_data_inode"
.LASF93:
	.string	"FK_STDIN"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
