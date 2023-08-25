#include "main.h"
/**
 * print_HEX - prints a number in hexadecimal
 * @n: number to print
 * Return: number of characters printed
 */
int print_HEX(unsigned int n)
{
	int c = 0;

	if (n == 0)
		return (c);
	c += print_HEX(n / 16);
	if (n % 16 < 10)
		_putchar((n % 16) + '0');
	else
		_putchar((n % 16) + '7');
	return (c + 1);
}
