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
	unsigned int ui;

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
	else if (f == 'b')
	{
		ui = va_arg(ap, unsigned int);
		if (ui == 0)
			pc += _putchar('0');
		else
			pc += print_bin(ui);
	}
	else if (f == 'u' || f == 'o' || f == 'x' || f == 'X')
		pc += spec_2(f, ap);
	else
	{
		pc += _putchar('%');
		pc += _putchar(f);
	}
	return (pc);
}


/**
 * spec_2 - checks for a specifier and prints the appropriate value
 * @f: format specifier
 * @ap: argument parameter
 * Return: number of characters printed
 */
int spec_2(char f, va_list ap)
{
	int pc = 0;
	unsigned int n;

	if (f == 'u')
		pc += print_uns(va_arg(ap, unsigned int));
	else if (f == 'o')
	{
		n = va_arg(ap, unsigned int);
		if (n == 0)
			pc += _putchar('0');
		else
			pc += print_oct(n);
	}
	else if (f == 'x')
	{
		n = va_arg(ap, unsigned int);
		if (n == 0)
			pc += _putchar('0');
		else
			pc += print_hex(n);
	}
	else if (f == 'X')
	{
		n = va_arg(ap, unsigned int);
		if (n == 0)
			pc += _putchar('0');
		else
			pc += print_HEX(n);
	}
	else if (f == 'r')
		pc += print_rev(va_arg(ap, char *));
	else if (f == 'R')
		pc += rot13(va_arg(ap, char *));
	else
	{
		pc += _putchar('%');
		pc += _putchar(f);
	}
	return (pc);
}
