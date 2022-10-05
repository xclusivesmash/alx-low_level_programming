#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - computes the length of string
* @s: pointer to char
* Return: size of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
* _strdup - returns a pointer to a newly
* allocated space in memory
* @str: string to be copied
* Return: pointer
*/
char *_strdup(char *str)
{
	char *newstr;
	int i, len;

	len = _strlen(str);
	if (str == NULL)
		return (NULL);
	newstr = malloc((len * sizeof(char)) + 1);
	if (newstr == NULL)
		return (NULL);
	/* start copying elements of str */
	i = 0;
	while (i < len)
	{
		newstr[i] = str[i];
		i++;
	}
	/* every string ends with '\0' */
	newstr[i] = '\0';
	return (newstr);
}
