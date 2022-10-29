#include "main.h"

/**
* print_binary - prints a binary representation of a number
* @n: input number
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int copy, cmp_value;
	int len = 0;

	/* create a copy of n to compare against */
	copy = n;
	cmp_value = 1;

	/* divide copy by 2 using bit operator >> */
	while (copy > 0)
	{
		len = len + 1;
		copy = copy >> 1;
	}

	/* bring down length by 1 */
	len = len - 1;
	if (len > 0)
	{
		cmp_value = cmp_value << len;
	}
	while (cmp_value > 0)
	{
		if (n & cmp_value)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		cmp_value = cmp_value >> 1; /* == /2 */
	}
	_putchar('\n');
}
