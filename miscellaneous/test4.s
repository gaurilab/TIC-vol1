	.file	"test4.cpp"
	.section	.rodata
.LC0:
	.string	"asdbfaksdhfasdnk"
	.text
	.align 2
.globl main
	.type	main, @function
main:
.LFB2:
	leal	4(%esp), %ecx
.LCFI0:
	andl	$-16, %esp
	pushl	-4(%ecx)
.LCFI1:
	pushl	%ebp
.LCFI2:
	movl	%esp, %ebp
.LCFI3:
	pushl	%ecx
.LCFI4:
	subl	$48, %esp
.LCFI5:
	movl	$5, -20(%ebp)
	leal	-20(%ebp), %eax
	movl	%eax, -16(%ebp)
	movl	$5, -12(%ebp)
	movl	.LC0, %eax
	movl	%eax, -37(%ebp)
	movl	.LC0+4, %eax
	movl	%eax, -33(%ebp)
	movl	.LC0+8, %eax
	movl	%eax, -29(%ebp)
	movl	.LC0+12, %eax
	movl	%eax, -25(%ebp)
	movzbl	.LC0+16, %eax
	movb	%al, -21(%ebp)
	movl	$10, -8(%ebp)
	movl	$0, %eax
	addl	$48, %esp
	popl	%ecx
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
.LFE2:
	.size	main, .-main
.globl __gxx_personality_v0
	.ident	"GCC: (GNU) 4.1.2 20070626 (Red Hat 4.1.2-14)"
	.section	.note.GNU-stack,"",@progbits
