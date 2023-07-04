#include "lists.h"

/**
 * free_listint - free's a linked list.
 * @head: head of the list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp =  head->next;
		free(head);
		head = temp;
	}
}
