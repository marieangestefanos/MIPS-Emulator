#debug_resume_test.sh
#
########################################
# Started September
########################################
# Help : see readme file     and ./debug_resume_test.sh
# Marie-Ange Stefanos, Chloé Poulic
########################################

#emulator test file for debug and resume commands




load script/fichier.o #charge le fichier
debug #donne accès à l'utiliser l'interpreteur
resume #retourne dans le SCRIPT
set reg $2 5
exit #sort du programme
