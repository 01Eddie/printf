#include "holberton.h"
/* Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers */                

//int Myprintf(const char *,...);              //Our printf function
//char* convert(unsigned int, int);       //Convert integer number into octal, hex, etc.

int p_char(va_list arg)
{
    char c;

    c = va_arg(arg, int);

    _putchar(c);

    return (c);
}

int p_str(va_list arg)
{
    unsigned int i;
    char *s;

    s = va_arg(arg, char *);
    
    if (s == NULL)
        s = "(NULL)";

    for (i = 0; s[i] != '\0'; i++)
        _putchar(s[i]);

    return i;
}
     


//DOUBLE or decimal and INTEGER

int p_doub(va_list arg)
{
    //int num, last, dig, exp;
//MEJORAR CON RECURSIVIDAD
    int n = va_arg(arg, int); 
	int  exp, digit, lDig;
    int num;

	exp = 1;
	lDig = n % 10;
	n = n / 10;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lDig = -lDig;
	}

	if (n > 0)
	{
		for (; num / 10 != 0; num = num / 10)
			exp = exp * 10;
            
		num = n;

		for (; exp > 0; exp = exp / 10)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
		}
	}
	_putchar(lDig + '0');
    
    return num;
} 

int p_int(va_list arg)
{
    //int num, last, dig, exp;
//MEJORAR CON RECURSIVIDAD

    int n = va_arg(arg, int); //He aqui el detalle es q nosotros usamos arg.. aqui el pequeño cambio debido a q ambos son iguales pero de diferentes alcances(scope)
	int  exp, digit, lDig;
    int num;

	exp = 1;
	lDig = n % 10;
	n = n / 10;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lDig = -lDig;
	}

	if (n > 0)
	{
		for (; num / 10 != 0; num = num / 10)
			exp = exp * 10;
            
		num = n;

		for (; exp > 0; exp = exp / 10)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
		}
	}
	_putchar(lDig + '0');
    
    return num;
}