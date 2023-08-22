#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a
 * doubly linked list.
 * @head: address of pointer to head node.
 * @n: input integer.
 * Return: address of the new element or NULL if
 * failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	/* RESERVE MEMORY SPACE FOR NEW */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* ADD n TO NEW */
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	/* LINKING THE NODES */
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
