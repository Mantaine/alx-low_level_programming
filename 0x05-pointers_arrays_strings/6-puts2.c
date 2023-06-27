#include "main.h"

/**
 * puts2 - Prints only one character out
 * starting with the first one
 * @str: input
 * Return: print
 *
 */

void puts2(char *str)

{
	int i = 0;
	int h = 0;

	while (str[h] != '\0')
	{
	h++;
	}

	for (i = 0; i < h ; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
