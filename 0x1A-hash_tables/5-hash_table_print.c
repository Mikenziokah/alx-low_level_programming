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
		nodes = ht->array[x];
		while (nodes)
		{
			if (y)
				printf(" ,");
			printf("'%s':'%s'", nodes->key, nodes->value);
			nodes = nodes->next;
			y++;
		}
	}
	printf("}\n");
}
