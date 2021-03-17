#include "holberton.h"

/**
 * to_binary - function for binary
 * @num: Integer
 * Return: binary or -1.
 */
int to_binary(int num)
{
	int binary = 0;

	if (num == 0)
	{
		return (binary);
	}

	to_binary(num / 2);
	binary = num % 2;
	_putchar(binary + '0');

	return (-1);
}
