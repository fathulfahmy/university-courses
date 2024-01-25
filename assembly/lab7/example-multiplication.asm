.model small
.stack 100h

.data
num1 DB 32h ; 2 in ASCII
num2 DB 33h ; 3 in ASCII
result DB ?
msg1 DB 'The result is: $'

.code
MOV ax, @data
MOV ds, ax

MOV al, num1        ; move num1 to al
SUB al, 48          ; convert ASCII to integer
MOV bl, num2        ; move num2 to bl
SUB bl, 48          ; convert ASCII to integer

MUL bl              ; multiply al and bl
ADD al, 48          ; convert integer to ASCII
MOV result, al      ; store al to result 

; display msg1
LEA dx, msg1
MOV ah, 09h
INT 21h

; display result
MOV ah, 2
MOV dl, result
INT 21h

; terminates process
MOV ah, 4ch
INT 21h

END