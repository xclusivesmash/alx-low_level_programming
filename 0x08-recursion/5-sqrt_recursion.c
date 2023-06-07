#include "main.h"

/**
* test_root - searches for a root of a number
* @n: input integer.
* @base: iteration root number.
* Return: base if true.
*/
int _sqrt_check(int n, int base)
{
	/* check if base is root */
	if (base * base > n)
	{
		return (-1);
	}
	if (base * base == n)
	{
		return (base);
	}
	return (_sqrt_check(n, base + 1));
}

/**
* _sqrt_recursion - computes the square root of a number.
* @n: input integer.
* Return: square root of n.
*/
int _sqrt_recursion(int n)
{
	/* error check */
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 0));
}
