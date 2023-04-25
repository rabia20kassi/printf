#include "main.h"

/*** team project Laila_Rabia ***/
/**
 * help_oct - convert the number to octal
 * @a: argument
 * Return: integer
 */
int _octal(unsigned int a)
{
	int c = 0;
	char *d = "01234567";

	if (a / 8)
		c += _octal(a / 8);
	c += _putchar(d[a % 8]);
	return (c);
}
