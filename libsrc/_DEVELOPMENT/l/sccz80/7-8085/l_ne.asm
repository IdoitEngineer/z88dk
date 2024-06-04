;       Z88 Small C+ Run time Library
;       Moved functions over to proper libdefs
;       To make startup code smaller and neater!
;
;       6/9/98  djm
;       13/5/99 djm Added carry conditions...
;       2024/6  feilipu modified for 8085 SUB

SECTION code_clib
SECTION code_l_sccz80

PUBLIC l_ne
PUBLIC l_ne_hlbc

.l_ne

    ld bc,de

.l_ne_hlbc
    ; BC != HL
    ; set carry if true

    sub hl,bc

    scf
    ld hl,1
    ret nz

    or a
    dec l
    ret
