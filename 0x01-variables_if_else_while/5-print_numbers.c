#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: Alwasy 0 (on success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
