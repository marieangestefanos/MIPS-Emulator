.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,42 # set $t1 a 42
addi $t1,$zero,-4 # set $t1 a -4

mult $t0, $t1
mflo $t3 #$t3 contient -168 soit FFFFFF58
mfhi $t4  #$t4 contient -1 soit 4294967295
