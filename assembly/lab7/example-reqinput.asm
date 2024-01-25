.model small     ; set memory model to small
.stack 100h      ; set stack size to 100 hexadecimal

.data
msg1 DB 'Enter one number: $'
msg2 DB 'You have entered: $'
num1 DB ?       ; declare num1 with uninitialized value

.code
MOV ax, @data
MOV ds, ax      ; move .data to data segment

; DISPLAY MSG1 --------------------------------------------------
LEA dx, msg1    ; store offset address of msg1 to dx
MOV ah, 09h     ; function 9h read dx and display to ah(terminal)
INT 21h         ; call DOS 

; DISPLAY NUM1 --------------------------------------------------
MOV ah, 01h     ; function 1h to read ah(terminal) and store value to al
INT 21h         ; call DOS 
MOV num1, al    ; store al(input) to num1

; DISPLAY NEWLINE -----------------------------------------------
MOV ah, 02h     ; function 2h read dl and display to ah(terminal)
MOV dl, 0dh     ; line feed, advance cursor by one line
INT 21h         ; call DOS 
mov dl, 0ah     ; carriage return, move cursor back to beginning of line
int 21H         ; call DOS 

; DISPLAY MSG2 --------------------------------------------------
LEA dx, msg2    ; store offset address of msg2 to dx
MOV ah, 09h     ; function 9h read dx and display to ah(terminal)
INT 21h         ; call DOS

MOV ah, 02h     ; function 2h read dl and display to ah(terminal)
MOV dl, num1    ; store num1 to dl for function 2h to read
INT 21h         ; call DOS

MOV ah, 4ch     ; terminate process
INT 21h         ; call DOS

END