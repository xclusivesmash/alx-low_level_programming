#include "main.h"

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

	/* 8 == byte */
	max_bit_size = sizeof(n) * 8;
	if (index > max_bit_size)
		return (-1);
	return ((n >> index) & 1);
}
