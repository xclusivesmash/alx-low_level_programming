#include "lists.h"

/**
* sum_listint - sums all the data (n) of a linked list
* @head: pointer to a linked list
* Return: sum of all n's
* if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* check if list is empty */
	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
