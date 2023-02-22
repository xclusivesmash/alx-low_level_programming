#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: input char to be checked
 * Return: Boolen value
 * 1 for tru, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
