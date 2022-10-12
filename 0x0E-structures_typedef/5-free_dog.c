#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - frees dog
* @d: struct belonging to struct dog
* Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if ((*d).name)
		free((*d).name);
	if ((*d).owner)
		free((*d).owner);
	free(d);
}
