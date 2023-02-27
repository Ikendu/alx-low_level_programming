#include "main.h"
#include <stdio.h>

/**
 * print_array - output of integer elements
 * @a: The array of integers
 * @n: elements parameter to cross check
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i == n - 1)
		continue;

	printf(", ");
	}
	printf("\n");
}
