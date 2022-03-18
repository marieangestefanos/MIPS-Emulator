.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t1,$zero,12 # set $t1 à 12
and $t2, $t1, $t1 #comparaison entre 12 et 12 donc $t2 contient 0c
andi $t0, $t1, 12 #comparaison entre 12 et 12 donc $t0 contient 0c

addi $t3,$zero,15 # set $t3 à 15
and $t4, $t1, $t3 #comparaison entre 12 et 15 donc $t4 contient 0c
andi $t5, $t1, 15 #comparaison entre 12 et 12 donc $t0 contient 0c
