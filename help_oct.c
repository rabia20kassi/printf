#include "main.h"

/*** team project rabia_laila ***/

/**
 * _octal - manage the 'o' case
 * @args: The first argument
 * Return: integer
 */
int _octal(va_list args)
{
	unsigned int num = va_arg(args, int);
	int j, i = 0;
	int mod;
	int digits[64];

	while (num>0)
	{
	mod = num%8;
	digits[i] = mod;
	i++;
	n /=8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + digits[j]);
	}
	return (i);
}
