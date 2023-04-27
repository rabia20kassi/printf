#include "main.h"

/*** team project rabia_laila ***/

/**
 * help_hexa_up - manage the 'X' case
 * @num: The first argument
 * Return: integer
 */
int help_hexa_up(unsigned int num)
{
	int mod;
	char digits[64];
	int j, i = 0;

	while (num > 0)
	{
		mod = num % 16;
		if (mod < 10)
		{
			digits[i] = mod + '0';
		}
		else
		{
			digits[i] = mod - 10 + 'A';
		}
		i++;
		num /= 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j]);
	}
	return (i);
}
