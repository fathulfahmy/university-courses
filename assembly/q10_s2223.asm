.model small
.stack 100h

.data
divisor     db 5
result      db ?
carry       db ?
msg         db 'divisible by 5$'


.code
mov ax, @data
mov ds, ax

; read input and store input in al
mov ah, 1
int 21h

; clear ah
mov ah, 0
; remove ascii from al
sub al, '0'

; divide ax (ah+al) with divisor (5)
div divisor

; remainder ah, dividend al
mov carry, ah
mov result, al

cmp carry, 0
je section1
jne endprogram

section1:
    lea dx, msg
    mov ah, 9
    int 21h

endprogram:
mov ah, 4ch
int 21h
end