#include "main.h"

/**
 * _printf - prints formatted string to stdout
 * @format: The format used to write the string to stdout
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, cp = 0;
	int args = _strlen(format);
	va_list ap;

	va_start(ap, format);
	for (i = 0 ; i < args ; i++)
	{
		if (format[i] == 'c' && format[i - 1] == '%')
		{
			char c = va_arg(ap, int);

			_putchar(c);
			cp++;
		}
		else if (format[i] == 's' && format[i - 1] == '%')
		{
			char *s = va_arg(ap, char *);
			int j;

			for (j = 0 ; s[j] ; j++)
			{
				_putchar(s[j]);
				cp++;
			}
		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
			cp++;
		}
	}
	va_end(ap);
	return (cp);
}
