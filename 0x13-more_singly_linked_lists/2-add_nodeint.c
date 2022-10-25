#include "lists.h"

/**
* add_nodeint - adds node at beginning
* @head: pointer to linked list
* @n: integer
* Return: pointer to linked list
*/
list_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* malloc check */
	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (NULL);
	}

	/* add node */
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
