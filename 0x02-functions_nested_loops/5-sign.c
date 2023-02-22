#include "main.h"

/**
 * print_sign - prints the sign of a value
 * @n: input parameter
 * Return: 1 if n is positive, 0 if n == 0,
 * -1 if n is negative
 */
int print_sign(int n)
{
	/* some cheching conditions */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
