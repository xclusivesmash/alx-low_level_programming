#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it
 * with a specific character.
 * @size: the size of the array.
 * @c: character
 * Return: pointer to created array.
 */
char *create_array(unsigned int size, char c)
{
	char *store;
	unsigned int i;

	/* ERROR CHECK*/
	if (size == 0)
		return (NULL);

	/* CODE SECTION */
	store = malloc(sizeof(*store) * size);
	if (store == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		store[i] = c;
	return (store);
}
