#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - range of arrray
 * @min: minimum range
 * @max: maximum range
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int i, m;
	int *ptr;

	if (min > max)
		return (NULL);
	m = 0;
	for (i = min; i <= max; i++)
		m++;
	ptr = malloc(sizeof(int) * m);

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
