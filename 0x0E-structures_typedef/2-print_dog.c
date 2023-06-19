#include "dog.h"

/**
 * print_dog - prints an instance of struct dog.
 * @d: address of struct dog instance.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", "(Nil)");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %s\n", "(Nil)");
	else
		printf("Owner: %s\n", d->owner);
}
