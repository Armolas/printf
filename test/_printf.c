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
	char s, single_char, *str;

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
			/* store the next value/char and current */
			s = *(format + 1);

			/* check what kind of specifier it is */
			switch (s)
			{
				case 'c':
					single_char = (char)va_arg(ap, int);
					_putchar(single_char);
					format++;
					break;
				case 's':
					str = va_arg(ap, char*);

					j = _str_cnt(str);
					
					/* loops through the string */
					for (i = 0; i < j; i++)
						_putchar(str[i]);
					format++;
					break;
				case '%':
					single_char = (char)va_arg(ap, int);
					_putchar(single_char);
					format++;
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
