#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from hash table based on key.
 * @ht: hash table.
 * @key: input string.
 * Return: value if key found. Otherwise, NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	char *VALUE;

	/* INPUT HANDLING */
	if (ht == NULL || key == NULL)
		return (NULL);
	/* GET HASH USIGN KEY */
	index = key_index((const unsigned char *)key, ht->size);
	/* ACCESS THE NODE AT KEY */
	node = (ht->array)[index];
	if (node == NULL) /* hash doesn't exist in ht */
		return (NULL);
	while (strcmp(key, node->key) != 0)
		node = node->next;
	VALUE = node->value;
	return (VALUE);
}
