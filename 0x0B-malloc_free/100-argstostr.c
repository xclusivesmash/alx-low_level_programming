#include "main.h"
#include <stdlib.h>

/**
 * _strlen - computes length of a string
 * @s: input string
 * Return: len
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
 * argstostr - concatenates all the args passed
 * to the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int size, i, j, m = 0;
	char *store;

	/* Input check */
	if (ac == 0 || av == NULL)
		return (NULL);

	size = ac;
	/* Finds overall size */
	for (i = 0; i < ac; i++)
	{
		size = size + _strlen(av[i]);
	}

	/* allocate memory */
	store = malloc(sizeof(*store) * size + 1);
	if (store == NULL)
	{
		free(store);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			store[m] = av[i][j];
			m = m + 1;
		}
		store[m] = '\n';
		m = m + 1;
	}
	store[m] = '\0';
	return (store);
}
