#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes.
 * @argc: argument count.
 * @argv: arguemnt vector.
 * Return: Always 0 (on success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	i = 0;
	while (i < bytes)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
		i = i + 1;
	}
	return (0);
}
