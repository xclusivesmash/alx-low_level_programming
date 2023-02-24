#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 * Return: void
 */
void print_diagonal(int n)
{
	int length, space;

	/* Input check */
	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (length == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
