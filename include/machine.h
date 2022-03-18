
/**
 * @file machine.h
 * @author François Cayre <francois.cayre@grenoble-inp.fr>
 * @date Sun Aug 23 11:15:04 2020
 * @brief MIPS32 virtual machine.
 *
 * MIPS32 virtual machine.
 */

 #include "elf/syms.h"
 #include "mem.h"
 #include "types.h"
 #include <stdio.h>
 #include "insns.h"

#ifndef _MACHINE_H_
#define _MACHINE_H_



#ifdef __cplusplus
extern "C" {
#endif

  /**
   * @brief Virtual machine description.
   * @todo Add registers!
   */
struct link{
  uint32_t  vaddr;
  int type ; //0 : user, 1 : step ou step into
  struct link *next;
};

typedef struct link *breakpoint_t;


typedef unsigned int word;

  typedef struct {
    char      mnemo[6];   /**< Mnemo name. */
    char      name[6];    /**<Conventionnal name*/
    word      content; /**< Contents (value) */
  } reg;

   typedef struct {

     mem        memory;  /**< Virtual memory. */
     stab       symtab;  /**< Symbol table. */
     reg        registres[36];
     breakpoint_t list_breakp;
     listsym_t  *list_sym;
   } machine;



  void init_machine( machine *vm );
  void del_machine( machine vm );

#ifdef __cplusplus
}
#endif



/* Crée un tableau de registres */
void init_registres(reg registres[]);


/* Trouve l'indice du registre entré (string) dans le tableau de registres */
int find_register(char* name, reg registres[]);

/* Met une valeur dans le registre entré */
void fill_register(word val, char* name, reg registres[]);

/* Affiche le contenu d'un registre */
void print_reg(reg registres[], char *name);

/* Affiche le tableau de registres */
void print_registres(reg registres[]);

int print_a_register(reg registres[], char *name);

/*Conversion des registres*/
int mnemo_conv(char* name);

/* Retourne le contenu d'un registre */
word get_reg(reg registres[], char* name);


breakpoint_t  list_new_breakpoint( void ) ;


uint32_t get_func(word value);
uint32_t get_sa(word value);
uint32_t get_rd(word value);
uint32_t get_rt(word value);
uint32_t get_rs(word value);
uint32_t get_opcode(word value);
int16_t get_immediate(word value);
uint32_t get_target(word value);

void esthetique32_add( uint32_t virtualAdd );

void esthetique32_content( uint32_t word );

void print_reg_all( reg registres[]) ;

breakpoint_t  list_new_breakpoint( void );


#endif /* _MACHINE_H_ */
