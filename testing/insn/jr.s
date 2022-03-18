.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,42 # set $t1 a 42
addi $t5,$zero,0x1010 # set $t1 a 42
jr $t5
addi $t1,$zero,42 # set $t1 a 42
addi $t2,$zero,42 # set $t1 a 42
addi $t3,$zero,42 # set $t1 a 42
