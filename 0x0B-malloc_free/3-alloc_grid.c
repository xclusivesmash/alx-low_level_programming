#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - creates a 2-D array of integers
* @width: width of array
* @height: height of array
* Return: pointer to 2-D array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
