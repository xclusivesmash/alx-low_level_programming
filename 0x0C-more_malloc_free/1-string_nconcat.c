#include "main.h"

/**
 * _strlen - computes string length.
 * @s: input string.
 * Return: length of s.
 */
unsigned int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: input string one.
 * @s2: input string two.
 * @n: bytes to pad to s1.
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *store;
	unsigned int len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s2);
	if (n >= len)
		n = len;
	store = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (store == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		store[i] = s1[i];
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		store[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	store[i] = '\0';
	return (store);
}
