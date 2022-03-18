.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t1,$zero,12 # set $t1 a 12
addi $t2,$zero, 11 # set $t2 Ã  11
addi $t2,$t2,1 # incremente
beq $t2,$t1,-8 # boucle sur l'increment tant que $t1 et $t2 sont egaux
add $t2,$zero,$zero # remise a zero de $t2 dans le delay slot du branchement (risque de boucle infinie), l'assembleur va automatiquement ajouter un NOP
