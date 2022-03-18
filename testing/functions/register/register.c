#include "register.h"
#include <string.h>
#include <stdlib.h>


reg_tab create_reg_tab() {
  reg_tab r[35];
  int k; /* indice de boucle */
  int nb; /* récupère la taille de string de ind = ce que renvoie sprintf */
  char *ind = NULL;

  for (k = 0 ; k<32 ; k++) {
    nb = sprintf(ind, "%d", k); /* convert int k to string */
    r[k].name = strcat("$", ind); /* concatène les deux chaînes de caractères*/
  }
  r[32].name = "PC";
  r[33].name = "HI";
  r[34].name = "LO";

  return r;
}


int find_reg_ind(char *name) { /* retourne l'indice du registre correspodndant dans le reg_tab r*/
  int ind;
  switch ( *name ) {

    case '$' :
      ind = atoi(name + 1);
      return ind;

    case 'P' :
      return 32;

    case 'H' :
      return 33;

    case 'L' :
      return 34;

    default :
      printf("La chaîne de caractères entrée ne correspond pas à un registre existant.");
      return -1;
    }
}


reg_tab fill_register(word val, char* name, reg_tab r) {
  int ind = find_reg_ind(name);
  r[ind].content = val;
  return r;
}


void print_reg(reg_tab r, char *name) {
  int ind = find_reg_ind(name);
  printf("Le registre %s contient %d\n", r[ind].name, r[ind].content);
}


void print_reg_tab(reg_tab r) {
  int k;

  for (k=0 ; k<35 ; k++) {
    printf("Le registre %s contient %d\n", r[k].name, r[k].content);
  }
}
