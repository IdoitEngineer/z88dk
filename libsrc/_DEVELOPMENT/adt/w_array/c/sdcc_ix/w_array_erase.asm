
; size_t w_array_erase(w_array_t *a, size_t idx)

XDEF _w_array_erase

_w_array_erase:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "adt/w_array/z80/asm_w_array_erase.asm"
