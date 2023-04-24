#include "main.h"

/*** team project rabia_laila ***/
/**
 * help_char - manage the case c
 * @args : the first argument
 * Return: integer
 */
int help_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
	_putchar('\n');
}
