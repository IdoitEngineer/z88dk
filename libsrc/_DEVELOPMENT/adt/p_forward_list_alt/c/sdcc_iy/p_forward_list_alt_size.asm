
; size_t p_forward_list_alt_size(p_forward_list_alt_t *list)

XDEF _p_forward_list_alt_size

LIB _p_forward_list_size

_p_forward_list_alt_size:

   jp _p_forward_list_size

   INCLUDE "adt/p_forward_list_alt/z80/asm_p_forward_list_alt_size.asm"
