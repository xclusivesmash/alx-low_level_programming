#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i++] != '\0')
		len = len + 1;

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
