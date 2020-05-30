#include "hash_tables.h"
/**
 * hash_table_print - Entry Point
 * @ht: hash table to print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0, aux = 1;
	hash_node_t *h_node;

	if (ht == NULL)
		return;
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count])
		{
			h_node = ht->array[count];
			while (h_node)
			{
				if (aux == 0)
				{
					printf(", ");
					printf("'%s': '%s'", h_node->key, h_node->value);
				}
				else
				{
					printf("'%s': '%s'", h_node->key, h_node->value);
					aux = 0;
				}
				h_node = h_node->next;
			}
		}
	}
	printf("}\n");
}
