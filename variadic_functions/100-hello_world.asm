section .data
message db "Hello, World", 10

section .text
global main
main:
	; write syscall
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 13
	syscall

	; exit syscall
	mov eax, 60
	xor rdi, rdi
	syscall
