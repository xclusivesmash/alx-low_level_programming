#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (o success)
 */
int main(int argc, char **argv)
{
	int i, prod = 1;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		prod = prod * atoi(argv[i]);
	}
	printf("%d\n", prod);
	return (0);
}
