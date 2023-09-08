#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: string
 * @value: key value
 * Return: sucess 1 and 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (!key || !value || !ht || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[index] != NULL)
		new->next = ht->array[index];

	ht->array[index] = new;
	return (1);
}
