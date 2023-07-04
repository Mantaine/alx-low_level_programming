#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: Input
 * @accept: Input
 * Return: Always a success
 */
char *_strpbrk(char *s, char *accept)
{
	int e, l;

	for (e = 0; s[e] != '\0'; e++)
	{
	for (l = 0; accept[l] != '\0'; l++)
	{
	if (s[e] == accept[l])
	return (s + e);
	}
	}
	return (NULL);
}
