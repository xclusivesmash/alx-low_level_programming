#include "lists.h"

/**
* free_listint - frees linked list
* @head: pointer to linked list
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	/* check for NULL */
	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
