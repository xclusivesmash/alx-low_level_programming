#include "main.h"

/**
 * print_array - print array of integers
 * @a: array of integers
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i = i + 1;
	}
	printf("\n");
}
