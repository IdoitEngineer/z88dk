
; int fsetpos(FILE *stream, const fpos_t *pos)

XDEF _fsetpos

_fsetpos:

   pop af
   pop bc
   pop hl
   
   push hl
   push bc
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   
   call asm_fsetpos
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_fsetpos.asm"
