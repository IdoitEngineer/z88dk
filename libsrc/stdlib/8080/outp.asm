; CALLER linkage for function pointers

IF __CPU_INTEL__

SECTION code_clib
PUBLIC outp
PUBLIC _outp
EXTERN asm_outp

.outp
._outp

   pop af
   pop de
   pop bc
   push bc
   push de
   push af
   
   jp asm_outp

ENDIF

