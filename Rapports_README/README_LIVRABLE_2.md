# Avant toute chose
Pour nettoyer et executer tapper la commande
```bash
$ make clean && make debug

```
# Tests individuels des commandes implémentées pour le livrable 1 ne nécessitant pas de script

Pour tester la commande load
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/load/*.emu

```

Pour tester la commande exit
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/exit/*.emu

```

Pour tester la commande disp
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/disp/*.emu

```

Pour tester la commande set
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/set/*.emu

```

Pour tester la commande assert
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/assert/*.emu

```


# Tests individuels des commandes implémentées pour le livrable 2
Pour tester la commande disasm
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/disasm/*.emu

```

# Commandes pour les fonctions avec script

Pour les fonctions debug et resume qui sont utilisées au sein de script (mais aussi pour les autres fonctions), la commande à executer dans le bash est la suivante, afin de les tester.

Pour essayer la commande assert et son fonctionnement qui consiste à quitter l'interpreteur en annonçant une erreur :
```bash
./emulmips script/test
```

Pour essayer les commandes debug et resume
```bash
./emulmips script/test1
```

Pour tester l'ensemble des commandes implémentées sauf disasm
```bash
./emulmips allcmd
```
