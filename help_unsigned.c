#include "main.h"

/*** team project Laila_Rabia  ***/
/**
 * help_unsigned - convert decimal to hexadecimal
 * @a: the first argument
 * @c: the second argument
 * Return: integer
 */
int help_unsigned(unsigned int a, char *c)
{
	int q = 0;

	if (a / 16)
	{
		q += help_unsinged(a / 16, c);
		q += help_unsigned(a % 16, c);
	}
	else
	{
		q += _putchar(c[a]);
	}
	return (q);
}
