#include <variadic_functions.h"

/**
* sum_them_all - sum all its parameters
* @n: #parameters passed
* Return: total
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list vlist;

	if (n == 0)
		return (0);

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vlist, int);
	}
	va_end(vlist);
	return (sum);
}
