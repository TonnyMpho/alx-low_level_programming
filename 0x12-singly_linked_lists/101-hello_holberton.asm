section .data
	message db "Hello, Holberton", 0xA, 0

section .text
	global main
	extern printf

main:
	push message
	call printf ;call printf
	add rsp, 8 ;resert the stack

	xor, eax, eax
	ret
