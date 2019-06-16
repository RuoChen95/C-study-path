	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4617315517961601024     ## double 5
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movq	_gAll@GOTPCREL(%rip), %rax
	movl	$0, -4(%rbp)
	movl	(%rax), %ecx
	cvtsi2sdl	%ecx, %xmm1
	callq	_max
	leaq	L_.str(%rip), %rdi
	movb	$1, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%f\n"


.subsections_via_symbols
