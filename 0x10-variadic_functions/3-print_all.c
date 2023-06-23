#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list store;

	va_start(store, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(store, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(store, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(store, double));
					break;
				case 's':
					str = va_arg(store, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i = i + 1;
					continue;
			}
			sep = ", ";
			i = i + 1;
		}
	}

	printf("\n");
	va_end(store);
}
