#include <stdio.h>

/**
 * main - prints all possible combos of 2-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int last;
	int i;
	int j;

	last = 9;
	for (i = 0; i <= last; i++)
	{
		for (j = (i + 1); j <= last; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
