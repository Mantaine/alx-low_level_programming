#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always a success
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int n;

	for (b = 0; b < 8; b++)
	{
	for (n = 0; n < 8; n++)
	_putchar(a[b][n]);
	_putchar('\n');
	}
}
