#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer pointing to memory area
 * @b: byte to be filled in memory pointer to by s
 * @n: bytes to be filled
 * Return: pointer to memory area filled with b (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
