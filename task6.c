#include "main.h"
/**
 *power - static struct for pointer
 *@x: variable
 *@y: variable
 *Return: result
 */

static unsigned long power(unsigned int x, unsigned int y)
{
	unsigned int index;
	unsigned long result = x;

	for (index = 1; index < y; index++)
	{
		result *= x;
	}
	return (result);
}
/**
 *int_print_p - print the pointer
 *@f: pointer to print
 *Return: pointer
 */

int int_print_p(va_list f)
{
	unsigned int a[16];
	unsigned int i, k;
	unsigned long m, n;
	int j = 0;
	char c = 39;
	char *s = "(nil)";

	n = va_arg(f, unsigned long);

	if (n == 0)
	{
		for (i = 0; s[i]; i++, j++)
		{
			_putchar(s[i]);
		}
		return (j);
	}

	_putchar('0');
	_putchar('x');
	m = power(16, 15);
	a[0] = n / m;
	for (j = 2, i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, k = 0; i < 16; i++)
	{
		k += a[i];
		if (k || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + c + a[i]);
			j++;
		}
	}
	return (j);
}
