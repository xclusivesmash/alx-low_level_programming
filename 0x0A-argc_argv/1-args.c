#include <stdlib.h>
#include <stdio.h>

/**
* main - prints #arguments passed to it
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (on success)
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
