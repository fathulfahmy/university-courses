.model small
.stack 100h

.data
num1    db  ?   ; declare byte variable with uninitialized value
num2    db  5   ; declare byte variable with initial value 5
msg1    db  'the result is: $'  ; declare string and end string with $

array1  db  5, 10, 15, 20, 25   ; declare array with 5 values
array2  db  10  dup(5)          ; declare array with size 10 with initial value 5

byte1    db  ?   ; declare byte 8-bit variable 
word1    dw  ?   ; declare word 16-bit variable 
double1  dd  ?   ; declare doubleword 32-bit variable 
quadra1  dq  ?   ; declare quadraword 64-bit variable

.code
mov ax, @data   ; move variable in data to ax
mov ds, ax      ; move ax to data segment

; conversion
add num1, '0'   ; convert number to ascii
sub num1, '0'   ; convert ascii to number

; function 1, request input
mov ah, 1h      ; read input (byte) from user and store in al
int 21h         ; call DOS API
mov result, al  ; move al to result

; funciton 2, display single char
mov dl, num1    ; move character (byte) to dl
mov ah, 2h      ; read dl and display to terminal
int 21h         ; call DOS API

; function 9, display string
lea dx, msg1    ; load string (byte) to dx
mov ah, 9h      ; read dx and display to terminal
int 21h         ; call DOS API

; addition
mov al, num1    ; move num1 to al
mov bl, num2    ; move num2 to bl
add al, bl      ; al + bl. store result in LHS (al)
mov result, al  ; move al to result (byte)

; subtraction
mov al, num1    ; move num1 to al
mov bl, num2    ; move num2 to bl
sub al, bl      ; al - bl. store result in LHS (al)
mov result, al  ; move al to result (byte)

; multiplication
mov al, num1    ; move num1 to al
mov bl, num2    ; move num2 to bl
mul bl          ; al * bl. store result in ax
mov result, ax  ; move ax to result (word)

; division
mov ax, num1    ; move num1 to ax
mov bl, num2    ; move num2 to bl
div bl          ; ax / bl. store remainder in ah. store dividend in al.

;increment decrement
mov al, num1    ; move num1 to al
inc al          ; increment al 1 time
inc al, 2       ; increment al 2 time
dec al          ; decrement al 1 time
dec al, 2       ; decrement al 2 time
mov num1, al    ; move al to num1

; rotate shift
mov al, num1
shl al          ; shift left 1 time
sal al, 1       ; shift arithmeitc left 1 time
shr al, 2       ; shift right 2 time
sar al, 3       ; shift arithmetic right 3 time

rol al          ; rotate left 1 time
rcl al, 1       ; rotate carry left 1 time
ror al, 2       ; rotate right 2 time
rcr al, 3       ; rotate carry right 3 time

; logical operation
mov al, binnum1     ; move binnum1 to al
mov bl, 00101111b   ; move a binary number to bl

and al, bl         ; al and bl. and every binary bit
mov result, al     ; move al to result   

or al, bl          ; al or bl. or every binary bit
mov result, al     ; move al to result

xor al, bl         ; al xor bl. xor every binary bit
mov result, al     ; move al to result

not al             ; not every binary bit
mov result, al     ; move al to result        

; stack
push ax         ; push value in ax to stack
pop ax          ; pop stack and store in ax

; jmp
jmp section1    ; jump to section1

; conditional jmp
cmp num1, num2
jg  section1    ; num1 > num2
jge section2    ; num1 >= num2
ja  section3    ; num1 > num2
jae section4    ; num1 >= num2

jl  section1    ; num1 < num2
jle section2    ; num1 <= num2
jb  section3    ; num1 < num2
jbe section4    ; num1 <= num2

je  section1    ; num1 == num2
jne section2    ; num1 != num2
jz  section3    ; num1 == 0
jnz section4    ; num1 != 0

; loop
mov cx, 5           ; set number of loop to 5
section1:           ; label code section
    mov al, num1
    mov bl, num2
    add al, bl
    loop section1   ; loop section


