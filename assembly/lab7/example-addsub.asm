.model small
.stack 100h

.data
num1 DB 1
num2 DB 3
result DB ?
msg1 DB 'The result is: $'

.code 
MOV ax, @data
MOV ds, ax

; add 2 num
MOV al, num1
MOV bl, num2
ADD al, bl
ADD al, 30h ; convert decimal to ASCII
MOV result, al

; dislay msg1
LEA dx, msg1
MOV ah, 09h
INT 21h

; display result
MOV ah, 2
MOV dl, result
INT 21h

MOV ah, 4ch
INT 21h

END