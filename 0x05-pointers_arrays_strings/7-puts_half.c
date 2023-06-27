#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int x = 0;
	int r;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 1)
	{
		r = (x - 1) / 2;
		r += 1;
	}
	else
	{
		r = x / 2;
	}

	for (; r < x; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
