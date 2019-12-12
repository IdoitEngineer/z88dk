; Platform specific colour transformation
;
; Entry: a = colour
; Exit:  a = colour to use on screen
; Used:  hl,bc,f
;

	MODULE	code_clib
	PUBLIC	conio_map_colour

	EXTERN	__CLIB_CONIO_NATIVE_COLOUR

conio_map_colour:
        ld      c,__CLIB_CONIO_NATIVE_COLOUR
        rr      c
        ret     c

	and	15
	ld	c,a
	ld	b,0
	ld	hl,table
	add	hl,bc
	ld	a,(hl)
	ret

	SECTION	rodata_clib
table:
        defb    $0	;BLACK -> BLACK
	defb	$1	;BLUE -> BLUE
	defb	$2	;GREEN -> GREEN
	defb	$3	;CYAN -> CYAN
	defb	$4	;RED -> RED
	defb	$5	;MAGENTA -> MAGENTA
	defb	$4	;BROWN -> RED
	defb	$7	;LIGHTGRAY -> WHITE
	defb	$7	;DARKGRAY -> WHITE
	defb	$1	;LIGHTBLUE -> BLUE
	defb	$2	;LIGHTGREEN -> GREEN
	defb	$3	;LIGHTCYAN -> CYAN
	defb	$4	;LIGHTRED -> RED
	defb	$5	;LIGHTMAGENTA -> MAGENTA
	defb	$6	;YELLOW -> YELLOW
	defb	$7	;WHITE -> WHITE

