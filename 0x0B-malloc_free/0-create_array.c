#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars,
* initialized with a specific char.
* @size: size of the array
* @c: specific char
* Return: Pointer to the array or
* NULL if the programe fails.
*/
char *create_array(unsigned int size, char c)
{
	char *pchar;
	int i = 0;

	if (size == 0)
		return (NULL);
	pchar = malloc(sizeof(char) * size);
	if (pchar == NULL)
		return (NULL);
	while (i < size)
	{
		*(pchar + i) = c;
		i++;
	}
	/* str array must always be null terminated */
	*(pchar + i) = '\0';
	return (pchar);
}
