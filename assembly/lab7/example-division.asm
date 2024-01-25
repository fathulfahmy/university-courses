.model small
.stack 100h

.data
result DB ?
carry DB ?
msg1 DB 'The result is: $'
msg2 DB 'The carry is: $'
num1 DB 33h ; 2 in ASCII
num2 DW 37h ; 3 in ASCII

.code
MOV ax, @data
MOV ds, ax

MOV ax, num2        ; move num2 to ax
SUB ax, 48          ; convert ASCII to integer
MOV bl, num1        ; move num2 to bl
SUB bl, 48          ; convert ASCII to integer

DIV bl              ; divide al and bl 
                    ; store result to al
                    ; store remainde to ah

ADD al, 48          ; convert integer to ASCII
MOV result, al      ; store al to result 

ADD ah, 48          ; convert integer to ASCII
MOV carry, ah       ; store ah to carry

; display msg1
LEA dx, msg1
MOV ah, 09h
INT 21h

; display result
MOV ah, 2
MOV dl, result
INT 21h

; display msg2
LEA dx, msg2
MOV ah, 09h
INT 21h

; display carry
MOV ah, 2
MOV dl, carry
INT 21h

; terminates process
MOV ah, 4ch
INT 21h

END