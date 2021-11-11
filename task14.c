#include "main.h"
/**
 * int_print_r - print reverse string 
 * @f: string to print
 * Return: reverse string
 */

int int_print_r(va_list f)
{
	int j = 0, i = 0;
	char *str = va_arg(f, char *);

	if (str == NULL)
		str = ")llun(";
	while (str[i])
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		j++;
	}
	return (j);
}
