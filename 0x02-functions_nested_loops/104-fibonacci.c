#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int count = 2;

	float i = 1;
	float j = i + 1;
	float k = j + k;

	printf("%.0f, ", i);
	printf("%.0f, ", j);

	while (count < 98)
	{
		count++;
		printf("%.0f", k);
		i = j;
		j = k;
		k = i + j;

		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}


