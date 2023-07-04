#include "lists.h"

/**
* reverse_listint - reverses a linked list.
* @head: pointer to head node of linked list.
* Return: pointer to first node
* of reversed linked list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
