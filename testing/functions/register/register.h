#ifndef _REGISTER_H_
#define _REGISTER_H_

//#include "types.h"
#include <stdint.h>

typedef uint word; //pour le test

typedef struct {
  char      *name;    /**< Name. */
  word      *content; /**< Contents (value) */
} reg_tab;

/* Crée un tableau de registres */
reg_tab create_reg_tab();

/* Trouve l'indice du registre entré (string) dans le tableau de registres */
int find_reg_ind(char *name);

/* Met une valeur dans le registre entré */
reg_tab fill_register(word val, char* name, reg_tab r);

/* Affiche le contenu d'un registre */
void print_reg(reg_tab r, char *name);

/* Affiche le tableau de registres */
void print_reg_tab(reg_tab r);

#endif /* _REGISTER_H_ */
