.model small
.stack 100h

.data
num1    db 5
result  db ?
msg1    db 'The result is $'

.code
mov ax, @data
mov ds, ax

; store num1 in al
mov al, num1
add al, '0'

;---------------------------------------------------
testing:
; addition num1 + 2 and store in result 
add al, 2
mov result, al

; go to section named display:
jmp display

;--------------------------------------------------
; this part is skipped
sub al, 4
mov result, al

;---------------------------------------------------
display:
    ; display msg1 
    lea dx, msg1
    mov ah, 9h
    int 21h

    ; display addition result
    mov dl, result
    mov ah, 2h
    int 21h

    ; go to section named testing:
    ; jmp testing

    ; this part will never be met due to infinite loop
    ; between testing and display
    mov ah, 4ch
    int 21h
    end