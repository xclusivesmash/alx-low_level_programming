#include "main.h"

unsigned int _strlen(char *s);

/**
 * argstostr - concatenates all command line args.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer to concatenated string.
 */
char *argstostr(int ac, char **av)
{
	unsigned int length = 0, j;
	int i, k = 0;
	char *store;

	/* ERROR HANDLING */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* CODE SPACE */
	for (i = 0; i < ac; i++)
		length = length + _strlen(av[i]);
	store = malloc(sizeof(char) * length + ac + 1);
	if (store == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			store[k] = av[i][j];
			k = k + 1;
		}
		store[k] = '\n';
		k = k + 1;
	}
	store[k] = '\0';
	return (store);
}

/**
 * _strlen - computes the length of a string.
 * @s: input string.
 * Return: length of s.
 */
unsigned int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
