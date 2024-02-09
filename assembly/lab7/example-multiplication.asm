.model small
.stack 100h

.data
num1 db 32h ; 2 in ascii
num2 db 33h ; 3 in ascii
result db ?
msg1 db 'the result is: $'

.code
mov ax, @data
mov ds, ax

mov al, num1    ; move num1 to al        
mov bl, num2    ; move num2 to bl       
sub bl, '0'

mul bl            
add al, '0'
mov result, al   

; display msg1
lea dx, msg1
mov ah, 09h
int 21h

; display result
mov ah, 2
mov dl, result
int 21h

; terminates process
mov ah, 4ch
int 21h

end