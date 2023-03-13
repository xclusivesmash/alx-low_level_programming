#include "main.h"

/**
 * _puts_recursion - prints a string, follwed by newline
 * @s: pointer to firstchar of string to be printed
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
