#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the strring
 * Return: number of characters printed
 */
int print_rev(char *s)
{
	int i, j = 0, pc = 0;

	if (!s)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0 ; s[i] != '\0' ; i++)
		j++;
	for (i = j - 1 ; i >= 0 ; i--)
	{
		pc += _putchar(s[i]);
	}
	return (pc);
}
