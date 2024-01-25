.model small
.stack 100h

.data
msg1 DB 'Before INC: $'
msg2 DB 'After INC: $'
val1 DB 35h ; 5 in ASCII
val2 DB ?

.code
MOV ax, @data
MOV ds, ax

; display msg 1
LEA dx, msg1
MOV ah, 09h
INT 21h

; display val1
MOV ah, 2
MOV dl, val1
INT 21h

; increment val1 and store to val2
MOV al, val1
INC al
INC al
INC al
MOV val2, al

; display msg2
LEA dx, msg2
MOV ah, 09h
INT 21h

; display val2
MOV ah, 2
MOV dl, val2
INT 21h

MOV ah, 4ch
INT 21h

END