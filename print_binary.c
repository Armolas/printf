#include "main.h"
/**
 * print_bin - prints a binary number
 * @n: the number to be printed
 * Return: number of characters printed
 */
int print_bin(unsigned int n)
{
	int c = 0;

	if (n == 0)
		return (c);
	c += print_bin(n / 2);
	_putchar((n % 2) + '0');
	return (c + 1);
}
