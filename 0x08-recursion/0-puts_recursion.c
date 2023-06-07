#include "main.h"

/**
 * _puts_recursion - prints a string followed by \n.
 * @s: input string.
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
