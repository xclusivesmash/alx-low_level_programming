#include "main.h"

/**
 * _isalpha - check if an input is alphabetic or not
 * @c: input to be checked
 * Return: 1 if is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
