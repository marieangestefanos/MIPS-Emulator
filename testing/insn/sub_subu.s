.set nomove # demande Ã  l'assembleur de respecter l'ordre des instructions mais permet des optimisations de boucles

_start:
.global _start
addi $t0,$zero,42 # set $t1 a 42
addi $t1,$zero,4 # set $t1 a 4
addi $t2, $zero, -42 #set $t2 a -42

sub $t3, $t0, $t1 #affiche dans $t3 la valeur 38 soit 26
sub $t4, $t1, $t2 #affiche dans $t4 la valeur 46 soit 2e
subu $t5, $t0, 4 #affiche dans $t5 la valeur 38 soit 26
subu $t6, $t1, 42 #affiche dans $t6 la valeur -38 soit 0xFFFFFFDA
subu $t7, $t1, -42 #affiche dans $t7 la valeur 46 soit 2e
