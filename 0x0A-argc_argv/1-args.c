#include <stdio.h>

/**
 * main - prints arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (on success)
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	int i, total = 0;

	for (i = 1; i < argc; i++)
	{
		total = total + 1;
	}
	printf("%d\n", total);
	return (0);
}
