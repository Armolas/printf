#include "main.h"
/**
 * print_str - prints a string
 * @s: string printed
 * Return: number of characters printed
 */
int print_str(char *s)
{
	int c = 0, i;

	if (!s)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
		c++;
	}
	return (c);
}
