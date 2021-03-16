#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <stdarg.h>
#include <stdlib.h> 

#include <stdio.h> 
#include <limits.h> 
typedef struct print
{
    char *print;
    int (*p)();    
} printT;

int _printf(const char* format, ...);

int _putchar(char c);

int p_char(va_list arg);
int p_str(va_list arg);



#endif /* _HOLBERTON_*/