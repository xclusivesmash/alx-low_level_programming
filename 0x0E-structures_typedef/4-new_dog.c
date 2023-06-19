#include "dog.h"

int _strlen(char *s);

/**
* _strcpy - copies ones string contents to another
* @dest:base string
* @src: string from which to copy
* Return: pointer to copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
* _strlen - computes length of string
* @s: string
* Return: len
*/
int _strlen(char *s)
{
	if (*s != '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: pointer to struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_new;
	char *name_copy;
	char *owner_copy;

	d_new = malloc(sizeof(dog_t));

	/*check functionality*/
	if (d_new == NULL)
		return (NULL);

	d_new->age = age;

	if (name == NULL)
		d_new->name = NULL;
	else
	{
		name_copy = malloc(_strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(name_copy);
			free(d_new);
			return (NULL);
		}
		d_new->name = _strcpy(name_copy, name);
	}

	if (owner == NULL)
		d_new->owner = NULL;
	else
	{
		owner_copy = malloc(_strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(owner_copy);
			free(d_new);
			return (NULL);
		}
		d_new->owner = _strcpy(owner_copy, owner);
	}

	return (d_new);
}
