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
 * add_node - adds node at beginning of list_t.
 * @head: head.
 * @str: input string.
 * Return: pointer to new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *store;

	store = malloc(sizeof(list_t));
	if (store == NULL)
	{
		free(store);
		return (NULL);
	}
	if (strdup(str) == NULL)
		return (NULL);
	store->len = _strlen(str);
	store->str = strdup(str);
	store->next = *head;
	*head = store;
	return (store);
}
