.model small
.stack 100h

.data
msg1    db 'Enter number/character: $'
msg2    db '    Before RCL: $'
msg3    db '    After RCL: $'
input1  db ?

.code
mov ax, @data
mov ds, ax

; display string msg1 ---------------------
lea dx, msg1
mov ah, 9h
int 21h

; request input
mov ah, 1h
int 21h
mov input1, al

; display msg2 ----------------------------
lea dx, msg2
mov ah, 9h
int 21h

; display single char input1
mov dl, input1
mov ah, 2h
int 21h

; rotate carry left 2 times ---------------
mov al, input1
rcl al, 1
rcl al, 1
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