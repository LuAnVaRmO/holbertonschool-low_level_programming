#include "hash_tables.h"
/**
 * key_index -  Entry point
 * @key: key of hash list
 * @size: integer
 * Return: index at wich the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, value;

	if (size == 0 || key == NULL)
		return (0);
	value = hash_djb2(key);
	index = value % size;
	return (index);
}
