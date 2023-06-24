#include <stdio.h>

/**
 * main - print 1 to 100
 * Return: Always 0
 */

int main(void)

{
	int i;

	for (i = 1; i < 100; i++)
	{

	if ((i % 3) == 0 && (i % 5) == 0)
	{
		printf("Fizzbuzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i);
	}
	if (i < 100)
	{
		printf(" ");
	}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
