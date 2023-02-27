#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to char
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}
	return (length);
}
