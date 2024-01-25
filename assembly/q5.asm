.model small
.stack 100h

.data
num_array   dw 10d, 20h, 400d, 1f25h
ten         dw 10
result      dw ?
msg         db 'Result: $'

.code
mov ax, @data
mov ds, ax

; sum num in array
; increment index by 2 because dw is 16-bit
mov ax, 0
add ax, [num_array+0]
add ax, [num_array+2]
add ax, [num_array+4]
add ax, [num_array+6]
mov result, ax

; display msg
lea dx, msg
mov ah, 9h
int 21h

; display sum
mov ax, result
mov cx, 4

; extract last digit of ax
; div num with 10 to get a remainder
; push remainder to stack

div_loop:
    mov dx, 0       
    div ten         ; div ax with ten and store result in dl
    add dl, '0'     ; convert to ascii
    push dx         

    loop div_loop

mov cx, 4
pop_loop:
    pop dx
    mov ah, 2h
    int 21h

    loop pop_loop

mov ah, 4ch
int 21h
end