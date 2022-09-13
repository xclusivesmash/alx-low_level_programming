#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i <= (int) sizeof(var); i++)
	{
		_putchar(var[i]);
	}
	return (0);
}
