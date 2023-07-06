#include "main.h"

/**
* clear_bit - sets the value of a bit to 0
* at a given index.
* @n: pointer to integer.
* @index: index of choice.
* Return: 1 on success, otherwise -1.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bit_size;

	/* 8 == byte */
	max_bit_size = sizeof(*n) * 8;
	if (index > max_bit_size)
		return (-1);
	*n = (*n) & (~(1 << index));
	return (1);
}
