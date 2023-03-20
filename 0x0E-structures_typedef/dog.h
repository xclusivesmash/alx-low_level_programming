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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
