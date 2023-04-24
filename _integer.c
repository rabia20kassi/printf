#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * __integer - prints an integer
 * @argn: argument list
 *
 * Return: number of characters printed
 */
int __integer(va_list argn)
{
	int i =0;
	int num = va_arg(argn, int);
	
	if (num < 0)
    {
        _putchar('-');
        num = (-1)*num;
        i++;
    }
	if (num / 10)
		i += __integer(argn);
	_putchar('0' + (num % 10));
	i++;
	return (i);
}
