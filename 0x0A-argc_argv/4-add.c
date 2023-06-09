#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
* is_number - checks if input is numeric
* @argv_1: argument vector
* Return: 0 if false, otherwise, 1
*/
bool is_number(char *argv_1)
{
	int i;

	for (i = 0; argv_1[i]; i++)
	{
		if (argv_1[i] >= '0' && argv_1[i] <= '9')
			return (1);
	}
	return (0);
}

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (on success)
* Otherwise, 1 is returned
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!is_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
