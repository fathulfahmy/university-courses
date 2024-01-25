; 9h reads dx and display to ah(terminal)
; 2h reads dl and display to ah(terminal)
; 1h reads ah(terminal) and store in al

; sub register, '0' to remove ascii (convert ascii to decimal for arithmetic operation)
; add register, '0' to add ascii (convert decimal to ascii to display to terminal)

; ------------------------------------------------------

; ax is ah + al, usually used for arithmetic operations
; bx is bh + bl, usually used to support other operatios
; cx is ch + cl, usually used for counting or looping
; dx is dh + dl, usually used to store value

; 0 ASCII is 48 DECIMAL
; 1 ASCII is 49 DECIMAL
; 2 ASCII is 50 DECIMAL

; -------------------------------------------------------

09h             ; to display ASCII string
01h             ; to read an ASCII character
02h             ; to display ASCII character

; -------------------------------------------------------

; CONVERTING ASCII TO DECIMAL and CONVERTING DECIMAL TO ASCII 
MOV ax, 1       ; to read ASCII input from user
                ; example - user enter 50 decimal 

SUB ax, '0'     ; to remove ASCII/ to convert ASCII to DECIMAL
                ; now ax can be used to do arithmetic operation

                ; do arithmetic operation
ADD ax, 10      ; add 10 to ax since ax is now a decimal

ADD ax, '0'     ; to add ASCII/ to convert DECIMAL to ASCII

MOV dl, ax
MOV ah, 2       ; function 2 read dl and display to ah (terminal)
INT 21
