
; int getc(FILE *stream)

XDEF _getc

LIB _fgetc

_getc:

   jp _fgetc

   INCLUDE "stdio/z80/asm_getc.asm"
