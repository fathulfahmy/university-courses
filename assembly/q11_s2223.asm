.model small
.stack 100h

.data
marks       db 5, 10, 15, 20, 25, 30, 35, 40, 45, 50
passed      db 0
checked     db 0

.code
mov ax, @data
mov ds, ax

mov bx, 0

section1:
    mov al, [marks+bx]

    cmp checked, 10
    ; if checked == 10 end program
    je section3
    ; else increase number of checked student
    add checked, 1

    cmp al, 40
    ; if > 40 pass increase number of passed
    jg section2
    ; else check next student
    add bx, 1
    jmp section1

section2:
    add passed, 1
    add bx, 1
    jmp section1

section3:
    add passed, '0'
    mov dl, passed
    mov ah, 2
    int 21h

    mov ah, 4ch
    int 21h
    end