#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at nth index
* @head: pointer to pointer to linked list
* @index: integer
* Return: 1 on success, otherwise, -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	if (*head == NULL) /* input check */
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		tmp2 = tmp->next;
		tmp = tmp->next->next;
		free(tmp2);
		return (1);
	}

	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i = i + 1;
	}
	/* check if index is within bounds */
	if (i != (index - 1) || tmp == NULL)
	{
		return (-1);
	}
	/* delete and link nodes */
	tmp2 = tmp->next;
	tmp = tmp->next->next;
	free(tmp2);
	return (1);
}
