#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 'a';
	int C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C += 1;
	}
	putchar('\n');
	return (0);
}
