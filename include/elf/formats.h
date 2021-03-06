
/**
 * @file formats.h
 * @author François Cayre <francois.cayre@grenoble-inp.fr>
 * @date Fri Nov  1 00:31:06 2013
 * @brief Common binary formats.
 *
 * Common binary formats.
 */

#ifndef _FORMATS_H_
#define _FORMATS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

/* Forward declaration */
struct process_t;

#include "types.h"
#include "elf/elf.h"

  /** Machine type ID: Undefined. */
#define MACH_T_UNDEF    0x00
  /** Machine type ID: MIPS. */
#define MACH_T_MIPS     0x01
  /** Machine type ID: Motorola 68k. */
#define MACH_T_M68K     0x02
  /** Machine type ID: SUN Microsystems SPARC. */
#define MACH_T_SPARC    0x03
  /** Machine type ID: Intel i386. */
#define MACH_T_I386     0x04

  /** Machine type string: Undefined. */
#define MACH_T_UNDEF_S  "undef"
  /** Machine type string: MIPS. */
#define MACH_T_MIPS_S   "mips"
  /** Machine type string: Motorola 68k. */
#define MACH_T_M68K_S   "m68k"
  /** Machine type string: SUN Microsystems SPARC. */
#define MACH_T_SPARC_S  "sparc"
  /** Machine type string: Intel i386. */
#define MACH_T_I386_S   "i386"

  /** Machine width: Undefined. */
#define MACH_W_UNDEF    0
  /** Machine width: 32 bits. */
#define MACH_W_32       32
  /** Machine width: 64 bits. */
#define MACH_W_64       64

  /** Available binary formats. */
typedef enum {
  undef,  /**< Undefined */
  elf     /**< ELF */
} binfmt;
  
/*
  typedef rval (*get_arch_info)( FILE *fp, uint *machine, endianness *endianness, uint *width );
  typedef rval (*load_rodata)( FILE *fp, struct process_t *p );
  typedef rval (*load_text)( FILE *fp, struct process_t *p );
  typedef rval (*load_data)( FILE *fp, struct process_t *p );
  typedef rval (*load_bss)( FILE *fp, struct process_t *p );
  typedef rval (*load_vsyscall)( struct process_t *p );
  typedef rval (*load_stack)( vsize sz, struct process_t *p );
  typedef rval (*load_heap)( struct process_t *p );
  typedef rval (*load_libc)( struct process_t *p );
  typedef rval (*load_scntab)( FILE *fp, struct process_t *p );
  typedef rval (*load_symtab)( FILE *fp, struct process_t *p );
  typedef rval (*load_libc_scntab)( FILE *fp, struct process_t *p );
  typedef rval (*load_libc_symtab)( FILE *fp, struct process_t *p );
  typedef void (*select_memory_model)( struct process_t *p );
*/
/*
  typedef struct {
    binfmt              binfmt;
    get_arch_info       get_arch_info;
    load_rodata         load_rodata;
    load_text           load_text;
    load_data           load_data;
    load_bss            load_bss;
    load_vsyscall       load_vsyscall;
    load_stack          load_stack;
    load_libc           load_libc;
    load_heap           load_heap;
    load_scntab         load_scntab;
    load_symtab         load_symtab;
    load_libc_scntab    load_libc_scntab;
    load_libc_symtab    load_libc_symtab;
    select_memory_model select_memory_model;
  } binfmt_methods;
*/
/* Forward declaration */
/*  struct process_t;

  char  *get_fun_next_address( struct process_t *p, vaddr *addr );
  binfmt assert_binfmt( FILE *fp );
  rval   binfmt_set_methods( binfmt binfmt, binfmt_methods *method );
  rval   load_file( FILE *fp, struct process_t *p, string arch_name );
*/
#ifdef __cplusplus
}
#endif

#endif /* _FORMATS_H_ */
