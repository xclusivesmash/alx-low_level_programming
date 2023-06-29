#include "lists.h"

/**
 * before - will be executed before main.
 * Return: void.
 */
void __attribute__ ((constructor)) before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
