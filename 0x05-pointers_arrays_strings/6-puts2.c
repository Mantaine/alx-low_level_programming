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
	int longi = 0;
	int h = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		longi++;
	}

	h = longi - 1;
	for (o = 0; o <= h ; o++)
	{
	if (o % 2 == 0)
	{
	_putchar(str[0]);
	}
	}
	_putchar('\n');
}
