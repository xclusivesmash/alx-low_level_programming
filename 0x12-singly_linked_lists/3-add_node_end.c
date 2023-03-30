#include "lists.h"
#include <string.h>

/**
 * _strlen - computes length if string
 * @s: string
 * Return: len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0';)
		len = len + 1;
	return (len);
}

/**
 * add_node_end - adds node at the end
 * @head: starting node
 * @str: string to be added to head
 * Return: pointer to added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *store, *tmp;

	store = malloc(sizeof(list_t));
	if (store == NULL)
		return (NULL);
	if (strdup(str) == NULL)
	{
		free(store);
		return (NULL);
	}

	store->len = _strlen(str);
	store->str = strdup(str);
	store->next = NULL; /* should be the last node */

	if (*head == NULL)
	{
		*head = store;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = store;
	}
	return (store);
}
