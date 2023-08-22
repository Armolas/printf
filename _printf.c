#include "main.h"
/**
 * _printf - prints formatted output
 * @format: the format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, cc = 0;
	va_list ap;

	if (!format)
		return (-1);
	va_start(ap, format);
	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
		{
			cc += spec(format[i + 1], format[i + 2], ap);
			i++;
		}
		else
		{
			_putchar(format[i]);
			cc++;
		}
	}
	va_end(ap);
	return (cc);
}
