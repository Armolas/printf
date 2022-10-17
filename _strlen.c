#include "main.h"

/**_strlen - finds the length of a string
 * @str: the string
 *
 * Return: length of str
 */
int _strlen(const char *str)
{
	int i, len = 0;

	for (i = 0 ; str[i] ; i++)
	{
		len++;
	}
	return (len);
}
