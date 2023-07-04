#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: address of head node.
 * Return: number of nodes.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *temp;

	if (*h == NULL || h == NULL)
		return (node_count);
	while (*h != NULL)
	{
		node_count = node_count + 1;
		if ((*h - (*h)->next) <= 0)
		{
			free(*h), *h = NULL;
			return (node_count);
		}
		else
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
	}
	*h = NULL;
	return (node_count);
}
