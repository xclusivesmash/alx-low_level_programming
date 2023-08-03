#include "main.h"

/******************** INVERT BITS ******************/
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
	unsigned long int flip;	
	unsigned int num;

	flip = n ^ m;
	num = 0;
	while (flip > 0)
	{
		num = num + (flip & 1);
		/* DIVIDE BY 2 */
		flip = flip >> 1;
	}
	return (num);
}
