.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,12 # set $t0 a 12
addi $t1,$zero,-15 # set $t1 a -15
addi $t4,$zero,15 # set $t4 a 15

slti $t2, $t0, -15 #comparaison 12 < -15 donc $t2 contient 0
slti $t3, $t1, 12 #comparaison entre -15 < 12 donc $t3 contient 1
slti $t5, $t4, 12 #comparaison entre 15 < 12 donc $t5 contient 0
slti $t6, $t0, 15 #comparaison entre 12 < 15 donc $t6 contient 1
slti $t7, $t1, -11 #comparaison entre -15 < -11 donc $t7 contient 1
