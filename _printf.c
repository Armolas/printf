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
	int str_count = 0, i = 0;
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
					format++;
					single_char = (char)va_arg(ap, int);
					_putchar(single_char);
					break;
				case 's':
					format++;
					str = va_arg(ap, char*);

					/* loops through the string */
					for (i = 0; i < (_str_cnt(str)); i++)
						_putchar(str[i]);
					break;
				case '%':
					format++;
					single_char = (char)va_arg(ap, int);
					_putchar(single_char);
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
			write(1, &(*format), 1);
			str_count++;
		}
		format++;
	}
	va_end(ap);
	return (str_count);
}
