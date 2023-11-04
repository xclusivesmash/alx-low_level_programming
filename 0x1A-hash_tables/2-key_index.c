#include "hash_tables.h"

/**
 * key_index - finds an index based on the key and size values.
 * @key: input string.
 * @size: size of the hash table.
 * Return: computed index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
