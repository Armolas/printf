#include "main.h"

/**
 * _putchar - prints a char
 * @c: accepts a char
 *
 * Return: char written in integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _str_cnt - counts string char
 * @s: accepts a char pointer
 *
 * Return: length of string (int)
 */
int _str_cnt(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * fwrite - writes a string to stdout
 * @ptr: void ptr holding data to write
 * @size: size of element in byte size
 * @nmemb: the number of elements
 * @stream: pointer to file object
 *
 * Return: size_t
 */
size_t _fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream) 
{
	size_t i;
	size_t j;
	size_t written;
	const char *p;

	p = (const char *)ptr;
	written = 0;
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (fputc(p[i* size + j], stream) == EOF)
			{
				return (written);
			}
			written++;
		}
	}
	return (written);
}

/**
 * fputc - prints a character
 * @c: int type written to stream
 * @stream: FILE object pointer
 *
 * Return: int number of char written
 */
int _fputc(int c, FILE *stream)
{
	return (_fwrite(&c, 1, 1, stream);
}

/**
 * fputs - prints a string
 * @s: pointer to the string
 * @stream: pointer to FILE object
 *
 * Return: 0
 */
int _fputs(const char *s, FILE *stream)
{
	int c;

	while (*s != '\0')
	{
		c = *s;
		if (_fputc(c, stream) == EOF)
		{
			return (EOF);
		}
		s++;
	}
	return (0);
}
