#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings
* @separator: printed between strings
* @n: number of parameters passed
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;
	char *s; /* for input string */

	/* check is n is positive */
	if (n > 0)
	{
		/* actual process */
		va_start(mylist, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(mylist, (char *));
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
		va_end(mylist);
	}
	printf("\n");
}
