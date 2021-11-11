#include "main.h"
/**
 *int_print_b - print in base 2
 *@f: binary to print 
 *Return: base 2
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
