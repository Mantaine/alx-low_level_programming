#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int k;
	int y;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[k] = src[y];
		k++;
		y++;
	}
		dest[k] = '\0';
		return (dest);
}
