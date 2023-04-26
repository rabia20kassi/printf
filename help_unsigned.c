#include "main.h"

/*** team project Laila_Rabia  ***/
/**
 * help_uns - convert decimal to hexadecimal
 * @a: the first argument
 * @c: the second argument
 * Return: integer
 */
int help_uns(va_list args)
{
	int j = va_arg(args, int);
	int i = 0;

	if (j <= 16)
	{
		i+= _putchar('0' + j);
	}
	else
	{
		i += help_uns(j / 16);
		i += help_uns(j % 16);
	}
	return (i);
}
