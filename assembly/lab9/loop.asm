.model small
.stack 100H

.data
num1 db 9 
msg1 db 'The number is : $'

.code
mov ax, @data
mov ds, ax

; set number of loop to 5 times
mov cx, 5

print:
    ; display msg1
    lea dx, msg1
    mov ah,9h
    int 21h 

    ; display num1
    mov dl, num1
    add dl, '0'
    mov ah, 2h
    int 21h 

    ; decrement num1
    mov al, num1
    dec al
    mov num1,al

    ; display newline
    mov ah, 2h                   
    mov dl, 0dh
    int 21h
    mov dl, 0ah   
    int 21H

loop print

exit:

; terminate program
mov ah,4ch
int 21h
end
