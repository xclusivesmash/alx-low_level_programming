#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints string separated by separator.
 * @separator: string separating the strings to be
 * printed.
 * @n: number of strings passed to function.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list arglist;

	va_start(arglist, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(arglist, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(arglist);
}
