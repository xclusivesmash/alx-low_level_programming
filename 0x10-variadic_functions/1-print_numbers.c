#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list store;
	int arg;

	va_start(store, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(store, int);
		if (separator == NULL)
			printf("%d", arg);
		else if (separator && i == 0)
			printf("%d", arg);
		else
			printf("%s%d", separator, arg);
	}
	va_end(store);
	printf("\n");
}
