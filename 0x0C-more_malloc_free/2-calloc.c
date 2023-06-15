#include "main.h"

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size (in bytes) of each element.
 * Return: void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *store;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	store = malloc(nmemb * size);
	if (store == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		((char *) store)[i] = 0;
	return (store);
}
