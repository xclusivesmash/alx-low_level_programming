#include "main.h"

/**
 * _isalpha - checks if c is a letter
 * irregardless of case
 * @c: input parameter to be checked
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	/* come checking conditio */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
