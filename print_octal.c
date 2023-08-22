#include "main.h"
/**
 * print_oct - prints a number in base 8
 * @n: number to print
 * Return: number of printed characters
 */
int print_oct(unsigned int n)
{
	int c = 0;

	if (n == 0)
		return (c);
	c += print_oct(n / 8);
	_putchar((n % 8) +  '0');
	return (c + 1);
}
