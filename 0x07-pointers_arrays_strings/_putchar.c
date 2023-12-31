#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - writes character c to stdout
 * @c: The character to print
 *
 * Return: On success return 1
 * On error: Return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
