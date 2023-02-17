#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * and then in uppercase
 * Return: Always 0 (on sucess)
 */
int main(void)
{
	char lowerChar = 'a';
	char upperChar = 'A';

	while (lowerChar <= 'z')
	{
		putchar(lowerChar);
		lowerChar = lowerChar + 1;
	}
	while (upperChar <= 'Z')
	{
		putchar(upperChar);
		upperChar = upperChar + 1;
	}
	putchar('\n');
	return (0);
}
