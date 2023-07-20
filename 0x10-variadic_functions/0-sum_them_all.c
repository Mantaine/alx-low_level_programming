#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all parameters
 * @n: The number of parameters
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int y, sum = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
	return (0);
	for (y = 0; y < n; y++)
	sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

