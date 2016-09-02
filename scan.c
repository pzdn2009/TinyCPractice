/*****************************************************/
/* File:scan.c
   扫描程序实现
*/
/*****************************************************/

#include "globals.h"
#include "scan.h"

// 保留字查找表，用了静态结构体的赋值
static struct {
    char* str;
    TokenType tok;
} reservedWords[MAXRESERVED]
= {{"if",IF},{"then",THEN},{"else",ELSE},{"end",END},
   {"repeat",REPEAT},{"until",UNTIL},{"read",READ},
   {"write",WRITE}};

TokenType getToken(void)
{
    
}