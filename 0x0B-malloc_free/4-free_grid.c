#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2-dimensional array
* @grid: 2-d array to be freed
* @height: height of the array
* Return: nothing
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
