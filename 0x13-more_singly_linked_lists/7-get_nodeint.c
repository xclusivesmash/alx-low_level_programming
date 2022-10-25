#include "lists.h"

/**
* listint_len - determines #nodes in linked list
* @h: linked list
* Return: number of nodes
*/
unsigned int _listint_len(listint_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		n = n + 1;
		h = h->next;
	}
	return (n);
}

/**
* get_nodeint_at_index - gets node at nth index
* @head: pointer to listint_t
* @index: integer
* Return: pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ncount;

	ncount = _listint_len(head);
	if (head == NULL)
	{
		return (NULL);
	}

	/* check if index is within bounds */
	if ((index >= 0) && (index < ncount))
	{
		while ((index > 0) && (head != NULL))
		{
			head = head->next;
			index = index - 1;
		}
		return (head);
	}
	return (NULL);
}
