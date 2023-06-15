#include "main.h"

/**
 * malloc_checked - allocates memory via malloc.
 * @b: bytes of memory to allocate.
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *store;

	store = malloc(b);
	if (store == NULL)
		exit(98);
	return (store);
}
