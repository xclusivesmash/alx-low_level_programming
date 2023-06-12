#include "main.h"

/**
 * alloc_grid - creates a 2-dimensional array.
 * @width: number of columns.
 * @height: number of rows.
 * Return: pointer to newly created array.
 */
int **alloc_grid(int width, int height)
{
	int **store, i, j;

	/* ERROR HANDLING */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* CODE SECTION */
	store = malloc(sizeof(*store) * height);
	if (store == NULL)
	{
		free(*store);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		store[i] = malloc(sizeof(**store) * width);
		if (store[i] == NULL)
		{
			free(store[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			store[i][j] = 0;
		}
	}
	return (store);
}
