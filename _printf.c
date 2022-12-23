#include "main.h"

/**
 * _printf - formatted printing as the real printf in C
 * @format: string to print (includes specifiers)
 *
 * Return: numbers of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int str_count = 0, i = 0, j;
	char single_char, *str;

	/* checks if format holds a value */
	if (format == NULL)
		return (0);

	/* start the variadic */
	va_start(ap, format);

	/* loop through the strings for printing and getting format specifiers */
	while (*format)
	{
		/* once it meets a specifier */
		if (*format == '%')
		{
			/* check what kind of specifier it is */
			switch (*(format + 1))
			{
				case 'c':
					_putchar((char)va_arg(ap, int));
					break;
				case 's':
					str = va_arg(ap, char*);
					j = _str_cnt(str);
					/* loops through the string */
					for (i = 0; i < j; i++)
						_putchar(str[i]);
					break;
				case '%':
					_putchar((char)va_arg(ap, int));
					break;
				default:
					_putchar(*format);
					break;
			}
			str_count++;
		}
		else
		{
			/* print other characters */
			_putchar(*format);
			str_count++;
		}
		format++;
	}
	va_end(ap);
	return (str_count);
}
