#include "holberton.h"

/**
 * _printf - function principal for functionality of print
 * @format: Character
 * Return: 0 or len
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, j, len = 0, outFlag = 1;
	printT print[] = {{"c", p_char}, {"s", p_str}, {"d", p_doub}, {"i", p_int},
	{"b", p_binary}, {NULL, NULL}};/*Module 1: Initializing Myprintf's arguments*/

	va_list arg;

	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))/*format[0]==%*/
		return (-1);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			for (j = 0; print[j].p != NULL; j++)
			{/*Module 2: Fetching and executing arguments*/
				if (format[i + 1] == print[j].print[0])
				{
					len = len + print[j].p(arg);
					outFlag = 0;
					i++;
				}
			}
			if (outFlag == 1)
				_putchar(format[i]);/*len++;*/
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	} /*Module 3: Closing argument list to necessary clean-up*/

	va_end(arg);
	return (len);
}

