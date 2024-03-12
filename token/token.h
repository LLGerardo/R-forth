
// Enum for token types,..,m,
typedef enum {
    NUMBER,
    OPERATOR,
    SYMBOL,
    WORD
} token_type_t;

//create abstract datatype
typedef struct token_t{
    token_type_t type;
    char *text;
}token_t;
