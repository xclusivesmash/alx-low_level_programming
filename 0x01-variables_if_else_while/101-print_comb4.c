#include <stdio.h>

/**
 * main - prints differnt combos of 3-digit numbers
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;
	int j;
	int k;
	int last;

	last = 9;
	for (i = 0; i <= last; i++)
	{
		for (j = (i + 1); j <= last; j++)
		{
			for (k = (j + 1); k <= last; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
