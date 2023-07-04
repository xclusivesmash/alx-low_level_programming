#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list.
 * @h: head of the list.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}
