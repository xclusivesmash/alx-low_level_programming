#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-D array of integers
 * @width: columns of the array
 * @height: rows of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	grid = malloc(height * sizeof(int *)); /*allocate memory for rows*/

	if (grid == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < height; i++) /*allocate memory for columns of each row*/
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /* validate memory */
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
			grid[i][j] = 0;
	}

	return (grid);
}
