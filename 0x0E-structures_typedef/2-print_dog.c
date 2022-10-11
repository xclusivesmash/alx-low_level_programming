#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: pointer to strcut to print
* Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return; /* print nothing */

	/* conditinal check */
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	
	printf("Age: %f\n", (*d).age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
