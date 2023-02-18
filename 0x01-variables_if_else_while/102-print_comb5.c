#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (on success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = (b + 1); d < 10; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if ((a != 9 && b != 8) &&
					    (c != 9 && d != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
