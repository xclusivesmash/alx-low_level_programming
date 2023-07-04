#include "lists.h"

/**
 * pop_listint - pops the head node and returns
 * some data (n).
 * @head: address of head node.
 * Return: integer.
 */
int pop_listint(listint_t **head)
{
	int store;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = (*head)->next;
		store = (*head)->n;
		free(*head);
		*head = temp;
		return (store);
	}
	return (0);
}
