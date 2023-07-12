#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: heit input
 * Return: pointer to 2 dimmensional array
 */
int **alloc_grid(int width, int height)
{
	int **zee;
	int x, y;

	if (width <= 0 || height <= 0)
	return (NULL);
	zee = malloc(sizeof(int *) * height);
	if (zee == NULL)
	for (x = 0; x < height; x++)
	{
	zee[x] = malloc(sizeof(int) * width);
	if (zee[x] == NULL)
	{
	for (; x >= 0; x--)
	free(zee[x]);
	free(zee);
	return (NULL);
	}
	}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	zee[x][y] = 0;
	}
	return (zee);
}
