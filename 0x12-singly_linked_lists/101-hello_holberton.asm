	global main
	extern printf
	extern exit

main:
	mov rdi, hello
	mov eax, 0
	call printf

	mov rax, 60
	xor rdi, rdi
	call exit
hello db "Hello, Holberton", 0
