#include "main.h"
/**
 * rot13 - encodes and print a string using rot13
 * @s: the string to encode
 * Return: number of characters printed
 */
int rot13(char *s)
{
	int i, j, pc = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (s[i] == in[j])
			{
				pc += _putchar(out[j]);
				break;
			}
		}
	}
	return (pc);
}
