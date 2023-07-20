#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @n: number of strins passed to function
 * @separator: separator between two numbers
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	for (i = 0; i < n; i++)
	{
	str = va_arg(ap, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

