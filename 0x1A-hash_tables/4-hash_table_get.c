#include "hash_tables.h"
/**
 * hash_table_get - retiving key value
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: 1 success and NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *nodes = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	nodes = ht->array[index];
	while (nodes != NULL)
	{
		if (strcmp(nodes->key, key) == 0)
			return (nodes->value);
		nodes = nodes->next;
	}
	return (NULL);
}
