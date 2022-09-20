#include "main.h"

/**
 * print_rev - prints a string lateral in reverse
 * @s: pointer to char
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	/* get point before null */
	s--;
	/* set i to length */
	i = length;
	for (; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
