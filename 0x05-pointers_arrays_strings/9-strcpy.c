#include "main.h"

/**
 * _strcpy - copies a strin pointed to by
 * src
 * @src: source string
 * @dest: destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
