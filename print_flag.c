#include "main.h"

int int_print_d(va_list f);
int int_print_i(va_list f);
int int_print_b(va_list f);
int int_print_u(va_list f);
int int_print_o(va_list f);
int int_print_x(va_list f);
int int_print_X(va_list f);
int int_print_c(va_list f);
int int_print_cs(char *s);
int int_print_s(va_list f);
int nothing_print(va_list f);
int int_print_S(va_list f);
int int_print_r(va_list f);
int int_print_p(va_list f);

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
 *int_print_u - print
 *@f: f
 *Return: f
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
 *int_print_o - print
 *@f: f
 *Return: f
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
 *int_print_x - print
 *@f: f
 *Return: f
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
 *int_print_X - print
 *@f: f
 *Return: f
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

/**
 *int_print_c - print char
 *@f: char to print
 *Return: char
 */

int int_print_c(va_list f)
{
	_putchar(va_arg(f, int));
	return (1);
}

/**
 *int_print_s - print string
 *@f: string to print
 *Return: string
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
 *int_print_cs - print cs 
 *@s: variable 
 *Return: cs
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
 *int_print_R - print in rot13
 *@f: string to print 
 *Return: string in rot13
 */

int int_print_R(va_list f)
{
	char *str;
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	str = va_arg(f, char *);
	if (str == NULL)
	{
		str = "(ahyy)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == ch1[j])
			{
				_putchar(ch2[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
}

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

/**
 *int_print_S - convert ASCII code in hexadecimal
 *@f: ASCII to print 
 *Return: ASCII code in hexadecimal
 */

int int_print_S(va_list f)
{
	unsigned int i;
	int j = 0, k;
	char c = 'A' - ':';
	char d[2];
	char *s = va_arg(f, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] > 126)
		{
			_putchar('\\');
			_putchar('x');
			j += 2;
			d[0] = s[i] / 16;
			d[1] = s[i] % 16;
			for (k = 0; k < 2; k++)
			{
				if (d[k] >= 10)
					_putchar('0' + c + d[k]);
				else
					_putchar('0' + d[k]);
			}
			j += k;
		}
		else
		{
			_putchar(s[i]);
			j++;
		}
	}
	return (j);
}
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
