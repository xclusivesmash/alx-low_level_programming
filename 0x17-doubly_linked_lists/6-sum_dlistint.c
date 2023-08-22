#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all data(n)
 * of a doubly linked list.
 * @head: pointer to head node.
 * Return: sum. 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int summation;

	/* INITIALIZATION */
	summation = 0;
	/* INPUT CHECK */
	if (head == NULL)
		return (summation);
	while (head != NULL)
	{
		summation = summation + head->n;
		head = head->next;
	}
	return (summation);
}
