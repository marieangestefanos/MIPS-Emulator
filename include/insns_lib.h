/**
 * @file inst_exec.c
 * @author Chloé Poulic, Marie-Ange Stefanos
 * @date Wednesday Oct 14 2020
 * @brief Instruction execution library
 */

#ifndef _INSNS_LIB_H_
#define _INSNS_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif


#include <stdint.h>
#include "interpreter.h"
#include "elf/syms.h"
#include "mem.h"
#include "types.h"
#include <stdio.h>


inst_def inst_init(char* name, char valeurC[], int nature, int nb_param, unsigned int signature, unsigned int masque);

void inst_copy( inst_def* i1, inst_def i2 );

void print_inst(inst_def inst);

listinst_t listinst_init();

void print_listinst( listinst_t l );

int listinst_is_empty( listinst_t l );

listinst_t  listinst_add_first( interpreter interp, listinst_t list, inst_def inst);

listinst_t listinst_del_first( interpreter interp, listinst_t l );

listinst_t listinst_delete( interpreter interp, listinst_t l);

listinst_t listinst_find( listinst_t l, uint32_t word );



#ifdef __cplusplus
}
#endif

#endif /* _INSNS_LIB_H_ */
