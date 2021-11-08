#ifndef PRINTF
#define PRINTF

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *struct specifier - struct
 *@valid: char
 *@f: f
 */

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int _putchar(char c);
int (*_flag(char j))(va_list);
int int_print_d(va_list f);
int int_print_i(va_list f);

#endif /* PRINTF */
