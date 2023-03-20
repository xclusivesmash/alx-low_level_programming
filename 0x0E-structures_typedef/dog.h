#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a type to use for defining dogs
 * @name: name of the dog
 * @age: how old is the dog
 * @owner: who owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
