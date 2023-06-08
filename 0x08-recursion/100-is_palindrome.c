#include "main.h"

/**
 * _strlen_recursion - computes the length of a string.
 * @s: input string.
 * Return: length od s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_check - chekcs if a string is palindromic.
 * @s: input string.
 * @iterator: iterating variable.
 * @len: len of input string.
 * Return: checked value
 */
int palindrome_check(char *s, int iterator, int len)
{
	if (*(s + iterator) != *(s + len - 1))
		return (0);
	if (iterator >= len)
		return (1);
	return (palindrome_check(s, iterator + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is palindromic.
 * @s: input string.
 * Return: 1 if s is a palindrome. Otherwise, 0 is returned.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome_check(s, 0, _strlen_recursion(s)));
}
