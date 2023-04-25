#include "main.h"

/*** team project rabia_laila ***/

/**
 * help_bin - manage the 'b' case
 * @args: The first argument
 * Return: integer
 */
int help_bin(va_list args)
{
	unsigned int num = va_arg(args, int);
	int j, i = 0;
	int mod;
	int digits[64];

	mod = num % 2;
	digits[i] = mod;
	i++;
	while (num > 1)
	{
		num /= 2;
		mod = num % 2;
		digits[i] = mod;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + digits[j]);
	}
	return (i);
}


