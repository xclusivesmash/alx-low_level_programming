#ifndef DOG_H
#define DOG_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog structure with properties.
 * @name: name of an instance of the dog.
 * @age: age of a dog.
 * @owner: owner of a dog.
 *
 * Description: This is a very simple structure.
 * No long description required.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - code name for struct dog.
 */
typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
