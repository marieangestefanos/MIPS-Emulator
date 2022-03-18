/**
 * @file bp.h
 * @author Chloé Poulic, Marie-Ange Stefanos
 * @date Sunday Oct 2020
 * @brief breakpoints functions prototypes
 */

 #include "commands.h"
 #include "mem.h"
 #include "machine.h"
 #include "bits.h"
 #include "notify.h"
 #include "elf/elf.h"
 #include "elf/syms.h"
 #include "elf/relocator.h"

 #include <stdio.h>
 #include <errno.h>
 #include <string.h>
 #include <stdlib.h>

breakpoint_t  list_add_first( breakpoint_t list, uint32_t vaddr_breakpoint);

int compare_add_increasing(uint32_t a, uint32_t b);

breakpoint_t list_add_sorted(breakpoint_t l , uint32_t e, int(*compare)(uint32_t, uint32_t));

breakpoint_t list_sort(breakpoint_t l, int(*compare)(uint32_t, uint32_t));

void list_print(breakpoint_t l);

breakpoint_t breakpoint_contains(breakpoint_t l, uint32_t vaddr_breakpoint);

breakpoint_t list_delete_first(breakpoint_t l);

breakpoint_t list_delete(breakpoint_t l);

breakpoint_t breakpoint_delete(breakpoint_t liste, uint32_t vaddr_breakpoint);
