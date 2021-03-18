#include "holberton.h"

/**
 * p_char - function for character
 * @arg: va_list of stdarg of arguments
 * Return: c.
 */
int p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);

	return (1);
}

/**
 * p_str - function for string
 * @arg: va_list of stdarg of arguments
 * Return: i.
 */

int p_str(va_list arg)
{
	unsigned int i;
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
/**
 * p_doub - function for double or decimal
 * @arg: va_list of stdarg of arguments
 * Return: num.
 */
int p_doub(va_list arg)
{
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

	return (num);
}
/**
 * p_int - function for int
 * @arg: va_list of stdarg of arguments
 * Return: num.
 */

int p_int(va_list arg)
{
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

	return (num);
}

/**
 * p_binary - function for binary
 * @arg: va_list of stdarg of arguments
 * Return: c.
 */
int p_binary(va_list arg)
{
	int num = va_arg(arg, int);

	return (to_binary(num));
}
