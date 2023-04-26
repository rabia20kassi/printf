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
	case 'd':
	case 'i':
		i += help_int(args);
		break;
	case 'b':
		i += help_bin(args);
		break;
	case 'u':
		i += help_uns(args);
		break;
	case 'o':
		i += _octal(args);
		break;
	case 'X':
		i += help_hexa_up(args);
		break;
	case 'x':
		i += help_hexa_low(args);
		break;
	case 'S':
		i += help_str_hex(args);
		break;
	default:
		i += _putchar('%');
		i += _putchar(id);
		break;
	}
	return (i);
}
