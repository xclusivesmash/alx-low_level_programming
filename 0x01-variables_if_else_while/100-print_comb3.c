#include <stdio.h>

/**
 * main - prints all possible combinations
 * of two-digit numbers
 * Return: Always 0 (on success)
 */
int main(void)
{
	int num, num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = (num + 1); num2 < 10; num2++)
		{
			putchar('0' + num);
			putchar('0' + num2);
			if (num != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
