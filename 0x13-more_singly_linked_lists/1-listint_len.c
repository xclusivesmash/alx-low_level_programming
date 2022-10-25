#include "lists.h"

/**
* listint_len - returns #elements in a linked list
* @h: linked list
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
