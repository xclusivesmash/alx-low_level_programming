#include <stdio.h>

/**
 * main - combos 5
 *
 * Return: o on success
 */
int main(void)
{
	int last;
	int i;
	int j;
	int m;
	int n;

	last = 9;
	for (i = 0; i <= last; i++)
	{
		for (j = 0; j <= last; j++)
		{
			for (m = i; m <= last; m++)
			{
				for (n = (j + 1); n <= last; n++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + m);
					putchar('0' + n);
					if ((i != 9 && j != 8) &&
						(m != 9 && n != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				n = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
