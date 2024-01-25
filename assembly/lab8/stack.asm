.model small
.stack 100h

.data
num1 dw 32h ; 2 in ascii
num2 dw 34h ; 4 in ascii
num3 dw 36h ; 6 in ascii
val1 dw ?

msg1	db 'Data to be push : $' ;
msg2 	db 'Data from pop   : $' ;

.code
mov ax,@data
mov ds,ax

; display msg1
lea dx, msg1
mov ah,9h
int 21h

; display num1
mov dx, num1
mov ah, 2h
int 21h 

; push num1 to stack
mov ax, num1
push ax

; current stack: 2
; --------------------------------------------------

; display newline
mov ah, 2h                    
mov dl, 0dh
int 21h
mov dl, 0ah   
int 21H

; display msg1
lea dx, msg1
mov ah,9h
int 21h

; display num2
mov dx, num2
mov ah, 2h
int 21h

; push num2 to stack
mov ax, num2
push ax

; current stack: 2 4

; --------------------------------------------------
; display newline
mov ah, 2h                    
mov dl, 0dh
int 21h
mov dl, 0ah   
int 21H

; pop stack (4) and store to val1
pop val1

; current stack: 2 

; display msg2
lea dx, msg2
mov ah,9h
int 21h

; display val1
mov dx, val1
mov ah, 2h
int 21h

; --------------------------------------------------
; display newline
mov ah, 2h                   
mov dl, 0dh
int 21h
mov dl, 0ah   
int 21H

; display msg1
lea dx, msg1
mov ah,9h
int 21h

; display num3
mov dx, num3
mov ah, 2h
int 21h

; push num3 to stack
mov ax, num3
push ax

; current stack: 2 6

; --------------------------------------------------
; display newline
mov ah, 2h                  
mov dl, 0dh
int 21h
mov dl, 0ah   
int 21H

; pop stack (6) and store to val1
pop val1

; current stack: 2 

; display msg2
lea dx, msg2
mov ah,9h
int 21h

; display val1
mov dx, val1
mov ah, 2h
int 21h

; --------------------------------------------------
; display newline
mov ah, 2h                  
mov dl, 0dh
int 21h
mov dl, 0ah   
int 21H

; pop stack (2) and store to val1
pop val1

; current stack:  

; display msg2
lea dx, msg2
mov ah,9h
int 21h

; display val1
mov dx, val1
mov ah, 2h
int 21h

mov ah,4ch
int 21h
end	
