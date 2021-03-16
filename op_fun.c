#include "holberton.h"


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
