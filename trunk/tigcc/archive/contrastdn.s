	.xdef OSContrastDn

.text
OSContrastDn:
	move.l %d4,-(%sp)
	move.l %d3,-(%sp)
	move.l 0xC8,%a0
	move.l (%a0,2652),%a0
	jsr (%a0)
	move.l (%sp)+,%d3
	move.l (%sp)+,%d4
	rts
