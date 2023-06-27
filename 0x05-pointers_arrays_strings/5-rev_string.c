#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input a string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int l;

	while (s[counter] != '\0')
	counter++;
	for (l = 0; l < counter; l++)
	{
	counter--;
	rev = s[l];
	s[l] = s[counter];
	s[counter] = rev;
	}
}
