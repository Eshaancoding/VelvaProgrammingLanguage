	.text
	.file	"mod"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %main
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
	.cfi_offset %rbx, -24
	movl	$0, -12(%rbp)
	cmpl	$25, -12(%rbp)
	jg	.LBB0_3
	.p2align	4, 0x90
.LBB0_2:                                # %for_0
                                        # =>This Inner Loop Header: Depth=1
	movl	-12(%rbp), %edi
	addl	$65, %edi
	callq	putchar@PLT
	incl	-12(%rbp)
	cmpl	$25, -12(%rbp)
	jle	.LBB0_2
.LBB0_3:                                # %for_end_0
	movl	$10, %edi
	callq	putchar@PLT
	movq	%rsp, %rax
	leaq	-16(%rax), %rbx
	movq	%rbx, %rsp
	movl	$0, -16(%rax)
	cmpl	$25, (%rbx)
	jg	.LBB0_6
	.p2align	4, 0x90
.LBB0_5:                                # %for_1
                                        # =>This Inner Loop Header: Depth=1
	movl	(%rbx), %edi
	addl	$97, %edi
	callq	putchar@PLT
	incl	(%rbx)
	cmpl	$25, (%rbx)
	jle	.LBB0_5
.LBB0_6:                                # %for_end_1
	leaq	-8(%rbp), %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.section	".note.GNU-stack","",@progbits
