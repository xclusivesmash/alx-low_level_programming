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
	int bit;
	unsigned int max_size;

	max_size = sizeof(unsigned long int) * 8;
	/* check if index is within bounds */
	if (index > max_size)
	{
		return (-1);
	}

	bit = (n >> index) & 1;
	return (bit);
}
