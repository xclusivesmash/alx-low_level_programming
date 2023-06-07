#include "main.h"

/**
 * _pow_recursion - computes a number raised to an exponent.
 * @x: base
 * @y: exponent
 * Return: x raised to y or -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	/* error check */
	if (y < 0)
		return (-1);

	/* base case */
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
