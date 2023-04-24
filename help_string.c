#include "main.h"

/*** team project rabia_laila ***/
/**
 * help_string - manage the 's' case
 * @args: The first argument
 * Return: integer
 */
int help_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
	_putchar('\n');
}

