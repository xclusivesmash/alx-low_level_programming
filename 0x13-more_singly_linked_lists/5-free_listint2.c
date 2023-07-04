#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: address of the head pointer.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* NOTHING TO FREE */
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
