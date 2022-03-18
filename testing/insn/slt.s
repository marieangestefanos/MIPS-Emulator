
.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t1,$zero,12 # set $t1 a 12
addi $t0,$zero,-15 # set $t1 a 15
addi $t4,$zero,15 # set $t1 a 15

slt $t2, $t0, $t1 #comparaison -15 < 12 donc $t2 contient 1
slt $t3, $t1, $t0 #comparaison entre 12 < -15 donc $t3 contient 0
slt $t5, $t1, $t4 #comparaison entre 12 < 15 donc $t3 contient 1
slt $t6, $t4, $t1 #comparaison entre 15 < 12 donc $t3 contient 0

addi $t1,$zero,-12 # set $t1 a 12
slt $t7, $t0, $t1 #comparaison entre -15 < -12 donc $t3 contient 1
