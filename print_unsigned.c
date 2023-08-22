#include "main.h"
/**
 * print_uns - prints an unsigned integer
 * @n: number to print
 * Return: number of characters printed
 */
int print_uns(unsigned int n)
{
	int c = 0;

	if (n / 10)
		c += print_uns(n / 10);
	c += _putchar((n % 10) + '0');
	return (c);
}
