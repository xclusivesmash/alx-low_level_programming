#include "lists.h"

/**
 * list_len - returns number of elements in list_t.
 * @h: head.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t store = 0;

	while (h != NULL)
	{
		store = store + 1;
		h = h->next;
	}
	return (store);
}
