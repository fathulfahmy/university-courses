.model small
.stack 100h

.data
msg1    db 'Before NOT: $'
msg2    db 'After NOT: $'
num1    db 63h
num2    db ?

.code
; 9h reads dx and display to ah(terminal)
; 2h reads dl and display to ah(terminal)
; 1h reads ah(terminal) and store in al

; sub register, '0' to remove ascii (convert ascii to decimal for arithmetic operation)
; add register, '0' to add ascii (convert decimal to ascii to display to terminal)

mov ax, @data
mov ds, ax

; display msg1 --------------
lea dx, msg1
mov ah, 9h
int 21h

; display num1
mov dl, num1
mov ah, 2h
int 21h

; NOT num1 and store to num2
mov al, num1
not al
mov num2, al

; convert binary to ASCII 
; add num2, '0'

; display msg2 --------------
lea dx, msg2
mov ah, 9h
int 21h

; display num2
mov dl, num2
mov ah, 2h
int 21h

; terminate process
mov ah, 4ch
int 21h
end