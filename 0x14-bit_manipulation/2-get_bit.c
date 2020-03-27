#include "holberton.h"
/**
 * get_bit - get the value of a node
 * @index: the index to add the new node
 * @n: value to add
 * Description: get and print the value of the node index
 * Return: the value, or null if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int change, verify, size;

	size = (sizeof(unsigned long int) * 8 - 1);
	if (index > size)
		return (-1);
	change = 1 << index;
	verify = n & change;
	if (verify == change)
		return (1);
	return (0);
}
