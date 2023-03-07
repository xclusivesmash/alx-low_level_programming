#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: target string
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0, j;

	/* searching through s */
	while (s[i] != '\0')
	{
		/* searching through accept */
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count = count + 1;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (count);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (count);
}
