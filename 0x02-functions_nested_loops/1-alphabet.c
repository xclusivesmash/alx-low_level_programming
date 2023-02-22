#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a = a + 1;
	}
	_putchar('\n');
}
