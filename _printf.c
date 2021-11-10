#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * _printf - print the sentence
 * @format: constant charactère
 * @...: other variables
 * Return: the output
 */

int _printf(const char *format, ...)
{
	int (*char_follow)(va_list);
	int i = 0, count = 0;
	va_list f;

	if (format != NULL)
	{
		va_start(f, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		while (format[i] != '\0' && format != NULL)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i = i + 2;
				}
				else
				{
					char_follow = _flag(format[i + 1]);
					if (char_follow)
						count += char_follow(f);
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i = i + 2;
				}
			}
			else
			{
				count += _putchar(format[i]);
				i++;
			}
		}
		va_end(f);
		return (count);
	}
	else
		return (-1);
}
