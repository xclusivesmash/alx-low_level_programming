#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - computes the length of string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* argstostr - concatenates args of a program
* @ac: arg count
* @av: arg vector
* Return: pointer to char
*/
char *argstostr(int ac, char **av)
{
	char *newstr;
	int i, j, len, m;

	/* input check */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* dicover space needed */
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	newstr = malloc((sizeof(char) * len) + ac + 1);
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[m] = av[i][j];
			m++;
		}
		s[m] = '\n';
	}
	/* every string ends with null character */
	s[m] = '\0';
	return (s);
}
