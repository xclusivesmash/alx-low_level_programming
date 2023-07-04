#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position.
 * @head: address of head node.
 * @idx: index to insert node at.
 * @n: input integer.
 * Return: addressof new node or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *store, *temp = *head;
	unsigned int i = 0;

	store = malloc(sizeof(listint_t));
	if (store == NULL)
		return (NULL);
	store->n = n;
	store->next = NULL;

	if (idx == 0)
	{
		store->next = *head;
		*head = store;
		return (store);
	}
	while (temp != NULL && i < idx)
	{
		if (i != (idx - 1))
			temp = temp->next;
		else
		{
			store->next = temp->next;
			temp->next = store;
			break;
		}
		i = i + 1;
	}
	return (store);
}
