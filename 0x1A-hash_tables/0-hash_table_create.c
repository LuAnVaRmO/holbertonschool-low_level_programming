#include "hash_tables.h"
/**
 * hash_table_create - Function To create a hash table
 * @size: the size of the array
 * Return: a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	if (size == 0 || size == '\0')
	{
		return (NULL);
	}
	h_table = calloc(1, sizeof(hash_table_t));
	if (h_table == NULL)
	{
		free(h_table);
		return (NULL);
	}
	h_table->size = size;
	h_table->array = calloc(1, sizeof(hash_node_t));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	return (h_table);
}
