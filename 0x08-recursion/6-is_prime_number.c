/**
* prime_test - checks if a number is prime
* @n: number to be checked
* @d: divisor
* Return: 1 if prime, 0 otherwise.
*/
int prime_test(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	if (n == d)
	{
		return (1);
	}
	return (prime_test(n, d + 1));
}

/**
* is_prime_number - checks if a number is prime.
* @n: number to be checked
* Return: 1 if true, otherwise 0
*/
int is_prime_number(int n)
{
	int i;

	i = 3;
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_test(n, i));
}
