#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: a pointer to the newly allocated
 * space in memory
 */
char *_strdup(char *str)
{
	int size, i;
	char *store;

	size = _strlen(str);
	if (str == NULL)
		return (NULL);

	/* allocate memory */
	store = malloc((sizeof(*str) * size) + 1);
	if (store == NULL)
		return (NULL);

	/* copy items from str to store */
	for (i = 0; i < size; i++)
	{
		store[i] = str[i];
	}
	store[i] = '\0';
	return (store);
}
