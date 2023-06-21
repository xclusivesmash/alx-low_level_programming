#include "function_pointers.h"

/**
 * print_name - prints a given string.
 * @name: input string.
 * @f: function pointer.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
