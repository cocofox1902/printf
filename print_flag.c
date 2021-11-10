#include "main.h"

int int_print_d(va_list f);
int int_print_i(va_list f);
int int_print_b(va_list f);
int int_print_u(va_list f);
int int_print_o(va_list f);
int int_print_x(va_list f);
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
 *int_print_b - print
 *@f: f
 *Return: j
 */

int int_print_b(va_list f)
{
	unsigned int n, m, i = 1, k = 0, a[32];
	int j = 0;

	n = va_arg(f, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	while (i < 32)
	{
		m /= 2;
		a[i] = (n / m) % 2;
		i++;
	}
	i = 0;
	while (i < 32)
	{
		k += a[i];
		if (k || i == 31)
		{
			_putchar(48 + a[i]);
			j++;
		}
		i++;
	}
	return (j);
}

/**
 *int_print_u_arg - print
 *@ui: ui
 *Return: f
 */

int int_print_u(va_list f)
{
	unsigned int a[10];
	unsigned int i, m, n, k;
	int j;

	n = va_arg(f, unsigned int);
	m = 1000000000;
	a[0] = n / m;
	i = 1;
	while (i < 10)
	{
		m /= 10;
		a[i] = (n / m) % 10;
		i++;
	}
	for (i = 0, k = 0, j = 0; i < 10; i++)
	{
		k = k + a[i];
		if (k || i == 9)
		{
			_putchar(a[i] + 48);
			j++;
		}
	}
	return (j);
}

/**
 *int_print_o_arg - print
 *@o: o
 *Return: f
 */

int int_print_o(va_list f)
{
	unsigned int a[11];
	unsigned int i, m, n, k;
	int j;

	n = va_arg(f, unsigned int);
	m = 1073741824;
	a[0] = n / m;
	i = 1;
	while (i < 11)
	{
		m /= 8;
		a[i] = (n / m) % 8;
		i++;
	}
	for (i = 0, k = 0, j = 0; i < 11; i++)
	{
		k = k + a[i];
		if (k || i == 10)
		{
			_putchar(a[i] + 48);
			j++;
		}
	}
	return (j);
}

/**
 *int_print_x_arg - print
 *@x: x
 *Return: f
 */

int int_print_x(va_list f)
{
	unsigned int a[8];
	unsigned int i, m, n, k;
	int j;
	char c;

	c = 97 - 58;
	n = va_arg(f, unsigned int);
	m = 268435456;
	a[0] = n / m;
	i = 1;
	while (i < 8)
	{
		m /= 16;
		a[i] = (n / m) % 16;
		i++;
	}
	for (i = 0, k = 0, j = 0; i < 8; i++)
	{
		k = k + a[i];
		if (k || i == 7)
		{
			if (a[i] < 10)
				_putchar(a[i] + 48);
			else
				_putchar(a[i] + c + 48);
			j++;
		}
	}
	return (j);
}

/**
 *int_print_X_arg - print
 *@X: X
 *Return: f
 */

int int_print_X(va_list f)
{
	unsigned int a[8];
	unsigned int i, m, n, k;
	int j;
	char c;

	c = 97 - 58;
	n = va_arg(f, unsigned int);
	m = 268435456;
	a[0] = n / m;
	i = 1;
	while (i < 8)
	{
		m /= 16;
		a[i] = (n / m) % 16;
		i++;
	}
	for (i = 0, k = 0, j = 0; i < 8; i++)
	{
		k = k + a[i];
		if (k || i == 7)
		{
			if (a[i] < 10)
				_putchar(a[i] + 48);
			else
				_putchar(a[i] + c + 48);
			j++;
		}
	}
	return (j);
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
