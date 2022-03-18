# Commandes pour les fonctions avec jeux de tests

Pour tester la commande exit
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/exit/*.emu

```

Pour tester la commande load
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/load/*.emu

```

Pour tester la commande set cependant, cela fait des tests "unchecked" (ceci est expliqué dans le rapport).
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/set/*.emu

```
Si on veut tester la commande set, il est possible de faire ceci :
```bash
$ ./emulmips
set mem 0x8000 byte 0xAAFFBBDD
set reg $t1 45
set mem 12345 byte 0xAAFFBBDD
set mem 0x8000 foot 0xAAFFBBDD
set mem 0x8000 byte -14.5
set reg $zoom 45
set reg $t1 13.5
```


Pour tester la commande disp
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/disp/*.emu

```

Pour tester la commande assert
```bash
$ ./simpleUnitTest.sh -e ./emulmips -b testing/cmd/assert/*.emu

```

# Commandes pour les fonctions avec script

Pour les fonctions debug et resume qui sont utilisées au sein de script, la commande à executer dans le bash est la suivante, afin de les tester.

```bash
./emulmips script/debug_resume_test.sh
```
