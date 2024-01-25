.model small

.stack 100h

.data
num1    db 01010101b
msg1    db 'Before SHL: $'
msg2    db '    After SHL : $'

.code
mov ax, @data
mov ds, ax

; display string msg1 --------------------
lea dx, msg1
mov ah, 9h
int 21h

; display single char num1
mov dl, num1
mov ah, 2h
int 21h

; shift num1 to the left 2 times --------
mov al, num1
shl al, 1
shl al, 1
mov num1, al

; display string msg2 -------------------
lea dx, msg2
mov ah, 9h
int 21h

; display single char num1
mov dl, num1
mov ah, 2h
int 21h

mov ah, 4ch
int 21h
end