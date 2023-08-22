#include "main.h"
/**
 * print_num - prints an integer
 * @n: the number to print
 * Return: number of characters printed
 */
int print_num(int n)
{
	int c = 0;
	unsigned int num;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
		c++;
	}
	num = n;
	if (num / 10)
	{
		c += print_num(num / 10);
	}
	_putchar((num % 10) + '0');
	c++;
	return (c);
}
