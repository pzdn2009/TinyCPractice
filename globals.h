/*****************************************************/
/* File:globals.h
   定义全局变量
*/
/*****************************************************/

typedef enum
{
    //文件结束符，错误标志
    ENDFILE,ERROR,
    //关键字
    IF,THEN,ELSE,END,REPEAT,UNTIL,READ,WRITE,
    //标识符和数字
    ID,NUM,
    //特殊符号
    ASSIGN,EQ,LT,PLUS,MINUS,TIMES,OVER,LPAREN,RPAREN,SEMT
} TokenType; //定义token的类型