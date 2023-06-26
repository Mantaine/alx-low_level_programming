#include "main.h"

/**
 * _strlen -Outputs the length of a  string
 * @s: The string
 *
 * Return: The length of @str
 */

int _strlen(char *s)

{
	int string_length = 0;

	while (*s++)

		string_length++;
	return (string_length);
}
