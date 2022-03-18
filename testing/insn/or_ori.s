.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t1,$zero,12 # set $t1 a 12
or $t2, $t1, $t1 #comparaison entre 12 et 12 donc $t2 contient 0c
ori $t0, $t1, 12 #comparaison entre 12 et 12 donc $t0 contient 0c

addi $t3,$zero,15 # set $t3 a 15
or $t4, $t1, $t3 #comparaison entre 12 et 15 donc $t4 contient 0f
ori $t5, $t1, 15 #comparaison entre 12 et 15 donc $t0 contient 0f
