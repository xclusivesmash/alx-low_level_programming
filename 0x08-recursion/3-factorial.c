#include "main.h"

/**
 * factorial - returns the factorial of a number.
 * @n: input integer.
 * Return: factorial of n.
 */
int factorial(int n)
{
	/* error check */
	if (n < 0)
		return (-1);

	/* base case */
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
