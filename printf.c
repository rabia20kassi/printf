#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}


/**
 * _printf - function that produces output according to a format.
 * @format: first argument 
 *
 * Return: length of the format
 */

int _printf(const char *format, ...)
{
	int x =0, len = 0;
	va_list args;

	va_start(args, format);
	while (format[x])
{
	if (format[x] == '%')
	{
		x++;
		if (format[x] == '\0')
			break;
		switch (format[x])
		{
			case 'c':
				len += _putchar(va_arg(args, int));
				break;
			case 's':
				len += _putchar(*(va_arg(args, char *)));
				break;
			case '%':
				len += _putchar('%');
				break;
			case 'd':
			case 'i':
				break;
			default:
				len += 1;
				len += _putchar(format[x]);
				break;
		}
	}
	else
		len += _putchar(format[x]);
	x++;
}
	va_end(args);
	return (len);
}
