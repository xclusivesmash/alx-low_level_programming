#include "main.h"

/**
 * free_grid - frees some memory in heap.
 * @grid: 2-dimensional array.
 * @height: rows of grid.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
