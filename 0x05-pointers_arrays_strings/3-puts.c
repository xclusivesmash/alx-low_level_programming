#include "main.h"

/**
 * _puts - prints a string follwed by newline
 * to stdout
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
