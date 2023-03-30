#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to first node
 * Return: nodes count
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
