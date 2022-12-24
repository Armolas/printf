#include "main.h"

/**
 * _printf - prints a string and substituting formats as needed
 * @format: last param before variadic & holding str
 * 
 * Return: int (num of args writte)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int written;
	int i;

	i = 0;
	written = 0;
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			switch(format[++i])
			{
				case 'c':
					_fputc(va_arg(ap, int), stdout);
					written++;
					break;
				case 's':
					_fputs(va_arg(ap, char *), stdout);
					written++;
					break;
				case '%':
					_putchar('%');
					written++;
					break;
				default:
					_putchar('%');
					_fputc(format[i], stdout);
					written++;
					break;
			}
		}
		else
		{
			_fputc(format[i], stdout);
			written++;
		}
		i++;
	}
	_putchar('\0');
	va_end(ap);
	return (written);
}
