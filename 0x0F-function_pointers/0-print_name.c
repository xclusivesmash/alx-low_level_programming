#include <stdlib.h>

/**
* print_name - prints name
* @name: name to be printed to stdout
* @f: pointer to function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	/* check if NULL is not passed */
	if (name != NULL && f != NULL)
		(*f)(name);
}
