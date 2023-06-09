#include <stdio.h>

/**
 * main - prints argc.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 on success.
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
