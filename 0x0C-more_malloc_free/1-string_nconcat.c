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
	int ln1, ln2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	ptr = malloc((ln1 + ln2) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	/* start filling the empty spaces */
	i = 0;
	while (i < ln1)
	{
		ptr[i] = s1[i];
		i++;
	}
	if (n >= ln2)
	{
		i = 0;
		while (i < ln2)
		{
			ptr[ln1 + i] = s2[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptr[ln1 + i] = s2[i];
			i++;
		}
	}
	ptr[ln1 + n] = '\0';
	return (ptr);
}
