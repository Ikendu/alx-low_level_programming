#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Return 0
 *
 */

int main(void)
{
	int i;
	int j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
			if ((j % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((1 % 10) + '0');
				if (i != 19 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar(10);

	return (0);

}
