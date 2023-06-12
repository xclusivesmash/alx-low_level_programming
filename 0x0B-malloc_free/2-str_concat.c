#include "main.h"

int _strlen(char *s);

/**
 * str_concat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: pointer to new string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *store;

	/* ERROR HANDLING */
	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";

	/* CODE SECTION */
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	store = malloc((sizeof(*store) * (len1 + len2)) + 1);
	if (store == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		store[i] = s1[i];
	for (i = 0; i < len2; i++)
		store[len1 + i] = s2[i];
	store[len1 + i] = '\0';
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
