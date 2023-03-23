#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers passed to it.
 * @separator: char used to separate the numbers.
 * @n: number of arguments passed in.
 * Return: void
 * if separator is NULL, it is not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argList;
	int number;

	va_start(argList, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(argList, int);
		printf("%d", number);
		if (separator != NULL && (i != (n - 1)))
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(argList);
}
