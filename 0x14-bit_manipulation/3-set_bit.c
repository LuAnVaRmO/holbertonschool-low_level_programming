#include "holberton.h"
/**
 * set_bit - sets the value of a bit
 * @n: the number
 * @index: where to set the value
 * Return: 1 or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size =  (sizeof(unsigned long int) * 8 - 1);
	if (index > size)
		return (-1);
	*n |= (1 << index);
	return (1);
}
