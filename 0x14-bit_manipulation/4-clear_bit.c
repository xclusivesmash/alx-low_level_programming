#include "main.h"

/******************** CLEAR BIT ********************/
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
	size_t BYTE_SIZE;

	/* 8 BITS = BYTE */
	BYTE_SIZE = 8;
	max_bit_size = sizeof(*n) * BYTE_SIZE;
	if (index > max_bit_size)
		return (-1);
	/* DEREF. AND CLEAR */
	*n = (*n) & (~(1 << index));
	return (1);
}
