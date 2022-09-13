#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets (x10) on each line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		i++;
		_putchar('\n');
	}
}
