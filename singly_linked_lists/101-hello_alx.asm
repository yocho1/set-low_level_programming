global main
extern printf

section .text
main:
    push rbp
    mov rbp, rsp

    mov rdi, message
    xor eax, eax
    call printf

    pop rbp
    ret

section .data
    message db "Hello, ALX", 10, 0
