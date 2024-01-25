.model small    
.stack 100h     

.data
msg1    db 'Enter one number: $'
num1    db ?       
msg2    db 'Number after DEC: $'
num2    db ?       

.code
; 9h reads dx and display to ah(terminal)
; 2h reads dl and display to ah(terminal)
; 1h reads ah(terminal) and store in al

mov ax, @data
mov ds, ax      

; display msg1 --------------------
lea dx, msg1    
mov ah, 9h     
int 21h         

; display num1
mov ah, 1h      
int 21h         
mov num1, al    

; decrement num1 and store in num2
mov al, num1    
dec al          
mov num2, al    

; newline
mov dl, 0dh
mov ah, 2h
int 21h
mov dl,0ah
int 21h

; display msg2 --------------------
lea dx, msg2    
mov ah, 9h     
int 21h         

; display num2
mov ah, 2h       
mov dl, num2    
int 21h         

; terminate process
mov ah, 4ch     
int 21h         
end