#include "dog.h"

/**
 * init_dog - initializes an instance of struct dog.
 * @d: pointer to struct dog.
 * @name: name of the instance dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
