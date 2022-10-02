#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the minumum number of coins
* to make change for some money
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (on success)
*/
int main(int argc, char *argv[])
{
	int number;
	int ncoins = 0;

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}

	/* check if arg passed is positive */
	if (argv[1][0] == '-')
	{
		printf("%d\n", 0);
		return (0);
	}

	/* calculate cemts in an amount */
	number = atoi(argv[1]);
	ncoins += (number / 25);
	number = number % 25;
	ncoins += (number / 10);
	number = number % 10;
	ncoins += (number / 5);
	number = number % 5;
	ncoins += (number / 2);
	number = number % 2;
	ncoins += (number / 1);

	printf("%d\n", ncoins);
	return (0);
}
