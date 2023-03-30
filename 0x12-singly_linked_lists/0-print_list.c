#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a lists
 * @h: pointer to list_t element
 * Return: nodes (number of available nodes)
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] nil\n");
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
