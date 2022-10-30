#include "main.h"

/**
* flip_bits - returns the number of bits you
* would need to flip to get from one number to
* another
* @n: input number
* @m: integer
* Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change = n ^ m;
	unsigned int number;

	number = 0;
	while (change > 0)
	{
		number = number + (change & 1);
		change = change >> 1;
	}
	return (number);
}
