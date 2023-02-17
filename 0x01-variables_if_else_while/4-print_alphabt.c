#include <stdio.h>

/**
 * main - prints letters in lowercase
 * except for q and e.
 * Return: Always 0 (on success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
