.model small
.stack 100h

.data
msg1    db 'Enter number/character: $'
input1  db ?
msg2    db '    Before SAR: $'
msg3    db '    After SAR : $'

.code
mov ax, @data
mov ds, ax

; display msg1 ---------------------------
lea dx, msg1
mov ah, 9h
int 21h

; request input
mov ah, 1h
int 21h
mov input1, al

; display msg2 ---------------------------
lea dx, msg2
mov ah, 9h
int 21h

; display single char input1
mov dl, input1
mov ah, 2h
int 21h

; shift arithmetic right 3 bit -----------
mov al, input1
sar al, 1
sar al, 1
sar al, 1
mov input1, al

; display msg3 ----------------------------
lea dx, msg3
mov ah, 9h
int 21h

; display single char input1
mov dl, input1
mov ah, 2h
int 21h

mov ah, 4ch
int 21h
end