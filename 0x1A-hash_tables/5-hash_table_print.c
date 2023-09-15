#include "hash_tables.h"

/**
 * hash_table_print - prints content of hash table.
 * @ht: hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *delimeter;

	if (ht == NULL)
		return;
	putchar('{');
	delimeter = "";
	i = 0;
	while (i < ht->size)
	{
		temp = (ht->array)[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", delimeter, temp->key, temp->value);
			delimeter = ", ";
			temp = temp->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
