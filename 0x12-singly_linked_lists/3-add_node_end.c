#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - computes length of string
* @s: string
* Return: length
*/

unsigned int _strlen(const char *s)
{
	unsigned int len;

	while (*s != '\0')
	{
		s++;
		len += 1;
	}
	return (len);
}

/**
* add_node_end - adds a new node at the end
* of a linked list
* @head: pointer to pointer to list_t
* @str: string to be added
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	/* malloc check */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* input check */
	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
