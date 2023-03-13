#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free grid
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: No return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
