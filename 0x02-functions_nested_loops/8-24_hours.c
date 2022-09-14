#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		while (j < 60)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				if (j < 10)
				{
					_putchar('0');
					_putchar(j + '0');
				} else
				{
					_putchar(j + '0');
				}
				_putchar('\n');
			} else
			{
				_putchar(i + '0');
				_putchar(':');
				if (j < 10)
				{
					_putchar('0');
					_putchar(j + '0');
				} else
				{
					_putchar(j + '0');
				}
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
