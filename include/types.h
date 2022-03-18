
/**
 * @file types.h
 * @author François Cayre <francois.cayre@grenoble-inp.fr>
 * @date Thu Oct 31 19:09:31 2013
 * @brief Types.
 *
 * Types.
 */

#ifndef _TYPES_H_
#define _TYPES_H_

#include "constants.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <string.h>

  /** Unsigned ints (shorthand) and words. */
  typedef uint32_t uint, word;

  /** Bytes. */
  typedef uint8_t  byte;

  /** 32-bit address. */
  typedef uint32_t vaddr32;

  /** 64-bit address. */
  typedef uint64_t vaddr64;

  /** Addresses and virtual addresses. */
  typedef union {
    vaddr32 _32; /**< 32-bit (possibly virtual) address */
    vaddr64 _64; /**< 64-bit (possibly virtual) address */
  } vaddr, addr;

  /** Static strings. */
  typedef char string[ MAX_STR + 1 ];

  /** Endianness. */
  typedef enum {
    UNDEF,  /**< Undefined. */
    LSB,    /**< Least Significant Byte first. */
    MSB     /**< Most Significant Byte first. */
  } endianness;

#ifdef __cplusplus
}
#endif

#endif /* _TYPES_H_ */
