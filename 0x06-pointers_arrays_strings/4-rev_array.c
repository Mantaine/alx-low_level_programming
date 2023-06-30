#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of arra
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int r;

	for (m = 0; m < n--; m++)
	{
		r = a[m];
		a[m] = a[n];
		a[n] = r;
	}
}
