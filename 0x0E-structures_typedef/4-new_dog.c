#include "dog.h"

/**
 * new_dog - creates an instance of dog_t.
 * @name: name of dog.
 * @age: dog's age.
 * @owner: owner of the pet.
 * Return: pointer to dog_t type.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *store;

	store = malloc(sizeof(dog_t));
	if (store == NULL)
		return (NULL);

	store->name = name;
	store->age = age;
	store->owner = owner;
	return (store);
}
