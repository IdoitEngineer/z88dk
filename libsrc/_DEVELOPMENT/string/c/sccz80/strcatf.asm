; strcat function for use with far pointers
; 31/3/00 GWL

;
; $Id: strcat_far.asm,v 1.5 2017-01-02 20:37:10 aralbrec Exp $
;

IF !__CPU_INTEL__ && !__CPU_GBZ80__ && !__CPU_Z180__ && !__CPU_RABBIT__ && !__CPU_KC160__

    SECTION   code_clib
    EXTERN __far_init    ;Get the initial bindings
    EXTERN __far_reset   ;Reset to initial bindings
    EXTERN __far_page    ;Page in the far segment
    EXTERN __far_incptr  ;Increment a far pointer (returning near address)
    PUBLIC strcatf
    PUBLIC _strcatf


;far *strcat(far *s1,far *s2)
; concatenates s2 onto the end of s1

.strcatf
._strcatf
    ld      ix,2
    add     ix,sp  
    ld      c,(ix+0)
    ld      b,(ix+1)
    ld      e,(ix+2)        ; E'B'C'=s2
    exx
    ld      c,(ix+4)
    ld      b,(ix+5)
    ld      e,(ix+6)        ; EBC=s1
    call    __far_init
    ex      af,af'          ; save seg 1 binding
    call    __far_page      ; start with s1
    jr      startfind
.findend
    call    __far_incptr
.startfind
    ld      a,(hl)          ; char from s1
    and     a
    jr      nz,findend
    exx			; switch to s2
.catloop
    call    __far_page
    ld      a,(hl)          ; char from s2
    ld      iyl,a
    call    __far_incptr
    exx
    call    __far_page
    ld      a,iyl
    ld      (hl),a          ; place in s1
    call    __far_incptr
    exx
    and     a
    jr      nz,catloop
    ex      af,af'
    call    __far_reset
    ld      l,(ix+4)
    ld      h,(ix+5)
    ld      e,(ix+6)        ; EHL=s1
    ret

ENDIF
