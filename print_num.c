#include "main.h"

/**
 * printnum - prints number to stdout
 * @n: the number to print
 */
void printnum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		printnum(n / 10);
	_putchar((n % 10) + '0');
}
