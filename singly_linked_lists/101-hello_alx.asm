section .data
    msg db "Hello, ALX", 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [msg]
    xor eax, eax
    call printf

    pop rbp
    ret
