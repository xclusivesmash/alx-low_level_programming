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
		for (i = len / 2; str[i] != '\0' && i < len; i++)
		{
			_putchar(str[i]);
		}
	} else
	{
		for (i = (len - 1) / 2; str[i] != '\0' && i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
