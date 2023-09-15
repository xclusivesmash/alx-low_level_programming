#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table based on size.
 * @size: size of the array that stores the hash values.
 * Return: the created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	unsigned long int i;

	/* CREATE SPACE FOR HASH TABLE IN MEMORY */
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	/* CREATE SPACE FOR ARRAY OF HASH TABLE */
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	/* ASSIGN SIZE TO HT SIZE */
	ht->size = size;
	/* FILL EACH ELEMENT OF ARRAY WITH NULL INITIALLY */
	i = 0;
	while (i < size)
	{
		(ht->array)[i] = NULL;
		i = i + 1;
	}
	/* SET SHEAD AND STAIL TO NULL INITIALLY */
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * sorted_list - sorted linked list.
 * @ht: hash table.
 * @node: input node.
 * Return: 1 if success. 0 otherwise.
 */
int sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	if (strcmp(node->key, (ht->shead)->key) <= 0)
	{ /* INSERTION AT BEGINNING */
		node->snext = ht->shead;
		(ht->shead)->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(node->key, (ht->stail)->key) > 0)
	{ /* INSERTION AT END */
		node->sprev = ht->stail;
		(ht->stail)->snext = node;
		ht->stail = node;
	}
	else
	{ /* INSERTION IN THE MIDDLE */
		temp = ht->shead;
		while (temp->snext && strcmp(node->key, (temp->snext)->key) > 0)
			temp = temp->snext;
		node->snext = temp->snext;
		node->sprev = temp;
		(temp->snext)->sprev = node;
		temp->snext = node;
	}
	return (1);
}

/**
 * collision_handling - handles collisions using linked list method.
 * @ht: hash table.
 * @key: input string.
 * @value: input string.
 * @index: index.
 * Return: 1 on success. Otherwise, 0.
 */
int collision_handling(shash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	shash_node_t *node = NULL;
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
	node->snext = NULL;
	node->sprev = NULL;
	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;
	return (sorted_list(ht, node));
}

/**
 * shash_table_set - adds an element to hash table.
 * @ht: hash table.
 * @key: input string.
 * @value: input string.
 * Return: 1 on success. 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node = NULL;
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

/**
 * shash_table_get - gets value in @ht based on key.
 * @ht: hash table.
 * @key: input string.
 * Return: value associated with key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;
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

/**
 * shash_table_print - prints the hash table data.
 * @ht: hash table.
 * Return: nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char *delimiter = "";

	if (ht == NULL || ht->shead == NULL)
		return;
	putchar('{');
	node = ht->shead;
	while (node != NULL)
	{
		printf("%s'%s': '%s'", delimiter, node->key, node->value);
		delimiter = ", ";
		node = node->next;
	}
	puts("}");
}

/**
 * shash_table_print_rev - prints the hash table in reverse.
 * @ht: hash table.
 * Return: nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *delimiter = "";

	if (ht == NULL || ht->shead == NULL)
		return;
	putchar('{');
	node = ht->stail;
	while (node != NULL)
	{
		printf("%s'%s': '%s'", delimiter, node->key, node->value);
		delimiter = ", ";
		node = node->sprev;
	}
	puts("}");
}

/**
 * shash_table_delete - deletes the hash table.
 * @ht: hash table.
 * Return: nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp, *store;

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
