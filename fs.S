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
	.loc 1 123 59
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
	.loc 1 123 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 123 62
	mv	a4,a5
	.loc 1 123 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 123 91
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
	.loc 1 124 60
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
	.loc 1 124 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 124 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 124 97
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
	.loc 1 127 1
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
	.loc 1 128 13
	sw	zero,-20(s0)
	.loc 1 128 5
	j	.L5
.L9:
.LBB3:
	.loc 1 129 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 129 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 130 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 130 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 131 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 131 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 131 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 131 58
	j	.L8
.L22:
	.loc 1 130 47
	nop
.L7:
.LBE3:
	.loc 1 128 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 128 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 133 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 133 7
	bne	a5,zero,.L10
	.loc 1 133 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 133 54
	j	.L11
.L10:
	.loc 1 134 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 134 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 134 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 134 70
	j	.L13
.L12:
	.loc 1 136 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 137 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 139 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 141 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 143 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 143 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 144 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 145 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 145 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 145 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 146 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 146 46
	j	.L15
.L14:
	.loc 1 149 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 150 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 151 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 152 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 153 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 154 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 155 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 155 7
	beq	a5,zero,.L17
	.loc 1 155 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 155 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 155 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 155 65
	j	.L19
.L18:
	.loc 1 157 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 157 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 158 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 158 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 159 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 159 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 160 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 160 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 161 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 161 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 163 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 163 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 164 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 164 8
	bne	a5,zero,.L20
	.loc 1 164 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 164 57
	j	.L21
.L20:
	.loc 1 165 5
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
	.loc 1 167 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 168 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 168 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 169 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 169 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 171 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 171 14
	sd	a5,-96(s0)
	.loc 1 172 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 173 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 173 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 173 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 175 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 176 1
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
	.loc 1 178 66
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
	.loc 1 179 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 179 19
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
	.loc 1 180 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 180 19
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
	.loc 1 181 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 181 19
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
	.loc 1 182 1
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
	.loc 1 187 1
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
	.loc 1 188 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 189 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 190 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 191 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 193 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 193 20
	lla	a4,req
	.loc 1 193 18
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
	.loc 1 193 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 193 51
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
	.loc 1 193 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 193 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 194 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 194 20
	lla	a4,dma_buf
	.loc 1 194 18
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
	.loc 1 194 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 194 51
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
	.loc 1 194 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 194 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 195 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 195 20
	lla	a4,status_byte
	.loc 1 195 18
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
	.loc 1 195 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 195 57
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
	.loc 1 197 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 199 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 199 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 199 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 200 5
	fence	rw,rw
	.loc 1 201 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 201 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 201 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 201 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 203 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 205 10
	j	.L25
.L26:
	.loc 1 206 9
	fence	rw,rw
.L25:
	.loc 1 205 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 208 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 209 1
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
	.loc 1 212 1
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
	.loc 1 213 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
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
.LFE5:
	.size	read_block, .-read_block
	.align	1
	.type	virtio_blk_write, @function
virtio_blk_write:
.LFB6:
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
	sd	a0,-24(s0)
	sd	a1,-32(s0)
	.loc 1 218 14
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 219 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 220 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 221 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 223 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 225 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 225 20
	lla	a4,req
	.loc 1 225 18
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
	.loc 1 225 47
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 225 55
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
	.loc 1 225 77
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 225 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 226 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 226 20
	lla	a4,dma_buf
	.loc 1 226 18
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
	.loc 1 226 47
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 226 55
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
	.loc 1 226 77
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 226 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 227 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 227 20
	lla	a4,status_byte
	.loc 1 227 18
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
	.loc 1 227 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 227 56
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
	.loc 1 229 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 231 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 231 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 231 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 232 5
	fence	rw,rw
	.loc 1 233 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 233 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 233 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 233 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 235 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 237 10
	j	.L29
.L30:
	.loc 1 238 9
	fence	rw,rw
.L29:
	.loc 1 237 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L30
	.loc 1 239 1
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
	.loc 1 242 1
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
	.loc 1 243 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_write
	.loc 1 244 1
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
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB8:
	.loc 1 253 28
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
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 255 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 256 1
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
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB9:
	.loc 1 258 53
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
	.loc 1 259 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L34
	.loc 1 259 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 259 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L35
.L34:
	.loc 1 260 9
	li	a2,68
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 261 9
	j	.L33
.L35:
	.loc 1 265 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 267 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 267 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 267 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 267 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 269 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 269 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 269 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 271 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 272 26
	lwu	a4,-28(s0)
	.loc 1 272 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 273 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L33:
	.loc 1 274 1
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
	.size	read_inode, .-read_inode
	.align	1
	.type	BBLOCK, @function
BBLOCK:
.LFB10:
	.loc 1 279 42
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
	.loc 1 279 53
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 279 69
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 1 279 64
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 279 77
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
	.size	BBLOCK, .-BBLOCK
	.align	1
	.type	write_inode, @function
write_inode:
.LFB11:
	.loc 1 282 1
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
	.loc 1 283 8
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L44
	.loc 1 283 30 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 283 18 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L44
	.loc 1 284 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 285 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 285 45
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 285 50
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 285 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 286 30
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 286 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 286 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 289 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 290 26
	lwu	a5,-28(s0)
	.loc 1 290 20
	addi	a4,s0,-552
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 291 10
	ld	a4,-40(s0)
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 292 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L39
.L44:
	.loc 1 283 40
	nop
.L39:
	.loc 1 293 1
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE11:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB12:
	.loc 1 296 1
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
	.loc 1 297 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 299 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 300 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 301 19
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 301 16
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 1 301 29
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 301 23
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 301 34
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 302 1
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
.LFE12:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB13:
	.loc 1 305 1
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
	.loc 1 306 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 308 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 309 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 310 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 310 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 310 27
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 310 21
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 310 15
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
	.loc 1 311 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 312 1
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
.LFE13:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB14:
	.loc 1 315 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 316 30
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 316 42
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 316 14
	srliw	a5,a5,12
	sw	a5,-24(s0)
	.loc 1 317 29
	lla	a5,sb
	lw	a5,24(a5)
	.loc 1 317 14
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
.LBB4:
	.loc 1 318 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
	.loc 1 318 5
	j	.L49
.L52:
	.loc 1 319 14
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 319 12 discriminator 1
	bne	a5,zero,.L50
.LBB5:
	.loc 1 320 13
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 323 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 324 13
	addi	a4,s0,-544
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 325 20
	lw	a5,-20(s0)
	j	.L51
.L50:
.LBE5:
	.loc 1 318 48 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L49:
	.loc 1 318 40 discriminator 1
	lla	a5,sb
	lw	a5,0(a5)
	.loc 1 318 36 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L52
.LBE4:
	.loc 1 328 12
	li	a5,0
.L51:
	.loc 1 329 1
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
.LFE14:
	.size	alloc_data_block, .-alloc_data_block
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB15:
	.loc 1 331 64
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
	.loc 1 332 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L54
	.loc 1 334 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L55
.L54:
	.loc 1 335 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L56
.LBB6:
	.loc 1 337 18
	ld	a5,-88(s0)
	lw	a5,60(a5)
	sw	a5,-60(s0)
	.loc 1 338 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L57
	.loc 1 338 39 discriminator 1
	li	a5,0
	.loc 1 338 39 is_stmt 0
	j	.L55
.L57:
	.loc 1 339 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 340 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 341 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 341 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L55
.L56:
.LBE6:
.LBB7:
	.loc 1 344 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 345 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 346 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 348 18
	ld	a5,-88(s0)
	lw	a5,64(a5)
	sw	a5,-28(s0)
	.loc 1 349 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L58
	.loc 1 349 40 discriminator 1
	li	a5,0
	.loc 1 349 40 is_stmt 0
	j	.L55
.L58:
	.loc 1 351 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 352 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 353 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 353 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 354 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L59
	.loc 1 354 36 discriminator 1
	li	a5,0
	.loc 1 354 36 is_stmt 0
	j	.L55
.L59:
	.loc 1 357 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 358 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 359 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L55:
.LBE7:
	.loc 1 361 1
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
.LFE15:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB16:
	.loc 1 364 1
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
	.loc 1 365 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L61
	.loc 1 366 22
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	.loc 1 366 12
	bne	a5,zero,.L62
.LBB8:
	.loc 1 367 26
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-100(s0)
	.loc 1 368 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L63
	.loc 1 368 28 discriminator 1
	li	a5,0
	.loc 1 368 28 is_stmt 0
	j	.L77
.L63:
	.loc 1 369 28 is_stmt 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a4,-100(s0)
	sw	a4,12(a5)
	.loc 1 370 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L62:
.LBE8:
	.loc 1 372 25
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L77
.L61:
	.loc 1 375 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L65
.LBB9:
	.loc 1 376 18
	ld	a5,-1664(s0)
	lw	a5,60(a5)
	sw	a5,-20(s0)
	.loc 1 377 12
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L66
.LBB10:
	.loc 1 378 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-80(s0)
	.loc 1 379 16
	lw	a5,-80(s0)
	sext.w	a5,a5
	bne	a5,zero,.L67
	.loc 1 379 29 discriminator 1
	li	a5,0
	.loc 1 379 29 is_stmt 0
	j	.L77
.L67:
	.loc 1 381 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-80(s0)
	sw	a4,60(a5)
	.loc 1 382 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 383 26
	lw	a5,-80(s0)
	sw	a5,-20(s0)
.L66:
.LBE10:
	.loc 1 386 9
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 387 19
	addi	a5,s0,-1640
	sd	a5,-88(s0)
	.loc 1 388 18
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sw	a5,-92(s0)
	.loc 1 389 20
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 389 12
	bne	a5,zero,.L69
.LBB11:
	.loc 1 390 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-96(s0)
	.loc 1 391 16
	lw	a5,-96(s0)
	sext.w	a5,a5
	bne	a5,zero,.L70
	.loc 1 391 29 discriminator 1
	li	a5,0
	.loc 1 391 29 is_stmt 0
	j	.L77
.L70:
	.loc 1 392 20 is_stmt 1
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	.loc 1 392 24
	lw	a4,-96(s0)
	sw	a4,0(a5)
	.loc 1 393 13
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L69:
.LBE11:
	.loc 1 395 23
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L77
.L65:
.LBE9:
	.loc 1 399 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sw	a5,-32(s0)
	.loc 1 400 14
	lw	a5,-32(s0)
	srliw	a5,a5,7
	sw	a5,-36(s0)
	.loc 1 401 14
	lw	a5,-32(s0)
	andi	a5,a5,127
	sw	a5,-40(s0)
	.loc 1 403 14
	ld	a5,-1664(s0)
	lw	a5,64(a5)
	sw	a5,-24(s0)
	.loc 1 404 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L71
.LBB12:
	.loc 1 405 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 406 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L72
	.loc 1 406 25 discriminator 1
	li	a5,0
	.loc 1 406 25 is_stmt 0
	j	.L77
.L72:
	.loc 1 407 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-44(s0)
	sw	a4,64(a5)
	.loc 1 408 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 409 23
	lw	a5,-44(s0)
	sw	a5,-24(s0)
.L71:
.LBE12:
	.loc 1 413 5
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 414 15
	addi	a5,s0,-616
	sd	a5,-56(s0)
	.loc 1 415 39
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 415 14
	lw	a5,0(a5)
	sw	a5,-28(s0)
	.loc 1 416 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L73
.LBB13:
	.loc 1 417 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 418 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L74
	.loc 1 418 25 discriminator 1
	li	a5,0
	.loc 1 418 25 is_stmt 0
	j	.L77
.L74:
	.loc 1 419 22 is_stmt 1
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 419 29
	lw	a4,-60(s0)
	sw	a4,0(a5)
	.loc 1 420 9
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 421 19
	lw	a5,-60(s0)
	sw	a5,-28(s0)
.L73:
.LBE13:
	.loc 1 425 5
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 426 15
	addi	a5,s0,-1128
	sd	a5,-72(s0)
	.loc 1 427 23
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 427 8
	bne	a5,zero,.L75
.LBB14:
	.loc 1 428 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 429 12
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L76
	.loc 1 429 25 discriminator 1
	li	a5,0
	.loc 1 429 25 is_stmt 0
	j	.L77
.L76:
	.loc 1 430 23 is_stmt 1
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 430 30
	lw	a4,-76(s0)
	sw	a4,0(a5)
	.loc 1 431 9
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L75:
.LBE14:
	.loc 1 433 26
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L77:
	.loc 1 434 1
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
.LFE16:
	.size	inode_bmap_alloc, .-inode_bmap_alloc
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB17:
	.loc 1 436 81
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
	.loc 1 437 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 438 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 439 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 441 11
	j	.L79
.L83:
.LBB15:
	.loc 1 442 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 443 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 444 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 445 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L80
	.loc 1 445 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L80:
	.loc 1 447 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 448 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L81
	.loc 1 449 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L82
.L81:
	.loc 1 451 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 452 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L82:
	.loc 1 454 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 455 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 456 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L79:
.LBE15:
	.loc 1 441 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L83
	.loc 1 458 1
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
.LFE17:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB18:
	.loc 1 460 62
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
	.loc 1 461 14
	sw	zero,-20(s0)
	.loc 1 464 11
	j	.L85
.L91:
.LBB16:
	.loc 1 465 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 466 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 467 13
	li	a5,32
	sw	a5,-36(s0)
.LBB17:
	.loc 1 468 18
	sw	zero,-24(s0)
	.loc 1 468 9
	j	.L86
.L90:
	.loc 1 469 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 469 22
	lhu	a5,0(a5)
	.loc 1 469 16
	beq	a5,zero,.L93
	.loc 1 470 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 470 34
	addi	a4,a5,2
	.loc 1 470 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 471 29
	sb	zero,-42(s0)
	.loc 1 472 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 472 16 discriminator 1
	bne	a5,zero,.L88
	.loc 1 473 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 473 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L92
.L93:
	.loc 1 469 34
	nop
.L88:
	.loc 1 468 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L86:
	.loc 1 468 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L90
.LBE17:
	.loc 1 476 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L85:
.LBE16:
	.loc 1 464 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 464 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L91
	.loc 1 478 12
	li	a5,0
.L92:
	.loc 1 479 1
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
.LFE18:
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
.LFB19:
	.loc 1 481 40
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
	.loc 1 481 40
	mv	a5,sp
	mv	s1,a5
	.loc 1 482 13
	ld	a5,-216(s0)
	lbu	a5,0(a5)
	.loc 1 482 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L95
	.loc 1 482 32 discriminator 1
	li	a5,0
	.loc 1 482 32 is_stmt 0
	j	.L96
.L95:
	.loc 1 483 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-216(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 483 8 discriminator 1
	bne	a5,zero,.L97
	.loc 1 484 16
	li	a5,1
	j	.L96
.L97:
	.loc 1 488 5
	addi	a5,s0,-200
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 489 12
	lhu	a5,-200(s0)
	.loc 1 489 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L98
	.loc 1 489 35 discriminator 1
	li	a5,0
	.loc 1 489 35 is_stmt 0
	j	.L96
.L98:
	.loc 1 491 15 is_stmt 1
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 491 27 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 491 10 discriminator 1
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
	.loc 1 492 25
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 492 5 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a2,a5
	ld	a1,-216(s0)
	ld	a0,-128(s0)
	call	strncpy
	.loc 1 493 19
	lla	a1,.LC5
	ld	a0,-128(s0)
	call	strtok
	sd	a0,-104(s0)
	.loc 1 494 14
	li	a5,1
	sw	a5,-108(s0)
	.loc 1 496 11
	j	.L99
.L102:
.LBB18:
	.loc 1 497 16
	lhu	a5,-200(s0)
	.loc 1 497 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L100
	.loc 1 497 39 discriminator 1
	li	a5,0
	.loc 1 497 39 is_stmt 0
	j	.L96
.L100:
	.loc 1 498 30 is_stmt 1
	addi	a5,s0,-200
	ld	a1,-104(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-132(s0)
	.loc 1 499 12
	lw	a5,-132(s0)
	sext.w	a5,a5
	bne	a5,zero,.L101
	.loc 1 499 36 discriminator 1
	li	a5,0
	.loc 1 499 36 is_stmt 0
	j	.L96
.L101:
	.loc 1 500 9 is_stmt 1
	addi	a4,s0,-200
	lw	a5,-132(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 501 22
	lw	a5,-132(s0)
	sw	a5,-108(s0)
	.loc 1 502 17
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-104(s0)
.L99:
.LBE18:
	.loc 1 496 18
	ld	a5,-104(s0)
	bne	a5,zero,.L102
	.loc 1 504 12
	lw	a5,-108(s0)
.L96:
	mv	sp,s1
	.loc 1 505 1
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
.LFE19:
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
.LFB20:
	.loc 1 507 32
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
	.loc 1 509 5
	addi	a4,s0,-88
	lw	a5,-100(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 510 5
	lw	a5,-100(s0)
	mv	a1,a5
	lla	a0,.LC6
	call	printf
	.loc 1 511 32
	lhu	a5,-88(s0)
	.loc 1 511 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 512 5
	lw	a5,-80(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 513 5
	lla	a0,.LC9
	call	printf
.LBB19:
	.loc 1 514 14
	sw	zero,-20(s0)
	.loc 1 514 5
	j	.L105
.L107:
	.loc 1 515 21
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 515 12
	beq	a5,zero,.L106
	.loc 1 515 31 discriminator 1
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
.L106:
	.loc 1 514 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L105:
	.loc 1 514 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L107
.LBE19:
	.loc 1 517 17
	lw	a5,-28(s0)
	.loc 1 517 8
	beq	a5,zero,.L108
	.loc 1 518 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
.L108:
	.loc 1 520 17
	lw	a5,-24(s0)
	.loc 1 520 8
	beq	a5,zero,.L109
	.loc 1 521 9
	lw	a5,-24(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L109:
	.loc 1 523 5
	lla	a0,.LC13
	call	printf
	.loc 1 524 1
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
.LFE20:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB21:
	.loc 1 531 38
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
	.loc 1 532 12
	li	a5,128
	.loc 1 533 1
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
.LFE21:
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB22:
	.loc 1 534 55
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
	.loc 1 535 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB20:
	.loc 1 537 14
	sw	zero,-20(s0)
	.loc 1 537 5
	j	.L113
.L116:
	.loc 1 537 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 537 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L121
	.loc 1 537 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L113:
	.loc 1 537 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L116
.LBE20:
.LBB21:
	.loc 1 539 14
	sw	zero,-24(s0)
	.loc 1 539 5
	j	.L117
.L120:
	.loc 1 540 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 540 12
	bne	a5,zero,.L118
	.loc 1 541 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 542 18
	ld	a5,-40(s0)
	lw	a5,1144(a5)
	.loc 1 542 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L122
	.loc 1 542 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,1144(a5)
	.loc 1 542 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,1144(a5)
	.loc 1 543 13
	j	.L122
.L118:
	.loc 1 539 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L117:
	.loc 1 539 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L120
	j	.L112
.L121:
.LBE21:
.LBB22:
	.loc 1 537 67
	nop
	j	.L112
.L122:
.LBE22:
.LBB23:
	.loc 1 543 13
	nop
.L112:
.LBE23:
	.loc 1 547 1
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
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB23:
	.loc 1 548 58
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
	.loc 1 549 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 549 29 discriminator 1
	sw	zero,-20(s0)
.LBB24:
	.loc 1 550 14
	sw	zero,-24(s0)
	.loc 1 550 5
	j	.L124
.L127:
	.loc 1 551 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 551 12
	ld	a4,-48(s0)
	bne	a4,a5,.L125
	.loc 1 551 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L125:
	.loc 1 552 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 552 12
	beq	a5,zero,.L126
	.loc 1 552 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L126:
	.loc 1 550 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L124:
	.loc 1 550 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L127
.LBE24:
	.loc 1 554 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,1144(a5)
	.loc 1 555 1
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
.LFE23:
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
.LFB24:
	.loc 1 569 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 570 5
	li	a5,12288
	addi	a2,a5,768
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 571 5
	li	a5,20480
	addi	a2,a5,-2048
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB25:
	.loc 1 573 13
	sw	zero,-20(s0)
	.loc 1 573 5
	j	.L129
.L130:
.LBB26:
	.loc 1 574 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 576 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 577 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE26:
	.loc 1 573 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L129:
	.loc 1 573 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L130
.LBE25:
.LBB27:
	.loc 1 580 13
	sw	zero,-24(s0)
	.loc 1 580 5
	j	.L131
.L132:
.LBB28:
	.loc 1 581 22
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,3
	add	a5,a5,a4
	slli	a5,a5,7
	lla	a4,gFiles
	add	a5,a5,a4
	sd	a5,-32(s0)
	.loc 1 583 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,112(a5)
	.loc 1 584 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE28:
	.loc 1 580 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L131:
	.loc 1 580 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L132
.LBE27:
	.loc 1 586 1
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
.LFE24:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB25:
	.loc 1 589 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 590 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 592 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 592 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 594 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 596 12
	ld	a5,-24(s0)
	.loc 1 597 1
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
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB26:
	.loc 1 600 1
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
	.loc 1 601 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 602 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 603 1
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
.LFE26:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB27:
	.loc 1 605 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 606 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 606 8
	bne	a5,zero,.L137
	.loc 1 606 29 discriminator 1
	li	a5,0
	.loc 1 606 29 is_stmt 0
	j	.L138
.L137:
	.loc 1 607 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 608 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,112(a5)
	.loc 1 608 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 609 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 610 12
	ld	a5,-24(s0)
.L138:
	.loc 1 611 1
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
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB28:
	.loc 1 615 1
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
	.loc 1 616 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,112(a5)
	.loc 1 617 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 618 1
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
.LFE28:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB29:
	.loc 1 624 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 625 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 627 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 628 8
	ld	a5,-24(s0)
	bne	a5,zero,.L141
	.loc 1 629 16
	li	a5,0
	j	.L142
.L141:
	.loc 1 630 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 631 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 632 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 633 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 634 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 635 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 637 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 638 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 640 12
	ld	a5,-24(s0)
.L142:
	.loc 1 641 1
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
.LFE29:
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB30:
	.loc 1 646 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 647 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 649 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 651 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 653 12
	ld	a5,-24(s0)
	.loc 1 654 1
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
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB31:
	.loc 1 657 1
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
	.loc 1 658 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 660 21
	call	new_file_table
	mv	a4,a0
	.loc 1 660 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 662 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 662 25
	sw	zero,0(a5)
	.loc 1 663 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 663 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 665 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 665 21
	call	new_file_table
	mv	a5,a0
	.loc 1 665 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 667 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 667 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 668 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 668 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 670 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 670 21
	call	new_file_table
	mv	a5,a0
	.loc 1 670 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 672 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 672 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 673 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 673 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 674 1
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
.LFE31:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB32:
	.loc 1 677 1
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
	.loc 1 678 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 680 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 680 8
	beq	a5,zero,.L147
	.loc 1 680 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 680 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 680 24 discriminator 1
	beq	a5,zero,.L147
	.loc 1 681 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 681 26
	ld	a5,88(a5)
	.loc 1 681 11
	beq	a5,zero,.L147
	.loc 1 682 20
	li	a5,1
	j	.L148
.L147:
	.loc 1 686 12
	li	a5,0
.L148:
	.loc 1 687 1
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
.LFE32:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB33:
	.loc 1 690 1
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
	.loc 1 691 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 692 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 692 8
	beq	a5,zero,.L150
	.loc 1 692 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 692 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 692 24 discriminator 1
	beq	a5,zero,.L150
	.loc 1 693 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 693 26
	lw	a5,0(a5)
	.loc 1 693 11
	bne	a5,zero,.L150
	.loc 1 694 20
	li	a5,1
	j	.L151
.L150:
	.loc 1 698 12
	li	a5,0
.L151:
	.loc 1 699 1
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
.LFE33:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB34:
	.loc 1 702 1
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
	.loc 1 703 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 705 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 705 8
	beq	a5,zero,.L153
	.loc 1 705 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 705 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 705 24 discriminator 1
	beq	a5,zero,.L153
	.loc 1 706 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 706 26
	lw	a4,0(a5)
	.loc 1 706 11
	li	a5,1
	bne	a4,a5,.L153
	.loc 1 707 20
	li	a5,1
	j	.L154
.L153:
	.loc 1 711 12
	li	a5,0
.L154:
	.loc 1 712 1
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
.LFE34:
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
.LFB35:
	.loc 1 714 36
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
	.loc 1 715 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 717 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB29:
	.loc 1 719 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 719 5
	j	.L156
.L161:
	.loc 1 720 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 720 12
	bne	a5,zero,.L157
	.loc 1 721 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 721 29
	call	new_file_table
	mv	a5,a0
	.loc 1 721 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 723 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 723 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 724 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 724 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 725 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 725 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 726 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 726 34
	sw	zero,76(a5)
	.loc 1 727 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 727 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 728 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 728 38
	li	a4,1
	sw	a4,100(a5)
	.loc 1 729 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 729 41
	sw	zero,104(a5)
	.loc 1 730 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 732 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 732 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 733 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 733 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 733 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 733 66
	ld	a4,0(a4)
	.loc 1 733 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 734 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 734 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 736 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 736 15
	li	a5,31
	ble	a4,a5,.L168
	.loc 1 737 17
	lla	a0,.LC14
	call	puts
.L159:
	.loc 1 738 22
	j	.L159
.L157:
	.loc 1 719 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L156:
	.loc 1 719 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L161
	j	.L160
.L168:
	.loc 1 742 13
	nop
.L160:
.LBE29:
.LBB30:
	.loc 1 745 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 745 5
	j	.L162
.L167:
	.loc 1 746 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 746 12
	bne	a5,zero,.L163
	.loc 1 747 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 747 29
	call	new_file_table
	mv	a5,a0
	.loc 1 747 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 749 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 749 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 750 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 750 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 751 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 751 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 753 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 753 34
	sw	zero,76(a5)
	.loc 1 754 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 754 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 755 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 755 39
	li	a4,1
	sw	a4,104(a5)
	.loc 1 756 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 756 38
	sw	zero,100(a5)
	.loc 1 757 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 759 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 759 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 760 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 760 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 760 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 760 66
	ld	a4,0(a4)
	.loc 1 760 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 761 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 761 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 763 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 763 15
	li	a5,31
	ble	a4,a5,.L169
	.loc 1 764 17
	lla	a0,.LC14
	call	puts
.L165:
	.loc 1 765 22
	j	.L165
.L163:
	.loc 1 745 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L162:
	.loc 1 745 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L167
.LBE30:
	.loc 1 772 1
	j	.L170
.L169:
.LBB31:
	.loc 1 769 13
	nop
.L170:
.LBE31:
	.loc 1 772 1
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
.LFE35:
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
.LFB36:
	.loc 1 782 1
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
	.loc 1 783 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 785 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 785 8
	bne	a5,zero,.L172
	.loc 1 786 9
	lla	a0,.LC15
	call	panic
.L172:
	.loc 1 789 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L173
	.loc 1 789 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L174
.L173:
	.loc 1 790 9
	lla	a0,.LC15
	call	panic
.L174:
	.loc 1 792 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 792 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 794 7
	ld	a5,-32(s0)
	bne	a5,zero,.L176
	.loc 1 795 9
	lla	a0,.LC15
	call	panic
	.loc 1 798 11
	j	.L176
.L178:
	.loc 1 799 8
	call	yield
.L176:
	.loc 1 798 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 798 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 798 34
	bne	a4,a5,.L177
	.loc 1 798 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 798 34 discriminator 1
	bne	a5,zero,.L178
.L177:
	.loc 1 802 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 802 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 802 8
	bne	a4,a5,.L179
	.loc 1 802 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 802 31 discriminator 1
	bne	a5,zero,.L179
	.loc 1 803 16
	li	a5,0
	j	.L180
.L179:
	.loc 1 807 18
	sw	zero,-36(s0)
.LBB32:
	.loc 1 808 23
	sw	zero,-40(s0)
	.loc 1 808 5
	j	.L181
.L184:
	.loc 1 810 12
	call	yield
.L182:
	.loc 1 809 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 809 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 809 38
	bne	a4,a5,.L183
	.loc 1 809 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 809 38 discriminator 1
	bne	a5,zero,.L184
.L183:
	.loc 1 814 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 814 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 814 12
	bne	a4,a5,.L185
	.loc 1 814 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 814 35 discriminator 1
	beq	a5,zero,.L188
.L185:
	.loc 1 818 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 818 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 818 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 818 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 818 17
	sb	a4,0(a5)
	.loc 1 819 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 819 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 822 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 808 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L181:
	.loc 1 808 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 808 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L186
	.loc 1 808 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 808 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 808 36 discriminator 3
	bltu	a4,a5,.L182
	j	.L186
.L188:
	.loc 1 815 13
	nop
.L186:
.LBE32:
	.loc 1 826 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L180:
	.loc 1 827 1
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
.LFE36:
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
.LFB37:
	.loc 1 832 1
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
	.loc 1 833 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 835 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 835 8
	bne	a5,zero,.L190
	.loc 1 836 9
	lla	a0,.LC16
	call	panic
.L190:
	.loc 1 839 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L191
	.loc 1 839 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L192
.L191:
	.loc 1 840 9
	lla	a0,.LC16
	call	panic
.L192:
	.loc 1 842 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 842 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 844 7
	ld	a5,-32(s0)
	bne	a5,zero,.L193
	.loc 1 845 9
	lla	a0,.LC16
	call	panic
.L193:
.LBB33:
	.loc 1 848 23
	sw	zero,-36(s0)
	.loc 1 848 5
	j	.L194
.L197:
	.loc 1 851 11
	call	yield
.L195:
	.loc 1 850 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 850 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 850 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 850 48
	li	a5,512
	bne	a4,a5,.L196
	.loc 1 850 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 850 48 discriminator 1
	bne	a5,zero,.L197
.L196:
	.loc 1 854 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 854 10
	bne	a5,zero,.L198
	.loc 1 856 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 856 30
	ble	a5,zero,.L199
	.loc 1 856 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 856 30
	j	.L201
.L199:
	.loc 1 856 30 discriminator 2
	li	a5,-1
	.loc 1 856 30
	j	.L201
.L198:
	.loc 1 858 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 858 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 858 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 858 44
	lbu	a4,0(a5)
	.loc 1 858 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 859 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 859 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 848 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L194:
	.loc 1 848 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L195
.LBE33:
	.loc 1 866 12
	lw	a5,-56(s0)
.L201:
	.loc 1 867 1
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
.LFE37:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB38:
	.loc 1 879 1
	.cfi_startproc
	addi	sp,sp,-272
	.cfi_def_cfa_offset 272
	sd	ra,264(sp)
	sd	s0,256(sp)
	sd	s1,248(sp)
	sd	s2,240(sp)
	sd	s3,232(sp)
	sd	s4,224(sp)
	sd	s5,216(sp)
	sd	s6,208(sp)
	sd	s7,200(sp)
	sd	s8,192(sp)
	sd	s9,184(sp)
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
	addi	s0,sp,272
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	sd	a1,-256(s0)
	sd	a2,-264(s0)
	.loc 1 879 1
	mv	a5,sp
	mv	s1,a5
	.loc 1 880 8
	ld	a5,-248(s0)
	beq	a5,zero,.L204
	.loc 1 880 22 discriminator 2
	ld	a5,-248(s0)
	lbu	a5,0(a5)
	.loc 1 880 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L205
.L204:
	.loc 1 880 41 discriminator 3
	li	a5,0
	.loc 1 880 41 is_stmt 0
	j	.L206
.L205:
	.loc 1 881 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-248(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 881 8 discriminator 1
	bne	a5,zero,.L207
	.loc 1 881 40 discriminator 1
	li	a5,0
	.loc 1 881 40 is_stmt 0
	j	.L206
.L207:
	.loc 1 884 15 is_stmt 1
	ld	a0,-248(s0)
	call	strlen
	mv	a5,a0
	.loc 1 884 28 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 884 10 discriminator 1
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
	.loc 1 885 5
	mv	a2,a5
	ld	a1,-248(s0)
	ld	a0,-144(s0)
	call	strncpy
	.loc 1 888 11
	ld	a5,-144(s0)
	sd	a5,-152(s0)
	.loc 1 889 11
	sd	zero,-104(s0)
	.loc 1 890 17
	lla	a1,.LC5
	ld	a0,-152(s0)
	call	strtok
	sd	a0,-112(s0)
	.loc 1 891 14
	li	a5,1
	sw	a5,-116(s0)
	.loc 1 893 5
	addi	a4,s0,-232
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 895 11
	j	.L208
.L213:
.LBB34:
	.loc 1 896 25
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-160(s0)
	.loc 1 897 12
	ld	a5,-160(s0)
	bne	a5,zero,.L209
	.loc 1 899 18
	ld	a5,-112(s0)
	sd	a5,-104(s0)
	.loc 1 900 13
	j	.L210
.L209:
	.loc 1 903 15
	lhu	a5,-232(s0)
	.loc 1 903 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L211
	.loc 1 903 38 discriminator 1
	li	a5,0
	.loc 1 903 38 is_stmt 0
	j	.L206
.L211:
	.loc 1 904 30 is_stmt 1
	addi	a5,s0,-232
	ld	a1,-112(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 905 12
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L212
	.loc 1 905 36 discriminator 1
	li	a5,0
	.loc 1 905 36 is_stmt 0
	j	.L206
.L212:
	.loc 1 906 9 is_stmt 1
	addi	a4,s0,-232
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 907 13
	lw	a5,-164(s0)
	sw	a5,-116(s0)
	.loc 1 908 13
	ld	a5,-160(s0)
	sd	a5,-112(s0)
.L208:
.LBE34:
	.loc 1 895 12
	ld	a5,-112(s0)
	bne	a5,zero,.L213
.L210:
	.loc 1 911 8
	ld	a5,-104(s0)
	bne	a5,zero,.L214
	.loc 1 911 23 discriminator 1
	li	a5,0
	.loc 1 911 23 is_stmt 0
	j	.L206
.L214:
	.loc 1 912 18 is_stmt 1
	ld	a5,-256(s0)
	lw	a4,-116(s0)
	sw	a4,0(a5)
	.loc 1 914 13
	ld	a0,-104(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-120(s0)
	.loc 1 915 8
	lw	a5,-120(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L215
	.loc 1 915 23 discriminator 1
	li	a5,14
	sw	a5,-120(s0)
.L215:
.LBB35:
	.loc 1 916 14
	sw	zero,-124(s0)
	.loc 1 916 5
	j	.L216
.L217:
	.loc 1 916 46 discriminator 3
	lw	a5,-124(s0)
	ld	a4,-264(s0)
	add	a5,a4,a5
	.loc 1 916 50 discriminator 3
	sb	zero,0(a5)
	.loc 1 916 34 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L216:
	.loc 1 916 23 discriminator 1
	lw	a5,-124(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L217
.LBE35:
	.loc 1 917 5
	lw	a5,-120(s0)
	mv	a2,a5
	ld	a1,-104(s0)
	ld	a0,-264(s0)
	call	strncpy
	.loc 1 918 12
	li	a5,1
.L206:
	mv	sp,s1
	.loc 1 919 1
	mv	a0,a5
	addi	sp,s0,-272
	.cfi_def_cfa 2, 272
	ld	ra,264(sp)
	.cfi_restore 1
	ld	s0,256(sp)
	.cfi_restore 8
	ld	s1,248(sp)
	.cfi_restore 9
	ld	s2,240(sp)
	.cfi_restore 18
	ld	s3,232(sp)
	.cfi_restore 19
	ld	s4,224(sp)
	.cfi_restore 20
	ld	s5,216(sp)
	.cfi_restore 21
	ld	s6,208(sp)
	.cfi_restore 22
	ld	s7,200(sp)
	.cfi_restore 23
	ld	s8,192(sp)
	.cfi_restore 24
	ld	s9,184(sp)
	.cfi_restore 25
	addi	sp,sp,272
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE38:
	.size	path_parent_lookup_abs, .-path_parent_lookup_abs
	.align	1
	.type	alloc_inode_T_FILE, @function
alloc_inode_T_FILE:
.LFB39:
	.loc 1 924 1
	.cfi_startproc
	addi	sp,sp,-160
	.cfi_def_cfa_offset 160
	sd	ra,152(sp)
	sd	s0,144(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,160
	.cfi_def_cfa 8, 0
.LBB36:
	.loc 1 926 19
	li	a5,1
	sw	a5,-20(s0)
	.loc 1 926 5
	j	.L220
.L223:
	.loc 1 927 9
	addi	a4,s0,-88
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 928 15
	lhu	a5,-88(s0)
	.loc 1 928 12
	bne	a5,zero,.L221
.LBB37:
	.loc 1 931 13
	addi	a5,s0,-160
	li	a2,68
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 932 23
	li	a5,2
	sh	a5,-160(s0)
	.loc 1 933 24
	li	a5,1
	sh	a5,-154(s0)
	.loc 1 934 23
	sw	zero,-152(s0)
	.loc 1 935 13
	addi	a4,s0,-160
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 936 20
	lw	a5,-20(s0)
	j	.L224
.L221:
.LBE37:
	.loc 1 926 53 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L220:
	.loc 1 926 39 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 926 34 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L223
.LBE36:
	.loc 1 939 12
	li	a5,0
.L224:
	.loc 1 940 1
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
.LFE39:
	.size	alloc_inode_T_FILE, .-alloc_inode_T_FILE
	.align	1
	.type	add_dirent, @function
add_dirent:
.LFB40:
	.loc 1 945 1
	.cfi_startproc
	addi	sp,sp,-688
	.cfi_def_cfa_offset 688
	sd	ra,680(sp)
	sd	s0,672(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,688
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-688(s0)
	mv	a4,a2
	sw	a5,-676(s0)
	mv	a5,a4
	sw	a5,-680(s0)
	.loc 1 946 8
	ld	a5,-688(s0)
	beq	a5,zero,.L226
	.loc 1 946 22 discriminator 2
	ld	a5,-688(s0)
	lbu	a5,0(a5)
	.loc 1 946 15 discriminator 2
	bne	a5,zero,.L227
.L226:
	.loc 1 946 42 discriminator 3
	li	a5,-1
	.loc 1 946 42 is_stmt 0
	j	.L239
.L227:
	.loc 1 949 5 is_stmt 1
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 950 12
	lhu	a5,-144(s0)
	.loc 1 950 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L229
	.loc 1 950 35 discriminator 1
	li	a5,-1
	.loc 1 950 35 is_stmt 0
	j	.L239
.L229:
	.loc 1 954 15 is_stmt 1
	lw	a5,-680(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 954 13
	sh	a5,-160(s0)
.LBB38:
	.loc 1 956 14
	sw	zero,-20(s0)
	.loc 1 956 5
	j	.L230
.L231:
	.loc 1 956 49 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-142(a5)
	.loc 1 956 34 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L230:
	.loc 1 956 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L231
.LBE38:
	.loc 1 957 5
	addi	a5,s0,-160
	addi	a5,a5,2
	li	a2,14
	ld	a1,-688(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 960 14
	sw	zero,-24(s0)
	.loc 1 961 11
	j	.L232
.L237:
.LBB39:
	.loc 1 962 9
	lw	a4,-24(s0)
	addi	a5,s0,-144
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 963 24
	lla	a5,block_buf
	sd	a5,-64(s0)
	.loc 1 964 13
	li	a5,32
	sw	a5,-68(s0)
.LBB40:
	.loc 1 965 18
	sw	zero,-28(s0)
	.loc 1 965 9
	j	.L233
.L236:
	.loc 1 966 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 966 24
	lhu	a5,0(a5)
	.loc 1 966 16
	bne	a5,zero,.L234
.LBB41:
	.loc 1 967 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 967 25
	lhu	a4,-160(s0)
	mv	t1,a4
	lhu	a4,-158(s0)
	mv	a7,a4
	lhu	a4,-156(s0)
	mv	a6,a4
	lhu	a4,-154(s0)
	mv	a0,a4
	lhu	a4,-152(s0)
	mv	a1,a4
	lhu	a4,-150(s0)
	mv	a2,a4
	lhu	a4,-148(s0)
	mv	a3,a4
	lhu	a4,-146(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 969 26
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-72(s0)
	.loc 1 970 37
	lw	a3,-72(s0)
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 971 20
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L235
	.loc 1 971 39 discriminator 1
	li	a5,-1
	.loc 1 971 39 is_stmt 0
	j	.L239
.L235:
	.loc 1 972 17 is_stmt 1
	lw	a5,-76(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_block
	.loc 1 973 24
	li	a5,0
	j	.L239
.L234:
.LBE41:
	.loc 1 965 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L233:
	.loc 1 965 27 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-68(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L236
.LBE40:
	.loc 1 976 13
	lw	a5,-24(s0)
	addiw	a5,a5,512
	sw	a5,-24(s0)
.L232:
.LBE39:
	.loc 1 961 21
	lw	a5,-136(s0)
	.loc 1 961 16
	lw	a4,-24(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L237
	.loc 1 980 23
	lw	a5,-136(s0)
	.loc 1 980 14
	srliw	a5,a5,4
	sw	a5,-32(s0)
	.loc 1 981 29
	lwu	a5,-32(s0)
	slli	a5,a5,4
	.loc 1 981 54
	srli	a5,a5,9
	.loc 1 981 14
	sw	a5,-36(s0)
	.loc 1 982 29
	lw	a5,-32(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 982 14
	andi	a5,a5,496
	sw	a5,-40(s0)
	.loc 1 983 25
	lw	a3,-36(s0)
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 984 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L238
	.loc 1 984 27 discriminator 1
	li	a5,-1
	.loc 1 984 27 is_stmt 0
	j	.L239
.L238:
	.loc 1 987 5 is_stmt 1
	addi	a4,s0,-672
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 988 20
	addi	a5,s0,-672
	sd	a5,-56(s0)
	.loc 1 989 19
	lw	a5,-40(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 989 9
	slli	a5,a5,4
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 989 45
	lhu	a4,-160(s0)
	mv	t1,a4
	lhu	a4,-158(s0)
	mv	a7,a4
	lhu	a4,-156(s0)
	mv	a6,a4
	lhu	a4,-154(s0)
	mv	a0,a4
	lhu	a4,-152(s0)
	mv	a1,a4
	lhu	a4,-150(s0)
	mv	a2,a4
	lhu	a4,-148(s0)
	mv	a3,a4
	lhu	a4,-146(s0)
	sh	t1,0(a5)
	sh	a7,2(a5)
	sh	a6,4(a5)
	sh	a0,6(a5)
	sh	a1,8(a5)
	sh	a2,10(a5)
	sh	a3,12(a5)
	sh	a4,14(a5)
	.loc 1 990 5
	addi	a4,s0,-672
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 992 8
	lw	a5,-136(s0)
	.loc 1 992 14
	addiw	a5,a5,16
	sext.w	a5,a5
	sw	a5,-136(s0)
	.loc 1 993 5
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 994 12
	li	a5,0
.L239:
	.loc 1 995 1
	mv	a0,a5
	ld	ra,680(sp)
	.cfi_restore 1
	ld	s0,672(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 688
	addi	sp,sp,688
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE40:
	.size	add_dirent, .-add_dirent
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB41:
	.loc 1 996 31
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
	.loc 1 998 12
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 999 1
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
.LFE41:
	.size	fs_open, .-fs_open
	.align	1
	.globl	fs_open2
	.type	fs_open2, @function
fs_open2:
.LFB42:
	.loc 1 1002 53
	.cfi_startproc
	addi	sp,sp,-304
	.cfi_def_cfa_offset 304
	sd	ra,296(sp)
	sd	s0,288(sp)
	sd	s1,280(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,304
	.cfi_def_cfa 8, 0
	sd	a0,-296(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-300(s0)
	mv	a5,a4
	sw	a5,-304(s0)
	.loc 1 1003 32
	call	get_current_file_table
	sd	a0,-56(s0)
	.loc 1 1007 13
	ld	a5,-296(s0)
	lbu	a5,0(a5)
	.loc 1 1007 8
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L243
	.loc 1 1009 9
	addi	a5,s0,-192
	li	a2,127
	ld	a1,-296(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1010 34
	sb	zero,-65(s0)
	j	.L244
.L243:
	.loc 1 1013 18
	li	a5,47
	sb	a5,-192(s0)
	.loc 1 1014 18
	sb	zero,-191(s0)
	.loc 1 1016 46
	addi	a5,s0,-192
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1016 46 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1016 9 is_stmt 1 discriminator 1
	li	a5,127
	sub	a4,a5,a4
	addi	a5,s0,-192
	mv	a2,a4
	ld	a1,-296(s0)
	mv	a0,a5
	call	strncat
.L244:
	.loc 1 1019 21
	addi	a5,s0,-192
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 1022 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L245
	.loc 1 1024 19
	lw	a5,-300(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1024 12
	beq	a5,zero,.L246
.LBB42:
.LBB43:
	.loc 1 1028 22
	sw	zero,-40(s0)
	.loc 1 1028 13
	j	.L247
.L248:
	.loc 1 1028 49 discriminator 3
	lw	a5,-40(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-256(a5)
	.loc 1 1028 38 discriminator 3
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L247:
	.loc 1 1028 27 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L248
.LBE43:
	.loc 1 1029 18
	addi	a3,s0,-288
	addi	a4,s0,-268
	addi	a5,s0,-192
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1029 16 discriminator 1
	bne	a5,zero,.L249
	.loc 1 1030 24
	li	a5,-1
	j	.L260
.L249:
	.loc 1 1032 33
	call	alloc_inode_T_FILE
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 1033 16
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L251
	.loc 1 1033 39 discriminator 1
	li	a5,-1
	.loc 1 1033 39 is_stmt 0
	j	.L260
.L251:
	.loc 1 1034 17 is_stmt 1
	lw	a5,-268(s0)
	lw	a3,-60(s0)
	addi	a4,s0,-288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1034 16 discriminator 1
	beq	a5,zero,.L252
	.loc 1 1034 65 discriminator 1
	li	a5,-1
	.loc 1 1034 65 is_stmt 0
	j	.L260
.L252:
	.loc 1 1035 18 is_stmt 1
	lw	a5,-60(s0)
	sw	a5,-36(s0)
	.loc 1 1036 13
	addi	a4,s0,-264
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.LBE42:
	j	.L253
.L246:
	.loc 1 1038 20
	li	a5,-1
	j	.L260
.L245:
	.loc 1 1041 9
	addi	a4,s0,-264
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L253:
	.loc 1 1044 11
	lhu	a5,-264(s0)
	.loc 1 1044 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L255
	.loc 1 1044 32 discriminator 1
	lhu	a5,-264(s0)
	.loc 1 1044 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L255
	.loc 1 1044 55 discriminator 2
	li	a5,-1
	.loc 1 1044 55 is_stmt 0
	j	.L260
.L255:
.LBB44:
	.loc 1 1046 14 is_stmt 1
	li	a5,3
	sw	a5,-44(s0)
	.loc 1 1046 5
	j	.L256
.L259:
	.loc 1 1047 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1047 12
	bne	a5,zero,.L257
	.loc 1 1048 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	s1,a4,a5
	.loc 1 1048 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1048 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1050 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1050 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 1051 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1051 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 1052 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1052 34
	lw	a4,-36(s0)
	sw	a4,4(a5)
	.loc 1 1053 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1053 34
	ld	t1,-264(s0)
	ld	a7,-256(s0)
	ld	a6,-248(s0)
	ld	a0,-240(s0)
	ld	a1,-232(s0)
	ld	a2,-224(s0)
	ld	a3,-216(s0)
	ld	a4,-208(s0)
	sd	t1,8(a5)
	sd	a7,16(a5)
	sd	a6,24(a5)
	sd	a0,32(a5)
	sd	a1,40(a5)
	sd	a2,48(a5)
	sd	a3,56(a5)
	sd	a4,64(a5)
	lw	a4,-200(s0)
	sw	a4,72(a5)
	.loc 1 1054 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1054 34
	sw	zero,76(a5)
	.loc 1 1055 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1055 40
	sw	zero,100(a5)
	.loc 1 1056 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1056 41
	sw	zero,104(a5)
	.loc 1 1057 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1057 35
	lw	a4,-300(s0)
	sw	a4,108(a5)
	.loc 1 1060 24
	lw	a5,-300(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1060 16
	beq	a5,zero,.L258
	.loc 1 1060 48 discriminator 1
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1060 56 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1060 35 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L258
	.loc 1 1061 27
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1061 41
	sw	zero,16(a5)
	.loc 1 1062 46
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1062 35
	addi	a4,a5,8
	.loc 1 1062 17
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1063 27
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1063 36
	sw	zero,76(a5)
.L258:
	.loc 1 1065 20
	lw	a5,-44(s0)
	j	.L260
.L257:
	.loc 1 1046 42 discriminator 2
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L256:
	.loc 1 1046 23 discriminator 1
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L259
.LBE44:
	.loc 1 1068 12
	li	a5,-1
.L260:
	.loc 1 1069 1
	mv	a0,a5
	ld	ra,296(sp)
	.cfi_restore 1
	ld	s0,288(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 304
	ld	s1,280(sp)
	.cfi_restore 9
	addi	sp,sp,304
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE42:
	.size	fs_open2, .-fs_open2
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB43:
	.loc 1 1073 50
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
	.loc 1 1074 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1076 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1076 7
	bne	a5,zero,.L262
	.loc 1 1077 16
	li	a5,-1
	j	.L263
.L262:
	.loc 1 1080 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1081 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L264
	.loc 1 1081 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L265
.L264:
	.loc 1 1082 16
	li	a5,-1
	j	.L263
.L265:
	.loc 1 1084 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1084 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1085 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 1085 41
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 1085 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 1086 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L266
	.loc 1 1086 32 discriminator 1
	li	a5,0
	.loc 1 1086 32 is_stmt 0
	j	.L263
.L266:
	.loc 1 1088 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L267
	mv	a5,a4
.L267:
	.loc 1 1088 14
	sw	a5,-48(s0)
	.loc 1 1089 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,76(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 1090 6
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 1090 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,76(a5)
	.loc 1 1091 12
	lw	a5,-48(s0)
.L263:
	.loc 1 1092 1
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
.LFE43:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_write
	.type	fs_write, @function
fs_write:
.LFB44:
	.loc 1 1096 57
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
	.loc 1 1097 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1099 8
	lw	a5,-596(s0)
	sext.w	a5,a5
	blt	a5,zero,.L269
	.loc 1 1099 16 discriminator 2
	lw	a5,-596(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L270
.L269:
	.loc 1 1099 48 discriminator 3
	li	a5,-1
	.loc 1 1099 48 is_stmt 0
	j	.L271
.L270:
	.loc 1 1100 19 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1100 8
	bne	a5,zero,.L272
	.loc 1 1100 40 discriminator 1
	li	a5,-1
	.loc 1 1100 40 is_stmt 0
	j	.L271
.L272:
	.loc 1 1102 32 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1102 18
	ld	a5,0(a5)
	sd	a5,-56(s0)
	.loc 1 1103 10
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 1103 8
	li	a5,3
	beq	a4,a5,.L273
	.loc 1 1103 36 discriminator 1
	li	a5,-1
	.loc 1 1103 36 is_stmt 0
	j	.L271
.L273:
	.loc 1 1106 14 is_stmt 1
	ld	a5,-616(s0)
	sw	a5,-60(s0)
	.loc 1 1108 20
	ld	a5,-608(s0)
	sd	a5,-24(s0)
	.loc 1 1109 14
	lw	a5,-60(s0)
	sw	a5,-28(s0)
	.loc 1 1110 14
	ld	a5,-56(s0)
	lw	a5,76(a5)
	sw	a5,-32(s0)
	.loc 1 1111 14
	sw	zero,-36(s0)
	.loc 1 1113 11
	j	.L274
.L278:
.LBB45:
	.loc 1 1114 18
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sw	a5,-64(s0)
	.loc 1 1115 18
	lw	a5,-32(s0)
	andi	a5,a5,511
	sw	a5,-68(s0)
	.loc 1 1116 18
	li	a5,512
	lw	a4,-68(s0)
	subw	a5,a5,a4
	sw	a5,-40(s0)
	.loc 1 1117 12
	lw	a5,-40(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L275
	.loc 1 1117 39 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-40(s0)
.L275:
	.loc 1 1119 29
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
	.loc 1 1120 12
	lw	a5,-72(s0)
	sext.w	a5,a5
	beq	a5,zero,.L280
	.loc 1 1124 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1125 9
	lwu	a5,-68(s0)
	addi	a4,s0,-592
	add	a5,a4,a5
	lw	a4,-40(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1126 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1128 17
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 1129 17
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 1130 17
	lwu	a5,-40(s0)
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 1131 17
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-36(s0)
.L274:
.LBE45:
	.loc 1 1113 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L278
	j	.L277
.L280:
.LBB46:
	.loc 1 1120 28
	nop
.L277:
.LBE46:
	.loc 1 1134 6
	ld	a5,-56(s0)
	lw	a5,76(a5)
	.loc 1 1134 12
	lw	a4,-36(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,76(a5)
	.loc 1 1136 14
	ld	a5,-56(s0)
	lw	a5,76(a5)
	sw	a5,-76(s0)
	.loc 1 1137 25
	ld	a5,-56(s0)
	lw	a5,16(a5)
	.loc 1 1137 8
	lw	a4,-76(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L279
	.loc 1 1138 21
	ld	a5,-56(s0)
	lw	a4,-76(s0)
	sw	a4,16(a5)
	.loc 1 1139 9
	ld	a5,-56(s0)
	lw	a4,4(a5)
	.loc 1 1139 30
	ld	a5,-56(s0)
	addi	a5,a5,8
	.loc 1 1139 9
	mv	a1,a5
	mv	a0,a4
	call	write_inode
.L279:
	.loc 1 1141 12
	lw	a5,-36(s0)
.L271:
	.loc 1 1142 1
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
.LFE44:
	.size	fs_write, .-fs_write
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB45:
	.loc 1 1144 25
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
	.loc 1 1145 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1147 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1147 7
	bne	a5,zero,.L282
	.loc 1 1148 16
	li	a5,-1
	j	.L283
.L282:
	.loc 1 1151 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1152 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L284
	.loc 1 1152 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L284
	.loc 1 1152 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1152 61 discriminator 2
	lw	a5,80(a5)
	.loc 1 1152 42 discriminator 2
	bne	a5,zero,.L285
.L284:
	.loc 1 1153 16
	li	a5,-1
	j	.L283
.L285:
	.loc 1 1155 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1155 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1156 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L283:
	.loc 1 1157 1
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
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB46:
	.loc 1 1162 36
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
	.loc 1 1163 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 1164 8
	ld	a5,-56(s0)
	blt	a5,zero,.L287
	.loc 1 1164 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,15
	ble	a4,a5,.L288
.L287:
	.loc 1 1164 48 discriminator 3
	li	a5,-1
	.loc 1 1164 48 is_stmt 0
	j	.L289
.L288:
	.loc 1 1165 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1165 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1166 8
	ld	a5,-40(s0)
	bne	a5,zero,.L290
	.loc 1 1166 20 discriminator 1
	li	a5,-1
	.loc 1 1166 20 is_stmt 0
	j	.L289
.L290:
	.loc 1 1169 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1169 12
	sd	zero,0(a5)
	.loc 1 1172 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L291
	.loc 1 1172 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L291:
	.loc 1 1175 10
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 1175 8
	ble	a5,zero,.L292
	.loc 1 1175 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 1175 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,80(a5)
.L292:
	.loc 1 1178 10
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 1178 8
	ble	a5,zero,.L293
	.loc 1 1178 29 discriminator 1
	li	a5,0
	.loc 1 1178 29 is_stmt 0
	j	.L289
.L293:
	.loc 1 1181 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,88(a5)
	sd	a5,-48(s0)
	.loc 1 1182 8
	ld	a5,-48(s0)
	beq	a5,zero,.L294
	.loc 1 1183 14
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1183 12
	beq	a5,zero,.L295
	.loc 1 1183 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1183 27 discriminator 1
	ble	a5,zero,.L295
	.loc 1 1183 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1183 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1183 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 1183 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1183 51 discriminator 2
	bne	a5,zero,.L295
	.loc 1 1183 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L295:
	.loc 1 1184 14
	ld	a5,-40(s0)
	lw	a5,104(a5)
	.loc 1 1184 12
	beq	a5,zero,.L296
	.loc 1 1184 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1184 27 discriminator 1
	ble	a5,zero,.L296
	.loc 1 1184 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1184 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1184 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 1184 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1184 51 discriminator 2
	bne	a5,zero,.L296
	.loc 1 1184 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L296:
	.loc 1 1185 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1185 12
	ble	a5,zero,.L297
	.loc 1 1185 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1185 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L297:
	.loc 1 1186 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1186 12
	bne	a5,zero,.L294
.LBB47:
	.loc 1 1188 22
	sw	zero,-20(s0)
	.loc 1 1188 13
	j	.L298
.L300:
	.loc 1 1189 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1189 20
	beq	a5,zero,.L299
	.loc 1 1189 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1189 64 discriminator 1
	sd	zero,88(a5)
.L299:
	.loc 1 1188 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L298:
	.loc 1 1188 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 1188 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L300
.LBE47:
	.loc 1 1191 13
	ld	a0,-48(s0)
	call	free_pipe
.L294:
	.loc 1 1196 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 1197 12
	li	a5,0
.L289:
	.loc 1 1198 1
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
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB47:
	.loc 1 1201 1
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
.LBB48:
	.loc 1 1202 13
	sw	zero,-20(s0)
	.loc 1 1202 5
	j	.L302
.L303:
	.loc 1 1203 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 1202 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L302:
	.loc 1 1202 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L303
.LBE48:
	.loc 1 1205 1
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
.LFE47:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB48:
	.loc 1 1208 1
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
.LBB49:
	.loc 1 1210 13
	sw	zero,-20(s0)
	.loc 1 1210 5
	j	.L305
.L307:
	.loc 1 1211 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1211 11
	beq	a5,zero,.L306
	.loc 1 1212 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 1212 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 1212 29
	ld	a4,0(a4)
	.loc 1 1212 23
	sd	a4,0(a5)
	.loc 1 1213 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1213 22
	lw	a4,80(a5)
	.loc 1 1213 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 1216 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1216 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L306:
	.loc 1 1210 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L305:
	.loc 1 1210 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L307
.LBE49:
	.loc 1 1242 1
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
.LFE48:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB49:
	.loc 1 1245 1
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
	.loc 1 1262 1
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
.LFE49:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB50:
	.loc 1 1264 36
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
	.loc 1 1265 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1266 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L318
	.loc 1 1266 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L318
	.loc 1 1267 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L319
	.loc 1 1267 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L319
	.loc 1 1268 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1268 8
	beq	a5,zero,.L320
	.loc 1 1269 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L321
	.loc 1 1271 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1271 8
	beq	a5,zero,.L317
	.loc 1 1271 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L317:
	.loc 1 1272 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 1272 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 1272 19
	ld	a4,0(a4)
	.loc 1 1272 15
	sd	a4,0(a5)
	.loc 1 1273 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1273 14
	lw	a4,80(a5)
	.loc 1 1273 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	j	.L309
.L318:
	.loc 1 1266 47
	nop
	j	.L309
.L319:
	.loc 1 1267 47
	nop
	j	.L309
.L320:
	.loc 1 1268 28
	nop
	j	.L309
.L321:
	.loc 1 1269 25
	nop
.L309:
	.loc 1 1275 1
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
	.size	fs_dup2, .-fs_dup2
.Letext0:
	.file 2 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stddef.h"
	.file 4 "fs.h"
	.file 5 "common.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x231e
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x2b
	.4byte	.LASF234
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x10
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x10
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x11
	.4byte	.LASF5
	.byte	0x2
	.byte	0x28
	.byte	0x18
	.4byte	0x48
	.uleb128 0x2c
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1c
	.4byte	0x48
	.uleb128 0x10
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x11
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2e
	.byte	0x18
	.4byte	0x71
	.uleb128 0x1c
	.4byte	0x5b
	.uleb128 0x1d
	.4byte	0x5b
	.uleb128 0x10
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0x11
	.4byte	.LASF8
	.byte	0x2
	.byte	0x31
	.byte	0x19
	.4byte	0x84
	.uleb128 0x10
	.byte	0x2
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0x11
	.4byte	.LASF10
	.byte	0x2
	.byte	0x34
	.byte	0x19
	.4byte	0x97
	.uleb128 0x10
	.byte	0x4
	.byte	0x7
	.4byte	.LASF11
	.uleb128 0x11
	.4byte	.LASF12
	.byte	0x2
	.byte	0x37
	.byte	0x19
	.4byte	0xaa
	.uleb128 0x10
	.byte	0x8
	.byte	0x7
	.4byte	.LASF13
	.uleb128 0x11
	.4byte	.LASF14
	.byte	0x2
	.byte	0x56
	.byte	0x1a
	.4byte	0xaa
	.uleb128 0x11
	.4byte	.LASF15
	.byte	0x3
	.byte	0xd6
	.byte	0x17
	.4byte	0xaa
	.uleb128 0x10
	.byte	0x8
	.byte	0x5
	.4byte	.LASF16
	.uleb128 0x10
	.byte	0x10
	.byte	0x4
	.4byte	.LASF17
	.uleb128 0x16
	.4byte	.LASF25
	.byte	0x1c
	.byte	0x4
	.byte	0x19
	.4byte	0x13f
	.uleb128 0x3
	.4byte	.LASF18
	.byte	0x4
	.byte	0x1a
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x3
	.4byte	.LASF19
	.byte	0x4
	.byte	0x1b
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF20
	.byte	0x4
	.byte	0x1c
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF21
	.byte	0x4
	.byte	0x1d
	.byte	0xe
	.4byte	0x8b
	.byte	0xc
	.uleb128 0x3
	.4byte	.LASF22
	.byte	0x4
	.byte	0x1e
	.byte	0xe
	.4byte	0x8b
	.byte	0x10
	.uleb128 0x3
	.4byte	.LASF23
	.byte	0x4
	.byte	0x1f
	.byte	0xe
	.4byte	0x8b
	.byte	0x14
	.uleb128 0x3
	.4byte	.LASF24
	.byte	0x4
	.byte	0x20
	.byte	0xe
	.4byte	0x8b
	.byte	0x18
	.byte	0
	.uleb128 0x16
	.4byte	.LASF26
	.byte	0x44
	.byte	0x4
	.byte	0x24
	.4byte	0x19a
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0x4
	.byte	0x25
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x3
	.4byte	.LASF28
	.byte	0x4
	.byte	0x26
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF29
	.byte	0x4
	.byte	0x27
	.byte	0xe
	.4byte	0x78
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF30
	.byte	0x4
	.byte	0x28
	.byte	0xe
	.4byte	0x78
	.byte	0x6
	.uleb128 0x3
	.4byte	.LASF18
	.byte	0x4
	.byte	0x29
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF31
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.4byte	0x19f
	.byte	0xc
	.byte	0
	.uleb128 0x1d
	.4byte	0x13f
	.uleb128 0xb
	.4byte	0x8b
	.4byte	0x1af
	.uleb128 0x12
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x16
	.4byte	.LASF32
	.byte	0x10
	.byte	0x4
	.byte	0x2f
	.4byte	0x1d6
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x4
	.byte	0x30
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x3
	.4byte	.LASF34
	.byte	0x4
	.byte	0x31
	.byte	0xe
	.4byte	0x1d6
	.byte	0x2
	.byte	0
	.uleb128 0xb
	.4byte	0x1e6
	.4byte	0x1e6
	.uleb128 0x12
	.4byte	0xaa
	.byte	0xd
	.byte	0
	.uleb128 0x10
	.byte	0x1
	.byte	0x8
	.4byte	.LASF35
	.uleb128 0x1d
	.4byte	0x1e6
	.uleb128 0x11
	.4byte	.LASF36
	.byte	0x4
	.byte	0x5c
	.byte	0x11
	.4byte	0x3c
	.uleb128 0x11
	.4byte	.LASF37
	.byte	0x5
	.byte	0x6
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x11
	.4byte	.LASF38
	.byte	0x5
	.byte	0x8
	.byte	0x10
	.4byte	0x216
	.uleb128 0xa
	.4byte	0x1fe
	.uleb128 0x19
	.4byte	.LASF39
	.2byte	0x100
	.byte	0xc
	.4byte	0x3ab
	.uleb128 0x4
	.string	"ra"
	.byte	0x5
	.byte	0xd
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x4
	.string	"sp"
	.byte	0x5
	.byte	0xe
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.uleb128 0x4
	.string	"gp"
	.byte	0x5
	.byte	0xf
	.byte	0xe
	.4byte	0x9e
	.byte	0x10
	.uleb128 0x4
	.string	"tp"
	.byte	0x5
	.byte	0x10
	.byte	0xe
	.4byte	0x9e
	.byte	0x18
	.uleb128 0x4
	.string	"t0"
	.byte	0x5
	.byte	0x11
	.byte	0xe
	.4byte	0x9e
	.byte	0x20
	.uleb128 0x4
	.string	"t1"
	.byte	0x5
	.byte	0x12
	.byte	0xe
	.4byte	0x9e
	.byte	0x28
	.uleb128 0x4
	.string	"t2"
	.byte	0x5
	.byte	0x13
	.byte	0xe
	.4byte	0x9e
	.byte	0x30
	.uleb128 0x4
	.string	"t3"
	.byte	0x5
	.byte	0x14
	.byte	0xe
	.4byte	0x9e
	.byte	0x38
	.uleb128 0x4
	.string	"t4"
	.byte	0x5
	.byte	0x15
	.byte	0xe
	.4byte	0x9e
	.byte	0x40
	.uleb128 0x4
	.string	"t5"
	.byte	0x5
	.byte	0x16
	.byte	0xe
	.4byte	0x9e
	.byte	0x48
	.uleb128 0x4
	.string	"t6"
	.byte	0x5
	.byte	0x17
	.byte	0xe
	.4byte	0x9e
	.byte	0x50
	.uleb128 0x4
	.string	"a0"
	.byte	0x5
	.byte	0x18
	.byte	0xe
	.4byte	0x9e
	.byte	0x58
	.uleb128 0x4
	.string	"a1"
	.byte	0x5
	.byte	0x19
	.byte	0xe
	.4byte	0x9e
	.byte	0x60
	.uleb128 0x4
	.string	"a2"
	.byte	0x5
	.byte	0x1a
	.byte	0xe
	.4byte	0x9e
	.byte	0x68
	.uleb128 0x4
	.string	"a3"
	.byte	0x5
	.byte	0x1b
	.byte	0xe
	.4byte	0x9e
	.byte	0x70
	.uleb128 0x4
	.string	"a4"
	.byte	0x5
	.byte	0x1c
	.byte	0xe
	.4byte	0x9e
	.byte	0x78
	.uleb128 0x4
	.string	"a5"
	.byte	0x5
	.byte	0x1d
	.byte	0xe
	.4byte	0x9e
	.byte	0x80
	.uleb128 0x4
	.string	"a6"
	.byte	0x5
	.byte	0x1e
	.byte	0xe
	.4byte	0x9e
	.byte	0x88
	.uleb128 0x4
	.string	"a7"
	.byte	0x5
	.byte	0x1f
	.byte	0xe
	.4byte	0x9e
	.byte	0x90
	.uleb128 0x4
	.string	"s0"
	.byte	0x5
	.byte	0x20
	.byte	0xe
	.4byte	0x9e
	.byte	0x98
	.uleb128 0x4
	.string	"s1"
	.byte	0x5
	.byte	0x21
	.byte	0xe
	.4byte	0x9e
	.byte	0xa0
	.uleb128 0x4
	.string	"s2"
	.byte	0x5
	.byte	0x22
	.byte	0xe
	.4byte	0x9e
	.byte	0xa8
	.uleb128 0x4
	.string	"s3"
	.byte	0x5
	.byte	0x23
	.byte	0xe
	.4byte	0x9e
	.byte	0xb0
	.uleb128 0x4
	.string	"s4"
	.byte	0x5
	.byte	0x24
	.byte	0xe
	.4byte	0x9e
	.byte	0xb8
	.uleb128 0x4
	.string	"s5"
	.byte	0x5
	.byte	0x25
	.byte	0xe
	.4byte	0x9e
	.byte	0xc0
	.uleb128 0x4
	.string	"s6"
	.byte	0x5
	.byte	0x26
	.byte	0xe
	.4byte	0x9e
	.byte	0xc8
	.uleb128 0x4
	.string	"s7"
	.byte	0x5
	.byte	0x27
	.byte	0xe
	.4byte	0x9e
	.byte	0xd0
	.uleb128 0x4
	.string	"s8"
	.byte	0x5
	.byte	0x28
	.byte	0xe
	.4byte	0x9e
	.byte	0xd8
	.uleb128 0x4
	.string	"s9"
	.byte	0x5
	.byte	0x29
	.byte	0xe
	.4byte	0x9e
	.byte	0xe0
	.uleb128 0x4
	.string	"s10"
	.byte	0x5
	.byte	0x2a
	.byte	0xe
	.4byte	0x9e
	.byte	0xe8
	.uleb128 0x4
	.string	"s11"
	.byte	0x5
	.byte	0x2b
	.byte	0xe
	.4byte	0x9e
	.byte	0xf0
	.uleb128 0x3
	.4byte	.LASF40
	.byte	0x5
	.byte	0x2c
	.byte	0xe
	.4byte	0x9e
	.byte	0xf8
	.byte	0
	.uleb128 0x19
	.4byte	.LASF41
	.2byte	0x4d8
	.byte	0x33
	.4byte	0x488
	.uleb128 0x3
	.4byte	.LASF42
	.byte	0x5
	.byte	0x34
	.byte	0x16
	.4byte	0x21b
	.byte	0
	.uleb128 0x8
	.4byte	.LASF43
	.byte	0x36
	.byte	0x16
	.4byte	0x21b
	.2byte	0x100
	.uleb128 0x8
	.4byte	.LASF44
	.byte	0x37
	.byte	0x12
	.4byte	0x488
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF45
	.byte	0x39
	.byte	0xb
	.4byte	0x48d
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF46
	.byte	0x3a
	.byte	0xe
	.4byte	0x9e
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF47
	.byte	0x3b
	.byte	0xe
	.4byte	0x9e
	.2byte	0x218
	.uleb128 0x2d
	.string	"sz"
	.byte	0x5
	.byte	0x3c
	.byte	0xe
	.4byte	0x9e
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF48
	.byte	0x3e
	.byte	0x9
	.4byte	0x48
	.2byte	0x228
	.uleb128 0x8
	.4byte	.LASF49
	.byte	0x40
	.byte	0x11
	.4byte	0x20a
	.2byte	0x230
	.uleb128 0x8
	.4byte	.LASF50
	.byte	0x42
	.byte	0xb
	.4byte	0x48d
	.2byte	0x238
	.uleb128 0x8
	.4byte	.LASF51
	.byte	0x43
	.byte	0x9
	.4byte	0x48
	.2byte	0x240
	.uleb128 0x8
	.4byte	.LASF52
	.byte	0x45
	.byte	0x12
	.4byte	0x492
	.2byte	0x248
	.uleb128 0x8
	.4byte	.LASF53
	.byte	0x47
	.byte	0xb
	.4byte	0x55d
	.2byte	0x2c8
	.uleb128 0x8
	.4byte	.LASF54
	.byte	0x48
	.byte	0x9
	.4byte	0x48
	.2byte	0x4c8
	.uleb128 0x8
	.4byte	.LASF55
	.byte	0x4a
	.byte	0x9
	.4byte	0x48
	.2byte	0x4cc
	.uleb128 0x8
	.4byte	.LASF56
	.byte	0x4c
	.byte	0x12
	.4byte	0x488
	.2byte	0x4d0
	.byte	0
	.uleb128 0xa
	.4byte	0x3ab
	.uleb128 0xa
	.4byte	0x1e6
	.uleb128 0xb
	.4byte	0x4a2
	.4byte	0x4a2
	.uleb128 0x12
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0xa
	.4byte	0x4a7
	.uleb128 0x19
	.4byte	.LASF57
	.2byte	0x480
	.byte	0x6b
	.4byte	0x55d
	.uleb128 0x3
	.4byte	.LASF58
	.byte	0x5
	.byte	0x6c
	.byte	0x3f
	.4byte	0x62d
	.byte	0
	.uleb128 0x3
	.4byte	.LASF33
	.byte	0x5
	.byte	0x6d
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x4
	.string	"din"
	.byte	0x5
	.byte	0x6e
	.byte	0x13
	.4byte	0x13f
	.byte	0x8
	.uleb128 0x4
	.string	"off"
	.byte	0x5
	.byte	0x6f
	.byte	0xe
	.4byte	0x8b
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
	.4byte	0x628
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
	.byte	0x77
	.byte	0x9
	.4byte	0x48
	.byte	0x6c
	.uleb128 0x3
	.4byte	.LASF65
	.byte	0x5
	.byte	0x79
	.byte	0x12
	.4byte	0x4a2
	.byte	0x70
	.uleb128 0x3
	.4byte	.LASF66
	.byte	0x5
	.byte	0x7b
	.byte	0x12
	.4byte	0x65a
	.byte	0x78
	.uleb128 0x8
	.4byte	.LASF67
	.byte	0x7c
	.byte	0x9
	.4byte	0x48
	.2byte	0x478
	.byte	0
	.uleb128 0xb
	.4byte	0x48d
	.4byte	0x56d
	.uleb128 0x12
	.4byte	0xaa
	.byte	0x3f
	.byte	0
	.uleb128 0x19
	.4byte	.LASF68
	.2byte	0x330
	.byte	0x56
	.4byte	0x609
	.uleb128 0x3
	.4byte	.LASF69
	.byte	0x5
	.byte	0x57
	.byte	0xa
	.4byte	0x609
	.byte	0
	.uleb128 0x8
	.4byte	.LASF70
	.byte	0x58
	.byte	0xe
	.4byte	0x8b
	.2byte	0x200
	.uleb128 0x8
	.4byte	.LASF71
	.byte	0x59
	.byte	0xe
	.4byte	0x8b
	.2byte	0x204
	.uleb128 0x8
	.4byte	.LASF72
	.byte	0x5a
	.byte	0x9
	.4byte	0x48
	.2byte	0x208
	.uleb128 0x8
	.4byte	.LASF73
	.byte	0x5b
	.byte	0x9
	.4byte	0x48
	.2byte	0x20c
	.uleb128 0x8
	.4byte	.LASF74
	.byte	0x5c
	.byte	0x9
	.4byte	0x48
	.2byte	0x210
	.uleb128 0x8
	.4byte	.LASF75
	.byte	0x5d
	.byte	0x9
	.4byte	0x48
	.2byte	0x214
	.uleb128 0x8
	.4byte	.LASF59
	.byte	0x5e
	.byte	0x9
	.4byte	0x48
	.2byte	0x218
	.uleb128 0x8
	.4byte	.LASF76
	.byte	0x60
	.byte	0x12
	.4byte	0x618
	.2byte	0x220
	.uleb128 0x8
	.4byte	.LASF77
	.byte	0x61
	.byte	0x9
	.4byte	0x48
	.2byte	0x320
	.uleb128 0x8
	.4byte	.LASF65
	.byte	0x63
	.byte	0x13
	.4byte	0x628
	.2byte	0x328
	.byte	0
	.uleb128 0xb
	.4byte	0x1e6
	.4byte	0x618
	.uleb128 0x1e
	.4byte	0xaa
	.byte	0
	.uleb128 0xb
	.4byte	0x4a2
	.4byte	0x628
	.uleb128 0x12
	.4byte	0xaa
	.byte	0x1f
	.byte	0
	.uleb128 0xa
	.4byte	0x56d
	.uleb128 0x2e
	.byte	0x7
	.byte	0x4
	.4byte	0x97
	.byte	0x5
	.byte	0x6c
	.byte	0xa
	.4byte	0x65a
	.uleb128 0x17
	.4byte	.LASF78
	.byte	0
	.uleb128 0x17
	.4byte	.LASF79
	.byte	0x1
	.uleb128 0x17
	.4byte	.LASF80
	.byte	0x2
	.uleb128 0x17
	.4byte	.LASF81
	.byte	0x3
	.uleb128 0x17
	.4byte	.LASF82
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x488
	.4byte	0x66a
	.uleb128 0x12
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0x24
	.4byte	.LASF83
	.byte	0x99
	.byte	0x15
	.4byte	0x65a
	.uleb128 0x24
	.4byte	.LASF84
	.byte	0x9b
	.byte	0xc
	.4byte	0x48
	.uleb128 0x16
	.4byte	.LASF85
	.byte	0x10
	.byte	0x1
	.byte	0x50
	.4byte	0x6c1
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x51
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x4
	.string	"len"
	.byte	0x1
	.byte	0x52
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x53
	.byte	0xe
	.4byte	0x78
	.byte	0xc
	.uleb128 0x3
	.4byte	.LASF56
	.byte	0x1
	.byte	0x54
	.byte	0xe
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x25
	.4byte	.LASF90
	.byte	0x2
	.byte	0x57
	.4byte	0x6f4
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x58
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x4
	.string	"idx"
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF88
	.byte	0x1
	.byte	0x5a
	.byte	0xe
	.4byte	0x6f4
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x78
	.4byte	0x703
	.uleb128 0x26
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF89
	.byte	0x8
	.byte	0x1
	.byte	0x5d
	.4byte	0x729
	.uleb128 0x4
	.string	"id"
	.byte	0x1
	.byte	0x5d
	.byte	0x23
	.4byte	0x8b
	.byte	0
	.uleb128 0x4
	.string	"len"
	.byte	0x1
	.byte	0x5d
	.byte	0x26
	.4byte	0x8b
	.byte	0x4
	.byte	0
	.uleb128 0x25
	.4byte	.LASF91
	.byte	0x4
	.byte	0x5e
	.4byte	0x75c
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x5f
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x4
	.string	"idx"
	.byte	0x1
	.byte	0x60
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF88
	.byte	0x1
	.byte	0x61
	.byte	0x1c
	.4byte	0x75c
	.byte	0x4
	.byte	0
	.uleb128 0xb
	.4byte	0x703
	.4byte	0x76b
	.uleb128 0x26
	.4byte	0xaa
	.byte	0
	.uleb128 0x16
	.4byte	.LASF92
	.byte	0x10
	.byte	0x1
	.byte	0x67
	.4byte	0x79f
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0x1
	.byte	0x68
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x3
	.4byte	.LASF93
	.byte	0x1
	.byte	0x69
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF94
	.byte	0x1
	.byte	0x6a
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.byte	0
	.uleb128 0xc
	.4byte	.LASF95
	.byte	0x6f
	.byte	0x11
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x18
	.string	"Q"
	.byte	0x70
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0xc
	.4byte	.LASF96
	.byte	0x72
	.byte	0x1c
	.4byte	0x7dc
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xa
	.4byte	0x680
	.uleb128 0xc
	.4byte	.LASF97
	.byte	0x73
	.byte	0x1c
	.4byte	0x7f6
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xa
	.4byte	0x6c1
	.uleb128 0xc
	.4byte	.LASF59
	.byte	0x74
	.byte	0x1c
	.4byte	0x810
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xa
	.4byte	0x729
	.uleb128 0xc
	.4byte	.LASF98
	.byte	0x75
	.byte	0x1c
	.4byte	0x82a
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xa
	.4byte	0x5b
	.uleb128 0xc
	.4byte	.LASF99
	.byte	0x77
	.byte	0x11
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2f
	.4byte	.LASF100
	.byte	0x1
	.byte	0x78
	.byte	0x1a
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xb
	.4byte	0x67
	.4byte	0x86a
	.uleb128 0x1e
	.4byte	0xaa
	.byte	0
	.uleb128 0x1c
	.4byte	0x85b
	.uleb128 0x30
	.4byte	.LASF101
	.byte	0x1
	.byte	0x79
	.byte	0x1a
	.4byte	0x86a
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x18
	.string	"req"
	.byte	0xb8
	.byte	0x1e
	.4byte	0x76b
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x18
	.string	"sb"
	.byte	0xfa
	.byte	0x1a
	.4byte	0xd7
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0xb
	.4byte	0x5b
	.4byte	0x8bf
	.uleb128 0x1e
	.4byte	0xaa
	.byte	0
	.uleb128 0xc
	.4byte	.LASF102
	.byte	0xfb
	.byte	0x17
	.4byte	0x8b0
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0xb
	.4byte	0x56d
	.4byte	0x8e4
	.uleb128 0x12
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF103
	.2byte	0x232
	.byte	0xe
	.4byte	0x8d4
	.uleb128 0x9
	.byte	0x3
	.8byte	gPipes
	.uleb128 0xb
	.4byte	0x4a7
	.4byte	0x90a
	.uleb128 0x12
	.4byte	0xaa
	.byte	0xf
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF104
	.2byte	0x233
	.byte	0xd
	.4byte	0x8fa
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1a
	.4byte	.LASF105
	.2byte	0x235
	.byte	0xf
	.4byte	0x628
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x1a
	.4byte	.LASF106
	.2byte	0x236
	.byte	0xe
	.4byte	0x4a2
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreeFiles
	.uleb128 0x13
	.4byte	.LASF109
	.byte	0x10
	.byte	0x7
	.4byte	0x48d
	.4byte	0x96b
	.uleb128 0x9
	.4byte	0x48d
	.uleb128 0x9
	.4byte	0x96b
	.uleb128 0x9
	.4byte	0xbd
	.byte	0
	.uleb128 0xa
	.4byte	0x1ed
	.uleb128 0x31
	.4byte	.LASF235
	.byte	0x1
	.2byte	0x309
	.byte	0x6
	.4byte	0x97f
	.uleb128 0x1f
	.byte	0
	.uleb128 0x32
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x308
	.byte	0x6
	.4byte	0x992
	.uleb128 0x9
	.4byte	0x48d
	.byte	0
	.uleb128 0x33
	.4byte	.LASF108
	.byte	0x5
	.byte	0x91
	.byte	0xf
	.4byte	0x9a4
	.4byte	0x9a4
	.uleb128 0x1f
	.byte	0
	.uleb128 0xa
	.4byte	0x4a2
	.uleb128 0x13
	.4byte	.LASF110
	.byte	0xf
	.byte	0x5
	.4byte	0x48
	.4byte	0x9bf
	.uleb128 0x9
	.4byte	0x96b
	.uleb128 0x1f
	.byte	0
	.uleb128 0x13
	.4byte	.LASF111
	.byte	0x12
	.byte	0x7
	.4byte	0x48d
	.4byte	0x9d9
	.uleb128 0x9
	.4byte	0x48d
	.uleb128 0x9
	.4byte	0x96b
	.byte	0
	.uleb128 0x13
	.4byte	.LASF112
	.byte	0x11
	.byte	0x7
	.4byte	0x48d
	.4byte	0x9f8
	.uleb128 0x9
	.4byte	0x48d
	.uleb128 0x9
	.4byte	0x96b
	.uleb128 0x9
	.4byte	0x48
	.byte	0
	.uleb128 0x13
	.4byte	.LASF113
	.byte	0xe
	.byte	0x5
	.4byte	0x48
	.4byte	0xa0d
	.uleb128 0x9
	.4byte	0x96b
	.byte	0
	.uleb128 0x13
	.4byte	.LASF114
	.byte	0x14
	.byte	0x5
	.4byte	0x48
	.4byte	0xa27
	.uleb128 0x9
	.4byte	0x96b
	.uleb128 0x9
	.4byte	0x96b
	.byte	0
	.uleb128 0x13
	.4byte	.LASF115
	.byte	0x15
	.byte	0x5
	.4byte	0x48
	.4byte	0xa46
	.uleb128 0x9
	.4byte	0x96b
	.uleb128 0x9
	.4byte	0x96b
	.uleb128 0x9
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF116
	.byte	0xd
	.byte	0x7
	.4byte	0xa65
	.4byte	0xa65
	.uleb128 0x9
	.4byte	0xa65
	.uleb128 0x9
	.4byte	0xa67
	.uleb128 0x9
	.4byte	0x97
	.byte	0
	.uleb128 0x34
	.byte	0x8
	.uleb128 0xa
	.4byte	0xa6c
	.uleb128 0x35
	.uleb128 0x13
	.4byte	.LASF117
	.byte	0xc
	.byte	0x7
	.4byte	0xa65
	.4byte	0xa8c
	.uleb128 0x9
	.4byte	0xa65
	.uleb128 0x9
	.4byte	0x48
	.uleb128 0x9
	.4byte	0x97
	.byte	0
	.uleb128 0x13
	.4byte	.LASF118
	.byte	0xb
	.byte	0x7
	.4byte	0xa65
	.4byte	0xaa1
	.uleb128 0x9
	.4byte	0xbd
	.byte	0
	.uleb128 0x36
	.4byte	.LASF119
	.byte	0x1
	.byte	0x13
	.byte	0xd
	.4byte	0xab3
	.uleb128 0x9
	.4byte	0x96b
	.byte	0
	.uleb128 0x14
	.4byte	.LASF122
	.2byte	0x4f0
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xafd
	.uleb128 0x5
	.4byte	.LASF120
	.2byte	0x4f0
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF121
	.2byte	0x4f0
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"ft"
	.2byte	0x4f1
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x20
	.4byte	.LASF123
	.2byte	0x4dc
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb2a
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x4dc
	.byte	0x22
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF124
	.2byte	0x4b7
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb94
	.uleb128 0x5
	.4byte	.LASF125
	.2byte	0x4b7
	.byte	0x20
	.4byte	0x488
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF126
	.2byte	0x4b7
	.byte	0x35
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x5
	.4byte	.LASF127
	.2byte	0x4b7
	.byte	0x4b
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x2
	.string	"i"
	.2byte	0x4ba
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF128
	.2byte	0x4b0
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbe0
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x4b0
	.byte	0x1c
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x7
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x2
	.string	"i"
	.2byte	0x4b2
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF130
	.2byte	0x48a
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc67
	.uleb128 0x6
	.string	"fd"
	.2byte	0x48a
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF129
	.2byte	0x48a
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.string	"ft"
	.2byte	0x48b
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"f"
	.2byte	0x48d
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"p"
	.2byte	0x49d
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x7
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.uleb128 0x2
	.string	"i"
	.2byte	0x4a4
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF131
	.2byte	0x478
	.byte	0x9
	.4byte	0x1f2
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcc3
	.uleb128 0x6
	.string	"fd"
	.2byte	0x478
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x479
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x47f
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x483
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF132
	.2byte	0x448
	.byte	0x9
	.4byte	0x1f2
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xde0
	.uleb128 0x6
	.string	"fd"
	.2byte	0x448
	.byte	0x16
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"buf"
	.2byte	0x448
	.byte	0x26
	.4byte	0xa67
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x5
	.4byte	.LASF133
	.2byte	0x448
	.byte	0x32
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x449
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"f"
	.2byte	0x44e
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF134
	.2byte	0x452
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.string	"src"
	.2byte	0x454
	.byte	0x14
	.4byte	0xde0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF135
	.2byte	0x455
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"off"
	.2byte	0x456
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF136
	.2byte	0x457
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF137
	.2byte	0x470
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x21
	.4byte	.LLRL3
	.uleb128 0x1
	.4byte	.LASF138
	.2byte	0x45a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF139
	.2byte	0x45b
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.4byte	.LASF140
	.2byte	0x45c
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x45f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF142
	.2byte	0x463
	.byte	0x11
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x6c
	.uleb128 0xd
	.4byte	.LASF143
	.2byte	0x431
	.byte	0x9
	.4byte	0x1f2
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe7e
	.uleb128 0x6
	.string	"fd"
	.2byte	0x431
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"buf"
	.2byte	0x431
	.byte	0x1f
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.4byte	.LASF133
	.2byte	0x431
	.byte	0x2b
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x432
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x438
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x43c
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF144
	.2byte	0x43d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF145
	.2byte	0x440
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xd
	.4byte	.LASF146
	.2byte	0x3ea
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf91
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x3ea
	.byte	0x1a
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x5
	.4byte	.LASF87
	.2byte	0x3ea
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -300
	.uleb128 0x5
	.4byte	.LASF148
	.2byte	0x3ea
	.byte	0x2f
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x3eb
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF149
	.2byte	0x3ed
	.byte	0xa
	.4byte	0xf91
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.4byte	.LASF33
	.2byte	0x3fb
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.string	"di"
	.2byte	0x3fc
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0xf
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0xf71
	.uleb128 0x1
	.4byte	.LASF44
	.2byte	0x402
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.4byte	.LASF150
	.2byte	0x403
	.byte	0x12
	.4byte	0xfa1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x1
	.4byte	.LASF151
	.2byte	0x408
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x7
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.uleb128 0x2
	.string	"i"
	.2byte	0x404
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.uleb128 0x2
	.string	"i"
	.2byte	0x416
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x1e6
	.4byte	0xfa1
	.uleb128 0x12
	.4byte	0xaa
	.byte	0x7f
	.byte	0
	.uleb128 0xb
	.4byte	0x1e6
	.4byte	0xfb1
	.uleb128 0x12
	.4byte	0xaa
	.byte	0xe
	.byte	0
	.uleb128 0xd
	.4byte	.LASF152
	.2byte	0x3e4
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfe3
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x3e4
	.byte	0x19
	.4byte	0x96b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF157
	.2byte	0x3b0
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1164
	.uleb128 0x5
	.4byte	.LASF153
	.2byte	0x3b0
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -676
	.uleb128 0x5
	.4byte	.LASF34
	.2byte	0x3b0
	.byte	0x39
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.uleb128 0x5
	.4byte	.LASF154
	.2byte	0x3b0
	.byte	0x48
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0x2
	.string	"pdi"
	.2byte	0x3b4
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x2
	.string	"de"
	.2byte	0x3b9
	.byte	0x13
	.4byte	0x1af
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.string	"off"
	.2byte	0x3c0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x3d4
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF138
	.2byte	0x3d5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF139
	.2byte	0x3d6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x3d7
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.string	"buf"
	.2byte	0x3da
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x1
	.4byte	.LASF155
	.2byte	0x3dc
	.byte	0x14
	.4byte	0x1164
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xf
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x10e1
	.uleb128 0x2
	.string	"i"
	.2byte	0x3bc
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x7
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.uleb128 0x1
	.4byte	.LASF155
	.2byte	0x3c3
	.byte	0x18
	.4byte	0x1164
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x3c4
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x7
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.uleb128 0x2
	.string	"i"
	.2byte	0x3c5
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x7
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x1
	.4byte	.LASF138
	.2byte	0x3c9
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x3ca
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x1af
	.uleb128 0x15
	.4byte	.LASF158
	.2byte	0x39b
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11de
	.uleb128 0x2
	.string	"di"
	.2byte	0x39d
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x7
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x1
	.4byte	.LASF33
	.2byte	0x39e
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.uleb128 0x1
	.4byte	.LASF159
	.2byte	0x3a2
	.byte	0x1b
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF160
	.2byte	0x36e
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12f5
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x36e
	.byte	0x2f
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x5
	.4byte	.LASF153
	.2byte	0x36e
	.byte	0x3f
	.4byte	0x12f5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x5
	.4byte	.LASF161
	.2byte	0x36e
	.byte	0x52
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x1
	.4byte	.LASF162
	.2byte	0x374
	.byte	0xa
	.4byte	0x12fa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -144
	.byte	0x6
	.uleb128 0x1
	.4byte	.LASF163
	.2byte	0x378
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF164
	.2byte	0x379
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.string	"tok"
	.2byte	0x37a
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"cur"
	.2byte	0x37b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"ip"
	.2byte	0x37c
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x2
	.string	"n"
	.2byte	0x392
	.byte	0x9
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0xf
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x12d4
	.uleb128 0x1
	.4byte	.LASF165
	.2byte	0x380
	.byte	0xf
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.4byte	.LASF166
	.2byte	0x388
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.byte	0
	.uleb128 0x7
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x2
	.string	"i"
	.2byte	0x394
	.byte	0xe
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x8b
	.uleb128 0xb
	.4byte	0x1e6
	.4byte	0x130e
	.uleb128 0x27
	.4byte	0xaa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -136
	.byte	0x6
	.byte	0
	.uleb128 0xd
	.4byte	.LASF167
	.2byte	0x33f
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1396
	.uleb128 0x6
	.string	"fd"
	.2byte	0x33f
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF86
	.2byte	0x33f
	.byte	0x1d
	.4byte	0x48d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x33f
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x341
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x34a
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x2
	.string	"i"
	.2byte	0x350
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF168
	.2byte	0x30d
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x142b
	.uleb128 0x6
	.string	"fd"
	.2byte	0x30d
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF86
	.2byte	0x30d
	.byte	0x1c
	.4byte	0x48d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x30d
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x30f
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x318
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"j"
	.2byte	0x327
	.byte	0x12
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.uleb128 0x2
	.string	"i"
	.2byte	0x328
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF169
	.2byte	0x2ca
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x14bd
	.uleb128 0x6
	.string	"fd1"
	.2byte	0x2ca
	.byte	0x15
	.4byte	0x14bd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"fd2"
	.2byte	0x2ca
	.byte	0x1f
	.4byte	0x14bd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2cb
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"pip"
	.2byte	0x2cd
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xf
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x14a9
	.uleb128 0x2
	.string	"i"
	.2byte	0x2cf
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x21
	.4byte	.LLRL2
	.uleb128 0x2
	.string	"i"
	.2byte	0x2e9
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x48
	.uleb128 0xd
	.4byte	.LASF170
	.2byte	0x2bd
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1502
	.uleb128 0x6
	.string	"fd"
	.2byte	0x2bd
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2bf
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF171
	.2byte	0x2b1
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1542
	.uleb128 0x6
	.string	"fd"
	.2byte	0x2b1
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2b3
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF172
	.2byte	0x2a4
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1582
	.uleb128 0x6
	.string	"fd"
	.2byte	0x2a4
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2a6
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF173
	.2byte	0x290
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15af
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x290
	.byte	0x1c
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x22
	.4byte	.LASF174
	.2byte	0x285
	.byte	0xe
	.4byte	0x4a2
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15e1
	.uleb128 0x1
	.4byte	.LASF126
	.2byte	0x287
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF175
	.2byte	0x26f
	.byte	0xf
	.4byte	0x628
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x162e
	.uleb128 0x2
	.string	"p"
	.2byte	0x271
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF176
	.2byte	0x27d
	.byte	0xb
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"pa"
	.2byte	0x27e
	.byte	0xb
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x20
	.4byte	.LASF177
	.2byte	0x266
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1659
	.uleb128 0x6
	.string	"p"
	.2byte	0x266
	.byte	0x1d
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x22
	.4byte	.LASF178
	.2byte	0x25d
	.byte	0xe
	.4byte	0x4a2
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1689
	.uleb128 0x2
	.string	"p"
	.2byte	0x25f
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x20
	.4byte	.LASF179
	.2byte	0x257
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16b4
	.uleb128 0x6
	.string	"p"
	.2byte	0x257
	.byte	0x1e
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x22
	.4byte	.LASF180
	.2byte	0x24c
	.byte	0xf
	.4byte	0x628
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16e4
	.uleb128 0x2
	.string	"p"
	.2byte	0x24e
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x37
	.4byte	.LASF236
	.byte	0x1
	.2byte	0x238
	.byte	0x6
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1784
	.uleb128 0xf
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0x1745
	.uleb128 0x2
	.string	"i"
	.2byte	0x23d
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.uleb128 0x2
	.string	"p"
	.2byte	0x23e
	.byte	0x17
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x2
	.string	"i"
	.2byte	0x244
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.uleb128 0x2
	.string	"p"
	.2byte	0x245
	.byte	0x16
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF181
	.2byte	0x224
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17f7
	.uleb128 0x6
	.string	"f"
	.2byte	0x224
	.byte	0x27
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x224
	.byte	0x37
	.4byte	0x488
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"cap"
	.2byte	0x225
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"c"
	.2byte	0x225
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.uleb128 0x2
	.string	"i"
	.2byte	0x226
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF182
	.2byte	0x216
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1868
	.uleb128 0x6
	.string	"f"
	.2byte	0x216
	.byte	0x24
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x216
	.byte	0x34
	.4byte	0x488
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"cap"
	.2byte	0x217
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x38
	.4byte	.LLRL0
	.4byte	0x1854
	.uleb128 0x2
	.string	"i"
	.2byte	0x219
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x21
	.4byte	.LLRL1
	.uleb128 0x2
	.string	"i"
	.2byte	0x21b
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x28
	.4byte	.LASF183
	.2byte	0x213
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1898
	.uleb128 0x6
	.string	"f"
	.2byte	0x213
	.byte	0x23
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF184
	.2byte	0x1fb
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18f4
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x1fb
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x2
	.string	"ip"
	.2byte	0x1fc
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x7
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x2
	.string	"i"
	.2byte	0x202
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF185
	.2byte	0x1e1
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x198a
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x1e1
	.byte	0x22
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x2
	.string	"ipr"
	.2byte	0x1e7
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.4byte	.LASF162
	.2byte	0x1eb
	.byte	0xa
	.4byte	0x198a
	.uleb128 0x4
	.byte	0x91
	.sleb128 -128
	.byte	0x6
	.uleb128 0x1
	.4byte	.LASF186
	.2byte	0x1ed
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.4byte	.LASF187
	.2byte	0x1ee
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x7
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.4byte	.LASF166
	.2byte	0x1f2
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x1e6
	.4byte	0x199e
	.uleb128 0x27
	.4byte	0xaa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -120
	.byte	0x6
	.byte	0
	.uleb128 0xd
	.4byte	.LASF188
	.2byte	0x1cc
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1a4d
	.uleb128 0x5
	.4byte	.LASF44
	.2byte	0x1cc
	.byte	0x24
	.4byte	0x1a4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.4byte	.LASF34
	.2byte	0x1cc
	.byte	0x38
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.string	"off"
	.2byte	0x1cd
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF189
	.2byte	0x1ce
	.byte	0xa
	.4byte	0xfa1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x2
	.string	"de"
	.2byte	0x1d2
	.byte	0x18
	.4byte	0x1164
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x1d3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x2
	.string	"i"
	.2byte	0x1d4
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x13f
	.uleb128 0x14
	.4byte	.LASF190
	.2byte	0x1b4
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b27
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1b4
	.byte	0x1f
	.4byte	0x1a4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF191
	.2byte	0x1b4
	.byte	0x2c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.string	"buf"
	.2byte	0x1b4
	.byte	0x3d
	.4byte	0x82a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.4byte	.LASF18
	.2byte	0x1b4
	.byte	0x4b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF135
	.2byte	0x1b5
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"off"
	.2byte	0x1b6
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"dst"
	.2byte	0x1b7
	.byte	0xe
	.4byte	0x82a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x1
	.4byte	.LASF138
	.2byte	0x1ba
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF139
	.2byte	0x1bb
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF145
	.2byte	0x1bc
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x1bf
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF192
	.2byte	0x16b
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d28
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x16b
	.byte	0x2b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x6
	.string	"ip"
	.2byte	0x16b
	.byte	0x40
	.4byte	0x1a4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x6
	.string	"idx"
	.2byte	0x16b
	.byte	0x4d
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x2
	.string	"di"
	.2byte	0x18f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF193
	.2byte	0x190
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF194
	.2byte	0x191
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0x193
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF196
	.2byte	0x19c
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x1
	.4byte	.LASF197
	.2byte	0x19e
	.byte	0xf
	.4byte	0x12f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF198
	.2byte	0x19f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF199
	.2byte	0x1a8
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x1
	.4byte	.LASF200
	.2byte	0x1aa
	.byte	0xf
	.4byte	0x12f5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xf
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x1c25
	.uleb128 0x2
	.string	"b"
	.2byte	0x16f
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.byte	0
	.uleb128 0xf
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0x1cbe
	.uleb128 0x1
	.4byte	.LASF201
	.2byte	0x178
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"buf"
	.2byte	0x181
	.byte	0x11
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x183
	.byte	0x13
	.4byte	0x12f5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.string	"i"
	.2byte	0x184
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xf
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x1c9c
	.uleb128 0x2
	.string	"nb"
	.2byte	0x17a
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.byte	0
	.uleb128 0x7
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x2
	.string	"db"
	.2byte	0x186
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.byte	0
	.byte	0
	.uleb128 0xf
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0x1ce2
	.uleb128 0x2
	.string	"nb"
	.2byte	0x195
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.byte	0
	.uleb128 0xf
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.4byte	0x1d06
	.uleb128 0x2
	.string	"nb"
	.2byte	0x1a1
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.byte	0
	.uleb128 0x7
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x2
	.string	"db"
	.2byte	0x1ac
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF202
	.2byte	0x14b
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1e0b
	.uleb128 0x6
	.string	"ip"
	.2byte	0x14b
	.byte	0x2e
	.4byte	0x1a4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.string	"idx"
	.2byte	0x14b
	.byte	0x3b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0xf
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.4byte	0x1d9e
	.uleb128 0x1
	.4byte	.LASF201
	.2byte	0x151
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x154
	.byte	0x13
	.4byte	0x12f5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0x7
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x1
	.4byte	.LASF203
	.2byte	0x159
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF204
	.2byte	0x15a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0x15c
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF197
	.2byte	0x160
	.byte	0x13
	.4byte	0x12f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF198
	.2byte	0x161
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF200
	.2byte	0x166
	.byte	0x13
	.4byte	0x12f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF205
	.2byte	0x13a
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1e8b
	.uleb128 0x1
	.4byte	.LASF206
	.2byte	0x13c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF207
	.2byte	0x13d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x7
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x2
	.string	"b"
	.2byte	0x13e
	.byte	0x13
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x2
	.string	"z"
	.2byte	0x142
	.byte	0x15
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF208
	.2byte	0x130
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1ee4
	.uleb128 0x6
	.string	"b"
	.2byte	0x130
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x1
	.4byte	.LASF209
	.2byte	0x132
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"buf"
	.2byte	0x133
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x2
	.string	"bi"
	.2byte	0x135
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF210
	.2byte	0x127
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1f42
	.uleb128 0x6
	.string	"b"
	.2byte	0x127
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x1
	.4byte	.LASF209
	.2byte	0x129
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"buf"
	.2byte	0x12a
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x2
	.string	"bi"
	.2byte	0x12c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF211
	.2byte	0x119
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1fcc
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x119
	.byte	0x22
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x6
	.string	"src"
	.2byte	0x119
	.byte	0x3d
	.4byte	0x1fcc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x1
	.4byte	.LASF212
	.2byte	0x11c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF213
	.2byte	0x11d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF191
	.2byte	0x11e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"buf"
	.2byte	0x120
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x2
	.string	"dip"
	.2byte	0x122
	.byte	0x14
	.4byte	0x1a4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xa
	.4byte	0x19a
	.uleb128 0x28
	.4byte	.LASF214
	.2byte	0x117
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2001
	.uleb128 0x6
	.string	"b"
	.2byte	0x117
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x14
	.4byte	.LASF215
	.2byte	0x102
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2079
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x102
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF216
	.2byte	0x102
	.byte	0x2f
	.4byte	0x1a4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF212
	.2byte	0x109
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF213
	.2byte	0x10b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF191
	.2byte	0x10d
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"dip"
	.2byte	0x110
	.byte	0x14
	.4byte	0x1a4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x39
	.4byte	.LASF237
	.byte	0x1
	.byte	0xfd
	.byte	0x6
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x23
	.4byte	.LASF217
	.byte	0xf1
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x20cc
	.uleb128 0xe
	.string	"blk"
	.byte	0xf1
	.byte	0x1b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"src"
	.byte	0xf1
	.byte	0x2c
	.4byte	0xa67
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x29
	.4byte	.LASF218
	.byte	0xd8
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2105
	.uleb128 0x2a
	.4byte	.LASF94
	.byte	0xd8
	.byte	0x27
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"src"
	.byte	0xd8
	.byte	0x3b
	.4byte	0xa67
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x23
	.4byte	.LASF219
	.byte	0xd3
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x213e
	.uleb128 0xe
	.string	"blk"
	.byte	0xd3
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"dst"
	.byte	0xd3
	.byte	0x25
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x29
	.4byte	.LASF220
	.byte	0xba
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2177
	.uleb128 0x2a
	.4byte	.LASF94
	.byte	0xba
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"dst"
	.byte	0xba
	.byte	0x34
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3a
	.4byte	.LASF221
	.byte	0x1
	.byte	0xb2
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x21bd
	.uleb128 0xe
	.string	"f0"
	.byte	0xb2
	.byte	0x27
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0xe
	.string	"f1"
	.byte	0xb2
	.byte	0x33
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"f2"
	.byte	0xb2
	.byte	0x3f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x23
	.4byte	.LASF222
	.byte	0x7e
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x22a7
	.uleb128 0xc
	.4byte	.LASF223
	.byte	0x8b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x18
	.string	"st"
	.byte	0x8f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xc
	.4byte	.LASF224
	.byte	0x97
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xc
	.4byte	.LASF225
	.byte	0x98
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xc
	.4byte	.LASF226
	.byte	0x9d
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xc
	.4byte	.LASF227
	.byte	0x9e
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xc
	.4byte	.LASF228
	.byte	0x9f
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xc
	.4byte	.LASF229
	.byte	0xa0
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xc
	.4byte	.LASF230
	.byte	0xa1
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xc
	.4byte	.LASF231
	.byte	0xab
	.byte	0xe
	.4byte	0x9e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x7
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x18
	.string	"s"
	.byte	0x80
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0xc
	.4byte	.LASF232
	.byte	0x81
	.byte	0x12
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3b
	.4byte	.LASF233
	.byte	0x1
	.byte	0x7c
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x22e2
	.uleb128 0xe
	.string	"b"
	.byte	0x7c
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"o"
	.byte	0x7c
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x3c
	.4byte	.LASF238
	.byte	0x1
	.byte	0x7b
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xe
	.string	"b"
	.byte	0x7b
	.byte	0x22
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"o"
	.byte	0x7b
	.byte	0x2d
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0xe
	.string	"v"
	.byte	0x7b
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
	.uleb128 0x5
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
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
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
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
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
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
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
	.uleb128 0x10
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
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
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
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x18
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
	.uleb128 0x19
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
	.uleb128 0x1a
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
	.uleb128 0x1b
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
	.uleb128 0x1c
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x18
	.byte	0
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
	.uleb128 0x21
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x22
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
	.uleb128 0x24
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
	.uleb128 0x25
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
	.uleb128 0x26
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x27
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x28
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
	.uleb128 0x29
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
	.uleb128 0x2a
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
	.uleb128 0x2b
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
	.uleb128 0x2c
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
	.uleb128 0x2d
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
	.uleb128 0x27
	.uleb128 0x19
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
	.uleb128 0x34
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x35
	.uleb128 0x26
	.byte	0
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
	.uleb128 0x38
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
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
	.uleb128 .LBB20-.Ltext0
	.uleb128 .LBE20-.Ltext0
	.byte	0x4
	.uleb128 .LBB22-.Ltext0
	.uleb128 .LBE22-.Ltext0
	.byte	0
.LLRL1:
	.byte	0x4
	.uleb128 .LBB21-.Ltext0
	.uleb128 .LBE21-.Ltext0
	.byte	0x4
	.uleb128 .LBB23-.Ltext0
	.uleb128 .LBE23-.Ltext0
	.byte	0
.LLRL2:
	.byte	0x4
	.uleb128 .LBB30-.Ltext0
	.uleb128 .LBE30-.Ltext0
	.byte	0x4
	.uleb128 .LBB31-.Ltext0
	.uleb128 .LBE31-.Ltext0
	.byte	0
.LLRL3:
	.byte	0x4
	.uleb128 .LBB45-.Ltext0
	.uleb128 .LBE45-.Ltext0
	.byte	0x4
	.uleb128 .LBB46-.Ltext0
	.uleb128 .LBE46-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF110:
	.string	"printf"
.LASF194:
	.string	"idx2"
.LASF133:
	.string	"count"
.LASF202:
	.string	"inode_blockno"
.LASF228:
	.string	"sz_used"
.LASF22:
	.string	"logstart"
.LASF65:
	.string	"free_next"
.LASF114:
	.string	"strcmp"
.LASF161:
	.string	"leafname"
.LASF15:
	.string	"size_t"
.LASF219:
	.string	"read_block"
.LASF14:
	.string	"uintptr_t"
.LASF45:
	.string	"stack_top"
.LASF165:
	.string	"nexttok"
.LASF218:
	.string	"virtio_blk_write"
.LASF91:
	.string	"virtq_used"
.LASF12:
	.string	"uint64_t"
.LASF84:
	.string	"gActiveProc"
.LASF204:
	.string	"dbl_index1"
.LASF101:
	.string	"dma_buf"
.LASF174:
	.string	"new_file_table"
.LASF36:
	.string	"ssize_t"
.LASF237:
	.string	"read_superblock"
.LASF173:
	.string	"fs_init"
.LASF27:
	.string	"type"
.LASF112:
	.string	"strncpy"
.LASF118:
	.string	"kalloc_pages"
.LASF147:
	.string	"path"
.LASF53:
	.string	"process_kalloc_address"
.LASF201:
	.string	"indirect_blk"
.LASF52:
	.string	"file_table"
.LASF156:
	.string	"entries"
.LASF60:
	.string	"pipe"
.LASF167:
	.string	"pipewrite"
.LASF39:
	.string	"context_t"
.LASF56:
	.string	"next"
.LASF105:
	.string	"gFreePipes"
.LASF16:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF50:
	.string	"program"
.LASF192:
	.string	"inode_bmap_alloc"
.LASF78:
	.string	"FK_STDIN"
.LASF230:
	.string	"npages"
.LASF25:
	.string	"superblock"
.LASF44:
	.string	"parent"
.LASF227:
	.string	"sz_avail"
.LASF231:
	.string	"vq_phys"
.LASF4:
	.string	"long int"
.LASF111:
	.string	"strtok"
.LASF77:
	.string	"num_linked_file"
.LASF99:
	.string	"aidx"
.LASF172:
	.string	"is_pipe"
.LASF125:
	.string	"owner"
.LASF233:
	.string	"mr32"
.LASF184:
	.string	"dump_inode"
.LASF116:
	.string	"memcpy"
.LASF98:
	.string	"vq_area"
.LASF8:
	.string	"uint16_t"
.LASF66:
	.string	"owner_processes"
.LASF81:
	.string	"FK_FILE"
.LASF169:
	.string	"pipe_open"
.LASF226:
	.string	"sz_desc"
.LASF85:
	.string	"virtq_desc"
.LASF191:
	.string	"offset"
.LASF107:
	.string	"panic"
.LASF129:
	.string	"massive"
.LASF93:
	.string	"reserved"
.LASF236:
	.string	"file_system_init"
.LASF163:
	.string	"save"
.LASF103:
	.string	"gPipes"
.LASF142:
	.string	"bufblk"
.LASF124:
	.string	"fs_dup_table"
.LASF11:
	.string	"unsigned int"
.LASF206:
	.string	"bmapblocks"
.LASF38:
	.string	"pagetable_t"
.LASF207:
	.string	"datastart"
.LASF41:
	.string	"proc"
.LASF113:
	.string	"strlen"
.LASF115:
	.string	"strncmp"
.LASF72:
	.string	"read_open"
.LASF29:
	.string	"minor"
.LASF131:
	.string	"fs_size"
.LASF13:
	.string	"long unsigned int"
.LASF171:
	.string	"is_stdin"
.LASF73:
	.string	"write_open"
.LASF55:
	.string	"deleted"
.LASF34:
	.string	"name"
.LASF158:
	.string	"alloc_inode_T_FILE"
.LASF215:
	.string	"read_inode"
.LASF221:
	.string	"set_flags"
.LASF58:
	.string	"kind"
.LASF18:
	.string	"size"
.LASF9:
	.string	"short unsigned int"
.LASF235:
	.string	"yield"
.LASF130:
	.string	"fs_close"
.LASF30:
	.string	"nlink"
.LASF164:
	.string	"last"
.LASF54:
	.string	"num_process_kalloc_address"
.LASF122:
	.string	"fs_dup2"
.LASF23:
	.string	"inodestart"
.LASF162:
	.string	"copy"
.LASF234:
	.string	"GNU C17 14.2.0 -mabi=lp64 -mcmodel=medany -mtune=rocket -misa-spec=20191213 -march=rv64imafdc_zicsr_zifencei -g -ffreestanding"
.LASF151:
	.string	"new_inum"
.LASF182:
	.string	"owner_add"
.LASF94:
	.string	"sector"
.LASF79:
	.string	"FK_STDOUT"
.LASF100:
	.string	"status_byte"
.LASF179:
	.string	"free_pipe"
.LASF185:
	.string	"path_lookup"
.LASF108:
	.string	"get_current_file_table"
.LASF232:
	.string	"base"
.LASF188:
	.string	"dir_lookup"
.LASF119:
	.string	"puts"
.LASF212:
	.string	"inodes_per_blk"
.LASF200:
	.string	"second_entries"
.LASF123:
	.string	"free_fs_table"
.LASF42:
	.string	"trapframe"
.LASF134:
	.string	"to_total"
.LASF47:
	.string	"memsz"
.LASF17:
	.string	"long double"
.LASF48:
	.string	"zombie"
.LASF132:
	.string	"fs_write"
.LASF176:
	.string	"user_va"
.LASF210:
	.string	"bitmap_test"
.LASF96:
	.string	"desc"
.LASF140:
	.string	"to_write"
.LASF89:
	.string	"virtq_used_elem"
.LASF193:
	.string	"idx1"
.LASF32:
	.string	"dirent"
.LASF146:
	.string	"fs_open2"
.LASF31:
	.string	"addrs"
.LASF190:
	.string	"read_data"
.LASF177:
	.string	"free_file"
.LASF106:
	.string	"gFreeFiles"
.LASF74:
	.string	"nreader"
.LASF83:
	.string	"gProc"
.LASF195:
	.string	"dindirect_blk"
.LASF121:
	.string	"newfd"
.LASF168:
	.string	"piperead"
.LASF203:
	.string	"dbl_index0"
.LASF187:
	.string	"current_inum"
.LASF59:
	.string	"used"
.LASF209:
	.string	"bmapblk"
.LASF186:
	.string	"token"
.LASF216:
	.string	"dest"
.LASF145:
	.string	"to_read"
.LASF109:
	.string	"strncat"
.LASF208:
	.string	"bitmap_set"
.LASF224:
	.string	"devQ"
.LASF86:
	.string	"addr"
.LASF90:
	.string	"virtq_avail"
.LASF33:
	.string	"inum"
.LASF49:
	.string	"pagetable"
.LASF5:
	.string	"int32_t"
.LASF7:
	.string	"unsigned char"
.LASF217:
	.string	"write_block"
.LASF21:
	.string	"nlog"
.LASF68:
	.string	"spipe"
.LASF127:
	.string	"orig"
.LASF3:
	.string	"short int"
.LASF64:
	.string	"oflags"
.LASF57:
	.string	"file"
.LASF37:
	.string	"pte_t"
.LASF20:
	.string	"ninodes"
.LASF150:
	.string	"leaf"
.LASF205:
	.string	"alloc_data_block"
.LASF183:
	.string	"owner_cap"
.LASF141:
	.string	"disk_blk"
.LASF189:
	.string	"namebuf"
.LASF153:
	.string	"parent_inum"
.LASF138:
	.string	"blk_idx"
.LASF199:
	.string	"secondbuf"
.LASF136:
	.string	"written"
.LASF159:
	.string	"newi"
.LASF10:
	.string	"uint32_t"
.LASF70:
	.string	"nread"
.LASF40:
	.string	"mepc"
.LASF104:
	.string	"gFiles"
.LASF213:
	.string	"blkno"
.LASF35:
	.string	"char"
.LASF148:
	.string	"mode"
.LASF238:
	.string	"mw32"
.LASF229:
	.string	"sz_total"
.LASF92:
	.string	"virtio_blk_req"
.LASF152:
	.string	"fs_open"
.LASF51:
	.string	"xstatus"
.LASF198:
	.string	"first_blk"
.LASF67:
	.string	"num_owner_process"
.LASF220:
	.string	"virtio_blk_read"
.LASF71:
	.string	"nwrite"
.LASF82:
	.string	"FK_PIPE"
.LASF69:
	.string	"data"
.LASF43:
	.string	"context"
.LASF196:
	.string	"firstbuf"
.LASF26:
	.string	"dinode"
.LASF180:
	.string	"alloc_pipe"
.LASF46:
	.string	"vaddr"
.LASF80:
	.string	"FK_STDERR"
.LASF139:
	.string	"blk_off"
.LASF120:
	.string	"oldfd"
.LASF117:
	.string	"memset"
.LASF178:
	.string	"alloc_file"
.LASF76:
	.string	"linked_file"
.LASF75:
	.string	"nwriter"
.LASF175:
	.string	"pipealloc"
.LASF143:
	.string	"fs_read"
.LASF166:
	.string	"next_inum"
.LASF222:
	.string	"virtio_blk_init"
.LASF6:
	.string	"uint8_t"
.LASF181:
	.string	"owner_remove"
.LASF157:
	.string	"add_dirent"
.LASF61:
	.string	"pipe_used"
.LASF87:
	.string	"flags"
.LASF97:
	.string	"avail"
.LASF88:
	.string	"ring"
.LASF102:
	.string	"block_buf"
.LASF95:
	.string	"vbase"
.LASF62:
	.string	"read_pipe"
.LASF170:
	.string	"is_stdout"
.LASF214:
	.string	"BBLOCK"
.LASF19:
	.string	"nblocks"
.LASF137:
	.string	"newsize"
.LASF63:
	.string	"write_pipe"
.LASF28:
	.string	"major"
.LASF225:
	.string	"drvQ"
.LASF155:
	.string	"ents"
.LASF160:
	.string	"path_parent_lookup_abs"
.LASF24:
	.string	"bmapstart"
.LASF128:
	.string	"fs_exit"
.LASF135:
	.string	"left"
.LASF154:
	.string	"child_inum"
.LASF149:
	.string	"path2"
.LASF223:
	.string	"devfeat"
.LASF126:
	.string	"result"
.LASF144:
	.string	"remaining"
.LASF211:
	.string	"write_inode"
.LASF197:
	.string	"first_entries"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/ab25cq/minux9"
.LASF0:
	.string	"fs.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
