#include "main.h"
/**
 *int_print_d - print deximal
 *@f: f
 *Return: count
 */

int int_print_d(va_list f);
int print_i(va_list args);

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
