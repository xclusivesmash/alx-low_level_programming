#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - retuns the ssum of all its inputs.
 * @n: number of input args passed.
 * Return: toatl sum. if n == 0, 0 is returned.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int summation = 0;
	va_list mylist;

	if (n == 0)
		return (0);

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		summation = summation + va_arg(mylist, int);
	}
	va_end(mylist);
	return (summation);
}

