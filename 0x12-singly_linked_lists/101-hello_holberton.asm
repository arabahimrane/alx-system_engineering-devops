global main
section .data
	my_str db "Hello, Holberton", 0x0a
	len equ $ - my_str
section .text
main:
	mov rax, 1
	mov rdi, 1
	lea rsi, [my_str]
	mov rdx, len
	syscall
	mov rax,60
	xor rdi, rdi
	syscall
