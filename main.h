#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int _printf(const char *format, ...);
int _putchar(char c);
int help_string(va_list args);
int help_char(va_list args);
int switch_help(char id, va_list args);
int help_int(va_list args);
int help_bin(va_list args);
void set_int(int a, int *i);
int help_int(va_list args);
int help_uns(unsigned int a, char *c);


#endif
