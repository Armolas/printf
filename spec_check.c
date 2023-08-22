#include "main.h"
/**
 * spec - checks for a specifier and prints the appropriate value
 * @f: format specifier
 * @nf: next format
 * @ap: argument parameter
 * Return: number of characters printed
 */
int spec(char f, char nf, va_list ap)
{
	int pc = 0;

	if (f == 'c')
		pc += _putchar((char) va_arg(ap, int));
	else if (f == 's')
		pc += print_str(va_arg(ap, char *));
	else if ((f == 'i') || (f == 'd'))
		pc += print_num(va_arg(ap, int));
	else if (f == '%')
		pc += _putchar('%');
	else if (f == ' ')
	{
		if (nf)
		{
			pc += _putchar('%');
			pc += _putchar(f);
		}
		else
			return (-1);
	}
	else
	{
		pc += _putchar('%');
		pc += _putchar(f);
	}
	return (pc);
}
