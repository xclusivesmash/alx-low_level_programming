#include "hash_tables.h"

/**
 * collision_handling - handles collisions using linked list method.
 * @ht: hash table.
 * @key: input string.
 * @value: input string.
 * @index: index.
 * Return: 1 on success. Otherwise, 0.
 */
int collision_handling(hash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	hash_node_t *node = NULL;
	char *KEY, *VALUE;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	KEY = strdup(key);
	if (KEY == NULL)
	{
		free(node);
		return (0);
	}
	VALUE = strdup(value);
	if (VALUE == NULL)
	{
		free(KEY);
		free(node);
		return (0);
	}
	node->key = KEY;
	node->value = VALUE;
	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;
	return (1);
}

/**
 * hash_table_set - adds an element to hash table.
 * @ht: hash table.
 * @key: input string.
 * @value: input string.
 * Return: 1 if succeeded. Otherwise, 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *VALUE;

	if (ht == NULL || (ht->array) == NULL || key == NULL
			|| strlen(key) == 0 || value == NULL)
		return (0);
	/* GET INDEX FROM HASH TABLE */
	index = key_index((const unsigned char *)key, ht->size);
	/* ACCESS NODE FROM TABLE USING INDEX */
	node = (ht->array)[index];
	/* CHEKC IF THERE ALREADY EXISTS A NODE WITH DIFF. KEY*/
	while (node != NULL && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		VALUE = strdup(value);
		if (VALUE == NULL)
			return (0);
		if (node->value)
			free(node->value); /* FREE ALREADY EXISTING VALUE */
		node->value = VALUE;
		return (1);
	}
	return (collision_handling(ht, key, value, index));
}
