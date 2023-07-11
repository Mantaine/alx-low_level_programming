#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *xxx;
	int t, m = 0;

	if (str == NULL)
		return (NULL);
	t = 0;
	while (str[t] != '\0')
		t++;
	xxx = malloc(sizeof(char) * (t + 1));
	if (xxx == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
	xxx[m] = str[m];
	return (xxx);
}
