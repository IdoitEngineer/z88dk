
; void *wa_stack_top(wa_stack_t *s)

XDEF _wa_stack_top

LIB _w_array_back

_wa_stack_top:

   jp _w_array_back

   INCLUDE "adt/wa_stack/z80/asm_wa_stack_top.asm"
