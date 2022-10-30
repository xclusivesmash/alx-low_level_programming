#include "main.h"

/**
* set_bit - sets the value of a bit to 1
* at a given index.
* @n: pointer to integer
* @index: integer
* Return: 1 on success, otherwise, -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_size;
	unsigned long int mask = 1;

	max_size = sizeof(*n) * 8;
	/* check if index is within bounds */
	if (index > max_size)
	{
		return (-1);
	}
	mask = mask << index;
	*n = (*n) | mask;
	return (1);
}
