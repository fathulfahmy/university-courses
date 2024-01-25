.model small
.stack 100h

.data
msg1    db 'Before AND: $'
msg2    db 'After AND: $'
val1    db 34h
val2    db ?

.code
mov ax, @data
mov ds, ax

; BEFORE OR -------------------
; display msg1
lea dx, msg1
mov ah, 9h
int 21h

; display val1
mov dl, val1
mov ah, 2
int 21h

; newline
mov dl, 0dh
mov ah, 2h
int 21h
mov dl,0ah
int 21h

; al AND 00101111b ---------------
mov al, val1
and al, 00101111b
mov val2, al

; AFTER OR ----------------------
; display msg2
lea dx, msg2
mov ah, 9h
int 21h

; display val2
mov dl, val2
mov ah, 2
int 21h

; terminate process
mov ah, 4ch
int 21h
end