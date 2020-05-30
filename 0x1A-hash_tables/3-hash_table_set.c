#include "hash_tables.h"
/**
 * hash_table_set - Entry Point
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value associated with key. must be duplicated. can be empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_h, *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index == 0 || index == '\0')
		return (0);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_h = malloc(sizeof(hash_node_t));
	if (new_h == NULL)
		return (0);
	new_h->key = strdup(key);
	new_h->value = strdup(value);
	if (new_h->key == NULL || new_h->value == NULL)
		return (0);
	new_h->next = ht->array[index];
	ht->array[index] = new_h;
	return (1);
}
