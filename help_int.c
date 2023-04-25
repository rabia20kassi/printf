#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/** Team project Laila_Rabia **/
/**
 * set_int - use recursion
 * @a: first argument
 * @i: second argument
 * Return: void
 */
void set_int(int a, int *i)
{
	if (a < 0)
	{
		_putchar('-');
		(*i)++;
		a = -a;
	}
	if (a / 10)
	{
		set_int(a / 10, i);
	}
	_putchar('0' + (a % 10));
	(*i)++;
}

/**
 * help_int - manage integer
 * @args: first arguments
 *
 * Return: integer
 */
int help_int(va_list args)
{
	int a = va_arg(args, int);
	int i = 0;

	if (a == 0)
	{
		_putchar('0');
		return (1);
	}

	if (a == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		set_int(147483648, &i);
		i += 2;
		return (i);
	}
	set_int(a, &i);
	return (i);
}
