#include "main.h"

/**
 * main - FizzBuzz problem
 * Return: Always 0 (on success)
 */
int main(void)
{
	int i, limit = 100;

	for (i = 1; i <= limit; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");

	}
	printf("\n");
	return (0);
}
