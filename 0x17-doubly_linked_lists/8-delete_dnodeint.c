#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index.
 * @head: address of pointer to head node.
 * @index: index of choice.
 * Return: 1 on success. Otherwise, -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	/* INITIALIZATION */
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while ((index != 0) && (temp->next != NULL))
	{
		index = index - 1;
		/* SHIFT TEMP */
		temp = temp->next;
	}
	if (index == 0)
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
