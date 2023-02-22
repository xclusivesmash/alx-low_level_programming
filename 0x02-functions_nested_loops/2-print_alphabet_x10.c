#include "main.h"

/**
 * print_alphabet_x10 - prints alphabtets x10 to STDOUT
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a = a + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
