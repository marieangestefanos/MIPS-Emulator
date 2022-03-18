.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$t0,3 # set $t1 a 42
jal 0x1010
addi $t0,$t0,4 # set $t1 a 42
subu $t0,$t0,3
