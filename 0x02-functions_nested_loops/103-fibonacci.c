#include <stdio.h>

/**
 * main - even value Fibonacci sequence
 *
 * Return: Always 0.
 */

int main(void)
{
	long i, fb1 = 0, fb2 = 1, sum;
	float total;

	while(1)
	{
		sum = fb1 + fb2;
		if (sum > 4000000)
			break;

		if ( (sum % 2) == 0)
				total += sum;
		fb1 = fb2;
		fb2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
