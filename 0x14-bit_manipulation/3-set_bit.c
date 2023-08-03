#include "main.h"

/*********************** SET BIT ********************/
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
	size_t BYTE_SIZE;

	/* 8 BITS = BYTE */
	BYTE_SIZE = 8;
	max_bit_size = sizeof(*n) * BYTE_SIZE;
	if (index > max_bit_size)
		return (-1);
	/* DEREF. AND SET */
	*n = (*n) | (1 << index);
	return (1);
}
