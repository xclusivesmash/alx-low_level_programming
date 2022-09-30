/**
* test_root - searches for a root of a number
* @n: number to find the root of
* @base: iteration root
* Return: root (base) if exist
*/
int test_root(int n, int base)
{
	/* check is base is root */
	if (base * base > n)
	{
		return (-1);
	}
	if (base * base == n)
	{
		return (base);
	}
	return (test_root(n, base + 1));
}

/**
* _sqrt_recursion - finds square root of n
* @n: number
* Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* no root */
	}
	return (test_root(n, 0));
}
