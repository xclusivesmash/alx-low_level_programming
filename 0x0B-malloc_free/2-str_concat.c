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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int size, i, j;
	char *store;

	/* Input check */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = _strlen(s1) + _strlen(s2);
	store = malloc((sizeof(*store) * size) + 1);
	if (store == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		store[i] = s1[i];
	}
	j = 0;
	while (s2[j])
	{
		store[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	store[i] = '\0';
	return (store);
}
