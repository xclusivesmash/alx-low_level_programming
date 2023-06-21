#include "function_pointers.h"

/**
 * int_index - searches for an element in array.
 * @array: input array.
 * @size: length of array.
 * @cmp: function pointer.
 * Return: -1 if no elememnt is found. Otherwise
 * index of elememtn is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
