#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */
