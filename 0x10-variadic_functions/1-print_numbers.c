#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @n: number of integers
 * @separator: separator between two numbers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (t = 0; t < n; t++)
	{
		printf("%d", va_arg(ap, int));
		if (t < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

