#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: Always 0 (on success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit = digit + 1;
	}
	putchar('\n');
	return (0);
}
