	.file	"exercise2.c"
.globl g_VAR
	.section	.rodata
	.align 4
	.type	g_VAR, @object
	.size	g_VAR, 4
g_VAR:
	.long	10
.LC0:
	.string	"\n %d"
