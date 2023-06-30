#include "lists.h"
#include <string.h>

/**
 * _strlen - computes length of string.
 * @s: input string.
 * Return: length of s.
 */
unsigned int _strlen(const char *s)
{
	/* base case */
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * add_node_end - adds node at end of list_t.
 * @head: head.
 * @str: input string.
 * Return: pointer to new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *store, *temp = *head;

	store = malloc(sizeof(list_t));
	if (store == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	store->len = _strlen(str);
	store->str = strdup(str);
	store->next = NULL;

	if (*head == NULL)
	{
		*head = store;
		return (store);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = store;
	return (store);
}
