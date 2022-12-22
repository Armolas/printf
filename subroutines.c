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
