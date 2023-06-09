#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates product of two numbers.
 * @argc: argument count.
 * @argv: argumnt vector.
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int product;

	/* Error check */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
