.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t1,$zero,1001 # set $t1 a 1001 (0x3E9)
addi $t0,$zero,-1001 # set $t1 a -1001 (FFFFFC17 en hexa)

seb $t2, $t0 # affiche dans t2 (FFFFFF97 en hexa)
seb $t3, $t1 #affiche dans t3 (69 en hexa)
