#include "hash_tables.h"
/**
 * key_index - gives key index
 * @key: the key
 * @size: size of the hash table
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!size || !key)
		return (0);
	index = (hash_djb2(key) % size);
	return (index);
}
