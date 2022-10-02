#include <stdlib.h>
#include <stdio.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (on success)
*/
int main(int argc, char *argv[])
{
	int m = 1;
	int i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			m *= atoi(argv[i]);
		}
	}
	printf("%d\n", m);
	return (0);
}
