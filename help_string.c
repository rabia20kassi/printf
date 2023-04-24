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
	int i = 0, j = 0;

	if (s == NULL)
		s = "(null)";

	while (s[j])
	{
		if (s[j] == '\\')
		{
			j++;
			switch (s[j])
			{
			case 'n':
				i += _putchar('\n');
				break;
			case 't':
				i += _putchar('\t');
				break;
			case '%':
				i += _putchar('%');
				break;
			default:
				i += _putchar('\\');
				i += _putchar(s[j]);
				break;
			}
		}
		else
		{
			i += _putchar(s[j]);
		}
		j++;
	}
	return (i);
}
