#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to first node.
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0, mm;
	const listint_t *temp = head, *temp2;

	if (head == NULL)
		exit(98);
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *) temp, temp->n);
		temp = temp->next;
		node_count = node_count + 1;
		temp2 = head;
		mm = 0;
		while (mm < node_count)
		{
			if (temp == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (node_count);
			}
			temp2 = temp2->next;
			mm = mm + 1;
		}
	}
	return (node_count);
}
