#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
