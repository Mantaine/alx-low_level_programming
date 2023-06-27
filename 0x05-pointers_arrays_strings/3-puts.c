#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
	_putchar(*str);
	str++;
	_putchar('\n');
	}
}
