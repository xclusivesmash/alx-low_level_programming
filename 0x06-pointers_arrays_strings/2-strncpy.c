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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}
