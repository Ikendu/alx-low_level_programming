#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long a, a2, b, b2;
	unsigned long x, y;

	for (count = 0; count < 92; count++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);

		fb1 = fb2;
		fb2 = sum;
	}	
	
	a = fb1 / 10000000000;
	a2 = fb2 / 10000000000;
	b = fb1 % 10000000000;
	b2 = fb2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		x = a + b;
		y = a2 + b2;

		if (a2 + b2 > 9999999999)
		{
			x += 1;
			y %= 10000000000;
		}
		printf("%lu%lu", x, y);
		if (count != 98)
			printf(", ");

		a = b;
		a2 = b2;
		b = x;
		b2 = y;
	}

	printf("\n");
	return (0);

}
