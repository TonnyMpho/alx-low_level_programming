section .data
	format db "Hello, Holberton!\n", 0

section .text
	global main
	extern printf

main:
	push format
	call printf
	add rsp, 8  ; Restore the stack pointer after the call

	xor eax, eax  ; Return 0 from the main function
	ret
