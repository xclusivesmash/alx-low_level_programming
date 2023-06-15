#include "main.h"

/**
* _realloc - allocates memory using malloc and free
* @ptr: pointer to previous memory
* @old_size: byte size of the allocated space for ptr.
* @new_size: byte size of the new memory block.
* Return: void pointer.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	unsigned int j;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		else
			return (new_mem);
	}
	if (new_size == old_size)
		return (ptr);

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	/* start placing values */
	j = 0;
	while (j < old_size && j < new_size)
	{
		*((char *)new_mem + j) = *((char *)ptr + j);
		j++;
	}
	free(ptr);
	return (new_mem);
}
