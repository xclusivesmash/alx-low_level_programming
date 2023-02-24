#include "main.h"

/**
 * _isupper - checks if a char var is uppercase
 * @c: integer input
 * Return: 1 if c in uppercase,
 * 0 is returned oitherwise.
 */
int _isupper(int c)
{
	/* for the true case */
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0); /* for otherwise case */
}
