; author: muhammad fathul fahmy bin mohd nizam
; id: sw01081798

.model	small   ; mandatory
.stack	100h    ; mandatory

.data
; declare variables
exercise2 DB 1 DUP ('*'), 0Ah, 0Dh
          DB 2 DUP ('*'), 0Ah, 0Dh
          DB 3 DUP ('*'), 0Ah, 0Dh
          DB 4 DUP ('*'), 0Ah, 0Dh
          DB 3 DUP ('*'), 0Ah, 0Dh
          DB 2 DUP ('*'), 0Ah, 0Dh
          DB 1 DUP ('*'), 0Ah, 0Dh, '$'

.code
MOV	ax, @data    ; mandatory
MOV	ds, ax      ; mandatory

; write directives 
MOV	dx, offset exercise2
MOV	ah, 9
INT 21h
MOV ah, 4ch
INT 21h
end