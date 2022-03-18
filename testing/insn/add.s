
.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,42 # set $t1 a 42
addi $t1,$zero,4 # set $t1 a 4
addi $t2, $zero, -42 #set $t2 a -42
addi $t5, $zero, -4 #set $t2 a -4

add $t3, $t0, $t1 #affiche dans $t3 la valeur 46 soit 2E CAS 2 POSITIFS
add $t4, $t1, $t2 #affiche dans $t3 la valeur -38 soit 4294967258 soit FFFFFFDA CAS 1 POSITIF/NEG
add $t6, $t2, $t5 #affiche dans $t3 la valeur -46 soit 0xFFFFFFD2 2E CAS 2 NEGATIFS
