#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Return: Always 0 (on sucess)
 */
int main(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{
		putchar(character);
		character = character + 1;
	}
	putchar('\n');
	return (0);
}
