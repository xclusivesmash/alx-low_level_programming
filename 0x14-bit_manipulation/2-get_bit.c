#include "main.h"

/**
* get_bit - returns the value of a bit
* at a given index
* @n: integer
* @index: index
* Return: Value of a bit at index,
* or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_size;
	int mask = 1, bit;

	max_size = sizeof(unsigned int) * 8;
	/* check if index is within bounds */
	if (index < 0 || index > max_size)
	{
		return (-1);
	}
	mask = mask << index;
	bit = n & mask;
	return (bit);
}
