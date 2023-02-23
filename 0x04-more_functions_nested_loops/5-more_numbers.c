#include "main.h"
/**
 * more_numbers - multply by 10
 *
 */
void more_numbers(void)
{
	int h;
	int i;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

