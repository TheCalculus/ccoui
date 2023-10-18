#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <stddef.h>
#include "tokens.h"

Token  newToken  (const char* value, const TOK_TYPE type);
void   tokenize  ();
void   openBuffer(const char* source); // this is probably not supposed to be here
void   freeTokens();

static inline char peek();
static inline char next();

inline bool istype  (Token* token);
inline bool isnonkwd(Token* token);
inline bool isbinexp(Token* token);

extern Token* token_sequence;
extern size_t sequence_size;
extern size_t sequence_pos;

#endif
