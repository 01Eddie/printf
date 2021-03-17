#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h>
#include <limits.h>

/**
 * struct print - struct print information
 * @print: Character
 * @p: Integer
 */
typedef struct print
{
	char *print;
	int (*p)();
} printT;

int _printf(const char *format, ...);

int _putchar(char c);

int p_char(va_list arg);
int p_str(va_list arg);
int p_int(va_list arg);
int p_doub(va_list arg);
int p_binary(va_list arg);

int to_binary(int num);
#endif /* _HOLBERTON_*/
