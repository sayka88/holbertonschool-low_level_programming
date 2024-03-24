	global main

	section .text
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 13
	syscall

	mov eax, 60
	xor rdi, rdi
	syscall

message:
	db "Hello, World", 13
