#include "main.h"

int int_print_d(va_list f);
int int_print_i(va_list f);
int int_print_b_arg(unsigned int b);
int int_print_u_arg(unsigned int ui);
int int_print_o_arg(unsigned int o);
int int_print_x_arg(unsigned int x);
int int_print_X_arg(unsigned int X);
int int_print_c(va_list f);
int int_print_cs(char *s);
int int_print_s(va_list f);
int int_print_p_arg(unsigned int p);
int nothing_print(va_list f);

/**
 *int_print_d - print deximal
 *@f: f
 *Return: count
 */

int int_print_d(va_list f)
{
	unsigned int abs, a, count1, count;
	int j;

	count = 0;
	j = va_arg(f, int);
	if (j < 0)
	{
		abs = (j * -1);
		count += _putchar('-');
	}
	else
		abs = j;

	a = abs;
	count1 = 1;
	while (a > 9)
	{
		a /= 10;
		count1 *= 10;
	}
	while (count1 >= 1)
	{
		count += _putchar(((abs / count1) % 10) + '0');
		count1 /= 10;
	}
	return (count);
}

/**
 *int_print_i - print integer
 *@f: f
 *Return: f
 */

int int_print_i(va_list f)
{
	return (int_print_d(f));
}

/**
 *int_print_b_arg - print
 *@b: b
 *Return: f
 */

int int_print_b_arg(unsigned int b)
{
	if (b)
	{
		int_print_b_arg(b / 2);
		_putchar(b % 2 + '0');
	}
	return (0);
}

/**
 *int_print_u_arg - print
 *@ui: ui
 *Return: f
 */

int int_print_u_arg(unsigned int ui)
{
	if (ui / 10)
		int_print_u_arg(ui / 10);
	_putchar(ui % 10 + '0');
	return (0);
}

/**
 *int_print_o_arg - print
 *@o: o
 *Return: f
 */

int int_print_o_arg(unsigned int o)
{
	if (o)
	{
		int_print_o_arg(o / 8);
		_putchar(o % 8 + '0');
	}
	return (0);
}

/**
 *int_print_x_arg - print
 *@x: x
 *Return: f
 */

int int_print_x_arg(unsigned int x)
{
	if (x)
	{
		int_print_x_arg(x / 16);
		if (x % 16 < 10)
			_putchar(x % 16 + '0');
		else
			_putchar(x % 16 + 32 + '7');
	}
	return (0);
}

/**
 *int_print_X_arg - print
 *@X: X
 *Return: f
 */

int int_print_X_arg(unsigned int X)
{
	if (X)
	{
		int_print_X_arg(X / 16);
		if (X % 16 < 10)
			_putchar(X % 16 + '0');
		else
			_putchar(X % 16 + '7');
	}
	return (0);
}

/**
 *int_print_c - print
 *@f: f
 *Return: f
 */

int int_print_c(va_list f)
{
	_putchar(va_arg(f, int));
	return (1);
}

/**
 *int_print_s - print
 *@f: f
 *Return: f
 */

int int_print_s(va_list f)
{
	int i;
	char *s;

	s = va_arg(f, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}

/**
 *int_print_cs - print
 *@s: s
 *Return: f
 */

int int_print_cs(char *s)
{
	int i = 0;

	if (s)
	{
		while (*s)
		{
			_putchar(*s);
			s++;
			i++;
		}
	}
	return (i);
}

/**
 *int_print_p_arg - print
 *@p: p
 *Return: f
 */

int int_print_p_arg(unsigned int p)
{
	if (p)
	{
		int_print_r_arg(p);
		_putchar(p);
	}
	return (0);
}

/**
 *int_print_r_arg - print
 *@p: p
 *Return: f
 */

int int_print_r_arg(unsigned int p)
{
	if (p)
	{
		int_print_r_arg(p);
		_putchar(p);
	}
	return (0);
}
