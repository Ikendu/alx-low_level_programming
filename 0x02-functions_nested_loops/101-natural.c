#include <stdio.h>

/**
 * main - list all natural numbers that are mult of 3 or 5.
 *
 * Return: Always o.
 */
int main(void)
{
	int i, calc = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			calc += i;
	}
	printf("%d\n", calc);

	return (0);
}
