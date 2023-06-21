#include "3-calc.h"

/**
 * main - performs simple operations based on input.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: integer vaues based on operation.
 */
int main(int argc, char **argv)
{
	int number1, number2, results;
	int (*funct)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&& *argv[2] != '/' && *argv[2] != '%' &&
			funct == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	results = funct(number1, number2);
	printf("%d\n", results);
	return (0);
}
