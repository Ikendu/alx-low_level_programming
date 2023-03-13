#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2-dimentional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: the pointer or a Null
 */
int **alloc_grid(int width, int height)
{
	int **dem2;
	int h, w;

	if (h <= 0 || w <= 0)
		return (NULL);

	dem2 = malloc(sizeof(int) * h)
		if (dems == NULL)
			return (NULL);

	for (h = 0; h < height; h++)
	{
		dem2[h] = malloc(sizeof(int) * w);

		if (dem2[h] == NULL)
		{
			for (; h >= 0; h--)
			free(dem2[h]);
		free(dem2);
		return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			dem2[h][w] = 0;
	}
	return (dem2);
}
