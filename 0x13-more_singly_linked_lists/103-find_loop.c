#include "lists.h"

/**
* find_listint_loop - finds loop in a linked list
* @head: pointer to linked list
* Return: starting point of loop
* NULL if no loop exist
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *tmp1;

	tmp = tmp1 = head;
	if (head == NULL)
	{
		return (NULL);
	}

	while (tmp != NULL && tmp1 != NULL)
	{
		tmp = tmp->next;
		tmp1 = tmp1->next->next; /* 2 steps */
		if (tmp == tmp1)
		{
			tmp = head;
			while (tmp != tmp1)
			{
				tmp = tmp->next;
				tmp1 = tmp1->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
