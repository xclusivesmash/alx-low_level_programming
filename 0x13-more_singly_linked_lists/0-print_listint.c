#include "lists.h"

/**
* print_listint - prints elements of a linked list
* @h: singly linked list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
