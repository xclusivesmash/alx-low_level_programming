#include "main.h"

/********************** PRINT BINARY *********************/
/**
* print_binary - prints a binary representation of a number.
* @n: input number.
* Return: void.
*/
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int saved, comp;

	i = 0;
	saved = n;
	while (saved > 0)
	{
		i = i + 1;
		/* DIVIDE BY 2 */
		saved = saved >> 1;
	}
	/* REVERSE i BY ONE */
	i = i - 1;
	comp = 1;
	if (i > 0)
		comp = comp << i;
	while (comp > 0)
	{
		if (!(n & comp))
			_putchar('0');
		else
			_putchar('1');
		/* DIVIDE BY 2 */
		comp = comp >> 1;
	}
}
