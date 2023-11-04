#ifndef MAIN_H
#define MAIN_H

#define INIT_CC()                                       \
    Token*    token_sequence = NULL;                    \
    AST_NODE* AST            = NULL;                    \
\
    size_t    sequence_size  = 10, sequence_pos = 0;    \
    size_t    AST_size       = 10, AST_position = 0;    \
\
    FILE*     buffer         = NULL;                    \
    char      active         = 0;                       \
    uint8_t   row = 1, col   = 0;                       \
\
    KVP keywords[] =                                    \
    {                                                   \
        { "int"    , TOK_INT    },                      \
        { "void"   , TOK_VOID   },                      \
        { "char"   , TOK_CHAR   },                      \
        { "if"     , TOK_IF     },                      \
        { "else"   , TOK_ELSE   },                      \
        { "return" , TOK_RETURN },                      \
    };                                                  \
\
    uint8_t keywords_size = sizeof(keywords) / sizeof(keywords[0]);

#endif
