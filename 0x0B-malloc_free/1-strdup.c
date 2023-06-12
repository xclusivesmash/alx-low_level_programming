#include "main.h"

int _strlen(char *s);

/**
 * _strdup - duplicates a string.
 * @str: input string.
 * Return: pointer to new string.
 */
char *_strdup(char *str)
{
	char *store;
	int i;

	/* ERROR CHECK */
	if (str == NULL)
		return (NULL);

	/* CODE SECTION */
	store = malloc((sizeof(*store) * _strlen(str)) + 1);
	if (store == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
		store[i] = str[i];
	store[i] = '\0';
	return (store);
}

/**
 * _strlen - computes the length of a string.
 * @s: input string.
 * Return: length of s.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
