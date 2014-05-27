	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z10calbitdiffi
	.align	4, 0x90
__Z10calbitdiffi:                       ## @_Z10calbitdiffi
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %edi
	addl	$0, %edi
	movl	%edi, -8(%rbp)
	movl	-8(%rbp), %eax
	popq	%rbp
	ret
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp7:
	.cfi_def_cfa_offset 16
Ltmp8:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp9:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$3, %edi
	callq	__Z10calbitdiffi
	movl	$0, %edi
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	movl	%edi, %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.cfi_endproc


.subsections_via_symbols
