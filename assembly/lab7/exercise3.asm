.model small
.stack 100h

.data
inputMsg1   db 'Enter num1: $'
inputMsg2   db 'Enter num2: $'
num1        db ?
num2        db ?
mulMsg1     db 'Multiplication result: $'
mulResult   db ?
divMsg1     db 'Division result: $'
divMsg2     db 'Division carry: $'
divResult   db ?
divCarry    db ?

.code
; 9h reads dx and display to ah(terminal)
; 2h reads dl and display to ah(terminal)
; 1h reads ah(terminal) and store in al

; sub register, '0' to remove ascii 
; (convert ascii to decimal for arithmetic operation)

; add register, '0' to add ascii 
; (convert decimal to ascii to display to terminal)

mov ax, @data
mov ds, ax

; REQUEST NUM1 --------------------------
; display inputMsg1
lea dx, inputMsg1   
mov ah, 9h
int 21h
; read num1
mov ah, 1h         
int 21h
sub al, '0'
mov num1, al

; newline
mov dl, 0dh
mov ah, 2h
int 21h
mov dl,0ah
int 21h

; REQUEST NUM2 --------------------------
; display inputMsg2
lea dx, inputMsg2
mov ah, 9h
int 21h
; read num2
mov ah, 1h        
int 21h
sub al, '0'
mov num2, al

; newline
mov dl, 0dh
mov ah, 2h
int 21h
mov dl,0ah
int 21h

; MULTIPLICATION -------------------------
; multiply num1 and num2
mov al, num1
mov bl, num2
mul bl
mov mulResult, al

; display mulMsg1
lea dx, mulMsg1
mov ah, 9h
int 21h
; display mulResult
add mulResult, '0'
mov dl, mulResult
mov ah, 2h
int 21h

; newline
mov dl, 0dh
mov ah, 2h
int 21h
mov dl,0ah
int 21h

; clear garbage in ah
mov ah, 0

; DIVISION ------------------------------
; divide num1 and num2
mov al, num1
mov bl, num2
div bl
mov divResult, al
mov divCarry, ah

; display divMsg1
lea dx, divMsg1
mov ah, 9h
int 21h
; display divResult
add divResult, '0'
mov dl, divResult
mov ah, 2h
int 21h

; newline
mov dl, 0dh
mov ah, 2h
int 21h
mov dl,0ah
int 21h

; display divMsg2
lea dx, divMsg2
mov ah, 9h
int 21h
; display divCarry
add divCarry, '0'
mov dl, divCarry
mov ah, 2h
int 21h

; terminate process
mov ah, 4ch
int 21h
end