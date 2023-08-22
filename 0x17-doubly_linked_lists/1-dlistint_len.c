#include "lists.h"

/**
 * dlistint_len - finds number of elements of a doubly
 * linked list.
 * @h: pointer to first node.
 * Return: size of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	/* INPUT CHECK */
	if (h == NULL)
		return (len);
	while (h != NULL)
	{
		h = h->next;
		len = len + 1;
	}
	return (len);
}
