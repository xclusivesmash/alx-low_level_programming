#include "variadic_functions.h"

/**
* print_numbers - prints numbers.
* @separator: str to be printed btw numbers.
* @n: number of parameters.
* Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list vlist;

	if (n > 0)
	{
		va_start(vlist, n);
		for (i = 0; i < n; i++)
		{
			num = va_arg(vlist, int);
			printf("%d", num);
			if (separator != NULL && (i != (n - 1)))
			printf("%s", separator);
		}
		printf("\n");
		va_end(vlist);
	}
}
