#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		table->array[x] = NULL;
	return (table);
}
