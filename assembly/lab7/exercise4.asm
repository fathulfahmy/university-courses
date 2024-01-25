.model small
.stack 100h

.data
msg1    db 'Before OR: $'
msg2    db 'After OR: $'
val1    db 32h
; 34 hexadecimal 4 decimal 00110100 binary
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

; al OR 00101111b ---------------

;       0011 0100 - val1 (34h 4ascii)
; OR    0010 1111
;       0011 1111 - val2 (3Fh ?ascii)

mov al, val1
or al, 00101111b
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