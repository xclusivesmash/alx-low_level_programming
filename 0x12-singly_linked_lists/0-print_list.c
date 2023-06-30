#include "lists.h"

/**
 * print_list - prints elements of linked list.
 * @h: head.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t store = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		h = h->next;
		store = store + 1;
		printf("\n");
	}
	return (store);
}
