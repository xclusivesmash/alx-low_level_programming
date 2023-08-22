#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly
 * linked list.
 * @h: pointer to first node.
 * Return: size of the linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	len = 0;
	/* INPUT CHECK */
	if (h == NULL)
		return (len);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len = len + 1;
	}
	return (len);
}
