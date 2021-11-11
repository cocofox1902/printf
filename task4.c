#include "main.h"
/**
 *int_print_u - print unsigned int
 *@f: int to print
 *Return: unsigned int
 */

int int_print_u(va_list f)
{
	int size = 1, end, index, length = 0;
	unsigned int number = va_arg(f, unsigned int);

	while (number / size > 9)
		size *= 10;

	for (index = size; index >= 1; index /= 10, length++)
	{
		end = (number / index) % 10;
		_putchar(end + '0');
	}

	return (length);
}

/**
 *int_print_o - print in base 8
 *@f: octet to print
 *Return: base 8
 */

int int_print_o(va_list f)
{
	unsigned int n, nbChar;
	int j;
	int nbOctal[1024];

	n = va_arg(f, int);

	if (n == 0)
		return (_putchar('0'));

	for (nbChar = 0; n != 0; nbChar++)
	{
		nbOctal[nbChar] = n % 8;
		n = n / 8;
	}
	for (j = nbChar - 1; j >= 0; j--)
		_putchar(nbOctal[j] + '0');

	return (nbChar);
}

/**
 *int_print_x - print hexadecimal in lowercase
 *@f: string to print
 *Return: lowercase
 */

int int_print_x(va_list f)
{
	int index, j, count;
	unsigned int diff = 39, tmp;
	unsigned int number = va_arg(f, unsigned int);
	char hexa[9];

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	for (index = 0, count = 0; number != 0; index++, count++)
	{
		tmp = number % 16;
		if (tmp >= 10)
		{
			hexa[index] = tmp + diff + 48;
		}
		else
		{
			hexa[index] = tmp + 48;
		}
		number /= 16;
	}
	j = index - 1;
	while (j >= 0)
	{
		_putchar(hexa[j]);
		j--;
	}
	return (count);
}

/**
 *int_print_X - print hexadecimal in uppercase
 *@f: string to print
 *Return: uppercase
 */

int int_print_X(va_list f)
{
	int index, j, count;
	unsigned int diff = 7, tmp;
	unsigned int number = va_arg(f, unsigned int);
	char hexa[9];

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	for (index = 0, count = 0; number != 0; index++, count++)
	{
		tmp = number % 16;
		if (tmp >= 10)
		{
			hexa[index] = tmp + diff + 48;
		}
		else
		{
			hexa[index] = tmp + 48;
		}
		number /= 16;
	}
	j = index - 1;
	while (j >= 0)
	{
		_putchar(hexa[j]);
		j--;
	}
	return (count);
}
