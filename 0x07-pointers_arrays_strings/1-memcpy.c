#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always a success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned in j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
