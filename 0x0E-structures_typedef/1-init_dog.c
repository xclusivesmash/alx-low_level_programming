#include <stdio.h>
#include "dog.h"

/**
* init_dog - initializes a struct of dog family
* @d: address to member of struct dog
* @name: name of dog
* @age: age of dog
* @owner: dog owner
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return; /* returns nothing */

	(*d).name = name; /* equivalent to d->name */
	(*d).age = age;
	(*d).owner = owner;
}
