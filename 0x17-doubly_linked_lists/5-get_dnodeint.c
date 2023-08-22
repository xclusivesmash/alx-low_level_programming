#include "lists.h"

/**
 * dlistint_len - finds number of elements of a doubly
 * linked list.
 * @h: pointer to first node.
 * Return: size of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	/* INPUT CHECK */
	if (h == NULL)
		return (len);
	while (h != NULL)
	{
		h = h->next;
		len = len + 1;
	}
	return (len);
}

/**
 * get_dnodeint_at_index - returns node at index.
 * @head: pointer to head node.
 * @index: index of choice.
 * Return: node at index (starting at 0). NULL otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = (unsigned int) dlistint_len(head), i;

	temp = head;
	if (head == NULL)
		return (NULL);
	if (index > len)
		return (NULL);
	i = 0;
	while (i < index)
	{
		temp = temp->next;
		i = i + 1;
	}
	return (temp);
}
