#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list.
 * @head: pointer to first node of linked list.
 * Return: starting point of loop or
 * NULL if no loop exist.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = head, *tmp2 = head;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL && tmp2 != NULL)
	{
		tmp = tmp->next;
		tmp2 = tmp2->next->next;
		if (tmp == tmp2)
		{
			tmp = head;
			while (tmp != tmp2)
			{
				/* INCREMENT BOTH NODES */
				tmp = tmp->next;
				tmp2 = tmp2->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
