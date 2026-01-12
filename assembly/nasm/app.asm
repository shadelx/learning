;define variables in the data section
section .data
    hello: db "hello vic", 10    ;string to print
    helloLen: equ $-hello        ;length of string

section .text
    global _start               ;entry point for linker

    _start:		x86 -64
        mov rax,1               ;sys_write
        mov rdi,1               ;stdout
        mov rsi,hello           ;message to write
        mov rdx,helloLen        ;message length
        syscall                 ;call kernel

        ;end program
        mov rax,60              ;sys_exit
        mov rdi,0               ;error code 0 (success)
        syscall
