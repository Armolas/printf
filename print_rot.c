#include "main.h"
/**
 * rot13 - encodes and print a string using rot13
 * @s: the string to encode
 * Return: number of characters printed
 */
int rot13(char *s)
{
	int i, pc = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'M')
			pc += _putchar(s[i] + 13);
		else if (s[i] >= 'N' && s[i] <= 'Z')
			pc += _putchar(s[i] - 13);
		else if (s[i] >= 'a' && s[i] <= 'm')
			pc += _putchar(s[i] + 13);
		else if (s[i] >= 'n' && s[i] < 'z')
			pc += _putchar(s[i] - 13);
	}
	return (pc);
}
