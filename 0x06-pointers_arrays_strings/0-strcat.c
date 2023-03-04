#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to append to
 * @src: the string to add to dest
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j, dest_len = 0;

	while (dest[i] != '\0')
	{
		dest_len = dest_len + 1;
		i  = i + 1;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[dest_len + j] = src[j];
	}

	return (dest);
}
