	.file	"exercise10.cpp"
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.text
.Ltext0:
	.section	.text._ZN6simpleC1Ei,"axG",@progbits,_ZN6simpleC1Ei,comdat
	.align 2
	.weak	_ZN6simpleC1Ei
	.type	_ZN6simpleC1Ei, @function
_ZN6simpleC1Ei:
.LFB4:
	.file 1 "exercise10.cpp"
	.loc 1 14 0
	pushl	%ebp
.LCFI0:
	movl	%esp, %ebp
.LCFI1:
.LBB2:
	.loc 1 14 0
	movl	8(%ebp), %edx
	movl	12(%ebp), %eax
	movl	%eax, (%edx)
.LBE2:
	.loc 1 18 0
	popl	%ebp
	ret
.LFE4:
	.size	_ZN6simpleC1Ei, .-_ZN6simpleC1Ei
.globl __gxx_personality_v0
	.section	.text._ZN6simpleD1Ev,"axG",@progbits,_ZN6simpleD1Ev,comdat
	.align 2
	.weak	_ZN6simpleD1Ev
	.type	_ZN6simpleD1Ev, @function
_ZN6simpleD1Ev:
.LFB7:
	.loc 1 19 0
	pushl	%ebp
.LCFI2:
	movl	%esp, %ebp
.LCFI3:
	.loc 1 22 0
	popl	%ebp
	ret
.LFE7:
	.size	_ZN6simpleD1Ev, .-_ZN6simpleD1Ev
	.section	.text._ZN6simpleppEi,"axG",@progbits,_ZN6simpleppEi,comdat
	.align 2
	.weak	_ZN6simpleppEi
	.type	_ZN6simpleppEi, @function
_ZN6simpleppEi:
.LFB8:
	.loc 1 24 0
	pushl	%ebp
.LCFI4:
	movl	%esp, %ebp
.LCFI5:
	pushl	%ebx
.LCFI6:
	subl	$36, %esp
.LCFI7:
	movl	8(%ebp), %ebx
.LBB3:
	.loc 1 26 0
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	movl	%ebx, %edx
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	_ZN6simpleC1Ei
	.loc 1 27 0
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	leal	1(%eax), %edx
	movl	12(%ebp), %eax
	movl	%edx, (%eax)
.LBE3:
	.loc 1 29 0
	movl	%ebx, %eax
	addl	$36, %esp
	popl	%ebx
	popl	%ebp
	ret	$4
.LFE8:
	.size	_ZN6simpleppEi, .-_ZN6simpleppEi
	.text
	.align 2
.globl main
	.type	main, @function
main:
.LFB9:
	.loc 1 42 0
	leal	4(%esp), %ecx
.LCFI8:
	andl	$-16, %esp
	pushl	-4(%ecx)
.LCFI9:
	pushl	%ebp
.LCFI10:
	movl	%esp, %ebp
.LCFI11:
	pushl	%ecx
.LCFI12:
	subl	$36, %esp
.LCFI13:
.LBB4:
	.loc 1 45 0
	movl	$9, 4(%esp)
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN6simpleC1Ei
	movl	$5, 4(%esp)
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN6simpleC1Ei
	movl	$0, 4(%esp)
	leal	-20(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN6simpleC1Ei
	.loc 1 46 0
	leal	-8(%ebp), %edx
	movl	$0, 8(%esp)
	leal	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	_ZN6simpleppEi
	subl	$4, %esp
	movl	-8(%ebp), %eax
	movl	%eax, -20(%ebp)
	leal	-8(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN6simpleD1Ev
	leal	-20(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN6simpleD1Ev
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN6simpleD1Ev
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN6simpleD1Ev
.LBE4:
	movl	$0, %eax
	.loc 1 48 0
	movl	-4(%ebp), %ecx
	leave
	leal	-4(%ecx), %esp
	ret
.LFE9:
	.size	main, .-main
	.section	.debug_frame,"",@progbits
.Lframe0:
	.long	.LECIE0-.LSCIE0
.LSCIE0:
	.long	0xffffffff
	.byte	0x1
	.string	""
	.uleb128 0x1
	.sleb128 -4
	.byte	0x8
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x88
	.uleb128 0x1
	.align 4
.LECIE0:
.LSFDE0:
	.long	.LEFDE0-.LASFDE0
.LASFDE0:
	.long	.Lframe0
	.long	.LFB4
	.long	.LFE4-.LFB4
	.byte	0x4
	.long	.LCFI0-.LFB4
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI1-.LCFI0
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE0:
.LSFDE2:
	.long	.LEFDE2-.LASFDE2
.LASFDE2:
	.long	.Lframe0
	.long	.LFB7
	.long	.LFE7-.LFB7
	.byte	0x4
	.long	.LCFI2-.LFB7
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI3-.LCFI2
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE2:
.LSFDE4:
	.long	.LEFDE4-.LASFDE4
.LASFDE4:
	.long	.Lframe0
	.long	.LFB8
	.long	.LFE8-.LFB8
	.byte	0x4
	.long	.LCFI4-.LFB8
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI5-.LCFI4
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI7-.LCFI5
	.byte	0x83
	.uleb128 0x3
	.align 4
.LEFDE4:
.LSFDE6:
	.long	.LEFDE6-.LASFDE6
.LASFDE6:
	.long	.Lframe0
	.long	.LFB9
	.long	.LFE9-.LFB9
	.byte	0x4
	.long	.LCFI8-.LFB9
	.byte	0xc
	.uleb128 0x1
	.uleb128 0x0
	.byte	0x9
	.uleb128 0x4
	.uleb128 0x1
	.byte	0x4
	.long	.LCFI9-.LCFI8
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI10-.LCFI9
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI11-.LCFI10
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI12-.LCFI11
	.byte	0x84
	.uleb128 0x3
	.align 4
.LEFDE6:
	.text
.Letext0:
	.section	.debug_loc,"",@progbits
.Ldebug_loc0:
.LLST0:
	.long	.LFB4
	.long	.LCFI0
	.value	0x2
	.byte	0x74
	.sleb128 4
	.long	.LCFI0
	.long	.LCFI1
	.value	0x2
	.byte	0x74
	.sleb128 8
	.long	.LCFI1
	.long	.LFE4
	.value	0x2
	.byte	0x75
	.sleb128 8
	.long	0x0
	.long	0x0
.LLST1:
	.long	.LFB7
	.long	.LCFI2
	.value	0x2
	.byte	0x74
	.sleb128 4
	.long	.LCFI2
	.long	.LCFI3
	.value	0x2
	.byte	0x74
	.sleb128 8
	.long	.LCFI3
	.long	.LFE7
	.value	0x2
	.byte	0x75
	.sleb128 8
	.long	0x0
	.long	0x0
.LLST2:
	.long	.LFB8
	.long	.LCFI4
	.value	0x2
	.byte	0x74
	.sleb128 4
	.long	.LCFI4
	.long	.LCFI5
	.value	0x2
	.byte	0x74
	.sleb128 8
	.long	.LCFI5
	.long	.LFE8
	.value	0x2
	.byte	0x75
	.sleb128 8
	.long	0x0
	.long	0x0
.LLST3:
	.long	.LFB9
	.long	.LCFI8
	.value	0x2
	.byte	0x74
	.sleb128 4
	.long	.LCFI8
	.long	.LCFI9
	.value	0x1
	.byte	0x51
	.long	.LCFI9
	.long	.LCFI10
	.value	0x2
	.byte	0x74
	.sleb128 4
	.long	.LCFI10
	.long	.LCFI11
	.value	0x2
	.byte	0x74
	.sleb128 8
	.long	.LCFI11
	.long	.LFE9
	.value	0x2
	.byte	0x75
	.sleb128 8
	.long	0x0
	.long	0x0
	.section	.debug_info
	.long	0x209
	.value	0x2
	.long	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.long	.Ldebug_line0
	.string	"GNU C++ 4.1.2 20070626 (Red Hat 4.1.2-14)"
	.byte	0x4
	.string	"exercise10.cpp"
	.string	"/home/gauri/C12"
	.uleb128 0x2
	.long	0xe0
	.string	"simple"
	.byte	0x4
	.byte	0x1
	.byte	0xa
	.uleb128 0x3
	.string	"i"
	.byte	0x1
	.byte	0xc
	.long	0xe0
	.byte	0x2
	.byte	0x23
	.uleb128 0x0
	.byte	0x3
	.uleb128 0x4
	.long	0x92
	.byte	0x1
	.string	"simple"
	.byte	0x1
	.byte	0xe
	.byte	0x1
	.uleb128 0x5
	.long	0xe7
	.byte	0x1
	.uleb128 0x6
	.long	0xe0
	.byte	0x0
	.uleb128 0x4
	.long	0xb0
	.byte	0x1
	.string	"~simple"
	.byte	0x1
	.byte	0x13
	.byte	0x1
	.uleb128 0x5
	.long	0xe7
	.byte	0x1
	.uleb128 0x5
	.long	0xe0
	.byte	0x1
	.byte	0x0
	.uleb128 0x7
	.byte	0x1
	.string	"operator++"
	.byte	0x1
	.byte	0x18
	.string	"_ZN6simpleppEi"
	.long	0x5a
	.byte	0x1
	.uleb128 0x5
	.long	0xe7
	.byte	0x1
	.uleb128 0x6
	.long	0xe0
	.byte	0x0
	.byte	0x0
	.uleb128 0x8
	.string	"int"
	.byte	0x4
	.byte	0x5
	.uleb128 0x9
	.byte	0x4
	.long	0x5a
	.uleb128 0xa
	.long	0x10d
	.long	0x76
	.byte	0x2
	.uleb128 0xb
	.string	"this"
	.long	0x10d
	.byte	0x1
	.uleb128 0xc
	.string	"ii"
	.byte	0x1
	.byte	0xe
	.long	0xe0
	.byte	0x0
	.uleb128 0xd
	.long	0xe7
	.uleb128 0xe
	.long	0x138
	.long	0xed
	.long	.LFB4
	.long	.LFE4
	.long	.LLST0
	.uleb128 0xf
	.long	0xf7
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0xf
	.long	0x102
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.byte	0x0
	.uleb128 0xa
	.long	0x15e
	.long	0x92
	.byte	0x2
	.uleb128 0xb
	.string	"this"
	.long	0x10d
	.byte	0x1
	.uleb128 0xb
	.string	"__in_chrg"
	.long	0x15e
	.byte	0x1
	.byte	0x0
	.uleb128 0xd
	.long	0xe0
	.uleb128 0xe
	.long	0x181
	.long	0x138
	.long	.LFB7
	.long	.LFE7
	.long	.LLST1
	.uleb128 0xf
	.long	0x142
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.byte	0x0
	.uleb128 0x10
	.long	0x1c5
	.long	0xb0
	.long	.LFB8
	.long	.LFE8
	.long	.LLST2
	.uleb128 0x11
	.string	"this"
	.long	0x10d
	.byte	0x1
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x12
	.long	0xe0
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x13
	.string	"s"
	.byte	0x1
	.byte	0x1a
	.long	0x1c5
	.byte	0x3
	.byte	0x1
	.byte	0x53
	.uleb128 0x14
	.string	"s"
	.byte	0x1
	.byte	0x1a
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 -16
	.byte	0x0
	.uleb128 0x15
	.byte	0x4
	.long	0x5a
	.uleb128 0x16
	.byte	0x1
	.string	"main"
	.byte	0x1
	.byte	0x2a
	.long	0xe0
	.long	.LFB9
	.long	.LFE9
	.long	.LLST3
	.uleb128 0x14
	.string	"s1"
	.byte	0x1
	.byte	0x2d
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x14
	.string	"s2"
	.byte	0x1
	.byte	0x2d
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x14
	.string	"s3"
	.byte	0x1
	.byte	0x2d
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 -28
	.byte	0x0
	.byte	0x0
	.section	.debug_abbrev
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x10
	.uleb128 0x6
	.uleb128 0x25
	.uleb128 0x8
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x1b
	.uleb128 0x8
	.byte	0x0
	.byte	0x0
	.uleb128 0x2
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x1
	.uleb128 0x13
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xd
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xa
	.uleb128 0x32
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x1
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0x0
	.byte	0x0
	.uleb128 0x5
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x34
	.uleb128 0xc
	.byte	0x0
	.byte	0x0
	.uleb128 0x6
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x7
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x2007
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0x0
	.byte	0x0
	.uleb128 0x8
	.uleb128 0x24
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0x9
	.uleb128 0xf
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x1
	.uleb128 0x13
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x20
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0xb
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x34
	.uleb128 0xc
	.byte	0x0
	.byte	0x0
	.uleb128 0xc
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0xd
	.uleb128 0x26
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0xe
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x1
	.uleb128 0x13
	.uleb128 0x31
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0xf
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x31
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x10
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x1
	.uleb128 0x13
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x11
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x34
	.uleb128 0xc
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x12
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x13
	.uleb128 0x34
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x32
	.uleb128 0xb
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x14
	.uleb128 0x34
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x15
	.uleb128 0x10
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x16
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.byte	0x0
	.section	.debug_pubnames,"",@progbits
	.long	0x55
	.value	0x2
	.long	.Ldebug_info0
	.long	0x20d
	.long	0x112
	.string	"simple::simple"
	.long	0x163
	.string	"simple::~simple"
	.long	0x181
	.string	"simple::operator++"
	.long	0x1cb
	.string	"main"
	.long	0x0
	.section	.debug_aranges,"",@progbits
	.long	0x34
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x4
	.byte	0x0
	.value	0x0
	.value	0x0
	.long	.Ltext0
	.long	.Letext0-.Ltext0
	.long	.LFB4
	.long	.LFE4-.LFB4
	.long	.LFB7
	.long	.LFE7-.LFB7
	.long	.LFB8
	.long	.LFE8-.LFB8
	.long	0x0
	.long	0x0
	.ident	"GCC: (GNU) 4.1.2 20070626 (Red Hat 4.1.2-14)"
	.section	.note.GNU-stack,"",@progbits
