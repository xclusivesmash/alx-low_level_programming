#include "lists.h"

/**
* find_listint_loop - finds loop in a linked list
* @head: pointer to linked list
* Return: starting point of loop
* NULL if no loop exist
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head->next;
	while (head != NULL)
	{
		if (head == tmp)
		{
			return (head);
		}
		head = head->next;
		tmp = tmp->next;
	}
	return (NULL);
}
