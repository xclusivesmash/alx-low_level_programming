#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14
 * 10x
 * Return: void
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j = j + 1;
	}
}
