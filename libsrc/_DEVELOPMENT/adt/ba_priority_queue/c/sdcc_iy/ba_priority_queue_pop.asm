
; int ba_priority_queue_pop(ba_priority_queue_t *q)

XDEF _ba_priority_queue_pop

_ba_priority_queue_pop:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "adt/ba_priority_queue/z80/asm_ba_priority_queue_pop.asm"
