#include <stdlib.h>
#include "main.h"

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: always 0 (on sucess)
*/
int main(int argc, char **argv)
{
	char s[] = "Error";
	int i, j, multi;

	if (argc != 3)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		_putchar('\n');
		exit(98);
	}
	if (argv[1][0] == '-' || argv[2][0] == '-')
	{
		for (j = 0; s[j] != '\0'; j++)
			_putchar(s[j]);
		_putchar('\n');
		exit(98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			for (j = 0; s[j] != '\0'; j++)
				_putchar(s[j]);
			_putchar('\n');
			exit(98);
		}
	}
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
		{
			for (j = 0; s[j] != '\0'; j++)
				_putchar(s[j]);
			_putchar('\n');
		}
	}
	multi = atoi(argv[1]) * atoi(argv[2]);
	_putchar('0' + multi);
	_putchar('\n');
	return (0);
}
