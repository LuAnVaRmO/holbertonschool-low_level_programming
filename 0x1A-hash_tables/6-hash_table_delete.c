#include "hash_tables.h"
/**
 * hash_table_delete - Entry Point
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *h_node, *temp;

	if (ht == NULL)
		return;
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count])
		{
			h_node = ht->array[count];
			while (h_node)
			{
				free(h_node->key);
				free(h_node->value);
				temp = h_node;
				h_node = temp->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
