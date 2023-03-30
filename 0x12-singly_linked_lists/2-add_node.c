#include "lists.h"
#include <string.h>

/**
 * _strlen - calculates lenght of string
 * @s: string
 * Return: len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node - adds node at beginning
 * @head: pfirst node
 * @str: string to be added
 * Return: pointer to added node in the chain
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t  *store;

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

	store->next = *head;
	*head = store;
	return (store);
}
