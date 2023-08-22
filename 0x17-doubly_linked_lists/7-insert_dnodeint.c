#include "lists.h"

/**
 * insert_node - insert node at given index.
 * @temp: ptr to nth position node in doubly linked list.
 * @n: input integer.
 * Return: address of inserted node or NULL
 * on failure.
 */
dlistint_t *insert_node(dlistint_t *temp, int n)
{
	dlistint_t *new;

	/* ALLOCATE SPACE FOR DATA */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* LINK THE NODES */
	new->n = n;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;
	return (new);
}

/**
 * insert_dnodeint_at_index - inserts a node at index idx.
 * @h: pointer to head node.
 * @idx: index of choice.
 * @n: input integer.
 * Return: address of inserted node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;

	/* BEGINNING */
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (h == NULL || *h == NULL)
		return (NULL);
	/* ANYWHERE BETWEEN BEGINNING AND END */
	temp = *h;
	while ((idx != 0) && (temp->next != NULL))
	{
		idx = idx - 1;
		temp = temp->next;
		if (idx == 0)
			return (insert_node(temp, n));
	}
	/* INSERT AFTER FIRST NODE --> END */
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	/* RETURN NULL ON FAILURE */
	return (NULL);
}
