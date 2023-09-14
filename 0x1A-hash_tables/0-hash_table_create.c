#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table.
 * Return: pointer to newly created table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* MALLOC SPACE FOR TABLE */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	/* MALLOC SPACE FOR ARRAY */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ht->array[i] = NULL;
		i = i + 1;
	}
	return (ht);
}
