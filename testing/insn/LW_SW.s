.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,4 # set $t1 a 4

lw $t1, 0x02($t0)
sw $t3, 0x02($t0)
lb $t4, 0x02($t0)
lbu $t5, 0x02($t0)
sb $t6, 0x02($t0)
