#include "main.h"

/**
 * _islower - checks if an int is lower or not
 * @c: the character to check
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
