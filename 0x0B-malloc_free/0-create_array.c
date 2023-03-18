#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initilizes it with a specific char
 * @size: size of the array
 * @c: used for initialization
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *store;
	unsigned int i;

	/* Input check */
	if (size == 0)
		return (NULL);

	/* allocate memory */
	store = malloc(sizeof(c) * size);
	if (store == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		store[i] = c;
	}
	return (store);
}
