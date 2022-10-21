#include "lists.h"

/**
* list_len - returns #elements in a linked list
* @h: pointer to a linked list
* Return: length
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n += 1;
	}
	return (n);
}
