#include "function_pointers.h"

/**
 * array-iterator - executes a function given as
 * a parameter on each element of an array
 * @array: array to execute func
 * @size: size of array
 * @action: pointer to te function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
	x = 0;
	while (x < size)
	{
	action(array[x]);
	x++;
	}
	}
}
