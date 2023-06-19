#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always a success
 */

int main(void)

{

	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
