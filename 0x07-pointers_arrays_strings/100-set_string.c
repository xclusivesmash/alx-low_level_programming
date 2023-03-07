#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to assign value
 * @to: value t be assigned to s
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
