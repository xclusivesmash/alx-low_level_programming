#include "main.h"

/**
 * _puts - writes out a string to stdout
 * @str: pointer to char
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
