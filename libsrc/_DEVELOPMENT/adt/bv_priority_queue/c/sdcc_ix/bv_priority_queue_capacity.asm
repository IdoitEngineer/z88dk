
; size_t bv_priority_queue_capacity(bv_priority_queue_t *q)

XDEF _bv_priority_queue_capacity

LIB _ba_priority_queue_capacity

_bv_priority_queue_capacity:

   jp _ba_priority_queue_capacity

   INCLUDE "adt/bv_priority_queue/z80/asm_bv_priority_queue_capacity.asm"
