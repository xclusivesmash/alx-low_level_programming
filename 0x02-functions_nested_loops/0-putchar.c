#include "main.h"

/**
 * main - prints _putchar to STDOUT
 * Return: Always 0(on success)
 */
int main(void)
{
	int i;
	char name[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
