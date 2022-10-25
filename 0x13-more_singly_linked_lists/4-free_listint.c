#include "lists.h"

/**
* free_listint - frees linked list
* @head: pointer to linked list
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
