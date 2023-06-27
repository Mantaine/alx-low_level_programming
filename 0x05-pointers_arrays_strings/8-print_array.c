#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of intergers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)

{
	int d;

	for (d = 0; d < n; d++)
	{
	printf("%d", a[d]);
	if (d != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
