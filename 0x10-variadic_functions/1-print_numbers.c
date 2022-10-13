#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_numbers - prints numbers
* @separator: str to be printed btw numbers
* @n: #parameters
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list vlist;

	if (n <= 0)
		return;

	va_start(vlist, n);
	for (i = 1; i <= n; i++)
	{
		num = va_arg(vlist, int);
		printf("%d", num);
		if (separator != NULL && (i != n))
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}
