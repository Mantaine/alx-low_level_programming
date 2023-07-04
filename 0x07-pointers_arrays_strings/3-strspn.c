#include "main.h"

/**
 * _strspn - Entry point
 * @s: Input
 * @accept: Input
 * Return: Always a success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t;
	int k;

	while (*s)
	{

	for (k = 0; accept[k]; k++)
	{
	if (accept[k] == *s)
	{
	t++;
	break;
	}
	else if (accept[k + 1] == '\0')
	return (t);
	}
	s++;
	}
	return (t);
}
