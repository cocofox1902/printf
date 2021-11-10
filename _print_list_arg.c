#include "main.h"

int int_print_r(va_list f);
int int_print_p(va_list f);

/**
 * int_print_r - print
 * @f: f
 * Return: f
 */

int int_print_r(va_list f)
{
	int_print_r_arg(va_arg(f, unsigned int));
	return (0);
}

/**
 * int_print_p - print
 * @f: f
 * Return: f
 */

int int_print_p(va_list f)
{
	int_print_p_arg(va_arg(f, unsigned int));
	return (0);
}
