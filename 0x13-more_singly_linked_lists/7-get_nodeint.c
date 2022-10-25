#include "lists.h"

/**
* get_nodeint_at_index - gets node at nth index
* @head: pointer to listint_t
* @index: integer
* Return: pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ncount;

	ncount = 0;
	if (head == NULL)
	{
		return (NULL);
	}

	while ((ncount > 0) && (head != NULL))
	{
		head = head->next;
		ncount = ncount + 1;
	}

	if (ncount == index)
		return (head);

	return (NULL);
}
