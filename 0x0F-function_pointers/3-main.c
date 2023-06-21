#include "3-calc.h"

/**
* main - takes input from user through
* command line, pass the arguments to
* relevant function to do some computation
* and prints the results
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (on success)
*/
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*f)(int, int);

	/* check #arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* check div/mod by zero */
	if ((argv[2][0] == '%' || argv[2][0] == '/') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	/* check operator */
	f = get_op_func(argv[2]);
	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
