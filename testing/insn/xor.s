.set nomove
_start:
.global _start
addi $t1,$zero,12 # set $t1 a 12
addi $t0,$zero,15 # set $t1 a 15
xor $t2, $t1, $t1 #comparaison entre 12 et 12 donc $t2 contient 0
xor $t3, $t0, $t1 #comparaison entre 15 et 12 donc $t3 contient 3
