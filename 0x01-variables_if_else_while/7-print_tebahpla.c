#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * Return: Always 0 (on success)
 */
int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character = character - 1;
	}
	putchar('\n');
	return (0);
}
