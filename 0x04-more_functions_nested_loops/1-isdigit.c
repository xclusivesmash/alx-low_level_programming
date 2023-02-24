#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: integer input
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	/* true case */
	if (c >= '0' && c <= '9')
		return (1);
	return (0); /* for the otherwise case */
}
