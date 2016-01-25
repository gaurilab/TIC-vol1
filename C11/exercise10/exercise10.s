	.file	"exercise10.cpp"
	.section	.ctors,"aw",@progbits
	.align 4
	.long	_GLOBAL__I__Z9incrementi
	.text
	.align 2
.globl _Z9incrementi
	.type	_Z9incrementi, @function
_Z9incrementi:
.LFB1401:
	pushl	%ebp
.LCFI0:
	movl	%esp, %ebp
.LCFI1:
	addl	$1, 8(%ebp)
	movl	8(%ebp), %eax
	popl	%ebp
	ret
.LFE1401:
	.size	_Z9incrementi, .-_Z9incrementi
.globl __gxx_personality_v0
	.align 2
.globl main
	.type	main, @function
main:
.LFB1402:
	leal	4(%esp), %ecx
.LCFI2:
	andl	$-16, %esp
	pushl	-4(%ecx)
.LCFI3:
	pushl	%ebp
.LCFI4:
	movl	%esp, %ebp
.LCFI5:
	pushl	%ecx
.LCFI6:
	subl	$20, %esp
.LCFI7:
	movl	$0, -8(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, (%esp)
	call	_Z9incrementi
	movl	%eax, -8(%ebp)
	movl	$0, %eax
	addl	$20, %esp
	popl	%ecx
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
.LFE1402:
	.size	main, .-main
	.align 2
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1409:
	pushl	%ebp
.LCFI8:
	movl	%esp, %ebp
.LCFI9:
	subl	$24, %esp
.LCFI10:
	movl	%eax, -4(%ebp)
	movl	%edx, -8(%ebp)
	cmpl	$1, -4(%ebp)
	jne	.L9
	cmpl	$65535, -8(%ebp)
	jne	.L9
	movl	$_ZSt8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, 8(%esp)
	movl	$0, 4(%esp)
	movl	$__tcf_0, (%esp)
	call	__cxa_atexit
.L9:
	leave
	ret
.LFE1409:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.align 2
	.type	_GLOBAL__I__Z9incrementi, @function
_GLOBAL__I__Z9incrementi:
.LFB1411:
	pushl	%ebp
.LCFI11:
	movl	%esp, %ebp
.LCFI12:
	subl	$8, %esp
.LCFI13:
	movl	$65535, %edx
	movl	$1, %eax
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	ret
.LFE1411:
	.size	_GLOBAL__I__Z9incrementi, .-_GLOBAL__I__Z9incrementi
	.align 2
	.type	__tcf_0, @function
__tcf_0:
.LFB1410:
	pushl	%ebp
.LCFI14:
	movl	%esp, %ebp
.LCFI15:
	subl	$8, %esp
.LCFI16:
	movl	$_ZSt8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitD1Ev
	leave
	ret
.LFE1410:
	.size	__tcf_0, .-__tcf_0
	.local	_ZSt8__ioinit
	.comm	_ZSt8__ioinit,1,1
	.weakref	_Z20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_Z27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_Z27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_Z22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_Z22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_Z26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_Z29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_Z28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_Z26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_Z26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_Z26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_Z30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_Z33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_Z33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.section	.eh_frame,"a",@progbits
.Lframe1:
	.long	.LECIE1-.LSCIE1
.LSCIE1:
	.long	0x0
	.byte	0x1
	.string	"zP"
	.uleb128 0x1
	.sleb128 -4
	.byte	0x8
	.uleb128 0x5
	.byte	0x0
	.long	__gxx_personality_v0
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x88
	.uleb128 0x1
	.align 4
.LECIE1:
.LSFDE5:
	.long	.LEFDE5-.LASFDE5
.LASFDE5:
	.long	.LASFDE5-.Lframe1
	.long	.LFB1409
	.long	.LFE1409-.LFB1409
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI8-.LFB1409
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI9-.LCFI8
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE5:
.LSFDE7:
	.long	.LEFDE7-.LASFDE7
.LASFDE7:
	.long	.LASFDE7-.Lframe1
	.long	.LFB1411
	.long	.LFE1411-.LFB1411
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI11-.LFB1411
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI12-.LCFI11
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE7:
.LSFDE9:
	.long	.LEFDE9-.LASFDE9
.LASFDE9:
	.long	.LASFDE9-.Lframe1
	.long	.LFB1410
	.long	.LFE1410-.LFB1410
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI14-.LFB1410
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI15-.LCFI14
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE9:
	.ident	"GCC: (GNU) 4.1.2 20070626 (Red Hat 4.1.2-14)"
	.section	.note.GNU-stack,"",@progbits
