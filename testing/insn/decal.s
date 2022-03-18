.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,42 # set $t1 a 42 cad 2A
addi $t3,$zero,-42 # set $t1 a -42 cad ffffffd6

sll $t1, $t0, 2 #$t1 contient 168 soit A8
srl $t2, $t0, 2 #$t2 contient 10 soit A
sra $t4, $t0, 2 # $t4 10 soit A
sra $t5, $t3, 2 # $t5 -11 soit 4294967285 soit FFFFFFF5
