#ifndef DOG_H
#define DOG_H

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

/**
* struct dog - structure for dogs
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
* Descriptions: simple structure (no
* longer description needed.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
