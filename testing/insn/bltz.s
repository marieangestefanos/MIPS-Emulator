.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t1,$zero,-3 # set $t1 a 12
addi $t2,$t2,1 # incremente
bltz $t1, -8 # boucle sur l'increment tant que $t1 est supérieur à 0
add $t2,$zero,$zero # remise a zero de $t2 dans le delay slot du branchement (risque de boucle infinie), l'assembleur va automatiquement ajouter un NOP
