#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a
 * linked list.
 * @head: head of the list.
 * Return: sum of all n.
 */
int sum_listint(listint_t *head)
{
	int store = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		store = store + tmp->n;
		tmp = tmp->next;
	}
	return (store);
}
