#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: main string.
 * @accept: target string
 * Return: pointer to first occurence,
 * otherwise null is returned.
 */
char *_strpbrk(char *s, char *accept)
{
	char *store;
	int i = 0, j;

	/* search through s */
	while (s[i] != '\0')
	{
		store = &(s[i]);

		/* search through accept */
		j = 0;
		while (accept[j] != '\0')
		{
			/* if any occurance is found, return pointer */
			if (s[i] == accept[j])
				return (store);
			j = j + 1;
		}
		i = i + 1;
	}
	return (NULL);
}
