#include "main.h"

/**
 * char *_strcpy - Copies the string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{

	int m = 0;
	int z = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}

	for (; z < m; z++)
	{
		dest[z] = src[z];
	}
	dest[m] = '\0';
	return (dest);
}
