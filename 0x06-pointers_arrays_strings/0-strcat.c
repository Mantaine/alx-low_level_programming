#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return void
 */

char *_strcat(char *dest, char *src)
{

	int x;
	int m;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[x] = src[m];
		x++;
		m++;
	}
	dest[x] = '\0';
	return (dest);
}
