#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end.
 * @head: head.
 * @n: input integer.
 * Return: address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *store, *tmp = *head;

	store = malloc(sizeof(listint_t));
	if (store == NULL)
		return (NULL);
	store->n = n;
	store->next = NULL;

	/* link the nodes */
	if (*head == NULL)
	{
		*head = store;
		return (store);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = store;
	return (store);
}
