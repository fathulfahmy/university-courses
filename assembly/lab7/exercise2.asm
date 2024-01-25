.model small     
.stack 100h      

.data
num1    db 8
num2    db 3
result  db ?      
msg1    db 'The result is: $'

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

; convert ASCII to decimal
sub num1, '0'
sub num2, '0'

; subtract num1 and num2
mov al, num1    
mov bl, num2    
sub al, bl      
mov result, al  

; display msg1
lea dx, msg1    
mov ah, 9h     
int 21h         
; display result
add result, '0'     
mov dl, result  
mov ah, 2h       
int 21h         

; terminate process
mov ah, 4ch     
int 21h
end