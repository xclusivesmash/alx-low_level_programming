#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: string to paste to
 * @src: string to copy from
 * @n: bytes to copy from src
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0, j;

	while (src[i] != '\0')
	{
		src_len = src_len + 1;
		i = i + 1;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j = j + 1;
	}
	while (j < n)
	{
		dest[src_len + j] = '\0';
		j = j + 1;
	}
	return (dest);
}
