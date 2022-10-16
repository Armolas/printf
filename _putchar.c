#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: The characte to write
 *
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
