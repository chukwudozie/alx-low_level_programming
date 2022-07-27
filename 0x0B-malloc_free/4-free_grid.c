#include "main.h"

/**
 * free_grid - remove memory allocation
 * @grid: memory to be freed
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
