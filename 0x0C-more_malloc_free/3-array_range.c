#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min:  lower range point
* @max: upper range point
* Return: pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *ptr;
	int range, i, j;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);

	/* start placing values */
	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
