#include <stdio.h>

/**
 * main - first 50 Fibonacci number
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long fb1 = 0, fb2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
