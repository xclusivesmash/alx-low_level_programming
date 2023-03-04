#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: string from which to add
 * @src: string to add to dest
 * @n: bytes to use from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0, j;

	while (dest[i] != '\0')
	{
		dest_len = dest_len + 1;
		i = i + 1;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j = j + 1;
	}
	return (dest);
}
