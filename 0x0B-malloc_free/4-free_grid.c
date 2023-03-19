#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-d array grid created
 * @grid: array created
 * @height: rows of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
