#include "lists.h"

/**
* pop_listint - removes head node and print its data
* @head: pointer to pointer to listint_t
* Return: linked list's data (n)
*/
int pop_listint(listint **head)
{
	listint_t *holder;
	int num;

	/* input check */
	if (*head == NULL)
	{
		return (0);
	}

	holder = *head;
	num = holder->n;

	*head = holder->next;
	free(holder);

	return (num);
}
