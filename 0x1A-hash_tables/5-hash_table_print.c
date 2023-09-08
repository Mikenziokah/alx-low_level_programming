#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodes;
	unsigned long int x, y = 0;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		for (nodes = ht->array[x]; nodes != NULL; nodes = nodes->next)
		{
			if (y == 1)
				printf(" ,");
			printf("'%s':'%s'", nodes->key, nodes->value);
			y = 1;
		}
	}
	printf("}\n");
}
