; $Id: bit_fx3.asm,v 1.4 2016-04-23 21:06:32 dom Exp $
;
; Generic platform sound effects module.
; Alternate sound library by Stefano Bodrato
;

IF  !__CPU_GBZ80__&&!__CPU_INTEL__
    SECTION code_clib
    PUBLIC  bit_fx3
    PUBLIC  _bit_fx3
    INCLUDE "games/games.inc"

    EXTERN  bit_open
    EXTERN  bit_open_di
    EXTERN  bit_close
    EXTERN  bit_close_ei


bit_fx3:
_bit_fx3:

  IF    SOUND_ONEBIT_port>=256
    exx
    ld      bc, SOUND_ONEBIT_port
    exx
  ENDIF

    ld      a, l
    cp      8
    ret     nc
    add     a, a
    ld      e, a
    ld      d, 0
    ld      hl, table
    add     hl, de
    ld      a, (hl)
    inc     hl
    ld      h, (hl)
    ld      l, a
    jp      (hl)

table:
    defw    blirp2                      ; effect #0
    defw    blirp
    defw    coff                        ; effect #2
    defw    blurp
    defw    descending
    defw    ascending
    defw    descending2
    defw    fx7                         ; effect #7

blirp:
    call    bit_open_di
    ld      b, 255
expl:
    push    af
    ld      a, SOUND_ONEBIT_mask
    ld      h, bit_fx3/256
    ld      l, b
    and     (hl)
    ld      l, a
    pop     af
    xor     l
    ONEBITOUT


    push    bc
dly:
    nop
    djnz    dly
    pop     bc

    push    af
    ld      a, SOUND_ONEBIT_mask
    ld      h, bit_fx3/256
    ld      l, b
    and     (hl)
    ld      l, a
    pop     af
    xor     l

    ONEBITOUT


    push    bc
    push    af
    ld      a, 255
    sub     b
    ld      b, a
    pop     af
dly2:
    nop
    djnz    dly2
    pop     bc

    djnz    expl

    call    bit_close_ei
    ret


blirp2:
    call    bit_open_di
    ld      b, 100
blrp:
    push    af
    ld      a, SOUND_ONEBIT_mask
    ld      h, bit_fx3/256
    ld      l, b
    and     (hl)
    ld      l, a
    pop     af
    xor     l
    ONEBITOUT


    push    bc
    push    af
    ld      a, 255
    sub     b
    ld      b, a
    pop     af
dlyb:
    nop
    djnz    dlyb
    pop     bc

    xor     SOUND_ONEBIT_mask

    ONEBITOUT


    push    bc
dlya:
    nop
    djnz    dlya
    pop     bc


    djnz    blrp

    call    bit_close_ei
    ret


; Steam engine
coff:
    call    bit_open_di
    ld      hl, bit_fx3
coff2:
    push    af
    ld      a, SOUND_ONEBIT_mask
    and     (hl)
    ld      b, a
    pop     af
    xor     b

    ONEBITOUT


    ld      b, (hl)
cdly:
    djnz    cdly

    inc     hl
    bit     7, l
    jr      z, coff2

    call    bit_close_ei
    ret


blurp:
    call    bit_open_di
    ld      b, 255
blurp2:
    push    af
    ld      a, SOUND_ONEBIT_mask
    ld      h, bit_fx3/256
    ld      l, b
    and     (hl)
    ld      l, a
    pop     af
    xor     l

    ONEBITOUT


    push    af
    ld      a, (hl)
dblurp:
    dec     a
    jr      nz, dblurp
    pop     af

    djnz    blurp2

    call    bit_close_ei
    ret


; descending buzzing noise
descending:
    call    bit_open_di
    ld      hl, 1000

desc1:
    push    hl
    ld      b, 16
desc2:
    rl      l
    rl      h
    jr      nc, desc3
    xor     SOUND_ONEBIT_mask

    ONEBITOUT


desc3:
    ld      e, 5
desc4:
    dec     e
    jr      nz, desc4

    djnz    desc2

    pop     hl
    dec     hl
    ld      c, a
    ld      a, h
    or      l
    ld      a, c
    jr      nz, desc1

    call    bit_close_ei
    ret


; ascending buzzing noise
ascending:
    call    bit_open_di
    ld      hl, 1023

hdesc1:
    push    hl
    ld      b, 16
hdesc2:
    rl      l
    rl      h
    jr      nc, hdesc3
    xor     SOUND_ONEBIT_mask

    ONEBITOUT


hdesc3:
    djnz    hdesc2

    pop     hl
    dec     hl
    ld      c, a
    ld      a, h
    or      l
    ld      a, c
    jr      nz, hdesc1

    call    bit_close_ei
    ret



; descending buzzing noise #2
descending2:
    call    bit_open_di
    ld      hl, 1023

asc1:
    push    hl
    ld      b, 16
asc2:
    rl      l
    rl      h
    jr      c, asc3
    xor     SOUND_ONEBIT_mask

    ONEBITOUT


asc3:
    djnz    asc2

    pop     hl
    dec     hl
    ld      c, a
    ld      a, h
    or      l
    ld      a, c
    jr      nz, asc1

    call    bit_close_ei
    ret


; noise #7
fx7:
    call    bit_open_di
    ld      hl, 4000

fx71:
    push    hl
    push    af
    ld      a, SOUND_ONEBIT_mask
    and     l
    ld      l, a
    pop     af
    xor     l

    ONEBITOUT


    pop     hl
    dec     hl
    ld      c, a
    ld      a, h
    or      l
    ld      a, c
    jr      nz, fx71

    call    bit_close_ei
    ret
ENDIF
