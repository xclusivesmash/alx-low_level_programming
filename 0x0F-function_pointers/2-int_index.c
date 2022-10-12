#include <stdlib.h>

/**
* int_index - searches for an integer
* @array: array of integers
* @size: size of the array
* @cmp: point to function
* Return: index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	/* same data type as size to avoid failure */
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1)
}
