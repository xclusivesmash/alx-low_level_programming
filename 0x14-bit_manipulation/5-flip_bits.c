#include "main.h"

/**
* flip_bits - returns the number of bits you
* would need to flip to get from one number to
* another.
* @n: input number.
* @m: integer.
* Return: bits needed for a required flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int num = 0;

	for (flip = n ^ m ; flip > 0; flip >>= 1)
		num = num + (flip & 1);
	return (num);
}
