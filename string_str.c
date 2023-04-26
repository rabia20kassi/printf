#include "main.h"

/*** team project rabia_laila ***/
/**
 * help_str_hex - print string with hex escape
 * @args: The first argument
 * Return: integer
 */
int help_str_hex(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			help_hexa_up(args);
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	return (i);
}
