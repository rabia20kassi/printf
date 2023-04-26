#include "main.h"

/*** team project Rabia_Laila  ***/
/**
 * help_uns - manage 'u' case
 * @args: the first argument
 * Return: integer
 */
int help_uns(va_list args)
{
	unsigned int num = va_arg(args, int);
	int j, i = 0;
	int mod;
	int digits[64];

	while (num > 0)
	{
		mod = num % 10;
		digits[i] = mod;
		i++;
		num /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + digits[j]);
	}
	return (i);
}
