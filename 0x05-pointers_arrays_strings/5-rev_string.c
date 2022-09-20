#include "main.h"

/**
 * _strlen - determines the length of a string
 * @str: pointer to char
 *
 * Return: count
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * rev_string - reverses a string
 * @s: pointer to char
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int m = 0;
	int n;
	char tmp;

	n = _strlen(s) - 1;
	while (m < n)
	{
		tmp = s[m];
		s[m] = s[n];
		s[n] = tmp;
		m++;
		n--;
	}
}
