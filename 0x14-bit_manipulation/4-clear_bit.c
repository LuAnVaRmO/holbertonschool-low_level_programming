#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: the number
 * @index: where to set the value
 * Return: 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size =  (sizeof(unsigned long int) * 8 - 1);
	if (index > size)
		return (-1);
	*n &= ~(1ul << index);
	return (1);
}
