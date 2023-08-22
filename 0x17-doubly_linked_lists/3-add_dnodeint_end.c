#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly
 * linked list.
 * @head: address of pointer to head node.
 * @n: input integer.
 * Return: address of new node or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = NULL;
	/* RESERVE SPACE FOR NEW */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/* CHECK IF LIST IS EMPTY */
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = NULL;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}
