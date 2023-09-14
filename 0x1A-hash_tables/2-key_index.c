#include "hash_tables.h"

/**
 * key_index - computes the index of a key in hash table.
 * @key: input string.
 * @size: size of the hash table.
 * Return: index of key in hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	/* COMPUTE HASH FIRST */
	hash = hash_djb2(key);
	/* COMPUTE INDEX BASED ON HASH */
	index = hash % size;
	return (index);
}
