#include "hash_tables.h"
/**
 * hash_table_get - Entry Point
 * @ht: hash table associated
 * @key: key
 * Return: value associate at key on index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *box;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	box = ht->array[index];
	while (box)
	{
		if (strcmp(box->key, key) == 0)
		{
			return (box->value);
		}
		box = box->next;
	}
	return (NULL);
}
