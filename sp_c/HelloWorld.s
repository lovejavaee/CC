	.section	__TEXT,__text,regular,pure_instructions
	.globl	_play
	.align	4, 0x90
_play:                                  ## @play
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
	subq	$16, %rsp
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, %ecx
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
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
	subq	$64, %rsp
	leaq	L_.str1(%rip), %rdi
	movl	$0, -4(%rbp)
	movb	$0, %al
	callq	_printf
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	callq	_play
	leaq	L_.str2(%rip), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str3(%rip), %rdi
	leaq	-8(%rbp), %rsi
	movl	$10, -8(%rbp)
	movl	$20, -12(%rbp)
	movl	$30, -16(%rbp)
	movb	$97, -17(%rbp)
	movb	$97, -18(%rbp)
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str4(%rip), %rdi
	leaq	-12(%rbp), %rsi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str5(%rip), %rdi
	leaq	_main.c(%rip), %rsi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str6(%rip), %rdi
	leaq	-16(%rbp), %rsi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str7(%rip), %rdi
	leaq	-17(%rbp), %rsi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str8(%rip), %rdi
	leaq	-18(%rbp), %rsi
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	$0, %ecx
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"play!\n"

L_.str1:                                ## @.str1
	.asciz	"HelloWorldello, World!\n"

L_.str2:                                ## @.str2
	.asciz	"Hello!"

	.section	__DATA,__data
	.align	2                       ## @main.c
_main.c:
	.long	30                      ## 0x1e

	.section	__TEXT,__cstring,cstring_literals
L_.str3:                                ## @.str3
	.asciz	"a\347\232\204\345\234\260\345\235\200\357\274\232%p\n"

L_.str4:                                ## @.str4
	.asciz	"b\347\232\204\345\234\260\345\235\200\357\274\232%p\n"

L_.str5:                                ## @.str5
	.asciz	"c\347\232\204\345\234\260\345\235\200\357\274\232%p\n"

L_.str6:                                ## @.str6
	.asciz	"d\347\232\204\345\234\260\345\235\200\357\274\232%p\n"

L_.str7:                                ## @.str7
	.asciz	"e\347\232\204\345\234\260\345\235\200\357\274\232%p\n"

L_.str8:                                ## @.str8
	.asciz	"f\347\232\204\345\234\260\345\235\200\357\274\232%p\n"


.subsections_via_symbols
