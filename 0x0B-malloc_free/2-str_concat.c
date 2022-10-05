#include <stdlib.h>
#include <stdio.h>

/**
** _strlen - computes the len fo string
* @s: pointer to char
* Return: length
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
* str_concat - concatenates two strings
* @s1: base string
* @s2: to be appended to s1
* Return: pointer to char (points to
* newly allocated space in memory)
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	newstr = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (newstr == NULL)
		return (NULL);
	/* starting concatenating */
	i = 0;
	while (i < len1)
	{
		newstr[i] = s1[i];
		i++;
	}
	i = 0;
	j = len1;
	while (j < (len1 + len2))
	{
		newstr[j] = s2[i];
		i++;
		j++;
	}
	/* terminate the string will null character */
	newstr[(len1 + len2) + 1] = '\0';
	return (newstr);
}
