#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: pointer to head node.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL && head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
