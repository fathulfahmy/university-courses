.model small
.stack 100h

.data
num1    db  ?
num2    db  ?
num3    db  ?
largest db  ?
msg1    db  'Enter number: $'
msg2    db  'The largest number is $'

.code
mov ax, @data
mov ds, ax

; display msg1
lea dx, msg1
mov ah, 9h
int 21h

; read input and store to num1
mov ah, 1h
int 21h
mov num1, al

; display newline
mov ah, 2h
mov dl, 0dh
int 21h
mov dl, 0ah
int 21h

; --------------------------------------------------
; display msg1
lea dx, msg1
mov ah, 9h
int 21h

; read input and store to num2
mov ah, 1h
int 21h
mov num2, al

; display newline
mov ah, 2h
mov dl, 0dh
int 21h
mov dl, 0ah
int 21h

; --------------------------------------------------
; display msg1
lea dx, msg1
mov ah, 9h
int 21h

; read input and store to num3
mov ah, 1h
int 21h
mov num3, al

; display newline
mov ah, 2h
mov dl, 0dh
int 21h
mov dl, 0ah
int 21h

; --------------------------------------------------
; assign num1 as largest
mov al, num1
mov largest, al

; (if num1 > num2) go to compar
cmp al, num2
JG compar

; (else) assign num2 as largest
mov al, num2
mov largest, al

; --------------------------------------------------
compar:
    ; (if largest > num3) go to print
    mov al, largest
    cmp al, num3
    JG print

    ; (else) assign num3 as largest
    mov al, num3
    mov largest, al

; --------------------------------------------------
print:
    ; display newline
    mov ah, 2h
    mov dl, 0dh
    int 21h
    mov dl, 0ah
    int 21h

    ; display msg2
    lea dx, msg2
    mov ah, 9h
    int 21h

    ; display largest num
    mov dl, largest
    mov ah, 2h
    int 21h

    mov ah, 4ch
    int 21h
    end