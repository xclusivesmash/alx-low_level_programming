#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: lowest possible value.
 * @max: maximum possible value.
 * Return: pointer to created array.
 */
int *array_range(int min, int max)
{
	int *store, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	store = malloc(sizeof(int) * size);
	if (store == NULL)
		return (NULL);

	i = 0;
	while ((i + min) >= min && (i + min) <= max)
	{
		store[i] = min + i;
		i = i + 1;
	}
	return (store);
}
