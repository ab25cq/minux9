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
	.loc 1 126 59
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
	.loc 1 126 84
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 126 62
	mv	a4,a5
	.loc 1 126 87
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 126 91
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
	.loc 1 127 60
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
	.loc 1 127 92
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 127 69
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 127 97
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
	.loc 1 130 1
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
	.loc 1 131 13
	sw	zero,-20(s0)
	.loc 1 131 5
	j	.L5
.L9:
.LBB3:
	.loc 1 132 43
	lw	a4,-20(s0)
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	.loc 1 132 18
	slli	a5,a5,12
	sd	a5,-32(s0)
	.loc 1 133 12
	li	a1,0
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 133 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L22
	.loc 1 134 12
	li	a1,8
	ld	a0,-32(s0)
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 134 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L7
	.loc 1 134 50 discriminator 1
	lla	a5,vbase
	ld	a4,-32(s0)
	sd	a4,0(a5)
	.loc 1 134 58
	j	.L8
.L22:
	.loc 1 133 47
	nop
.L7:
.LBE3:
	.loc 1 131 39 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 1 131 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,7
	ble	a4,a5,.L9
.L8:
.LBE2:
	.loc 1 136 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 136 7
	bne	a5,zero,.L10
	.loc 1 136 17 discriminator 1
	lla	a0,.LC0
	call	puts
.L11:
	.loc 1 136 54
	j	.L11
.L10:
	.loc 1 137 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 137 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L12
	.loc 1 137 38 discriminator 1
	lla	a0,.LC1
	call	puts
.L13:
	.loc 1 137 70
	j	.L13
.L12:
	.loc 1 139 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 140 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 142 24
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 144 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 146 19
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 146 14 discriminator 1
	ori	a5,a5,8
	sw	a5,-40(s0)
	.loc 1 147 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 148 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 148 32 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 148 7 discriminator 1
	bne	a5,zero,.L14
	.loc 1 149 9
	lla	a0,.LC2
	call	puts
.L15:
	.loc 1 149 46
	j	.L15
.L14:
	.loc 1 152 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 153 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 154 21
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 155 14
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L16
	li	a5,128
.L16:
	sw	a5,-48(s0)
	.loc 1 156 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-48(s0)
	mv	a2,a4
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 157 7
	lla	a5,Q
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 1 158 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 158 7
	beq	a5,zero,.L17
	.loc 1 158 16 discriminator 2
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 158 11 discriminator 2
	li	a5,1024
	bleu	a4,a5,.L18
.L17:
	.loc 1 158 26 discriminator 3
	lla	a0,.LC3
	call	puts
.L19:
	.loc 1 158 65
	j	.L19
.L18:
	.loc 1 160 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 160 12
	slli	a5,a5,4
	sd	a5,-56(s0)
	.loc 1 161 29
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	.loc 1 161 12
	slli	a5,a5,1
	sd	a5,-64(s0)
	.loc 1 162 36
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 162 12
	addi	a5,a5,4
	sd	a5,-72(s0)
	.loc 1 163 31
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 163 12
	ld	a4,-72(s0)
	add	a5,a4,a5
	sd	a5,-80(s0)
	.loc 1 164 33
	ld	a4,-80(s0)
	li	a5,4096
	addi	a5,a5,-1
	add	a5,a4,a5
	.loc 1 164 12
	srli	a5,a5,12
	sd	a5,-88(s0)
	.loc 1 166 15
	ld	a0,-88(s0)
	call	kalloc_pages
	mv	a4,a0
	.loc 1 166 13 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 167 9
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 167 8
	bne	a5,zero,.L20
	.loc 1 167 21 discriminator 1
	lla	a0,.LC4
	call	puts
.L21:
	.loc 1 167 57
	j	.L21
.L20:
	.loc 1 168 5
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
	.loc 1 170 11
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 171 44
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 171 11
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 172 54
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 172 11
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 174 24
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 174 14
	sd	a5,-96(s0)
	.loc 1 175 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 176 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 176 47
	ld	a5,-96(s0)
	srli	a5,a5,12
	.loc 1 176 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 178 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 179 1
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
	.loc 1 181 66
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
	.loc 1 182 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 182 19
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
	.loc 1 183 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 183 19
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
	.loc 1 184 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 184 19
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
	.loc 1 185 1
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
	.loc 1 190 1
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
	.loc 1 191 14
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 192 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 193 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 194 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 196 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 196 20
	lla	a4,req
	.loc 1 196 18
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
	.loc 1 196 43
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 196 51
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
	.loc 1 196 73
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 196 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 197 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 197 20
	lla	a4,dma_buf
	.loc 1 197 18
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
	.loc 1 197 43
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 197 51
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
	.loc 1 197 73
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 197 82
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 198 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 198 20
	lla	a4,status_byte
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
	.loc 1 198 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 198 57
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
	.loc 1 200 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 202 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 202 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 202 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 203 5
	fence	rw,rw
	.loc 1 204 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 204 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 204 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 204 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 206 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 208 10
	j	.L25
.L26:
	.loc 1 209 9
	fence	rw,rw
.L25:
	.loc 1 208 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L26
	.loc 1 211 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 1 212 1
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
	.loc 1 215 1
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
	.loc 1 216 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_read
	.loc 1 217 1
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
	.loc 1 220 1
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
	.loc 1 221 14
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 222 16
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 1 223 18
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 224 17
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 226 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 228 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 228 20
	lla	a4,req
	.loc 1 228 18
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
	.loc 1 228 47
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 228 55
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
	.loc 1 228 77
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 228 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 229 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 229 20
	lla	a4,dma_buf
	.loc 1 229 18
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
	.loc 1 229 47
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 229 55
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
	.loc 1 229 77
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 229 86
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 230 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 230 20
	lla	a4,status_byte
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
	.loc 1 230 48
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 230 56
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
	.loc 1 232 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 234 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 1 234 22
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 234 27
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 1 235 5
	fence	rw,rw
	.loc 1 236 18
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 236 16
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 236 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 236 16
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 238 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 240 10
	j	.L29
.L30:
	.loc 1 241 9
	fence	rw,rw
.L29:
	.loc 1 240 23
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L30
	.loc 1 242 1
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
	.loc 1 245 1
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
	.loc 1 246 5
	lwu	a5,-20(s0)
	ld	a1,-32(s0)
	mv	a0,a5
	call	virtio_blk_write
	.loc 1 247 1
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
	.loc 1 256 28
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 257 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 258 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 259 1
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
	.loc 1 261 53
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
	.loc 1 262 8
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L34
	.loc 1 262 30 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 262 18 discriminator 1
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L35
.L34:
	.loc 1 263 9
	li	a2,68
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	.loc 1 264 9
	j	.L33
.L35:
	.loc 1 268 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 270 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 270 46
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 270 51
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 270 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 272 30
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 272 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 272 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 274 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 275 26
	lwu	a4,-28(s0)
	.loc 1 275 20
	lla	a5,block_buf
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 276 11
	ld	a4,-64(s0)
	ld	a5,-40(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L33:
	.loc 1 277 1
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
	.loc 1 282 42
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
	.loc 1 282 53
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 282 69
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 1 282 64
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 282 77
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
	.loc 1 285 1
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
	.loc 1 286 8
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L44
	.loc 1 286 30 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 286 18 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L44
	.loc 1 287 14
	li	a5,7
	sw	a5,-20(s0)
	.loc 1 288 24
	lla	a5,sb
	lw	a4,20(a5)
	.loc 1 288 45
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 288 50
	lw	a3,-20(s0)
	divuw	a5,a5,a3
	sext.w	a5,a5
	.loc 1 288 14
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 289 30
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 289 35
	mv	a4,a5
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 289 14
	mv	a4,a5
	mv	a5,a4
	slliw	a5,a5,4
	addw	a5,a5,a4
	slliw	a5,a5,2
	sw	a5,-28(s0)
	.loc 1 292 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 293 26
	lwu	a5,-28(s0)
	.loc 1 293 20
	addi	a4,s0,-552
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 294 10
	ld	a4,-40(s0)
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,68
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 295 5
	addi	a4,s0,-552
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L39
.L44:
	.loc 1 286 40
	nop
.L39:
	.loc 1 296 1
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
	.loc 1 299 1
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
	.loc 1 300 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 302 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 303 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 304 19
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 1 304 16
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 1 304 29
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 304 23
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 304 34
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 305 1
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
	.loc 1 308 1
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
	.loc 1 309 24
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 311 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 312 14
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 313 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 1 313 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 1 313 27
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 313 21
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 1 313 15
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
	.loc 1 314 5
	addi	a4,s0,-536
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 315 1
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
	.loc 1 318 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 319 30
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 319 42
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 319 14
	srliw	a5,a5,12
	sw	a5,-24(s0)
	.loc 1 320 29
	lla	a5,sb
	lw	a5,24(a5)
	.loc 1 320 14
	lw	a4,-24(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
.LBB4:
	.loc 1 321 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
	.loc 1 321 5
	j	.L49
.L52:
	.loc 1 322 14
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 322 12 discriminator 1
	bne	a5,zero,.L50
.LBB5:
	.loc 1 323 13
	lw	a5,-20(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 326 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 327 13
	addi	a4,s0,-544
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 328 20
	lw	a5,-20(s0)
	j	.L51
.L50:
.LBE5:
	.loc 1 321 48 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L49:
	.loc 1 321 40 discriminator 1
	lla	a5,sb
	lw	a5,0(a5)
	.loc 1 321 36 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L52
.LBE4:
	.loc 1 331 12
	li	a5,0
.L51:
	.loc 1 332 1
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
	.loc 1 334 64
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
	.loc 1 335 8
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L54
	.loc 1 337 25
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L55
.L54:
	.loc 1 338 15
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L56
.LBB6:
	.loc 1 340 18
	ld	a5,-88(s0)
	lw	a5,60(a5)
	sw	a5,-60(s0)
	.loc 1 341 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L57
	.loc 1 341 39 discriminator 1
	li	a5,0
	.loc 1 341 39 is_stmt 0
	j	.L55
.L57:
	.loc 1 342 9 is_stmt 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 343 19
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 1 344 28
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 344 23
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L55
.L56:
.LBE6:
.LBB7:
	.loc 1 347 13
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 1 348 18
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sw	a5,-20(s0)
	.loc 1 349 18
	lw	a5,-92(s0)
	andi	a5,a5,127
	sw	a5,-24(s0)
	.loc 1 351 18
	ld	a5,-88(s0)
	lw	a5,64(a5)
	sw	a5,-28(s0)
	.loc 1 352 12
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L58
	.loc 1 352 40 discriminator 1
	li	a5,0
	.loc 1 352 40 is_stmt 0
	j	.L55
.L58:
	.loc 1 354 9 is_stmt 1
	lw	a5,-28(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 355 19
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 356 43
	lwu	a5,-20(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 356 18
	lw	a5,0(a5)
	sw	a5,-44(s0)
	.loc 1 357 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L59
	.loc 1 357 36 discriminator 1
	li	a5,0
	.loc 1 357 36 is_stmt 0
	j	.L55
.L59:
	.loc 1 360 9 is_stmt 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 361 19
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 362 30
	lwu	a5,-24(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L55:
.LBE7:
	.loc 1 364 1
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
	.loc 1 367 1
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
	.loc 1 368 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L61
	.loc 1 369 22
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	.loc 1 369 12
	bne	a5,zero,.L62
.LBB8:
	.loc 1 370 26
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-100(s0)
	.loc 1 371 16
	lw	a5,-100(s0)
	sext.w	a5,a5
	bne	a5,zero,.L63
	.loc 1 371 28 discriminator 1
	li	a5,0
	.loc 1 371 28 is_stmt 0
	j	.L77
.L63:
	.loc 1 372 28 is_stmt 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a4,-100(s0)
	sw	a4,12(a5)
	.loc 1 373 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L62:
.LBE8:
	.loc 1 375 25
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,12(a5)
	j	.L77
.L61:
	.loc 1 378 8
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L65
.LBB9:
	.loc 1 379 18
	ld	a5,-1664(s0)
	lw	a5,60(a5)
	sw	a5,-20(s0)
	.loc 1 380 12
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L66
.LBB10:
	.loc 1 381 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-80(s0)
	.loc 1 382 16
	lw	a5,-80(s0)
	sext.w	a5,a5
	bne	a5,zero,.L67
	.loc 1 382 29 discriminator 1
	li	a5,0
	.loc 1 382 29 is_stmt 0
	j	.L77
.L67:
	.loc 1 384 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-80(s0)
	sw	a4,60(a5)
	.loc 1 385 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 386 26
	lw	a5,-80(s0)
	sw	a5,-20(s0)
.L66:
.LBE10:
	.loc 1 389 9
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 390 19
	addi	a5,s0,-1640
	sd	a5,-88(s0)
	.loc 1 391 18
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sw	a5,-92(s0)
	.loc 1 392 20
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 392 12
	bne	a5,zero,.L69
.LBB11:
	.loc 1 393 27
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-96(s0)
	.loc 1 394 16
	lw	a5,-96(s0)
	sext.w	a5,a5
	bne	a5,zero,.L70
	.loc 1 394 29 discriminator 1
	li	a5,0
	.loc 1 394 29 is_stmt 0
	j	.L77
.L70:
	.loc 1 395 20 is_stmt 1
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	.loc 1 395 24
	lw	a4,-96(s0)
	sw	a4,0(a5)
	.loc 1 396 13
	addi	a4,s0,-1640
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L69:
.LBE11:
	.loc 1 398 23
	lwu	a5,-92(s0)
	slli	a5,a5,2
	ld	a4,-88(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L77
.L65:
.LBE9:
	.loc 1 402 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sw	a5,-32(s0)
	.loc 1 403 14
	lw	a5,-32(s0)
	srliw	a5,a5,7
	sw	a5,-36(s0)
	.loc 1 404 14
	lw	a5,-32(s0)
	andi	a5,a5,127
	sw	a5,-40(s0)
	.loc 1 406 14
	ld	a5,-1664(s0)
	lw	a5,64(a5)
	sw	a5,-24(s0)
	.loc 1 407 8
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L71
.LBB12:
	.loc 1 408 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 409 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L72
	.loc 1 409 25 discriminator 1
	li	a5,0
	.loc 1 409 25 is_stmt 0
	j	.L77
.L72:
	.loc 1 410 32 is_stmt 1
	ld	a5,-1664(s0)
	lw	a4,-44(s0)
	sw	a4,64(a5)
	.loc 1 411 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 412 23
	lw	a5,-44(s0)
	sw	a5,-24(s0)
.L71:
.LBE12:
	.loc 1 416 5
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 417 15
	addi	a5,s0,-616
	sd	a5,-56(s0)
	.loc 1 418 39
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 418 14
	lw	a5,0(a5)
	sw	a5,-28(s0)
	.loc 1 419 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L73
.LBB13:
	.loc 1 420 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 421 12
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L74
	.loc 1 421 25 discriminator 1
	li	a5,0
	.loc 1 421 25 is_stmt 0
	j	.L77
.L74:
	.loc 1 422 22 is_stmt 1
	lwu	a5,-36(s0)
	slli	a5,a5,2
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 422 29
	lw	a4,-60(s0)
	sw	a4,0(a5)
	.loc 1 423 9
	addi	a4,s0,-616
	lw	a5,-24(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 424 19
	lw	a5,-60(s0)
	sw	a5,-28(s0)
.L73:
.LBE13:
	.loc 1 428 5
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 429 15
	addi	a5,s0,-1128
	sd	a5,-72(s0)
	.loc 1 430 23
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 430 8
	bne	a5,zero,.L75
.LBB14:
	.loc 1 431 23
	call	alloc_data_block
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 432 12
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L76
	.loc 1 432 25 discriminator 1
	li	a5,0
	.loc 1 432 25 is_stmt 0
	j	.L77
.L76:
	.loc 1 433 23 is_stmt 1
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	.loc 1 433 30
	lw	a4,-76(s0)
	sw	a4,0(a5)
	.loc 1 434 9
	addi	a4,s0,-1128
	lw	a5,-28(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L75:
.LBE14:
	.loc 1 436 26
	lwu	a5,-40(s0)
	slli	a5,a5,2
	ld	a4,-72(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
.L77:
	.loc 1 437 1
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
	.loc 1 439 81
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
	.loc 1 440 14
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 1 441 14
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 1 442 14
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 1 444 11
	j	.L79
.L83:
.LBB15:
	.loc 1 445 18
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-40(s0)
	.loc 1 446 18
	lw	a5,-24(s0)
	andi	a5,a5,511
	sw	a5,-44(s0)
	.loc 1 447 18
	li	a5,512
	lw	a4,-44(s0)
	subw	a5,a5,a4
	sw	a5,-36(s0)
	.loc 1 448 12
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-20(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L80
	.loc 1 448 37 discriminator 1
	lw	a5,-20(s0)
	sw	a5,-36(s0)
.L80:
	.loc 1 450 29
	lw	a5,-40(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	sw	a5,-48(s0)
	.loc 1 451 12
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L81
	.loc 1 452 13
	lw	a5,-36(s0)
	mv	a2,a5
	li	a1,0
	ld	a0,-32(s0)
	call	memset
	j	.L82
.L81:
	.loc 1 454 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 455 13
	lwu	a4,-44(s0)
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-36(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-32(s0)
	call	memcpy
.L82:
	.loc 1 457 14
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	subw	a5,a4,a5
	sw	a5,-20(s0)
	.loc 1 458 14
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	addw	a5,a4,a5
	sw	a5,-24(s0)
	.loc 1 459 14
	lwu	a5,-36(s0)
	ld	a4,-32(s0)
	add	a5,a4,a5
	sd	a5,-32(s0)
.L79:
.LBE15:
	.loc 1 444 17
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L83
	.loc 1 461 1
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
	.loc 1 463 62
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
	.loc 1 464 14
	sw	zero,-20(s0)
	.loc 1 467 11
	j	.L85
.L91:
.LBB16:
	.loc 1 468 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 469 24
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 1 470 13
	li	a5,32
	sw	a5,-36(s0)
.LBB17:
	.loc 1 471 18
	sw	zero,-24(s0)
	.loc 1 471 9
	j	.L86
.L90:
	.loc 1 472 19
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 472 22
	lhu	a5,0(a5)
	.loc 1 472 16
	beq	a5,zero,.L93
	.loc 1 473 31
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 473 34
	addi	a4,a5,2
	.loc 1 473 13
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 1 474 29
	sb	zero,-42(s0)
	.loc 1 475 17
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 475 16 discriminator 1
	bne	a5,zero,.L88
	.loc 1 476 26
	lw	a5,-24(s0)
	slli	a5,a5,4
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 476 29
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L92
.L93:
	.loc 1 472 34
	nop
.L88:
	.loc 1 471 39 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L86:
	.loc 1 471 27 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L90
.LBE17:
	.loc 1 479 13
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sw	a5,-20(s0)
.L85:
.LBE16:
	.loc 1 467 24
	ld	a5,-72(s0)
	lw	a5,8(a5)
	.loc 1 467 16
	lw	a4,-20(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L91
	.loc 1 481 12
	li	a5,0
.L92:
	.loc 1 482 1
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
	.loc 1 484 40
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
	.loc 1 484 40
	mv	a5,sp
	mv	s1,a5
	.loc 1 485 13
	ld	a5,-216(s0)
	lbu	a5,0(a5)
	.loc 1 485 8
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L95
	.loc 1 485 32 discriminator 1
	li	a5,0
	.loc 1 485 32 is_stmt 0
	j	.L96
.L95:
	.loc 1 486 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-216(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 486 8 discriminator 1
	bne	a5,zero,.L97
	.loc 1 487 16
	li	a5,1
	j	.L96
.L97:
	.loc 1 491 5
	addi	a5,s0,-200
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 492 12
	lhu	a5,-200(s0)
	.loc 1 492 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L98
	.loc 1 492 35 discriminator 1
	li	a5,0
	.loc 1 492 35 is_stmt 0
	j	.L96
.L98:
	.loc 1 494 15 is_stmt 1
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 494 27 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 494 10 discriminator 1
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
	.loc 1 495 25
	ld	a0,-216(s0)
	call	strlen
	mv	a5,a0
	.loc 1 495 5 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a2,a5
	ld	a1,-216(s0)
	ld	a0,-128(s0)
	call	strncpy
	.loc 1 496 19
	lla	a1,.LC5
	ld	a0,-128(s0)
	call	strtok
	sd	a0,-104(s0)
	.loc 1 497 14
	li	a5,1
	sw	a5,-108(s0)
	.loc 1 499 11
	j	.L99
.L102:
.LBB18:
	.loc 1 500 16
	lhu	a5,-200(s0)
	.loc 1 500 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L100
	.loc 1 500 39 discriminator 1
	li	a5,0
	.loc 1 500 39 is_stmt 0
	j	.L96
.L100:
	.loc 1 501 30 is_stmt 1
	addi	a5,s0,-200
	ld	a1,-104(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-132(s0)
	.loc 1 502 12
	lw	a5,-132(s0)
	sext.w	a5,a5
	bne	a5,zero,.L101
	.loc 1 502 36 discriminator 1
	li	a5,0
	.loc 1 502 36 is_stmt 0
	j	.L96
.L101:
	.loc 1 503 9 is_stmt 1
	addi	a4,s0,-200
	lw	a5,-132(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 504 22
	lw	a5,-132(s0)
	sw	a5,-108(s0)
	.loc 1 505 17
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-104(s0)
.L99:
.LBE18:
	.loc 1 499 18
	ld	a5,-104(s0)
	bne	a5,zero,.L102
	.loc 1 507 12
	lw	a5,-108(s0)
.L96:
	mv	sp,s1
	.loc 1 508 1
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
	.loc 1 510 32
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
	.loc 1 512 5
	addi	a4,s0,-88
	lw	a5,-100(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 513 5
	lw	a5,-100(s0)
	mv	a1,a5
	lla	a0,.LC6
	call	printf
	.loc 1 514 32
	lhu	a5,-88(s0)
	.loc 1 514 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC7
	call	printf
	.loc 1 515 5
	lw	a5,-80(s0)
	mv	a1,a5
	lla	a0,.LC8
	call	printf
	.loc 1 516 5
	lla	a0,.LC9
	call	printf
.LBB19:
	.loc 1 517 14
	sw	zero,-20(s0)
	.loc 1 517 5
	j	.L105
.L107:
	.loc 1 518 21
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 518 12
	beq	a5,zero,.L106
	.loc 1 518 31 discriminator 1
	lw	a4,-20(s0)
	addi	a5,s0,-76
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC10
	call	printf
.L106:
	.loc 1 517 35 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L105:
	.loc 1 517 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,11
	ble	a4,a5,.L107
.LBE19:
	.loc 1 520 17
	lw	a5,-28(s0)
	.loc 1 520 8
	beq	a5,zero,.L108
	.loc 1 521 9
	lw	a5,-28(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
.L108:
	.loc 1 523 17
	lw	a5,-24(s0)
	.loc 1 523 8
	beq	a5,zero,.L109
	.loc 1 524 9
	lw	a5,-24(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.L109:
	.loc 1 526 5
	lla	a0,.LC13
	call	printf
	.loc 1 527 1
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
	.loc 1 534 38
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
	.loc 1 535 12
	li	a5,128
	.loc 1 536 1
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
	.loc 1 537 55
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
	.loc 1 538 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
.LBB20:
	.loc 1 540 14
	sw	zero,-20(s0)
	.loc 1 540 5
	j	.L113
.L116:
	.loc 1 540 57 discriminator 5
	ld	a4,-40(s0)
	lw	a5,-20(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 540 38 discriminator 5
	ld	a4,-48(s0)
	beq	a4,a5,.L121
	.loc 1 540 31 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L113:
	.loc 1 540 23 discriminator 4
	lw	a5,-20(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L116
.LBE20:
.LBB21:
	.loc 1 542 14
	sw	zero,-24(s0)
	.loc 1 542 5
	j	.L117
.L120:
	.loc 1 543 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 543 12
	bne	a5,zero,.L118
	.loc 1 544 35
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,-48(s0)
	sd	a4,8(a5)
	.loc 1 545 18
	ld	a5,-40(s0)
	lw	a5,1144(a5)
	.loc 1 545 16
	lw	a4,-28(s0)
	sext.w	a4,a4
	ble	a4,a5,.L122
	.loc 1 545 46 discriminator 1
	ld	a5,-40(s0)
	lw	a5,1144(a5)
	.loc 1 545 65 discriminator 1
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,1144(a5)
	.loc 1 546 13
	j	.L122
.L118:
	.loc 1 542 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L117:
	.loc 1 542 23 discriminator 1
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
	.loc 1 540 67
	nop
	j	.L112
.L122:
.LBE22:
.LBB23:
	.loc 1 546 13
	nop
.L112:
.LBE23:
	.loc 1 550 1
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
	.loc 1 551 58
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
	.loc 1 552 15
	ld	a0,-40(s0)
	call	owner_cap
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 552 29 discriminator 1
	sw	zero,-20(s0)
.LBB24:
	.loc 1 553 14
	sw	zero,-24(s0)
	.loc 1 553 5
	j	.L124
.L127:
	.loc 1 554 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 554 12
	ld	a4,-48(s0)
	bne	a4,a5,.L125
	.loc 1 554 63 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	sd	zero,8(a5)
.L125:
	.loc 1 555 31
	ld	a4,-40(s0)
	lw	a5,-24(s0)
	addi	a5,a5,14
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,8(a5)
	.loc 1 555 12
	beq	a5,zero,.L126
	.loc 1 555 37 discriminator 1
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L126:
	.loc 1 553 31 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L124:
	.loc 1 553 23 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L127
.LBE24:
	.loc 1 557 26
	ld	a5,-40(s0)
	lw	a4,-20(s0)
	sw	a4,1144(a5)
	.loc 1 558 1
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
	.loc 1 572 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 573 5
	li	a5,12288
	addi	a2,a5,768
	li	a1,0
	lla	a0,gPipes
	call	memset
	.loc 1 574 5
	li	a5,20480
	addi	a2,a5,-2048
	li	a1,0
	lla	a0,gFiles
	call	memset
.LBB25:
	.loc 1 576 13
	sw	zero,-20(s0)
	.loc 1 576 5
	j	.L129
.L130:
.LBB26:
	.loc 1 577 23
	lw	a4,-20(s0)
	li	a5,816
	mul	a4,a4,a5
	lla	a5,gPipes
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 579 22
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-40(s0)
	sd	a4,808(a5)
	.loc 1 580 20
	lla	a5,gFreePipes
	ld	a4,-40(s0)
	sd	a4,0(a5)
.LBE26:
	.loc 1 576 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L129:
	.loc 1 576 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L130
.LBE25:
.LBB27:
	.loc 1 583 13
	sw	zero,-24(s0)
	.loc 1 583 5
	j	.L131
.L132:
.LBB28:
	.loc 1 584 22
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,3
	add	a5,a5,a4
	slli	a5,a5,7
	lla	a4,gFiles
	add	a5,a5,a4
	sd	a5,-32(s0)
	.loc 1 586 22
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-32(s0)
	sd	a4,112(a5)
	.loc 1 587 20
	lla	a5,gFreeFiles
	ld	a4,-32(s0)
	sd	a4,0(a5)
.LBE28:
	.loc 1 583 37 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L131:
	.loc 1 583 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L132
.LBE27:
	.loc 1 589 1
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
	.loc 1 592 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 593 19
	lla	a5,gFreePipes
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 595 28
	lla	a5,gFreePipes
	ld	a5,0(a5)
	ld	a4,808(a5)
	.loc 1 595 16
	lla	a5,gFreePipes
	sd	a4,0(a5)
	.loc 1 597 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 599 12
	ld	a5,-24(s0)
	.loc 1 600 1
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
	.loc 1 603 1
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
	.loc 1 604 18
	lla	a5,gFreePipes
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,808(a5)
	.loc 1 605 16
	lla	a5,gFreePipes
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 606 1
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
	.loc 1 608 27
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 609 9
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	.loc 1 609 8
	bne	a5,zero,.L137
	.loc 1 609 29 discriminator 1
	li	a5,0
	.loc 1 609 29 is_stmt 0
	j	.L138
.L137:
	.loc 1 610 18 is_stmt 1
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	sd	a5,-24(s0)
	.loc 1 611 28
	lla	a5,gFreeFiles
	ld	a5,0(a5)
	ld	a4,112(a5)
	.loc 1 611 16
	lla	a5,gFreeFiles
	sd	a4,0(a5)
	.loc 1 612 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 613 12
	ld	a5,-24(s0)
.L138:
	.loc 1 614 1
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
	.loc 1 618 1
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
	.loc 1 619 18
	lla	a5,gFreeFiles
	ld	a4,0(a5)
	ld	a5,-24(s0)
	sd	a4,112(a5)
	.loc 1 620 16
	lla	a5,gFreeFiles
	ld	a4,-24(s0)
	sd	a4,0(a5)
	.loc 1 621 1
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
	.loc 1 627 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 628 23
	call	alloc_pipe
	sd	a0,-24(s0)
	.loc 1 630 5
	li	a2,816
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 631 8
	ld	a5,-24(s0)
	bne	a5,zero,.L141
	.loc 1 632 16
	li	a5,0
	j	.L142
.L141:
	.loc 1 633 18
	ld	a5,-24(s0)
	sw	zero,512(a5)
	.loc 1 634 18
	ld	a5,-24(s0)
	sw	zero,516(a5)
	.loc 1 635 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,520(a5)
	.loc 1 636 19
	ld	a5,-24(s0)
	li	a4,1
	sw	a4,524(a5)
	.loc 1 637 13
	ld	a5,-24(s0)
	sw	zero,536(a5)
	.loc 1 638 24
	ld	a5,-24(s0)
	sw	zero,800(a5)
	.loc 1 640 11
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 641 11
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 643 12
	ld	a5,-24(s0)
.L142:
	.loc 1 644 1
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
	.loc 1 649 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 650 27
	call	alloc_file
	sd	a0,-24(s0)
	.loc 1 652 5
	li	a2,1152
	li	a1,0
	ld	a0,-24(s0)
	call	memset
	.loc 1 654 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-24(s0)
	call	owner_add
	.loc 1 656 12
	ld	a5,-24(s0)
	.loc 1 657 1
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
	.loc 1 660 1
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
	.loc 1 661 5
	li	a2,128
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 663 21
	call	new_file_table
	mv	a4,a0
	.loc 1 663 19 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 665 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 665 25
	sw	zero,0(a5)
	.loc 1 666 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 666 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 668 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 668 21
	call	new_file_table
	mv	a5,a0
	.loc 1 668 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 670 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 670 25
	li	a4,1
	sw	a4,0(a5)
	.loc 1 671 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 671 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 673 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 673 21
	call	new_file_table
	mv	a5,a0
	.loc 1 673 19 discriminator 1
	sd	a5,0(s1)
	.loc 1 675 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 675 25
	li	a4,2
	sw	a4,0(a5)
	.loc 1 676 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 676 25
	li	a4,1
	sw	a4,80(a5)
	.loc 1 677 1
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
	.loc 1 680 1
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
	.loc 1 681 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 683 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 683 8
	beq	a5,zero,.L147
	.loc 1 683 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 683 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 683 24 discriminator 1
	beq	a5,zero,.L147
	.loc 1 684 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 684 26
	ld	a5,88(a5)
	.loc 1 684 11
	beq	a5,zero,.L147
	.loc 1 685 20
	li	a5,1
	j	.L148
.L147:
	.loc 1 689 12
	li	a5,0
.L148:
	.loc 1 690 1
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
	.loc 1 693 1
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
	.loc 1 694 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 695 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 695 8
	beq	a5,zero,.L150
	.loc 1 695 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 695 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 695 24 discriminator 1
	beq	a5,zero,.L150
	.loc 1 696 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 696 26
	lw	a5,0(a5)
	.loc 1 696 11
	bne	a5,zero,.L150
	.loc 1 697 20
	li	a5,1
	j	.L151
.L150:
	.loc 1 701 12
	li	a5,0
.L151:
	.loc 1 702 1
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
	.loc 1 705 1
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
	.loc 1 706 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 708 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 708 8
	beq	a5,zero,.L153
	.loc 1 708 37 discriminator 1
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 708 41 discriminator 1
	lw	a5,80(a5)
	.loc 1 708 24 discriminator 1
	beq	a5,zero,.L153
	.loc 1 709 22
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 709 26
	lw	a4,0(a5)
	.loc 1 709 11
	li	a5,1
	bne	a4,a5,.L153
	.loc 1 710 20
	li	a5,1
	j	.L154
.L153:
	.loc 1 714 12
	li	a5,0
.L154:
	.loc 1 715 1
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
	.loc 1 717 36
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
	.loc 1 718 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 720 25
	call	pipealloc
	sd	a0,-56(s0)
.LBB29:
	.loc 1 722 14
	li	a5,3
	sw	a5,-36(s0)
	.loc 1 722 5
	j	.L156
.L161:
	.loc 1 723 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 723 12
	bne	a5,zero,.L157
	.loc 1 724 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 724 29
	call	new_file_table
	mv	a5,a0
	.loc 1 724 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 726 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 726 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 727 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 727 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 728 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 728 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 729 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 729 34
	sw	zero,76(a5)
	.loc 1 730 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 730 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 731 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 731 38
	li	a4,1
	sw	a4,100(a5)
	.loc 1 732 23
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 732 41
	sw	zero,104(a5)
	.loc 1 733 18
	ld	a5,-72(s0)
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 1 735 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 735 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 736 66
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 736 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 736 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 736 66
	ld	a4,0(a4)
	.loc 1 736 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 737 16
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 737 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,528(a5)
	.loc 1 739 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 739 15
	li	a5,31
	ble	a4,a5,.L168
	.loc 1 740 17
	lla	a0,.LC14
	call	puts
.L159:
	.loc 1 741 22
	j	.L159
.L157:
	.loc 1 722 42 discriminator 2
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sw	a5,-36(s0)
.L156:
	.loc 1 722 23 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L161
	j	.L160
.L168:
	.loc 1 745 13
	nop
.L160:
.LBE29:
.LBB30:
	.loc 1 748 14
	li	a5,3
	sw	a5,-40(s0)
	.loc 1 748 5
	j	.L162
.L167:
	.loc 1 749 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 749 12
	bne	a5,zero,.L163
	.loc 1 750 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	s1,a4,a5
	.loc 1 750 29
	call	new_file_table
	mv	a5,a0
	.loc 1 750 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 752 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 752 33
	li	a4,4
	sw	a4,0(a5)
	.loc 1 753 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 753 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 754 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 754 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 756 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 756 34
	sw	zero,76(a5)
	.loc 1 757 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 757 33
	ld	a4,-56(s0)
	sd	a4,88(a5)
	.loc 1 758 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 758 39
	li	a4,1
	sw	a4,104(a5)
	.loc 1 759 23
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 759 38
	sw	zero,100(a5)
	.loc 1 760 18
	ld	a5,-80(s0)
	lw	a4,-40(s0)
	sw	a4,0(a5)
	.loc 1 762 16
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 762 22
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,536(a5)
	.loc 1 763 66
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 763 33
	ld	a5,-56(s0)
	lw	a5,800(a5)
	.loc 1 763 50
	addiw	a3,a5,1
	sext.w	a2,a3
	ld	a3,-56(s0)
	sw	a2,800(a3)
	.loc 1 763 66
	ld	a4,0(a4)
	.loc 1 763 54
	ld	a3,-56(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 764 16
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 764 25
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,532(a5)
	.loc 1 766 19
	ld	a5,-56(s0)
	lw	a4,800(a5)
	.loc 1 766 15
	li	a5,31
	ble	a4,a5,.L169
	.loc 1 767 17
	lla	a0,.LC14
	call	puts
.L165:
	.loc 1 768 22
	j	.L165
.L163:
	.loc 1 748 42 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L162:
	.loc 1 748 23 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L167
.LBE30:
	.loc 1 775 1
	j	.L170
.L169:
.LBB31:
	.loc 1 772 13
	nop
.L170:
.LBE31:
	.loc 1 775 1
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
	.loc 1 785 1
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
	.loc 1 786 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 788 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 788 8
	bne	a5,zero,.L172
	.loc 1 789 9
	lla	a0,.LC15
	call	panic
.L172:
	.loc 1 792 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L173
	.loc 1 792 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L174
.L173:
	.loc 1 793 9
	lla	a0,.LC15
	call	panic
.L174:
	.loc 1 795 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 795 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 797 7
	ld	a5,-32(s0)
	bne	a5,zero,.L176
	.loc 1 798 9
	lla	a0,.LC15
	call	panic
	.loc 1 801 11
	j	.L176
.L178:
	.loc 1 802 8
	call	yield
.L176:
	.loc 1 801 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 801 25
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 801 34
	bne	a4,a5,.L177
	.loc 1 801 38 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 801 34 discriminator 1
	bne	a5,zero,.L178
.L177:
	.loc 1 805 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 805 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 805 8
	bne	a4,a5,.L179
	.loc 1 805 36 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 805 31 discriminator 1
	bne	a5,zero,.L179
	.loc 1 806 16
	li	a5,0
	j	.L180
.L179:
	.loc 1 810 18
	sw	zero,-36(s0)
.LBB32:
	.loc 1 811 23
	sw	zero,-40(s0)
	.loc 1 811 5
	j	.L181
.L184:
	.loc 1 813 12
	call	yield
.L182:
	.loc 1 812 17
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 812 29
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 812 38
	bne	a4,a5,.L183
	.loc 1 812 42 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 812 38 discriminator 1
	bne	a5,zero,.L184
.L183:
	.loc 1 817 14
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 817 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 817 12
	bne	a4,a5,.L185
	.loc 1 817 40 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 1 817 35 discriminator 1
	beq	a5,zero,.L188
.L185:
	.loc 1 821 28
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 821 36
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 1 821 13
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-64(s0)
	add	a5,a5,a3
	.loc 1 821 26
	ld	a3,-32(s0)
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 821 17
	sb	a4,0(a5)
	.loc 1 822 10
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 822 17
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,512(a5)
	.loc 1 825 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 811 62 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L181:
	.loc 1 811 32 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 1 811 36 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L186
	.loc 1 811 40 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 1 811 51 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 811 36 discriminator 3
	bltu	a4,a5,.L182
	j	.L186
.L188:
	.loc 1 818 13
	nop
.L186:
.LBE32:
	.loc 1 829 12
	lw	a5,-36(s0)
	sext.w	a5,a5
.L180:
	.loc 1 830 1
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
	.loc 1 835 1
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
	.loc 1 836 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 838 19
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 838 8
	bne	a5,zero,.L190
	.loc 1 839 9
	lla	a0,.LC16
	call	panic
.L190:
	.loc 1 842 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L191
	.loc 1 842 15 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L192
.L191:
	.loc 1 843 9
	lla	a0,.LC16
	call	panic
.L192:
	.loc 1 845 33
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 845 19
	ld	a5,88(a5)
	sd	a5,-32(s0)
	.loc 1 847 7
	ld	a5,-32(s0)
	bne	a5,zero,.L193
	.loc 1 848 9
	lla	a0,.LC16
	call	panic
.L193:
.LBB33:
	.loc 1 851 23
	sw	zero,-36(s0)
	.loc 1 851 5
	j	.L194
.L197:
	.loc 1 854 11
	call	yield
.L195:
	.loc 1 853 15
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 1 853 27
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 1 853 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 853 48
	li	a5,512
	bne	a4,a5,.L196
	.loc 1 853 52 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 853 48 discriminator 1
	bne	a5,zero,.L197
.L196:
	.loc 1 857 13
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 1 857 10
	bne	a5,zero,.L198
	.loc 1 859 21
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 859 30
	ble	a5,zero,.L199
	.loc 1 859 30 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 1 859 30
	j	.L201
.L199:
	.loc 1 859 30 discriminator 2
	li	a5,-1
	.loc 1 859 30
	j	.L201
.L198:
	.loc 1 861 44 is_stmt 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 861 16
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 1 861 25
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 1 861 44
	lbu	a4,0(a5)
	.loc 1 861 38
	ld	a3,-32(s0)
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 862 8
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 1 862 16
	addiw	a5,a5,1
	sext.w	a4,a5
	ld	a5,-32(s0)
	sw	a4,516(a5)
	.loc 1 851 38 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L194:
	.loc 1 851 32 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L195
.LBE33:
	.loc 1 869 12
	lw	a5,-56(s0)
.L201:
	.loc 1 870 1
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
	.loc 1 882 1
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
	.loc 1 882 1
	mv	a5,sp
	mv	s1,a5
	.loc 1 883 8
	ld	a5,-248(s0)
	beq	a5,zero,.L204
	.loc 1 883 22 discriminator 2
	ld	a5,-248(s0)
	lbu	a5,0(a5)
	.loc 1 883 15 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L205
.L204:
	.loc 1 883 41 discriminator 3
	li	a5,0
	.loc 1 883 41 is_stmt 0
	j	.L206
.L205:
	.loc 1 884 9 is_stmt 1
	lla	a1,.LC5
	ld	a0,-248(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 884 8 discriminator 1
	bne	a5,zero,.L207
	.loc 1 884 40 discriminator 1
	li	a5,0
	.loc 1 884 40 is_stmt 0
	j	.L206
.L207:
	.loc 1 887 15 is_stmt 1
	ld	a0,-248(s0)
	call	strlen
	mv	a5,a0
	.loc 1 887 28 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	mv	a4,a5
	.loc 1 887 10 discriminator 1
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
	.loc 1 888 5
	mv	a2,a5
	ld	a1,-248(s0)
	ld	a0,-144(s0)
	call	strncpy
	.loc 1 891 11
	ld	a5,-144(s0)
	sd	a5,-152(s0)
	.loc 1 892 11
	sd	zero,-104(s0)
	.loc 1 893 17
	lla	a1,.LC5
	ld	a0,-152(s0)
	call	strtok
	sd	a0,-112(s0)
	.loc 1 894 14
	li	a5,1
	sw	a5,-116(s0)
	.loc 1 896 5
	addi	a4,s0,-232
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 898 11
	j	.L208
.L213:
.LBB34:
	.loc 1 899 25
	lla	a1,.LC5
	li	a0,0
	call	strtok
	sd	a0,-160(s0)
	.loc 1 900 12
	ld	a5,-160(s0)
	bne	a5,zero,.L209
	.loc 1 902 18
	ld	a5,-112(s0)
	sd	a5,-104(s0)
	.loc 1 903 13
	j	.L210
.L209:
	.loc 1 906 15
	lhu	a5,-232(s0)
	.loc 1 906 12
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L211
	.loc 1 906 38 discriminator 1
	li	a5,0
	.loc 1 906 38 is_stmt 0
	j	.L206
.L211:
	.loc 1 907 30 is_stmt 1
	addi	a5,s0,-232
	ld	a1,-112(s0)
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 908 12
	lw	a5,-164(s0)
	sext.w	a5,a5
	bne	a5,zero,.L212
	.loc 1 908 36 discriminator 1
	li	a5,0
	.loc 1 908 36 is_stmt 0
	j	.L206
.L212:
	.loc 1 909 9 is_stmt 1
	addi	a4,s0,-232
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 910 13
	lw	a5,-164(s0)
	sw	a5,-116(s0)
	.loc 1 911 13
	ld	a5,-160(s0)
	sd	a5,-112(s0)
.L208:
.LBE34:
	.loc 1 898 12
	ld	a5,-112(s0)
	bne	a5,zero,.L213
.L210:
	.loc 1 914 8
	ld	a5,-104(s0)
	bne	a5,zero,.L214
	.loc 1 914 23 discriminator 1
	li	a5,0
	.loc 1 914 23 is_stmt 0
	j	.L206
.L214:
	.loc 1 915 18 is_stmt 1
	ld	a5,-256(s0)
	lw	a4,-116(s0)
	sw	a4,0(a5)
	.loc 1 917 13
	ld	a0,-104(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-120(s0)
	.loc 1 918 8
	lw	a5,-120(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L215
	.loc 1 918 23 discriminator 1
	li	a5,14
	sw	a5,-120(s0)
.L215:
.LBB35:
	.loc 1 919 14
	sw	zero,-124(s0)
	.loc 1 919 5
	j	.L216
.L217:
	.loc 1 919 46 discriminator 3
	lw	a5,-124(s0)
	ld	a4,-264(s0)
	add	a5,a4,a5
	.loc 1 919 50 discriminator 3
	sb	zero,0(a5)
	.loc 1 919 34 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sw	a5,-124(s0)
.L216:
	.loc 1 919 23 discriminator 1
	lw	a5,-124(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L217
.LBE35:
	.loc 1 920 5
	lw	a5,-120(s0)
	mv	a2,a5
	ld	a1,-104(s0)
	ld	a0,-264(s0)
	call	strncpy
	.loc 1 921 12
	li	a5,1
.L206:
	mv	sp,s1
	.loc 1 922 1
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
	.loc 1 927 1
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
	.loc 1 929 19
	li	a5,1
	sw	a5,-20(s0)
	.loc 1 929 5
	j	.L220
.L223:
	.loc 1 930 9
	addi	a4,s0,-88
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 931 15
	lhu	a5,-88(s0)
	.loc 1 931 12
	bne	a5,zero,.L221
.LBB37:
	.loc 1 934 13
	addi	a5,s0,-160
	li	a2,68
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 935 23
	li	a5,2
	sh	a5,-160(s0)
	.loc 1 936 24
	li	a5,1
	sh	a5,-154(s0)
	.loc 1 937 23
	sw	zero,-152(s0)
	.loc 1 938 13
	addi	a4,s0,-160
	lw	a5,-20(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 939 20
	lw	a5,-20(s0)
	j	.L224
.L221:
.LBE37:
	.loc 1 929 53 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L220:
	.loc 1 929 39 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 929 34 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L223
.LBE36:
	.loc 1 942 12
	li	a5,0
.L224:
	.loc 1 943 1
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
	.loc 1 948 1
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
	.loc 1 949 8
	ld	a5,-688(s0)
	beq	a5,zero,.L226
	.loc 1 949 22 discriminator 2
	ld	a5,-688(s0)
	lbu	a5,0(a5)
	.loc 1 949 15 discriminator 2
	bne	a5,zero,.L227
.L226:
	.loc 1 949 42 discriminator 3
	li	a5,-1
	.loc 1 949 42 is_stmt 0
	j	.L239
.L227:
	.loc 1 952 5 is_stmt 1
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 953 12
	lhu	a5,-144(s0)
	.loc 1 953 8
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L229
	.loc 1 953 35 discriminator 1
	li	a5,-1
	.loc 1 953 35 is_stmt 0
	j	.L239
.L229:
	.loc 1 957 15 is_stmt 1
	lw	a5,-680(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 957 13
	sh	a5,-160(s0)
.LBB38:
	.loc 1 959 14
	sw	zero,-20(s0)
	.loc 1 959 5
	j	.L230
.L231:
	.loc 1 959 49 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-142(a5)
	.loc 1 959 34 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L230:
	.loc 1 959 23 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,13
	ble	a4,a5,.L231
.LBE38:
	.loc 1 960 5
	addi	a5,s0,-160
	addi	a5,a5,2
	li	a2,14
	ld	a1,-688(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 963 14
	sw	zero,-24(s0)
	.loc 1 964 11
	j	.L232
.L237:
.LBB39:
	.loc 1 965 9
	lw	a4,-24(s0)
	addi	a5,s0,-144
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 966 24
	lla	a5,block_buf
	sd	a5,-64(s0)
	.loc 1 967 13
	li	a5,32
	sw	a5,-68(s0)
.LBB40:
	.loc 1 968 18
	sw	zero,-28(s0)
	.loc 1 968 9
	j	.L233
.L236:
	.loc 1 969 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 969 24
	lhu	a5,0(a5)
	.loc 1 969 16
	bne	a5,zero,.L234
.LBB41:
	.loc 1 970 21
	lw	a5,-28(s0)
	slli	a5,a5,4
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 970 25
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
	.loc 1 972 26
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sw	a5,-72(s0)
	.loc 1 973 37
	lw	a3,-72(s0)
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-76(s0)
	.loc 1 974 20
	lw	a5,-76(s0)
	sext.w	a5,a5
	bne	a5,zero,.L235
	.loc 1 974 39 discriminator 1
	li	a5,-1
	.loc 1 974 39 is_stmt 0
	j	.L239
.L235:
	.loc 1 975 17 is_stmt 1
	lw	a5,-76(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_block
	.loc 1 976 24
	li	a5,0
	j	.L239
.L234:
.LBE41:
	.loc 1 968 39 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L233:
	.loc 1 968 27 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-68(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L236
.LBE40:
	.loc 1 979 13
	lw	a5,-24(s0)
	addiw	a5,a5,512
	sw	a5,-24(s0)
.L232:
.LBE39:
	.loc 1 964 21
	lw	a5,-136(s0)
	.loc 1 964 16
	lw	a4,-24(s0)
	sext.w	a4,a4
	bltu	a4,a5,.L237
	.loc 1 983 23
	lw	a5,-136(s0)
	.loc 1 983 14
	srliw	a5,a5,4
	sw	a5,-32(s0)
	.loc 1 984 29
	lwu	a5,-32(s0)
	slli	a5,a5,4
	.loc 1 984 54
	srli	a5,a5,9
	.loc 1 984 14
	sw	a5,-36(s0)
	.loc 1 985 29
	lw	a5,-32(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 985 14
	andi	a5,a5,496
	sw	a5,-40(s0)
	.loc 1 986 25
	lw	a3,-36(s0)
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	sw	a5,-44(s0)
	.loc 1 987 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L238
	.loc 1 987 27 discriminator 1
	li	a5,-1
	.loc 1 987 27 is_stmt 0
	j	.L239
.L238:
	.loc 1 990 5 is_stmt 1
	addi	a4,s0,-672
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 991 20
	addi	a5,s0,-672
	sd	a5,-56(s0)
	.loc 1 992 19
	lw	a5,-40(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 992 9
	slli	a5,a5,4
	ld	a4,-56(s0)
	add	a5,a4,a5
	.loc 1 992 45
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
	.loc 1 993 5
	addi	a4,s0,-672
	lw	a5,-44(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 995 8
	lw	a5,-136(s0)
	.loc 1 995 14
	addiw	a5,a5,16
	sext.w	a5,a5
	sw	a5,-136(s0)
	.loc 1 996 5
	addi	a4,s0,-144
	lw	a5,-676(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 997 12
	li	a5,0
.L239:
	.loc 1 998 1
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
	.loc 1 999 31
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
	.loc 1 1001 12
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 1002 1
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
	.loc 1 1005 53
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
	.loc 1 1006 32
	call	get_current_file_table
	sd	a0,-56(s0)
	.loc 1 1010 13
	ld	a5,-296(s0)
	lbu	a5,0(a5)
	.loc 1 1010 8
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L243
	.loc 1 1012 9
	addi	a5,s0,-192
	li	a2,127
	ld	a1,-296(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 1013 34
	sb	zero,-65(s0)
	j	.L244
.L243:
	.loc 1 1016 18
	li	a5,47
	sb	a5,-192(s0)
	.loc 1 1017 18
	sb	zero,-191(s0)
	.loc 1 1019 46
	addi	a5,s0,-192
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1019 46 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1019 9 is_stmt 1 discriminator 1
	li	a5,127
	sub	a4,a5,a4
	addi	a5,s0,-192
	mv	a2,a4
	ld	a1,-296(s0)
	mv	a0,a5
	call	strncat
.L244:
	.loc 1 1022 21
	addi	a5,s0,-192
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 1025 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L245
	.loc 1 1027 19
	lw	a5,-300(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 1027 12
	beq	a5,zero,.L246
.LBB42:
.LBB43:
	.loc 1 1031 22
	sw	zero,-40(s0)
	.loc 1 1031 13
	j	.L247
.L248:
	.loc 1 1031 49 discriminator 3
	lw	a5,-40(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-256(a5)
	.loc 1 1031 38 discriminator 3
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L247:
	.loc 1 1031 27 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,14
	ble	a4,a5,.L248
.LBE43:
	.loc 1 1032 18
	addi	a3,s0,-288
	addi	a4,s0,-268
	addi	a5,s0,-192
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 1032 16 discriminator 1
	bne	a5,zero,.L249
	.loc 1 1033 24
	li	a5,-1
	j	.L261
.L249:
	.loc 1 1035 33
	call	alloc_inode_T_FILE
	mv	a5,a0
	sw	a5,-60(s0)
	.loc 1 1036 16
	lw	a5,-60(s0)
	sext.w	a5,a5
	bne	a5,zero,.L251
	.loc 1 1036 39 discriminator 1
	li	a5,-1
	.loc 1 1036 39 is_stmt 0
	j	.L261
.L251:
	.loc 1 1037 17 is_stmt 1
	lw	a5,-268(s0)
	lw	a3,-60(s0)
	addi	a4,s0,-288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 1037 16 discriminator 1
	beq	a5,zero,.L252
	.loc 1 1037 65 discriminator 1
	li	a5,-1
	.loc 1 1037 65 is_stmt 0
	j	.L261
.L252:
	.loc 1 1038 18 is_stmt 1
	lw	a5,-60(s0)
	sw	a5,-36(s0)
	.loc 1 1039 13
	addi	a4,s0,-264
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.LBE42:
	j	.L253
.L246:
	.loc 1 1041 20
	li	a5,-1
	j	.L261
.L245:
	.loc 1 1044 9
	addi	a4,s0,-264
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L253:
	.loc 1 1047 11
	lhu	a5,-264(s0)
	.loc 1 1047 8
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L255
	.loc 1 1047 32 discriminator 1
	lhu	a5,-264(s0)
	.loc 1 1047 27 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L255
	.loc 1 1047 55 discriminator 2
	li	a5,-1
	.loc 1 1047 55 is_stmt 0
	j	.L261
.L255:
.LBB44:
	.loc 1 1049 14 is_stmt 1
	li	a5,3
	sw	a5,-44(s0)
	.loc 1 1049 5
	j	.L256
.L260:
	.loc 1 1050 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1050 12
	bne	a5,zero,.L257
	.loc 1 1051 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	s1,a4,a5
	.loc 1 1051 29
	call	new_file_table
	mv	a5,a0
	.loc 1 1051 27 discriminator 1
	sd	a5,0(s1)
	.loc 1 1053 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1053 33
	li	a4,3
	sw	a4,0(a5)
	.loc 1 1054 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1054 34
	li	a4,1
	sw	a4,80(a5)
	.loc 1 1055 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1055 34
	lw	a4,-36(s0)
	sw	a4,4(a5)
	.loc 1 1056 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1056 34
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
	.loc 1 1057 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1057 34
	sw	zero,76(a5)
	.loc 1 1058 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1058 40
	sw	zero,100(a5)
	.loc 1 1059 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1059 41
	sw	zero,104(a5)
	.loc 1 1060 23
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1060 35
	lw	a4,-300(s0)
	sw	a4,108(a5)
	.loc 1 1063 24
	lw	a5,-300(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 1063 16
	beq	a5,zero,.L258
	.loc 1 1063 48 discriminator 1
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1063 56 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1063 35 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L258
	.loc 1 1064 27
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1064 41
	sw	zero,16(a5)
	.loc 1 1065 46
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1065 35
	addi	a4,a5,8
	.loc 1 1065 17
	lw	a5,-36(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 1066 27
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1066 36
	sw	zero,76(a5)
.L258:
	.loc 1 1069 24
	lw	a5,-300(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1069 16
	beq	a5,zero,.L259
	.loc 1 1069 49 discriminator 1
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1069 57 discriminator 1
	lhu	a5,8(a5)
	.loc 1 1069 36 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L259
	.loc 1 1070 48
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 1070 27
	lw	a5,-44(s0)
	slli	a5,a5,3
	ld	a3,-56(s0)
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 1 1070 56
	lw	a4,16(a4)
	.loc 1 1070 36
	sw	a4,76(a5)
.L259:
	.loc 1 1072 20
	lw	a5,-44(s0)
	j	.L261
.L257:
	.loc 1 1049 42 discriminator 2
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L256:
	.loc 1 1049 23 discriminator 1
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L260
.LBE44:
	.loc 1 1075 12
	li	a5,-1
.L261:
	.loc 1 1076 1
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
	.loc 1 1080 50
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
	.loc 1 1081 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1083 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1083 7
	bne	a5,zero,.L263
	.loc 1 1084 16
	li	a5,-1
	j	.L264
.L263:
	.loc 1 1087 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1088 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L265
	.loc 1 1088 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L266
.L265:
	.loc 1 1089 16
	li	a5,-1
	j	.L264
.L266:
	.loc 1 1091 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1091 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1092 32
	ld	a5,-40(s0)
	lw	a4,16(a5)
	.loc 1 1092 41
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 1092 14
	subw	a5,a4,a5
	sw	a5,-44(s0)
	.loc 1 1093 8
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L267
	.loc 1 1093 32 discriminator 1
	li	a5,0
	.loc 1 1093 32 is_stmt 0
	j	.L264
.L267:
	.loc 1 1095 52 is_stmt 1
	lwu	a4,-44(s0)
	ld	a5,-72(s0)
	bleu	a5,a4,.L268
	mv	a5,a4
.L268:
	.loc 1 1095 14
	sw	a5,-48(s0)
	.loc 1 1096 5
	ld	a5,-40(s0)
	addi	a4,a5,8
	ld	a5,-40(s0)
	lw	a5,76(a5)
	lw	a3,-48(s0)
	ld	a2,-64(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 1097 6
	ld	a5,-40(s0)
	lw	a5,76(a5)
	.loc 1 1097 12
	lw	a4,-48(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,76(a5)
	.loc 1 1098 12
	lw	a5,-48(s0)
.L264:
	.loc 1 1099 1
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
	.loc 1 1103 57
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
	.loc 1 1104 32
	call	get_current_file_table
	sd	a0,-48(s0)
	.loc 1 1106 8
	lw	a5,-596(s0)
	sext.w	a5,a5
	blt	a5,zero,.L270
	.loc 1 1106 16 discriminator 2
	lw	a5,-596(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L271
.L270:
	.loc 1 1106 48 discriminator 3
	li	a5,-1
	.loc 1 1106 48 is_stmt 0
	j	.L272
.L271:
	.loc 1 1107 19 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1107 8
	bne	a5,zero,.L273
	.loc 1 1107 40 discriminator 1
	li	a5,-1
	.loc 1 1107 40 is_stmt 0
	j	.L272
.L273:
	.loc 1 1109 32 is_stmt 1
	lw	a5,-596(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1109 18
	ld	a5,0(a5)
	sd	a5,-56(s0)
	.loc 1 1110 10
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 1 1110 8
	li	a5,3
	beq	a4,a5,.L274
	.loc 1 1110 36 discriminator 1
	li	a5,-1
	.loc 1 1110 36 is_stmt 0
	j	.L272
.L274:
	.loc 1 1113 14 is_stmt 1
	ld	a5,-616(s0)
	sw	a5,-60(s0)
	.loc 1 1115 20
	ld	a5,-608(s0)
	sd	a5,-24(s0)
	.loc 1 1116 14
	lw	a5,-60(s0)
	sw	a5,-28(s0)
	.loc 1 1118 23
	ld	a5,-56(s0)
	lw	a4,108(a5)
	.loc 1 1118 32
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1118 58
	beq	a5,zero,.L275
	.loc 1 1118 58 is_stmt 0 discriminator 1
	ld	a5,-56(s0)
	lw	a5,16(a5)
	j	.L276
.L275:
	.loc 1 1118 58 discriminator 2
	ld	a5,-56(s0)
	lw	a5,76(a5)
.L276:
	.loc 1 1118 14 is_stmt 1 discriminator 4
	sw	a5,-32(s0)
	.loc 1 1119 10
	ld	a5,-56(s0)
	lw	a4,108(a5)
	.loc 1 1119 19
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1119 8
	beq	a5,zero,.L277
	.loc 1 1120 16
	ld	a5,-56(s0)
	lw	a4,-32(s0)
	sw	a4,76(a5)
.L277:
	.loc 1 1122 14
	sw	zero,-36(s0)
	.loc 1 1124 11
	j	.L278
.L282:
.LBB45:
	.loc 1 1125 18
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sw	a5,-64(s0)
	.loc 1 1126 18
	lw	a5,-32(s0)
	andi	a5,a5,511
	sw	a5,-68(s0)
	.loc 1 1127 18
	li	a5,512
	lw	a4,-68(s0)
	subw	a5,a5,a4
	sw	a5,-40(s0)
	.loc 1 1128 12
	lw	a5,-40(s0)
	mv	a4,a5
	lw	a5,-28(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bleu	a4,a5,.L279
	.loc 1 1128 39 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-40(s0)
.L279:
	.loc 1 1130 29
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
	.loc 1 1131 12
	lw	a5,-72(s0)
	sext.w	a5,a5
	beq	a5,zero,.L284
	.loc 1 1135 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1136 9
	lwu	a5,-68(s0)
	addi	a4,s0,-592
	add	a5,a4,a5
	lw	a4,-40(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1137 9
	addi	a4,s0,-592
	lw	a5,-72(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1139 17
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	subw	a5,a4,a5
	sw	a5,-28(s0)
	.loc 1 1140 17
	lw	a5,-32(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-32(s0)
	.loc 1 1141 17
	lwu	a5,-40(s0)
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 1142 17
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	addw	a5,a4,a5
	sw	a5,-36(s0)
.L278:
.LBE45:
	.loc 1 1124 17
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L282
	j	.L281
.L284:
.LBB46:
	.loc 1 1131 28
	nop
.L281:
.LBE46:
	.loc 1 1145 6
	ld	a5,-56(s0)
	lw	a5,76(a5)
	.loc 1 1145 12
	lw	a4,-36(s0)
	addw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-56(s0)
	sw	a4,76(a5)
	.loc 1 1147 14
	ld	a5,-56(s0)
	lw	a5,76(a5)
	sw	a5,-76(s0)
	.loc 1 1148 25
	ld	a5,-56(s0)
	lw	a5,16(a5)
	.loc 1 1148 8
	lw	a4,-76(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L283
	.loc 1 1149 21
	ld	a5,-56(s0)
	lw	a4,-76(s0)
	sw	a4,16(a5)
	.loc 1 1150 9
	ld	a5,-56(s0)
	lw	a4,4(a5)
	.loc 1 1150 30
	ld	a5,-56(s0)
	addi	a5,a5,8
	.loc 1 1150 9
	mv	a1,a5
	mv	a0,a4
	call	write_inode
.L283:
	.loc 1 1152 12
	lw	a5,-36(s0)
.L272:
	.loc 1 1153 1
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
	.loc 1 1155 25
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
	.loc 1 1156 32
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1158 18
	lw	a5,-52(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1158 7
	bne	a5,zero,.L286
	.loc 1 1159 16
	li	a5,-1
	j	.L287
.L286:
	.loc 1 1162 9
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 1163 8
	lw	a5,-28(s0)
	sext.w	a5,a5
	blt	a5,zero,.L288
	.loc 1 1163 17 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L288
	.loc 1 1163 56 discriminator 2
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1163 61 discriminator 2
	lw	a5,80(a5)
	.loc 1 1163 42 discriminator 2
	bne	a5,zero,.L289
.L288:
	.loc 1 1164 16
	li	a5,-1
	j	.L287
.L289:
	.loc 1 1166 32
	lw	a5,-28(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	.loc 1 1166 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1167 18
	ld	a5,-40(s0)
	lw	a5,16(a5)
.L287:
	.loc 1 1168 1
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
	.loc 1 1173 36
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
	.loc 1 1174 24
	call	get_current_file_table
	sd	a0,-32(s0)
	.loc 1 1175 8
	ld	a5,-56(s0)
	blt	a5,zero,.L291
	.loc 1 1175 16 discriminator 2
	ld	a4,-56(s0)
	li	a5,15
	ble	a4,a5,.L292
.L291:
	.loc 1 1175 48 discriminator 3
	li	a5,-1
	.loc 1 1175 48 is_stmt 0
	j	.L293
.L292:
	.loc 1 1176 24 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1176 18
	ld	a5,0(a5)
	sd	a5,-40(s0)
	.loc 1 1177 8
	ld	a5,-40(s0)
	bne	a5,zero,.L294
	.loc 1 1177 20 discriminator 1
	li	a5,-1
	.loc 1 1177 20 is_stmt 0
	j	.L293
.L294:
	.loc 1 1180 7 is_stmt 1
	ld	a5,-56(s0)
	slli	a5,a5,3
	ld	a4,-32(s0)
	add	a5,a4,a5
	.loc 1 1180 12
	sd	zero,0(a5)
	.loc 1 1183 8
	lw	a5,-60(s0)
	sext.w	a5,a5
	beq	a5,zero,.L295
	.loc 1 1183 18 discriminator 1
	lla	a5,gActiveProc
	lw	a5,0(a5)
	lla	a4,gProc
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	mv	a1,a5
	ld	a0,-40(s0)
	call	owner_remove
.L295:
	.loc 1 1186 10
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 1186 8
	ble	a5,zero,.L296
	.loc 1 1186 23 discriminator 1
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 1186 29 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-40(s0)
	sw	a4,80(a5)
.L296:
	.loc 1 1189 10
	ld	a5,-40(s0)
	lw	a5,80(a5)
	.loc 1 1189 8
	ble	a5,zero,.L297
	.loc 1 1189 29 discriminator 1
	li	a5,0
	.loc 1 1189 29 is_stmt 0
	j	.L293
.L297:
	.loc 1 1192 19 is_stmt 1
	ld	a5,-40(s0)
	ld	a5,88(a5)
	sd	a5,-48(s0)
	.loc 1 1193 8
	ld	a5,-48(s0)
	beq	a5,zero,.L298
	.loc 1 1194 14
	ld	a5,-40(s0)
	lw	a5,100(a5)
	.loc 1 1194 12
	beq	a5,zero,.L299
	.loc 1 1194 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1194 27 discriminator 1
	ble	a5,zero,.L299
	.loc 1 1194 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1194 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1194 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,528(a5)
	.loc 1 1194 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,528(a5)
	.loc 1 1194 51 discriminator 2
	bne	a5,zero,.L299
	.loc 1 1194 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,520(a5)
.L299:
	.loc 1 1195 14
	ld	a5,-40(s0)
	lw	a5,104(a5)
	.loc 1 1195 12
	beq	a5,zero,.L300
	.loc 1 1195 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1195 27 discriminator 1
	ble	a5,zero,.L300
	.loc 1 1195 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1195 52 discriminator 2
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 1 1195 51 discriminator 2
	ld	a5,-48(s0)
	sw	a4,532(a5)
	.loc 1 1195 55 discriminator 2
	ld	a5,-48(s0)
	lw	a5,532(a5)
	.loc 1 1195 51 discriminator 2
	bne	a5,zero,.L300
	.loc 1 1195 85 discriminator 3
	ld	a5,-48(s0)
	sw	zero,524(a5)
.L300:
	.loc 1 1196 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1196 12
	ble	a5,zero,.L301
	.loc 1 1196 27 discriminator 1
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1196 33 discriminator 1
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-48(s0)
	sw	a4,536(a5)
.L301:
	.loc 1 1197 14
	ld	a5,-48(s0)
	lw	a5,536(a5)
	.loc 1 1197 12
	bne	a5,zero,.L298
.LBB47:
	.loc 1 1199 22
	sw	zero,-20(s0)
	.loc 1 1199 13
	j	.L302
.L304:
	.loc 1 1200 35
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1200 20
	beq	a5,zero,.L303
	.loc 1 1200 54 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-20(s0)
	addi	a5,a5,68
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1200 64 discriminator 1
	sd	zero,88(a5)
.L303:
	.loc 1 1199 54 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L302:
	.loc 1 1199 34 discriminator 1
	ld	a5,-48(s0)
	lw	a5,800(a5)
	.loc 1 1199 31 discriminator 1
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L304
.LBE47:
	.loc 1 1202 13
	ld	a0,-48(s0)
	call	free_pipe
.L298:
	.loc 1 1207 5
	ld	a0,-40(s0)
	call	free_file
	.loc 1 1208 12
	li	a5,0
.L293:
	.loc 1 1209 1
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
	.loc 1 1212 1
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
	.loc 1 1213 13
	sw	zero,-20(s0)
	.loc 1 1213 5
	j	.L306
.L307:
	.loc 1 1214 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 1213 37 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L306:
	.loc 1 1213 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L307
.LBE48:
	.loc 1 1216 1
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
	.loc 1 1219 1
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
	.loc 1 1221 13
	sw	zero,-20(s0)
	.loc 1 1221 5
	j	.L309
.L311:
	.loc 1 1222 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1222 11
	beq	a5,zero,.L310
	.loc 1 1223 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 1223 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 1223 29
	ld	a4,0(a4)
	.loc 1 1223 23
	sd	a4,0(a5)
	.loc 1 1224 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1224 22
	lw	a4,80(a5)
	.loc 1 1224 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	.loc 1 1227 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 1227 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L310:
	.loc 1 1221 37 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L309:
	.loc 1 1221 19 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L311
.LBE49:
	.loc 1 1253 1
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
	.loc 1 1256 1
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
	.loc 1 1273 1
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
	.loc 1 1275 36
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
	.loc 1 1276 24
	call	get_current_file_table
	sd	a0,-24(s0)
	.loc 1 1277 8
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L322
	.loc 1 1277 19 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L322
	.loc 1 1278 8
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L323
	.loc 1 1278 19 discriminator 2
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,15
	bgt	a4,a5,.L323
	.loc 1 1279 11
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1279 8
	beq	a5,zero,.L324
	.loc 1 1280 8
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L325
	.loc 1 1282 11
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1282 8
	beq	a5,zero,.L321
	.loc 1 1282 28 discriminator 1
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L321:
	.loc 1 1283 19
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a4,a4,a5
	.loc 1 1283 7
	lw	a5,-40(s0)
	slli	a5,a5,3
	ld	a3,-24(s0)
	add	a5,a3,a5
	.loc 1 1283 19
	ld	a4,0(a4)
	.loc 1 1283 15
	sd	a4,0(a5)
	.loc 1 1284 7
	lw	a5,-36(s0)
	slli	a5,a5,3
	ld	a4,-24(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 1284 14
	lw	a4,80(a5)
	.loc 1 1284 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,80(a5)
	j	.L313
.L322:
	.loc 1 1277 47
	nop
	j	.L313
.L323:
	.loc 1 1278 47
	nop
	j	.L313
.L324:
	.loc 1 1279 28
	nop
	j	.L313
.L325:
	.loc 1 1280 25
	nop
.L313:
	.loc 1 1286 1
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
	.4byte	0x231f
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
	.byte	0x53
	.4byte	0x6c1
	.uleb128 0x3
	.4byte	.LASF86
	.byte	0x1
	.byte	0x54
	.byte	0xe
	.4byte	0x9e
	.byte	0
	.uleb128 0x4
	.string	"len"
	.byte	0x1
	.byte	0x55
	.byte	0xe
	.4byte	0x8b
	.byte	0x8
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x56
	.byte	0xe
	.4byte	0x78
	.byte	0xc
	.uleb128 0x3
	.4byte	.LASF56
	.byte	0x1
	.byte	0x57
	.byte	0xe
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x25
	.4byte	.LASF90
	.byte	0x2
	.byte	0x5a
	.4byte	0x6f4
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x5b
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x4
	.string	"idx"
	.byte	0x1
	.byte	0x5c
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF88
	.byte	0x1
	.byte	0x5d
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
	.byte	0x60
	.4byte	0x729
	.uleb128 0x4
	.string	"id"
	.byte	0x1
	.byte	0x60
	.byte	0x23
	.4byte	0x8b
	.byte	0
	.uleb128 0x4
	.string	"len"
	.byte	0x1
	.byte	0x60
	.byte	0x26
	.4byte	0x8b
	.byte	0x4
	.byte	0
	.uleb128 0x25
	.4byte	.LASF91
	.byte	0x4
	.byte	0x61
	.4byte	0x75c
	.uleb128 0x3
	.4byte	.LASF87
	.byte	0x1
	.byte	0x62
	.byte	0xe
	.4byte	0x78
	.byte	0
	.uleb128 0x4
	.string	"idx"
	.byte	0x1
	.byte	0x63
	.byte	0xe
	.4byte	0x78
	.byte	0x2
	.uleb128 0x3
	.4byte	.LASF88
	.byte	0x1
	.byte	0x64
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
	.byte	0x6a
	.4byte	0x79f
	.uleb128 0x3
	.4byte	.LASF27
	.byte	0x1
	.byte	0x6b
	.byte	0xe
	.4byte	0x8b
	.byte	0
	.uleb128 0x3
	.4byte	.LASF93
	.byte	0x1
	.byte	0x6c
	.byte	0xe
	.4byte	0x8b
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF94
	.byte	0x1
	.byte	0x6d
	.byte	0xe
	.4byte	0x9e
	.byte	0x8
	.byte	0
	.uleb128 0xc
	.4byte	.LASF95
	.byte	0x72
	.byte	0x11
	.4byte	0x9e
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x18
	.string	"Q"
	.byte	0x73
	.byte	0x11
	.4byte	0x8b
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0xc
	.4byte	.LASF96
	.byte	0x75
	.byte	0x1c
	.4byte	0x7dc
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xa
	.4byte	0x680
	.uleb128 0xc
	.4byte	.LASF97
	.byte	0x76
	.byte	0x1c
	.4byte	0x7f6
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xa
	.4byte	0x6c1
	.uleb128 0xc
	.4byte	.LASF59
	.byte	0x77
	.byte	0x1c
	.4byte	0x810
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xa
	.4byte	0x729
	.uleb128 0xc
	.4byte	.LASF98
	.byte	0x78
	.byte	0x1c
	.4byte	0x82a
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xa
	.4byte	0x5b
	.uleb128 0xc
	.4byte	.LASF99
	.byte	0x7a
	.byte	0x11
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2f
	.4byte	.LASF100
	.byte	0x1
	.byte	0x7b
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
	.byte	0x7c
	.byte	0x1a
	.4byte	0x86a
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x18
	.string	"req"
	.byte	0xbb
	.byte	0x1e
	.4byte	0x76b
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0x18
	.string	"sb"
	.byte	0xfd
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
	.byte	0xfe
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
	.2byte	0x235
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
	.2byte	0x236
	.byte	0xd
	.4byte	0x8fa
	.uleb128 0x9
	.byte	0x3
	.8byte	gFiles
	.uleb128 0x1a
	.4byte	.LASF105
	.2byte	0x238
	.byte	0xf
	.4byte	0x628
	.uleb128 0x9
	.byte	0x3
	.8byte	gFreePipes
	.uleb128 0x1a
	.4byte	.LASF106
	.2byte	0x239
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
	.2byte	0x30c
	.byte	0x6
	.4byte	0x97f
	.uleb128 0x1f
	.byte	0
	.uleb128 0x32
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x30b
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
	.2byte	0x4fb
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xafd
	.uleb128 0x5
	.4byte	.LASF120
	.2byte	0x4fb
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x5
	.4byte	.LASF121
	.2byte	0x4fb
	.byte	0x1d
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"ft"
	.2byte	0x4fc
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x20
	.4byte	.LASF123
	.2byte	0x4e7
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb2a
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x4e7
	.byte	0x22
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF124
	.2byte	0x4c2
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb94
	.uleb128 0x5
	.4byte	.LASF125
	.2byte	0x4c2
	.byte	0x20
	.4byte	0x488
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x5
	.4byte	.LASF126
	.2byte	0x4c2
	.byte	0x35
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x5
	.4byte	.LASF127
	.2byte	0x4c2
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
	.2byte	0x4c5
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF128
	.2byte	0x4bb
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbe0
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x4bb
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
	.2byte	0x4bd
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF130
	.2byte	0x495
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc67
	.uleb128 0x6
	.string	"fd"
	.2byte	0x495
	.byte	0x13
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF129
	.2byte	0x495
	.byte	0x1b
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.string	"ft"
	.2byte	0x496
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"f"
	.2byte	0x498
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"p"
	.2byte	0x4a8
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
	.2byte	0x4af
	.byte	0x16
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF131
	.2byte	0x483
	.byte	0x9
	.4byte	0x1f2
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcc3
	.uleb128 0x6
	.string	"fd"
	.2byte	0x483
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x484
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x48a
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x48e
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF132
	.2byte	0x44f
	.byte	0x9
	.4byte	0x1f2
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xde0
	.uleb128 0x6
	.string	"fd"
	.2byte	0x44f
	.byte	0x16
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x6
	.string	"buf"
	.2byte	0x44f
	.byte	0x26
	.4byte	0xa67
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x5
	.4byte	.LASF133
	.2byte	0x44f
	.byte	0x32
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x450
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"f"
	.2byte	0x455
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF134
	.2byte	0x459
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.string	"src"
	.2byte	0x45b
	.byte	0x14
	.4byte	0xde0
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF135
	.2byte	0x45c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"off"
	.2byte	0x45e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF136
	.2byte	0x462
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF137
	.2byte	0x47b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x21
	.4byte	.LLRL3
	.uleb128 0x1
	.4byte	.LASF138
	.2byte	0x465
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF139
	.2byte	0x466
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.4byte	.LASF140
	.2byte	0x467
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x46a
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF142
	.2byte	0x46e
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
	.2byte	0x438
	.byte	0x9
	.4byte	0x1f2
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe7e
	.uleb128 0x6
	.string	"fd"
	.2byte	0x438
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x6
	.string	"buf"
	.2byte	0x438
	.byte	0x1f
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.4byte	.LASF133
	.2byte	0x438
	.byte	0x2b
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x439
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x43f
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.2byte	0x443
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF144
	.2byte	0x444
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF145
	.2byte	0x447
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xd
	.4byte	.LASF146
	.2byte	0x3ed
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf91
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x3ed
	.byte	0x1a
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x5
	.4byte	.LASF87
	.2byte	0x3ed
	.byte	0x24
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -300
	.uleb128 0x5
	.4byte	.LASF148
	.2byte	0x3ed
	.byte	0x2f
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x3ee
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF149
	.2byte	0x3f0
	.byte	0xa
	.4byte	0xf91
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.4byte	.LASF33
	.2byte	0x3fe
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.string	"di"
	.2byte	0x3ff
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
	.2byte	0x405
	.byte	0x16
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.4byte	.LASF150
	.2byte	0x406
	.byte	0x12
	.4byte	0xfa1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x1
	.4byte	.LASF151
	.2byte	0x40b
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
	.2byte	0x407
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
	.2byte	0x419
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
	.2byte	0x3e7
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfe3
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x3e7
	.byte	0x19
	.4byte	0x96b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF157
	.2byte	0x3b3
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1164
	.uleb128 0x5
	.4byte	.LASF153
	.2byte	0x3b3
	.byte	0x20
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -676
	.uleb128 0x5
	.4byte	.LASF34
	.2byte	0x3b3
	.byte	0x39
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.uleb128 0x5
	.4byte	.LASF154
	.2byte	0x3b3
	.byte	0x48
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0x2
	.string	"pdi"
	.2byte	0x3b7
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x2
	.string	"de"
	.2byte	0x3bc
	.byte	0x13
	.4byte	0x1af
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.string	"off"
	.2byte	0x3c3
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.2byte	0x3d7
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF138
	.2byte	0x3d8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF139
	.2byte	0x3d9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x3da
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.string	"buf"
	.2byte	0x3dd
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x1
	.4byte	.LASF155
	.2byte	0x3df
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
	.2byte	0x3bf
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
	.2byte	0x3c6
	.byte	0x18
	.4byte	0x1164
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x3c7
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
	.2byte	0x3c8
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
	.2byte	0x3cc
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x3cd
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
	.2byte	0x39e
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11de
	.uleb128 0x2
	.string	"di"
	.2byte	0x3a0
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
	.2byte	0x3a1
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
	.2byte	0x3a5
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
	.2byte	0x371
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12f5
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x371
	.byte	0x2f
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x5
	.4byte	.LASF153
	.2byte	0x371
	.byte	0x3f
	.4byte	0x12f5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x5
	.4byte	.LASF161
	.2byte	0x371
	.byte	0x52
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x1
	.4byte	.LASF162
	.2byte	0x377
	.byte	0xa
	.4byte	0x12fa
	.uleb128 0x4
	.byte	0x91
	.sleb128 -144
	.byte	0x6
	.uleb128 0x1
	.4byte	.LASF163
	.2byte	0x37b
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF164
	.2byte	0x37c
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.string	"tok"
	.2byte	0x37d
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"cur"
	.2byte	0x37e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"ip"
	.2byte	0x37f
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x2
	.string	"n"
	.2byte	0x395
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
	.2byte	0x383
	.byte	0xf
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.4byte	.LASF166
	.2byte	0x38b
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
	.2byte	0x397
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
	.2byte	0x342
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1396
	.uleb128 0x6
	.string	"fd"
	.2byte	0x342
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF86
	.2byte	0x342
	.byte	0x1d
	.4byte	0x48d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x342
	.byte	0x27
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x344
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x34d
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
	.2byte	0x353
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF168
	.2byte	0x310
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x142b
	.uleb128 0x6
	.string	"fd"
	.2byte	0x310
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF86
	.2byte	0x310
	.byte	0x1c
	.4byte	0x48d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x6
	.string	"n"
	.2byte	0x310
	.byte	0x26
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x312
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.2byte	0x31b
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"j"
	.2byte	0x32a
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
	.2byte	0x32b
	.byte	0x17
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x14
	.4byte	.LASF169
	.2byte	0x2cd
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x14bd
	.uleb128 0x6
	.string	"fd1"
	.2byte	0x2cd
	.byte	0x15
	.4byte	0x14bd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"fd2"
	.2byte	0x2cd
	.byte	0x1f
	.4byte	0x14bd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2ce
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"pip"
	.2byte	0x2d0
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
	.2byte	0x2d2
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
	.2byte	0x2ec
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
	.2byte	0x2c0
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1502
	.uleb128 0x6
	.string	"fd"
	.2byte	0x2c0
	.byte	0x13
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2c2
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF171
	.2byte	0x2b4
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1542
	.uleb128 0x6
	.string	"fd"
	.2byte	0x2b4
	.byte	0x12
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2b6
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF172
	.2byte	0x2a7
	.byte	0x5
	.4byte	0x48
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1582
	.uleb128 0x6
	.string	"fd"
	.2byte	0x2a7
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x2a9
	.byte	0x13
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF173
	.2byte	0x293
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15af
	.uleb128 0x5
	.4byte	.LASF52
	.2byte	0x293
	.byte	0x1c
	.4byte	0x9a4
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x22
	.4byte	.LASF174
	.2byte	0x288
	.byte	0xe
	.4byte	0x4a2
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15e1
	.uleb128 0x1
	.4byte	.LASF126
	.2byte	0x28a
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF175
	.2byte	0x272
	.byte	0xf
	.4byte	0x628
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x162e
	.uleb128 0x2
	.string	"p"
	.2byte	0x274
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF176
	.2byte	0x280
	.byte	0xb
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"pa"
	.2byte	0x281
	.byte	0xb
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x20
	.4byte	.LASF177
	.2byte	0x269
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1659
	.uleb128 0x6
	.string	"p"
	.2byte	0x269
	.byte	0x1d
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x22
	.4byte	.LASF178
	.2byte	0x260
	.byte	0xe
	.4byte	0x4a2
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1689
	.uleb128 0x2
	.string	"p"
	.2byte	0x262
	.byte	0x12
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x20
	.4byte	.LASF179
	.2byte	0x25a
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16b4
	.uleb128 0x6
	.string	"p"
	.2byte	0x25a
	.byte	0x1e
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x22
	.4byte	.LASF180
	.2byte	0x24f
	.byte	0xf
	.4byte	0x628
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16e4
	.uleb128 0x2
	.string	"p"
	.2byte	0x251
	.byte	0x13
	.4byte	0x628
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x37
	.4byte	.LASF236
	.byte	0x1
	.2byte	0x23b
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
	.2byte	0x240
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
	.2byte	0x241
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
	.2byte	0x247
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
	.2byte	0x248
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
	.2byte	0x227
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17f7
	.uleb128 0x6
	.string	"f"
	.2byte	0x227
	.byte	0x27
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x227
	.byte	0x37
	.4byte	0x488
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"cap"
	.2byte	0x228
	.byte	0x9
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"c"
	.2byte	0x228
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
	.2byte	0x229
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF182
	.2byte	0x219
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1868
	.uleb128 0x6
	.string	"f"
	.2byte	0x219
	.byte	0x24
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"o"
	.2byte	0x219
	.byte	0x34
	.4byte	0x488
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"cap"
	.2byte	0x21a
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
	.2byte	0x21c
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
	.2byte	0x21e
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x28
	.4byte	.LASF183
	.2byte	0x216
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1898
	.uleb128 0x6
	.string	"f"
	.2byte	0x216
	.byte	0x23
	.4byte	0x4a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x14
	.4byte	.LASF184
	.2byte	0x1fe
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18f4
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x1fe
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x2
	.string	"ip"
	.2byte	0x1ff
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
	.2byte	0x205
	.byte	0xe
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF185
	.2byte	0x1e4
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x198a
	.uleb128 0x5
	.4byte	.LASF147
	.2byte	0x1e4
	.byte	0x22
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x2
	.string	"ipr"
	.2byte	0x1ea
	.byte	0x13
	.4byte	0x13f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.4byte	.LASF162
	.2byte	0x1ee
	.byte	0xa
	.4byte	0x198a
	.uleb128 0x4
	.byte	0x91
	.sleb128 -128
	.byte	0x6
	.uleb128 0x1
	.4byte	.LASF186
	.2byte	0x1f0
	.byte	0xb
	.4byte	0x48d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.4byte	.LASF187
	.2byte	0x1f1
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
	.2byte	0x1f5
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
	.2byte	0x1cf
	.byte	0xa
	.4byte	0x8b
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1a4d
	.uleb128 0x5
	.4byte	.LASF44
	.2byte	0x1cf
	.byte	0x24
	.4byte	0x1a4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.4byte	.LASF34
	.2byte	0x1cf
	.byte	0x38
	.4byte	0x96b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.string	"off"
	.2byte	0x1d0
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF189
	.2byte	0x1d1
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
	.2byte	0x1d5
	.byte	0x18
	.4byte	0x1164
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x1d6
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
	.2byte	0x1d7
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
	.2byte	0x1b7
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b27
	.uleb128 0x6
	.string	"ip"
	.2byte	0x1b7
	.byte	0x1f
	.4byte	0x1a4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.4byte	.LASF191
	.2byte	0x1b7
	.byte	0x2c
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x6
	.string	"buf"
	.2byte	0x1b7
	.byte	0x3d
	.4byte	0x82a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x5
	.4byte	.LASF18
	.2byte	0x1b7
	.byte	0x4b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF135
	.2byte	0x1b8
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"off"
	.2byte	0x1b9
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"dst"
	.2byte	0x1ba
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
	.2byte	0x1bd
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF139
	.2byte	0x1be
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF145
	.2byte	0x1bf
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF141
	.2byte	0x1c2
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF192
	.2byte	0x16e
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d28
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x16e
	.byte	0x2b
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x6
	.string	"ip"
	.2byte	0x16e
	.byte	0x40
	.4byte	0x1a4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x6
	.string	"idx"
	.2byte	0x16e
	.byte	0x4d
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x2
	.string	"di"
	.2byte	0x192
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF193
	.2byte	0x193
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF194
	.2byte	0x194
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0x196
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF196
	.2byte	0x19f
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x1
	.4byte	.LASF197
	.2byte	0x1a1
	.byte	0xf
	.4byte	0x12f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF198
	.2byte	0x1a2
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF199
	.2byte	0x1ab
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x1
	.4byte	.LASF200
	.2byte	0x1ad
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
	.2byte	0x172
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
	.2byte	0x17b
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"buf"
	.2byte	0x184
	.byte	0x11
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x186
	.byte	0x13
	.4byte	0x12f5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x2
	.string	"i"
	.2byte	0x187
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
	.2byte	0x17d
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
	.2byte	0x189
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
	.2byte	0x198
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
	.2byte	0x1a4
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
	.2byte	0x1af
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF202
	.2byte	0x14e
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1e0b
	.uleb128 0x6
	.string	"ip"
	.2byte	0x14e
	.byte	0x2e
	.4byte	0x1a4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x6
	.string	"idx"
	.2byte	0x14e
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
	.2byte	0x154
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF156
	.2byte	0x157
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
	.2byte	0x15c
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF204
	.2byte	0x15d
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0x15f
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF197
	.2byte	0x163
	.byte	0x13
	.4byte	0x12f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF198
	.2byte	0x164
	.byte	0x12
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF200
	.2byte	0x169
	.byte	0x13
	.4byte	0x12f5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF205
	.2byte	0x13d
	.byte	0x11
	.4byte	0x8b
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1e8b
	.uleb128 0x1
	.4byte	.LASF206
	.2byte	0x13f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF207
	.2byte	0x140
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
	.2byte	0x141
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
	.2byte	0x145
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
	.2byte	0x133
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1ee4
	.uleb128 0x6
	.string	"b"
	.2byte	0x133
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x1
	.4byte	.LASF209
	.2byte	0x135
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"buf"
	.2byte	0x136
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x2
	.string	"bi"
	.2byte	0x138
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x15
	.4byte	.LASF210
	.2byte	0x12a
	.byte	0xc
	.4byte	0x48
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1f42
	.uleb128 0x6
	.string	"b"
	.2byte	0x12a
	.byte	0x21
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x1
	.4byte	.LASF209
	.2byte	0x12c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"buf"
	.2byte	0x12d
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x2
	.string	"bi"
	.2byte	0x12f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF211
	.2byte	0x11c
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1fcc
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x11c
	.byte	0x22
	.4byte	0x8b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x6
	.string	"src"
	.2byte	0x11c
	.byte	0x3d
	.4byte	0x1fcc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x1
	.4byte	.LASF212
	.2byte	0x11f
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF213
	.2byte	0x120
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF191
	.2byte	0x121
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"buf"
	.2byte	0x123
	.byte	0xd
	.4byte	0x8b0
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x2
	.string	"dip"
	.2byte	0x125
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
	.2byte	0x11a
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2001
	.uleb128 0x6
	.string	"b"
	.2byte	0x11a
	.byte	0x28
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x14
	.4byte	.LASF215
	.2byte	0x105
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2079
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x105
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x5
	.4byte	.LASF216
	.2byte	0x105
	.byte	0x2f
	.4byte	0x1a4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF212
	.2byte	0x10c
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF213
	.2byte	0x10e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF191
	.2byte	0x110
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"dip"
	.2byte	0x113
	.byte	0x14
	.4byte	0x1a4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x39
	.4byte	.LASF237
	.byte	0x1
	.2byte	0x100
	.byte	0x6
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x23
	.4byte	.LASF217
	.byte	0xf4
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x20cd
	.uleb128 0xe
	.string	"blk"
	.byte	0xf4
	.byte	0x1b
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"src"
	.byte	0xf4
	.byte	0x2c
	.4byte	0xa67
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x29
	.4byte	.LASF218
	.byte	0xdb
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2106
	.uleb128 0x2a
	.4byte	.LASF94
	.byte	0xdb
	.byte	0x27
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"src"
	.byte	0xdb
	.byte	0x3b
	.4byte	0xa67
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x23
	.4byte	.LASF219
	.byte	0xd6
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x213f
	.uleb128 0xe
	.string	"blk"
	.byte	0xd6
	.byte	0x1a
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"dst"
	.byte	0xd6
	.byte	0x25
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x29
	.4byte	.LASF220
	.byte	0xbd
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2178
	.uleb128 0x2a
	.4byte	.LASF94
	.byte	0xbd
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"dst"
	.byte	0xbd
	.byte	0x34
	.4byte	0xa65
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x3a
	.4byte	.LASF221
	.byte	0x1
	.byte	0xb5
	.byte	0x14
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x21be
	.uleb128 0xe
	.string	"f0"
	.byte	0xb5
	.byte	0x27
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0xe
	.string	"f1"
	.byte	0xb5
	.byte	0x33
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0xe
	.string	"f2"
	.byte	0xb5
	.byte	0x3f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x23
	.4byte	.LASF222
	.byte	0x81
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x22a8
	.uleb128 0xc
	.4byte	.LASF223
	.byte	0x8e
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x18
	.string	"st"
	.byte	0x92
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xc
	.4byte	.LASF224
	.byte	0x9a
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0xc
	.4byte	.LASF225
	.byte	0x9b
	.byte	0xe
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xc
	.4byte	.LASF226
	.byte	0xa0
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xc
	.4byte	.LASF227
	.byte	0xa1
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xc
	.4byte	.LASF228
	.byte	0xa2
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xc
	.4byte	.LASF229
	.byte	0xa3
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xc
	.4byte	.LASF230
	.byte	0xa4
	.byte	0xc
	.4byte	0xbd
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0xc
	.4byte	.LASF231
	.byte	0xae
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
	.byte	0x83
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
	.byte	0x84
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
	.byte	0x7f
	.byte	0x18
	.4byte	0x8b
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x22e3
	.uleb128 0xe
	.string	"b"
	.byte	0x7f
	.byte	0x26
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"o"
	.byte	0x7f
	.byte	0x31
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x3c
	.4byte	.LASF238
	.byte	0x1
	.byte	0x7e
	.byte	0x14
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xe
	.string	"b"
	.byte	0x7e
	.byte	0x22
	.4byte	0x9e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xe
	.string	"o"
	.byte	0x7e
	.byte	0x2d
	.4byte	0x8b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0xe
	.string	"v"
	.byte	0x7e
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
