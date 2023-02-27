#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}
	/* reset i to original string size */
	i = i - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i = i - 1;
	}
	/* newline at the end */
	_putchar('\n');
}
