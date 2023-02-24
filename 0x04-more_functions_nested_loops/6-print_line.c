#include "main.h"

/**
 * print_line - prints line using underscore
 * @n: number of times to print n
 * Return: void
 */
void print_line(int n)
{
	int i;

	/* input check */
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	/* main code */
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
