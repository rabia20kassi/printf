#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/** Team project Laila_Rabia **/

/**
 * help_int - manage integer
 * @args: first arguments
 *
 * Return: integer
 */
int help_int(va_list args)
{
	int n = va_arg(args, int);
	int i = 0, div = 1;

	if (n < 0)
	{
		i += _putchar('-');
		n = (-1) * n;
	}
	while (n / div > 9)
		div *= 10;
	while (div != 0)
	{
		i += _putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
	return (i);
}

