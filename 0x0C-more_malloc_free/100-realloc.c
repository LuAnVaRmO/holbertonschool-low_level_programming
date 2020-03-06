#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - change the memory alocated
 * @ptr: pointer to the memory previously allocated
 * @old_size: size on bits
 * @new_size: new size of bits
 * Description: change the size of the memory
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	bcopy(ptr, newptr, (int) old_size);
	free(ptr);
	return (newptr);
}
