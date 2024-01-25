; author: muhammad fathul fahmy bin mohd nizam
; id: sw01081798

.model	small   ; mandatory
.stack	100h    ; mandatory

.data
; declare variables
exercise1 DB 'Hello', 0Ah, 0Dh 
          DB '          World', 0Ah, 0Dh 
          DB '                    Everyone', 0Ah, 0Dh , '$'

.code
MOV	ax, @data    ; mandatory
MOV	ds, ax      ; mandatory

; write directives 
LEA	dx, exercise1
MOV	ah, 9
INT 21h
MOV ah, 4ch
INT 21h
end