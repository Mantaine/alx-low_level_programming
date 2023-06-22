#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			p = n * m;
			/**
			 * add space if single no
			 * put 1st digit if its 2 no.
			*/
			if (p <= 9)
			_putchar(' ');
			else
			_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
		}
		_putchar('\n');
		}
}
