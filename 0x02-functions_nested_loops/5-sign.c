#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input to be checked
 * Return: 1 if positive, -1 if negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n > 0) 
	{
		_putchar('+');
		return (1);
	} else
	{
		_putchar('0');
	}
	return (0);
}
