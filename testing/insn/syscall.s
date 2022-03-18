.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $a0,$zero,4 # set $t1 a 42
addi $v0,$zero,1 # set $t1 a 42
syscall

addi $a0,$zero,4 # set $t1 a 42
addi $v0,$zero,4 # set $t1 a 42
syscall

addi $v0,$zero,5 # set $t1 a 42
syscall

addi $v0,$zero,8# set $t1 a 42
syscall

addi $v0,$zero,10 # set $t1 a 42
syscall
