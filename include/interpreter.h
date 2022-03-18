
/**
 * @file interpreter.h
 * @author François Cayre <francois.cayre@grenoble-inp.fr>
 * @date Wed Aug 19 00:04:41 2020
 * @brief Interpreter definitions.
 *
 * Interpreter definitions.
 */

#include <stdio.h>

#include "macros.h"
#include "machine.h"

#ifndef _INTERPRETER_H_
#define _INTERPRETER_H_

#ifdef __cplusplus
extern "C" {
#endif

  /* Types */

  /**
   * @brief Interpreter modes.
   */
typedef enum {
    INTERACTIVE, /**< Running in interactive mode (plain or debugging). */
    SCRIPT       /**< Running in script mode. */
  } interp_mode_t;

  /**
   * @brief Internal state of the interpreter. Feel free to add what you may need!
   */
  typedef struct {
    interp_mode_t   mode;                   /**< Current interpreter running mode. */
    FILE           *fp;                     /**< Current command input stream. */
    FILE           *save_fp;                /**< Used to switch input stream when debugging. */
    char           *script_file;            /**< Name of the script file being executed. */
    int             script_line;            /**< Current line of the script being executed. */
    char            input[ MAX_STR + 1 ];   /**< Current command being executed. */
    char           *from;                   /**< Internal use for @c strtok_r . */
    char            first_token;            /**< Internal use for @c strtok_r (whether we are scanning the first token or not). */
    machine         mips;                   /**< MIPS virtual machine. */
    void*           lib_inst;               /**< Liste d'instructions. */
  } *interpreter;

  /**
   * @brief Token types
   * @todo You must complete this definition with your own additional types!
   */
  typedef enum {
    TOK_HEXA,            /**< Hexadecimal token. */
    TOK_STRING           /**< String token (see @ref token_type). */
  } token_t;


  /* Prototypes */

  char         *get_next_token( interpreter interp );
  token_t       token_type( char *token );
  interpreter   interp_new( void );
  void          interp_del( interpreter interp );
  int is_hexa( char *token );
  int is_decim( char *token );
  int is_byte( char *token );
  int is_word( char *token );
  int is_int(char* token);
  void disasm(interpreter interp, word mot, char* name, int* rd, int* rt, int* rs);
  int is_in_text( interpreter interp, uint32_t vAddr );



#ifdef __cplusplus
}
#endif

#endif /* _INTERPRETER_H_ */
