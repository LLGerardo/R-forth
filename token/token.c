#include <stdlib.h>
#include <stdio.h>
#include "token.h"

token_t *create_token(token_type_t type, const char *text, token_t *token){
    if(token){
        token->type = type;
        token->text = strdup(text);
    }
    return token;
}

void destroy_token(token_t *token){
    if (token){
        free(token-> text);
        free(token);
    }
}
