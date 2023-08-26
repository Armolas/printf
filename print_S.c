#include "main.h"
/**
 * print_S - prints a string
 * @str: the string
 * Return: number of characters printed
 */
int print_S(char *str)
{
	int i, pc = 0;

	if (!str)
		return (0);
	for (i = 0 ; str[i] ; i++)
	{
		if (!(str[i] > 32 && str[i] < 127))
		{
			pc += _putchar('\\');
			pc += _putchar('x');
			if (str[i] < 16)
				pc += _putchar('0');
			pc += print_HEX(str[i]);
		}
		else
			pc += _putchar(str[i]);
	}
	return (pc);
}
