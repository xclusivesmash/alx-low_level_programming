#include"main.h"

/**
 * _strlen - determines the length of a string
 * @s: pointer to char
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - prints half of a string
 * @str: pointer to char
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 2 == 0)
	{
		i = len / 2;
	} else
	{
		i = (len / 2) / 1;
	}
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
