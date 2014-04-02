
; int posix_memalign(void **memptr, size_t alignment, size_t size)

XDEF _posix_memalign

_posix_memalign:

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
   
   INCLUDE "alloc/malloc/z80/asm_posix_memalign.asm"
