#include "lists.h"

/**
* insert_nodeint_at_index - inserts a node at n-th position
* @head: pointer to pointer to linked list
* @idx: index
* @n: integer
* Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	if (*head == NULL)
	{
		return (NULL);
	}
	/* malloc check */
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}

	/* fill in the new node */
	new->n = n;

	/* set tmp to *head */
	tmp = *head;

	while ((i > 0) && *head != NULL)
	{
		if (i == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i = i + 1;
	}
	return (NULL);
}
