#include "main.h"

/**
 * print_times_table - main function
 * @n: program return n integer
 */

void print_times_table(int n)
{
	int i, j, mult;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				mult = i * j;

				if (mult <= 99)
					_putchar(' ');
				if (mult <= 9)
					_putchar(' ');

				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
				}
				else if (mult <= 99 && mult >= 10)
				{
					_putchar((mult / 10) + '0');
				}
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}


