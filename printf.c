#include "main.h"

/*** team project laila_rabia ***/
/**
 * _printf - function that produces output according to a format.
 * @format: first argument
 *
 * Return: length of the format
 */

int _printf(const char *format, ...)
{
	int x = 0, len = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (format[x] == '%')
		{
			x++;
			if (format[x] == '\0')
				break;
			len += switch_help(format[x], args);
		}
		else
		{
			len += _putchar(format[x]);
		}
		x++;
	}
	va_end(args);
	return (len);
}
