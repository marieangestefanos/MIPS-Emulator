.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,42 # set $t1 a 42
addi $t1,$zero,4 # set $t1 a 4
addi $t5,$zero,-4 # set $t1 a 4

addiu $t5, $t0, 4 #affiche dans $t3 la valeur 46 soit 2E
addiu $t6, $t1, -42 #affiche dans $t3 la valeur -38 soit 4294967258 soit FFFFFFDA
addiu $t6, $t5, -42 #affiche dans $t6 la valeur -46 soit 0xFFFFFFD2 2E CAS 2 NEGATIFS
