#include "main.h"

/**
 * word_count - counts words in a string.
 * @s: input string.
 * Return: nwords in s.
 */
int word_count(char *s)
{
	int i, nwords = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			nwords = nwords + 1;
		i = i + 1;
	}
	return (nwords);
}

/**
 * strtow - splits a string into words.
 * @str: input string.
 * Return: pointer to the new string.
 */
char **strtow(char *str)
{
	char **store, *copy = str;
	int nwords = word_count(str), i, word_length;
	int j, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	store = malloc(sizeof(char *) * nwords + 1);
	if (store == NULL)
	{
		free(store);
		return (NULL);
	}
	for (i = 0; i < nwords; i++)
	{
		word_length = 0;
		while (copy[k] != '\0')
		{
			if (copy[k] != ' ')
				word_length = word_length + 1;
			if (word_length >= 1 && copy[k] == ' ')
				break;
			k = k + 1;
		}
		store[i] = malloc(sizeof(char) * word_length + 1);
		if (store[i] == NULL)
		{
			for (i = 0; i <= nwords; i++)
				free(store[i]);
			free(store);
			return (NULL);
		}
		while (*str == ' ')
			str = str + 1;
		j = 0;
		while (*str != ' ' && *str != '\0' && j < word_length)
		{
			store[i][j] = *str;
			j = j + 1;
			str = str + 1;
		}
		store[i][j] = '\0';
	}
	store[i] = NULL;
	return (store);
}
