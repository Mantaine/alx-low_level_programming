#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: string to be converted
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int k, l, m, len, o, digit;

	k = 0;
	l = 0;
	m = 0;
	len = 0;
	o = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (k < len && o == 0)
	{
		if (s[k] == '-')
			++l;
		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] = '0';
			if (l % 2)
				digit = -digit;
			m = m * 10 + digit;
			o = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			o = 0;
		}
		k++;
	}
	if (o == 0)
		return (0);
	return (m);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
