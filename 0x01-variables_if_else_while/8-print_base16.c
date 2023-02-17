#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase
 * Return: Always 0 (on success)
 */
int main(void)
{
	int num = 0;
	char c = 'a';

	while (num < 10)
	{
		putchar('0' + num);
		num = num + 1;
	}
	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
