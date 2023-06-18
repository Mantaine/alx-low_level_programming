#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Prints alphabet
 * Return: Always a success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
