#include "main.h"

/**
* set_bit - sets the value of a bit to 1
* at a given index.
* @n: pointer to integer.
* @index: index f choice.
* Return: 1 on success, otherwise, -1.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bit_size;

	/* 8 == byte */
	max_bit_size = sizeof(*n) * 8;
	if (index > max_bit_size)
		return (-1);
	*n = (*n) | (1 << index);
	return (1);
}
