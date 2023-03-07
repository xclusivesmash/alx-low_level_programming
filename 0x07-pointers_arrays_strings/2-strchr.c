#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched
 * @c: character to be located in s
 * Return: pointer to the first occurance of c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *store;

	while (s[i] != '\0')
	{
		store = &(s[i]);
		if (*store == c)
		{
			return (store);
		}
		i = i + 1;
	}
	return (NULL);
}
