#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table.
 * @ht: hash table.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *store;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
		free(ht->array);
	i = 0;
	while (i < ht->size)
	{
		temp = (ht->array)[i];
		while (temp != NULL)
		{
			store = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = store;
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
