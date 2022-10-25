#include "lists.h"

/**
* add_nodeint_end - adds new node at the end
* @head: pointer to pointer to listint_t
* @n: integer
* Return: pointer to new address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	/* malloc check */
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}

	/* fill new node */
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		/* loop until last null node */
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		/* point tmp to new */
		tmp->next = new;
	}

	return (new);
}
