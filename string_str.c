#include "main.h"

/*** team project rabia_laila ***/
/**
 * help_str_hex - print string with hex escape
 * @str: The first argument
 * Return: integer
 */
int help_str_hex(char *str)
{
	int i = 0, j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			j += help_hexa_up((unsigned char)str[i]);
		}
		else
		{
			_putchar(str[i]);
			j++;
		}
		i++;
	}
	return (j);
}
