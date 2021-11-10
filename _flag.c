#include "main.h"

/**
 *_flag - extension of _printf
 *@j: j
 *Return: 0
 */

int (*_flag(char j))(va_list)
{
	int i = 0;
	spec arr[] = {

		{"d", int_print_d},
		{"i", int_print_i},
		{"b", int_print_b},
		{"u", int_print_u},
		{"o", int_print_o},
		{"x", int_print_x},
		{"X", int_print_X},
		{"c", int_print_c},
		{"s", int_print_s},
		{"r", int_print_r},
		{"R", int_print_R},
		{"S", int_print_S},
	};

	while (arr[i].valid)
	{
		if (j == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (0);
}
