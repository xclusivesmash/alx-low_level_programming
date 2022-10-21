#include "lists.h"
#include <stdlib.h>

/**
* _strlen - computes length of string
* @s: string
* Return: len
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	return (len);
}

/**
* add_node - adds a new node at the beginning
* of a linked list
* @head: double pointer to linked list
* @str: value of node to be added
* Return: address of the new element,
* or NULL if failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	/* malloc check */
	new = malloc(sizeof(*head));
	if (new == NULL)
		return (NULL);

	/* input check */
	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	/* fill data to new */
	new->str = strdup(str);
	new->len = _strlen(str);

	if (head != NULL)
	{
		new->next = *head;
	}
	else
	{
		new->next = NULL;
	}
	*head = new;
	return (new);
}
