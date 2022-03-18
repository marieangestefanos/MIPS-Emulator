
/**
 * @file insns.h
 * @author François Cayre <francois.cayre@grenoble-inp.fr>
 * @date Sat Aug 22 16:22:31 2020
 * @brief MIPS32 instructions.
 *
 * MIPS32 instructions.
 */

#ifndef _INSNS_H_
#define _INSNS_H_

#ifdef __cplusplus
extern "C" {
#endif


#include <stdint.h>
#include "interpreter.h"
#include "elf/syms.h"
#include "mem.h"
#include "types.h"
#include <stdio.h>


typedef struct{
     char           name[10]; //name of the instruction : ADD,AND...
     char           valeurC[33]; //token de 32bits récupéré lors du chargement du fichier.txt : permet de calculer la signature
     int             nature; //type of the instruction : R = 0, I = 1, J= 2
     int             nb_param; //rs, ra...
     char           ordre[4];
     unsigned int    signature;
     unsigned int    masque;
     int            ( *pointeurSurExec ) ( interpreter, uint32_t, uint32_t* );
   } inst_def;

 typedef struct maillon{
   inst_def inst;
   struct maillon *next;
 } *listinst_t;

void init_instdef(inst_def tab[]);
listinst_t instr_compare( unsigned int x, listinst_t l );
void instructions_file_load( interpreter interp, char *filename );
int convert_natureC_in_nature(char*natureC);
inst_def instruc_new(machine *vm, char *name, int nature, int nb_param, char valeurC[], int cmp );
void inst_def_parse( char * line, char* name, int *nature, int *nb_param, char *valeurC);
//Crée la signature d'une instruction
unsigned int signature( char valeurC[], char* s );

//Crée le masque d'une instruction
unsigned int masque( int nature, char* name );

int sign_ext_neg(int valeuri, int bit_conser, int format);

int ext_signed(int valeur, int bit_conser, int format, int signe);

int give_sign_sgd(int valeur, int format);

int of_signed_sum( int32_t w1, int32_t w2 );

int extract(int valeur, int bit_conser);

int of_usigned_sum( uint32_t w1, uint32_t w2 );

int of_signed_diff( int32_t a, int32_t b );

//Renvoie 0 si x correpond à l'instruction du masque m et de la signature s donnés en argument, 1 sinon
int is_inst( unsigned int s, unsigned int m, unsigned int x );

int detect_overflow( uint32_t w1, uint32_t w2 );

int exec_add( interpreter interp, uint32_t value, uint32_t *currentVaddr  );

int exec_addi( interpreter interp, uint32_t value , uint32_t *currentVaddr );


int exec_addiu( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_addu( interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_sub( interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_subu( interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_mult( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_div( interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_and( interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_andi( interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_or( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_ori( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_xor( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_lw(interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_sw(interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_lb(interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_lbu(interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_sb(interpreter interp, uint32_t value , uint32_t *currentVaddr);

int exec_lui( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_mfhi( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_mflo( interpreter interp, uint32_t value, uint32_t *currentVaddr );

//int exec_move( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_beq( interpreter interp, uint32_t value, uint32_t *currentVaddr );

//int exec_jr( interpreter interp, uint32_t value, uint32_t *currentVaddr );
int exec_sll( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_sra( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_srl( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_seb( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_sltu( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_slt( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_slti( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_sltiu( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_beq( interpreter interp, uint32_t value, uint32_t *currentVaddr ) ;

int exec_bne( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_bgez( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_bgtz( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_blez( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_bltz( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_j( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_jal( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_jalr( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_jr( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_break( interpreter interp, uint32_t value, uint32_t *currentVaddr ) ;

int exec_syscall( interpreter interp, uint32_t value, uint32_t *currentVaddr );

int exec_nop( interpreter interp, uint32_t value, uint32_t *currentVaddr );

#ifdef __cplusplus
}
#endif

#endif /* _INSNS_H_ */
