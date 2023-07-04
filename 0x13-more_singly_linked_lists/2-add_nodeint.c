#include "lists.h"

/**
 * add_nodeint - addsa new node at the beginning of a
 * linkd list.
 * @head: head of the list.
 * @n: input integer.
 * Return: address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *store;

	store = malloc(sizeof(listint_t));
	if (store == NULL)
		return (NULL);
	store->n = n;
	store->next = *head;
	*head = store;
	return (store);
}
