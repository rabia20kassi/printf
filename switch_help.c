#include "main.h"

/*** team project laila_rabia ***/
/**
 * switch_help - manage switch cases
 * @id : first argument
 * @args : second argument
 *
 * Return: integer
 */
int switch_help(char id, va_list args)
{
	int i = 0;

	switch (id)
	{
	case 'c':
		i += help_char(args);
		break;
	case 's':
		i += help_string(args);
		break;
	case '%':
		i += _putchar('%');
		break;
	default:
		i += _putchar('%');
		i += _putchar(id);
		break;
	}
	return (i);
}
