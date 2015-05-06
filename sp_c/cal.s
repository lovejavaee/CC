	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
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
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movb	$43, -5(%rbp)
	movl	$10, -12(%rbp)
	movl	$20, -16(%rbp)
	movsbl	-5(%rbp), %eax
	movl	%eax, %ecx
	subl	$45, %ecx
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movl	%ecx, -32(%rbp)         ## 4-byte Spill
	je	LBB0_2
	jmp	LBB0_4
LBB0_4:
	movl	-28(%rbp), %eax         ## 4-byte Reload
	subl	$43, %eax
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	jne	LBB0_3
	jmp	LBB0_1
LBB0_1:
	leaq	L_.str(%rip), %rdi
	movl	-12(%rbp), %eax
	addl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB0_3
LBB0_2:
	leaq	L_.str1(%rip), %rdi
	movl	-12(%rbp), %eax
	subl	-16(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -44(%rbp)         ## 4-byte Spill
LBB0_3:
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"sum is%d\n"

L_.str1:                                ## @.str1
	.asciz	"minus is%d\n"


.subsections_via_symbols
