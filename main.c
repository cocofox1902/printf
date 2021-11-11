#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%b\n", 98);
	_printf("%S\n", "Best\nSchool");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	addr = (void *)0x11104ffe637542f0;
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	addr = (void *)0x0000000fe001a;
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	addr = (void *)0x1000000142f0;
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Address:[%p]\n", addr);
	printf("len : %d\n", len);
	len = printf("Address:[%p]\n", addr);
	_printf("len : %d\n", len);

	addr = (void *)0x11104ffe637542f0;
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Address:[%p]\n", addr);
	printf("len : %d\n", len);
	len = printf("Address:[%p]\n", addr);
	_printf("len : %d\n", len);
	/**printf("Unknown:[%r]\n");*/
	return (0);
}
