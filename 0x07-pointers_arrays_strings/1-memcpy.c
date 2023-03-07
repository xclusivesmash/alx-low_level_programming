#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to char
 * @src: pointer to char
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	}
	return (dest);
}
