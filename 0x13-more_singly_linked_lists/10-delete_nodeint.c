#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at nth index.
* @head: pointer to head node of the linked list.
* @index: index at which to delete a node.
* Return: 1 on success, otherwise, -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp2 = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && i < (index - 1))
	{
		tmp = tmp->next;
		i = i + 1;
	}
	if (i != (index - 1) || tmp == NULL)
		return (-1);

	/* delete and link nodes */
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
