#include "main.h"

/**
 * main - computes and sums multiples
 * of 3 and 5 less than 1024
 * Return: always 0 (on success)
 */
int main(void)
{
	int results = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			results = results + i;
		}
		else if (i % 5 == 0)
			results = results + i;
	}
	printf("%d\n", results);
	return (0);
}
