#include <stdlib.h>

/**
* _strlen - computes length of a string
* @s: string to be manipulated
* Return: len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
* string_concat - concatenates two strings
* @s1: base string
* @s2: string to be appended to s1
* @n: #characters to append from s2 to s1
* Return: pointer to the new string containing
* s2 and s1, with the null terminating character
*/
char *string_concat(char *s1, char *s2, unsigned int n)
{
	int nn, ln1, ln2, i, j;
	char *ptr;

	nn = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	if (nn >= ln2)
		nn = ln2;
	if (nn < 0)
		return (NULL);

	ptr = malloc((ln1 + nn) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	/* start filling the empty spaces */
	i = 0;
	while (i < ln1)
	{
		ptr[i] = s1[i];
		i++;
	}
	for (j = 0; j < nn; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
