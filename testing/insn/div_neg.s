.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,42 # set $t1 a 42
addi $t1,$zero,-4 # set $t1 a 4

div $t0, $t1
mflo $t3 #$t3 contient -10 soit 4294967286
mfhi $t4  #$t4 contient 2
