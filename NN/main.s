	.text
	.file	"mod"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %main
	pushq	%rbx
	.cfi_def_cfa_offset 16
	subq	$16, %rsp
	.cfi_def_cfa_offset 32
	.cfi_offset %rbx, -16
	movq	%rsp, %rbx
	movl	$5, %edi
	movq	%rbx, %rsi
	callq	constructor_Array@PLT
	xorl	%edi, %edi
	movl	$3, %esi
	movq	%rbx, %rdx
	callq	Array_set@PLT
	movq	%rbx, %rdi
	callq	Array_print@PLT
	addq	$16, %rsp
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.globl	constructor_Array               # -- Begin function constructor_Array
	.p2align	4, 0x90
	.type	constructor_Array,@function
constructor_Array:                      # @constructor_Array
# %bb.0:                                # %constructor_Array
	pushq	%rbx
	subq	$16, %rsp
	movq	%rsi, %rbx
	movl	%edi, 12(%rsp)
	movl	%edi, 8(%rsi)
	movl	12(%rsp), %edi
	callq	malloc@PLT
	movq	%rax, (%rbx)
	addq	$16, %rsp
	popq	%rbx
	retq
.Lfunc_end1:
	.size	constructor_Array, .Lfunc_end1-constructor_Array
                                        # -- End function
	.globl	Array_set                       # -- Begin function Array_set
	.p2align	4, 0x90
	.type	Array_set,@function
Array_set:                              # @Array_set
# %bb.0:                                # %Array_set
	movl	%edi, -4(%rsp)
	movl	%esi, -8(%rsp)
	movq	(%rdx), %rax
	movslq	%edi, %rcx
	movl	%esi, (%rax,%rcx,4)
	retq
.Lfunc_end2:
	.size	Array_set, .Lfunc_end2-Array_set
                                        # -- End function
	.globl	Array_print                     # -- Begin function Array_print
	.p2align	4, 0x90
	.type	Array_print,@function
Array_print:                            # @Array_print
# %bb.0:                                # %Array_print
	pushq	%rbx
	subq	$16, %rsp
	movq	%rdi, %rbx
	movl	$0, 12(%rsp)
	.p2align	4, 0x90
.LBB3_1:                                # %for_cond_0
                                        # =>This Inner Loop Header: Depth=1
	movl	12(%rsp), %eax
	cmpl	8(%rbx), %eax
	jge	.LBB3_3
# %bb.2:                                # %for_0
                                        #   in Loop: Header=BB3_1 Depth=1
	movq	(%rbx), %rax
	movslq	12(%rsp), %rcx
	movl	(%rax,%rcx,4), %edi
	addl	$48, %edi
	callq	putchar@PLT
	incl	12(%rsp)
	jmp	.LBB3_1
.LBB3_3:                                # %for_end_0
	addq	$16, %rsp
	popq	%rbx
	retq
.Lfunc_end3:
	.size	Array_print, .Lfunc_end3-Array_print
                                        # -- End function
	.section	".note.GNU-stack","",@progbits
