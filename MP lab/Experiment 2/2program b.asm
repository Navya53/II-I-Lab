ASSUME CS: CODE, DS: DATA
DATA SEGMENT
LIST DW 0053H, 0025H, 0019H, 0002H
COUNT EQU 04H
DATA ENDS
CODE SEGMENT
START:
MOV AX, DATA
MOV DS, AX
MOV DL, COUNT
UP1 : MOV CH, 00H,
LEA SI, LIST
MOV CL, DL
UP: MOV AX,[SI]
CMP AX, [SI+2]
JNB DOWN
XCHG [SI+2], AX
MOV [SI], AX
DOWN : ADD SI, 02H
LOOP UP
DEC DL
JNZ UP1
INT 03H 
CODE ENDS
END START 
