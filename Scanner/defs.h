#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

enum{
    T_PLUS,T_MINUS,T_ASTERIK,T_SLASH,T_INTLIT
};

struct token{
    int token;
    int int_value;
};