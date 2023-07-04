#include "lists.h"

/**
 * listint_len_ - returns number of elements in a linked list.
 * @h: head of the list.
 * Return: number of nodes.
 */
unsigned int listint_len_(listint_t *h)
{
	unsigned int  nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}

/**
 * get_nodeint_at_index - returns the nth node of
 * a linked list.
 * @head: head of the list.
 * @index: index of a node.
 * Return: node and index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count, i;
	listint_t *temp;

	node_count = listint_len_(head);
	if (index <= node_count)
	{
		i = 0;
		temp = head;
		while (temp != NULL && i < index)
		{
			temp = temp->next;
			i = i + 1;
		}
		return (temp);
	}
	return (NULL);
}
