#include "main.h"

/**
* prime_check - checks if a number is prime
* @n: input integer.
* @i: iteration variable.
* Return: 1 if prime, 0 otherwise.
*/
int prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_check(n, i - 1));
}

/**
* is_prime_number - checks if a number is prime.
* @n: input integer.
* Return: 1 if true, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, n - 1));
}
