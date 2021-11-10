#include "main.h"

int int_print_u(va_list f);
int int_print_o(va_list f);
int int_print_x(va_list f);
int int_print_X(va_list f);
int int_print_r(va_list f);
int int_print_p(va_list f);

/**
 * int_print_u - print
 * @f: f
 * Return: f
 */

int int_print_u(va_list f)
{
	int_print_u_arg(va_arg(f, unsigned int));
	return (0);
}

/**
 * int_print_o - print
 * @f: f
 * Return: f
 */

int int_print_o(va_list f)
{
	int_print_o_arg(va_arg(f, unsigned int));
	return (0);
}

/**
 * int_print_x - print
 * @f: f
 * Return: f
 */

int int_print_x(va_list f)
{
	int_print_x_arg(va_arg(f, unsigned int));
	return (0);
}

/**
 * int_print_X - print
 * @f: f
 * Return: f
 */

int int_print_X(va_list f)
{
	int_print_X_arg(va_arg(f, unsigned int));
	return (0);
}

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
