#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int c = 0;
	char v[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

	for (; i < 16; i++)
	{
		if (i >= 10 && i < 16)
		{
			putchar(v[c]);
			c += 1;
		} else
			putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
