#include "variadic_functions.h"

/**
 * sum_them_all - sums all its arguments.
 * @n: number of inputs to sum.
 * Return: summation.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list store;
	unsigned int i;
	int summation = 0, arg;

	va_start(store, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(store, int);
		summation = summation + arg;
	}
	va_end(store);
	return (summation);
}
