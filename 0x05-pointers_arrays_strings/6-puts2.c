#include "main.h"

/**
 * puts_half - Prints half of a string
 * iff odd len, n =(lenght of string -1) / 2
 * @str: input
 * Return: half of input
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
