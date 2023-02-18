#include <stdio.h>

/**
 * main - prints all possible combinations of
 * three-digit numbers
 * Return: Always 0 (on success)
 */
int main(void)
{
	int first = 0, second, third;

	while (first < 10)
	{
		second = first + 1;
		while (second < 10)
		{
			third = second + 1;
			while (third < 10)
			{
				putchar('0' + first);
				putchar('0' + second);
				putchar('0' + third);
				if (first != 7 || second != 8 || third != 9)
				{
					putchar(',');
					putchar(' ');
				}
				third = third + 1;
			}
			second = second + 1;
		}
		first = first + 1;
	}
	putchar('\n');
	return (0);
}
