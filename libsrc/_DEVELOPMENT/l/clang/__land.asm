
SECTION code_l_clang

IF __CPU_Z80__
PUBLIC __land


; and dehl with iybc
__land:
    push af
    ld a,d
    and iyh
    ld d,a
    ld a,e
    and iyl
    ld e,a
    ld a,h
    and b
    ld h,a
    ld a,l
    and c
    ld l,a
    pop af
    ret 
ENDIF
