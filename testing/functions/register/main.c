#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "register.h"

void main() {
  reg_tab r = create_reg_tab();
  char *name = NULL;
  word val;
  int stop = 0;

  while ( stop == 0 ) {
    printf("Choisissez un registre.\n");
    scanf("%s\n", name);
    printf("Entrez une valeur à entrer dans le registre.\n");
    scanf("%d\n", &val);
    r = fill_register(val, name, r);
    print_reg(r, name);

    printf("Souhaitez-vous quitter le programme ?\n");
    printf("0 = no ; 1 = yes\n");
    scanf("%d\n", &stop);
  }

}
