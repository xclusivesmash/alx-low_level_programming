#include "hash_tables.h"

/**
 * add_node_beginning - adds an element at the beginning of linked list.
 * @head: head node.
 * @key: input string.
 * @value: value asscoiated with @key.
 * Return: void
 */
void add_node_beginning(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return;
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
}

/**
 * hash_table_set - adds an element to hash table.
 * @ht: hash table.
 * @key: input string.
 * @value: value assigned to @key.
 * Return: 1 on success. 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *list, *new;

	/* INPUT CHECK */
	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	list = (ht->array)[index];
	if (list == NULL)
	{ /* LINKED LIST IS EMPTY */
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		list = new;
		return (1);
	}
	else
	{ /* LINKED LIST IS NON-EMPTY */
		if (strcmp(list->key, key) == 0) /* replacement */
			list->value = strdup(value);
		else /* new item */
			add_node_beginning(&list, key, value);
		return (0);
	}
}
