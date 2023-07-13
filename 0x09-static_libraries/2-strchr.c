#include "main.h"

/**
 * _strchr - Entry
 * @s: input
 * @c: input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int u = 0;

	for (; s[u] >= '\0'; u++)
	{
	if (s[u] == c)
	return (&s[u]);
	}
	return (0);
}
