#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each member of an array.
 * @array: input array.
 * @size: array size.
 * @action: function pointer.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
