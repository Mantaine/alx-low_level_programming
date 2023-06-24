#include "main.h"

/**
 * print_diagonal - printing diagonal
 * @x: input variable
 * Return: void
 */

void print_diagonal(int x)

{
	int m, j;

	if (x <= 0)
	_putchar('\n');
	for (m = 0; m < x; m++)

	{
	for (j = 0; j < 1; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}

