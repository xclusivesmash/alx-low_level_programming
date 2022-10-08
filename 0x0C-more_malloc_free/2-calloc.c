#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: #elements of the array
* @size: the size of the array
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int j;

	if ((int) nmemb == 0 || (int) size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* initialize all values to zero */
	j = 0;
	while (j < (nmemb * size))
	{
		*((char *)ptr + j) = 0;
		j++;
	}
	return (ptr);
}
