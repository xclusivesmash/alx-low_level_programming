#include "main.h"

/****************** GET BIT AT INDEX ******************/
/**
* get_bit - returns the value of a bit at a given index.
* @n: input integer.
* @index: index of choice.
* Return: bit value at index,
* or -1 if an error occured.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bit_size;
	size_t BYTE_SIZE;

	/* 8 BITS = 1 BYTE */
	BYTE_SIZE = 8;
	max_bit_size = sizeof(n) * BYTE_SIZE;
	if (index > max_bit_size)
		return (-1);
	return ((n >> index) & 1);
}
