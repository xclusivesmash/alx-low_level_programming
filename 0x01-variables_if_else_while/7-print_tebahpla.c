#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a' && c <= 'z')
	{
		putchar(c);
		c -= 1;
	}
	putchar('\n');
	return (0);
}
